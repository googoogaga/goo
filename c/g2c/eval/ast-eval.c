/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: x8r/ast-eval */

EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(Yx8rSast_evalYenv_values_setter,"x8r/ast-eval","env-values-setter");
DEF(Yx8rSast_evalYenv_local_reference_value,"x8r/ast-eval","env-local-reference-value");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yx8rSastYLglobal_referenceG,"x8r/ast","<global-reference>");
DEF(Yx8rSast_evalYenv_binding_value_setter,"x8r/ast-eval","env-binding-value-setter");
DEF(Yx8rSast_evalYarrange_arguments,"x8r/ast-eval","arrange-arguments");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(Yx8rSastYbinding_info,"x8r/ast","binding-info");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yx8rSastYapplication_arguments,"x8r/ast","application-arguments");
EXT(Yx8rSastYDgoo_boot_module_name,"x8r/ast","$goo-boot-module-name");
EXT(Yx8rSastYset_module_environments,"x8r/ast","set-module-environments");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yx8rSastYLruntime_assignmentG,"x8r/ast","<runtime-assignment>");
EXT(Yx8rSastYLmodule_bindingG,"x8r/ast","<module-binding>");
EXT(Yx8rSastYLast_primitiveG,"x8r/ast","<ast-primitive>");
EXT(Yx8rSastYfunction_value,"x8r/ast","function-value");
EXT(Yx8rSastYLprogramsG,"x8r/ast","<programs>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yx8rSastYlocals_bindings,"x8r/ast","locals-bindings");
EXT(Yx8rSastYinstall_initial_bindings,"x8r/ast","install-initial-bindings");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yx8rSastYsignature_naryQ_setter,"x8r/ast","signature-nary?-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yx8rSastYmonitor_handler,"x8r/ast","monitor-handler");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yx8rSastYconstant_index,"x8r/ast","constant-index");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(Yx8rSastYreference_binding,"x8r/ast","reference-binding");
EXT(Yx8rSastYlocals_body,"x8r/ast","locals-body");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yx8rSastYsignature_value,"x8r/ast","signature-value");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yx8rSastYapplication_function,"x8r/ast","application-function");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yx8rSastYLlocalsG,"x8r/ast","<locals>");
EXT(Yx8rSastYLlocal_assignmentG,"x8r/ast","<local-assignment>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSbufYlen_setter,"goo/cols/buf","len-setter");
EXT(Yx8rSastYfunction_debug_name_setter,"x8r/ast","function-debug-name-setter");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yx8rSastYfunction_index,"x8r/ast","function-index");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yx8rSastYfind_environment_module,"x8r/ast","find-environment-module");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(Yx8rSastYLast_signatureG,"x8r/ast","<ast-signature>");
EXT(Yx8rSastYfunction_debug_name,"x8r/ast","function-debug-name");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yx8rSastYenv_object_name,"x8r/ast","env-object-name");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yx8rSastYLstatic_global_environmentG,"x8r/ast","<static-global-environment>");
EXT(Yx8rSastYLsequentialG,"x8r/ast","<sequential>");
EXT(Ytail,"goo/boot","tail");
EXT(Yx8rSastYfix_let_bindings_setter,"x8r/ast","fix-let-bindings-setter");
EXT(Yx8rSastYdo_named_static_global_bindings,"x8r/ast","do-named-static-global-bindings");
EXT(YgooScolsSbufYpop_lastX,"goo/cols/buf","pop-last!");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yx8rSastYbinding_global_box,"x8r/ast","binding-global-box");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(Yx8rSastYsequentialize,"x8r/ast","sequentialize");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yx8rSastYlocals_functions_setter,"x8r/ast","locals-functions-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(Yx8rSastYLconstantG,"x8r/ast","<constant>");
EXT(Yx8rSastYbinding_index_setter,"x8r/ast","binding-index-setter");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
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
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yx8rSastYfunction_free,"x8r/ast","function-free");
EXT(Ynil,"goo/boot","nil");
EXT(YPisa,"goo/boot","%isa");
EXT(Yx8rSastYreference_called_functionQ_setter,"x8r/ast","reference-called-function?-setter");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yx8rSastYsignature_naryQ,"x8r/ast","signature-nary?");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
EXT(Yx8rSastYLprogramG,"x8r/ast","<program>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yx8rSastYLast_functionG,"x8r/ast","<ast-function>");
EXT(Yx8rSastYfix_let_types_setter,"x8r/ast","fix-let-types-setter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yx8rSastYreference_called_functionQ,"x8r/ast","reference-called-function?");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yx8rSastYbinding_inferred_type_setter,"x8r/ast","binding-inferred-type-setter");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Yx8rSastYprogram_register_setter,"x8r/ast","program-register-setter");
DEF(Yx8rSast_evalYexport_goo_method,"x8r/ast-eval","export-goo-method");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPvnul,"goo/boot","%vnul");
EXT(Yx8rSastYLbind_exitG,"x8r/ast","<bind-exit>");
EXT(Yx8rSastYreference_frame_number,"x8r/ast","reference-frame-number");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Yx8rSastYsignature_bindings_setter,"x8r/ast","signature-bindings-setter");
EXT(Yx8rSastYboundQ_reference,"x8r/ast","bound?-reference");
EXT(Yx8rSastYprogram_type,"x8r/ast","program-type");
EXT(YLunionG,"goo/boot","<union>");
DEF(Yx8rSast_evalYenv_global_binding_boundQ,"x8r/ast-eval","env-global-binding-bound?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yx8rSastYbind_exit_main_fun,"x8r/ast","bind-exit-main-fun");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yx8rSastYfab_g2c_module,"x8r/ast","fab-g2c-module");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yx8rSastYglobal_box_value,"x8r/ast","global-box-value");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Yx8rSastYbinding_locative,"x8r/ast","binding-locative");
EXT(Yx8rSastYfunction_binding,"x8r/ast","function-binding");
EXT(Yx8rSastYremove_modules_by_nameX,"x8r/ast","remove-modules-by-name!");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yx8rSastYLargumentsG,"x8r/ast","<arguments>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(Yx8rSast_evalYast_eval_specs,"x8r/ast-eval","ast-eval-specs");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yx8rSastYenvironment_bindings,"x8r/ast","environment-bindings");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(Yx8rSast_evalYenv_parent,"x8r/ast-eval","env-parent");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yx8rSastYLast_genericG,"x8r/ast","<ast-generic>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yx8rSastYunwind_protect_cleanup_thunk,"x8r/ast","unwind-protect-cleanup-thunk");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Yx8rSastYprobe_module,"x8r/ast","probe-module");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yx8rSastYassignment_binding,"x8r/ast","assignment-binding");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(Yx8rSast_evalYenv_global_binding_value,"x8r/ast-eval","env-global-binding-value");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSbufYlenSfill_setter,"goo/cols/buf","len/fill-setter");
EXT(Yx8rSastYmodule_name_to_relpath,"x8r/ast","module-name-to-relpath");
EXT(Yx8rSastYfunction_signature_setter,"x8r/ast","function-signature-setter");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yx8rSastYsignature_value_setter,"x8r/ast","signature-value-setter");
EXT(Yx8rSastYLast_methodG,"x8r/ast","<ast-method>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yx8rSastYLlocal_referenceG,"x8r/ast","<local-reference>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Yx8rSastYbinding_inferred_type,"x8r/ast","binding-inferred-type");
EXT(Ynew,"goo/boot","new");
EXT(Yx8rSastYfunction_signature,"x8r/ast","function-signature");
DEF(Yx8rSast_evalYDnul_loc_env,"x8r/ast-eval","$nul-loc-env");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Yx8rSastYLassignmentG,"x8r/ast","<assignment>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yx8rSastYfunction_source,"x8r/ast","function-source");
EXT(Yx8rSastYLast_primitive_definitionG,"x8r/ast","<ast-primitive-definition>");
EXT(Yx8rSastYprogram_type_setter,"x8r/ast","program-type-setter");
EXT(Yx8rSastYfunction_self_recursiveQ_setter,"x8r/ast","function-self-recursive?-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yx8rSastYfunction_bindings,"x8r/ast","function-bindings");
EXT(Yx8rSastYbinding_name,"x8r/ast","binding-name");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yx8rSastYLglobal_assignmentG,"x8r/ast","<global-assignment>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yx8rSastYsignature_bindings,"x8r/ast","signature-bindings");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yx8rSastYobjectify_signature,"x8r/ast","objectify-signature");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yx8rSastYdo_static_global_bindings,"x8r/ast","do-static-global-bindings");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yx8rSastYunchecked_runtime_environment,"x8r/ast","unchecked-runtime-environment");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yx8rSastYsignature_specs_setter,"x8r/ast","signature-specs-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(Yx8rSastYsignature_arity_setter,"x8r/ast","signature-arity-setter");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(Yx8rSast_evalYenv_runtime_value,"x8r/ast-eval","env-runtime-value");
DEF(Yx8rSast_evalYenv_local_value,"x8r/ast-eval","env-local-value");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yx8rSastYbinding_global_box_setter,"x8r/ast","binding-global-box-setter");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
EXT(YgooScolsSbufYLbufG,"goo/cols/buf","<buf>");
DEF(Yx8rSast_evalYenv_binding_value,"x8r/ast-eval","env-binding-value");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Yx8rSastYmodule_loader_module_type,"x8r/ast","module-loader-module-type");
EXT(Yx8rSsyntaxYsexpr_signature_parameters,"x8r/syntax","sexpr-signature-parameters");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yx8rSastYLalternativeG,"x8r/ast","<alternative>");
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
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(Yx8rSast_evalYas_fun_name,"x8r/ast-eval","as-fun-name");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Yx8rSastYmodule_syntax_environment,"x8r/ast","module-syntax-environment");
EXT(Yx8rSastYapplication_knownQ_setter,"x8r/ast","application-known?-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(Yx8rSast_evalYast_eval,"x8r/ast-eval","ast-eval");
EXT(YgooSruntimeYformat_to_string,"goo/runtime","format-to-string");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yx8rSastYapplication_knownQ,"x8r/ast","application-known?");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(Yx8rSastYbinding_value,"x8r/ast","binding-value");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Yx8rSastYload_in,"x8r/ast","load-in");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(Yx8rSast_evalYenv_values,"x8r/ast-eval","env-values");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yhead,"goo/boot","head");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yx8rSastYLglobal_boxG,"x8r/ast","<global-box>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YOlst,"goo/boot","@lst");
EXT(Yx8rSastYLlocal_bindingG,"x8r/ast","<local-binding>");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(Yx8rSast_evalYenv_define_bindingX,"x8r/ast-eval","env-define-binding!");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yunexec,"goo/boot","unexec");
DEF(Yx8rSast_evalYenv_local_reference_value_setter,"x8r/ast-eval","env-local-reference-value-setter");
EXT(Yx8rSastYsignature_arity,"x8r/ast","signature-arity");
DEF(Yx8rSast_evalYenv_function,"x8r/ast-eval","env-function");
EXT(Yx8rSastYfix_let_body,"x8r/ast","fix-let-body");
EXT(Yx8rSastYbinding_dottedQ_setter,"x8r/ast","binding-dotted?-setter");
EXT(Yx8rSastYfunction_temporaries_setter,"x8r/ast","function-temporaries-setter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yx8rSastYLapplicationG,"x8r/ast","<application>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yx8rSastYfix_let_body_setter,"x8r/ast","fix-let-body-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
DEF(Yx8rSast_evalYenv_global_binding_value_setter,"x8r/ast-eval","env-global-binding-value-setter");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Yx8rSastYLmonitorG,"x8r/ast","<monitor>");
EXT(Yx8rSastYinit_ast,"x8r/ast","init-ast");
EXT(Yx8rSastYmodule_exports,"x8r/ast","module-exports");
EXT(Yx8rSastYbinding_dynamic_extentQ,"x8r/ast","binding-dynamic-extent?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yx8rSastYlocals_bindings_setter,"x8r/ast","locals-bindings-setter");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yx8rSastYbinding_type,"x8r/ast","binding-type");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Yx8rSastYmodule_binding,"x8r/ast","module-binding");
EXT(Yx8rSastYbinding_type_setter,"x8r/ast","binding-type-setter");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(Yx8rSastYmodule_name,"x8r/ast","module-name");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yx8rSastYobjectify_with_subtransaction,"x8r/ast","objectify-with-subtransaction");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yx8rSastYunwind_protect_protected_thunk,"x8r/ast","unwind-protect-protected-thunk");
EXT(Yx8rSastYLpassive_programG,"x8r/ast","<passive-program>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Yx8rSastYsignature_names,"x8r/ast","signature-names");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yx8rSastYenvironment_uses_modules,"x8r/ast","environment-uses-modules");
EXT(Yx8rSastYfix_let_bindings,"x8r/ast","fix-let-bindings");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(Yx8rSastYprogram_register,"x8r/ast","program-register");
EXT(Yx8rSastYinit_environment_for_eval,"x8r/ast","init-environment-for-eval");
EXT(Yx8rSastYreport_undefined_global_bindings,"x8r/ast","report-undefined-global-bindings");
EXT(YgooScolsSbufYpush_lastX,"goo/cols/buf","push-last!");
EXT(Yx8rSastYalternative_alternant,"x8r/ast","alternative-alternant");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
EXT(Yx8rSastYassignment_reference,"x8r/ast","assignment-reference");
EXT(Yx8rSastYfunction_data_refs_setter,"x8r/ast","function-data-refs-setter");
EXT(Yx8rSastYglobal_box_value_setter,"x8r/ast","global-box-value-setter");
DEF(Yx8rSast_evalYenv_local_value_setter,"x8r/ast-eval","env-local-value-setter");
EXT(Yx8rSastYfunction_source_setter,"x8r/ast","function-source-setter");
EXT(Yx8rSastYast_evaluate,"x8r/ast","ast-evaluate");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(Yx8rSastYbinding_info_setter,"x8r/ast","binding-info-setter");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(Yx8rSast_evalYenv_names,"x8r/ast-eval","env-names");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yx8rSastYsignature_names_setter,"x8r/ast","signature-names-setter");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yx8rSastYLcomputed_programG,"x8r/ast","<computed-program>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yx8rSastYLboundQG,"x8r/ast","<bound?>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Yx8rSastYmodule_target_environment,"x8r/ast","module-target-environment");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(Yx8rSast_evalYenv_frameX,"x8r/ast-eval","env-frame!");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yx8rSastYbinding_kind,"x8r/ast","binding-kind");
EXT(Yx8rSastYLpredefined_applicationG,"x8r/ast","<predefined-application>");
EXT(Yx8rSastYLfree_environmentG,"x8r/ast","<free-environment>");
EXT(Yx8rSastYmonitor_main_thunk,"x8r/ast","monitor-main-thunk");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(Yx8rSast_evalYenv_runtime_value_setter,"x8r/ast-eval","env-runtime-value-setter");
EXT(Yx8rSastYfix_let_arguments,"x8r/ast","fix-let-arguments");
EXT(Yx8rSastYload_module,"x8r/ast","load-module");
EXT(Yx8rSastYfix_let_arguments_setter,"x8r/ast","fix-let-arguments-setter");
EXT(Yx8rSastYapplication_tailQ,"x8r/ast","application-tail?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yx8rSastYLfab_listG,"x8r/ast","<fab-list>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yx8rSastYsignature_specs,"x8r/ast","signature-specs");
EXT(YLsigG,"goo/boot","<sig>");
DEF(Yx8rSast_evalYenv_parent_setter,"x8r/ast-eval","env-parent-setter");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(Yx8rSastYreference_frame_offset,"x8r/ast","reference-frame-offset");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yx8rSastYLbindingG,"x8r/ast","<binding>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(Yx8rSast_evalYast_eval_boundQ,"x8r/ast-eval","ast-eval-bound?");
EXT(Yx8rSastYfix_let_types,"x8r/ast","fix-let-types");
EXT(Yx8rSastYLcompile_timeG,"x8r/ast","<compile-time>");
EXT(Yx8rSastYLmoduleG,"x8r/ast","<module>");
EXT(YgooScolsSbufYbuf,"goo/cols/buf","buf");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yx8rSastYLruntime_referenceG,"x8r/ast","<runtime-reference>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yx8rSastYfunction_registers_setter,"x8r/ast","function-registers-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(Yx8rSastYbinding_value_setter,"x8r/ast","binding-value-setter");
EXT(Yx8rSastYfunction_data_refs,"x8r/ast","function-data-refs");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yx8rSastYast_define_binding,"x8r/ast","ast-define-binding");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yx8rSastYmonitor_type,"x8r/ast","monitor-type");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(Yx8rSastYapplication_binding,"x8r/ast","application-binding");
EXT(Yx8rSastYLreal_referenceG,"x8r/ast","<real-reference>");
EXT(Yx8rSastYconstant_index_setter,"x8r/ast","constant-index-setter");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yx8rSastYassignment_form_setter,"x8r/ast","assignment-form-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yx8rSastYfunction_index_setter,"x8r/ast","function-index-setter");
EXT(Yx8rSastYLdefinitionG,"x8r/ast","<definition>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yx8rSastYbinding_mutableQ,"x8r/ast","binding-mutable?");
EXT(Yx8rSastYruntime_environment,"x8r/ast","runtime-environment");
EXT(Yx8rSastYfunction_body_setter,"x8r/ast","function-body-setter");
DEF(Yx8rSast_evalYenv_function_setter,"x8r/ast-eval","env-function-setter");
EXT(Yx8rSastYfunction_temporaries,"x8r/ast","function-temporaries");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(Yx8rSastYfind_binding,"x8r/ast","find-binding");
EXT(Yx8rSastYbinding_index,"x8r/ast","binding-index");
EXT(Yx8rSastYfunction_body,"x8r/ast","function-body");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yx8rSastYLmodule_binding_referenceG,"x8r/ast","<module-binding-reference>");
EXT(Yx8rSastYLmodule_loaderG,"x8r/ast","<module-loader>");
EXT(Yx8rSastYLast_macro_definitionG,"x8r/ast","<ast-macro-definition>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yx8rSastYconstant_value,"x8r/ast","constant-value");
EXT(Yx8rSastYmonitor_info,"x8r/ast","monitor-info");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yx8rSastYbinding_native_toQ,"x8r/ast","binding-native-to?");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yx8rSastYlocals_body_setter,"x8r/ast","locals-body-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yx8rSastYfree_environment,"x8r/ast","free-environment");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yx8rSastYassignment_form,"x8r/ast","assignment-form");
DEF(Yx8rSast_evalYTstackT,"x8r/ast-eval","*stack*");
EXT(Yx8rSastYlocals_functions,"x8r/ast","locals-functions");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yx8rSastYLunwind_protectG,"x8r/ast","<unwind-protect>");
EXT(Yx8rSastYalternative_condition,"x8r/ast","alternative-condition");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yx8rSastYcompile_time_program,"x8r/ast","compile-time-program");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yx8rSastYenvironment_module,"x8r/ast","environment-module");
EXT(Yx8rSastYLfix_letG,"x8r/ast","<fix-let>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yx8rSastYLreferenceG,"x8r/ast","<reference>");
EXT(Yx8rSastYfunction_registers,"x8r/ast","function-registers");
EXT(Yx8rSastYbinding_dottedQ,"x8r/ast","binding-dotted?");
DEF(Yx8rSast_evalYLloc_envG,"x8r/ast-eval","<loc-env>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yx8rSastYLregular_applicationG,"x8r/ast","<regular-application>");
EXT(Yx8rSastYmonitor_test,"x8r/ast","monitor-test");
EXT(Yx8rSastYLraw_constantG,"x8r/ast","<raw-constant>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Yx8rSastYas_lst,"x8r/ast","as-lst");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yx8rSastYalternative_consequent,"x8r/ast","alternative-consequent");
EXT(Yx8rSastYdo_module_loader_modules,"x8r/ast","do-module-loader-modules");
EXT(Yx8rSastYbinding_dynamic_extentQ_setter,"x8r/ast","binding-dynamic-extent?-setter");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(Yx8rSastYfunction_naryQ,"x8r/ast","function-nary?");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(Yx8rSast_evalYenv_names_setter,"x8r/ast-eval","env-names-setter");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yx8rSastYfunction_self_recursiveQ,"x8r/ast","function-self-recursive?");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooStypesYtL,"goo/types","t<");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_56);
DEFLIT(lit_50);
DEFLIT(lit_40);
DEFLIT(lit_81);
DEFLIT(lit_51);
DEFLIT(lit_32);
DEFLIT(lit_24);
DEFLIT(lit_37);
DEFLIT(lit_64);
DEFLIT(lit_1);
DEFLIT(lit_53);
DEFLIT(lit_21);
DEFLIT(lit_16);
DEFLIT(lit_34);
DEFLIT(lit_29);
DEFLIT(lit_41);
DEFLIT(lit_8);
DEFLIT(lit_61);
DEFLIT(lit_28);
DEFLIT(lit_68);
DEFLIT(lit_13);
DEFLIT(lit_59);
DEFLIT(lit_54);
DEFLIT(lit_75);
DEFLIT(lit_62);
DEFLIT(lit_7);
DEFLIT(lit_38);
DEFLIT(lit_72);
DEFLIT(lit_0);
DEFLIT(lit_69);
DEFLIT(lit_30);
DEFLIT(lit_44);
DEFLIT(lit_58);
DEFLIT(lit_23);
DEFLIT(lit_43);
DEFLIT(lit_45);
DEFLIT(lit_18);
DEFLIT(lit_35);
DEFLIT(lit_52);
DEFLIT(lit_20);
DEFLIT(lit_67);
DEFLIT(lit_26);
DEFLIT(lit_60);
DEFLIT(lit_33);
DEFLIT(lit_42);
DEFLIT(lit_31);
DEFLIT(lit_47);
DEFLIT(lit_55);
DEFLIT(lit_2);
DEFLIT(lit_79);
DEFLIT(lit_39);
DEFLIT(lit_15);
DEFLIT(lit_10);
DEFLIT(lit_36);
DEFLIT(lit_46);
DEFLIT(lit_6);
DEFLIT(lit_73);
DEFLIT(lit_5);
DEFLIT(lit_14);
DEFLIT(lit_76);
DEFLIT(lit_74);
DEFLIT(lit_12);
DEFLIT(lit_77);
DEFLIT(lit_25);
DEFLIT(lit_3);
DEFLIT(lit_17);
DEFLIT(lit_65);
DEFLIT(lit_9);
DEFLIT(lit_66);
DEFLIT(lit_22);
DEFLIT(lit_80);
DEFLIT(lit_4);
DEFLIT(lit_27);
DEFLIT(lit_78);
DEFLIT(lit_19);
DEFLIT(lit_48);
DEFLIT(lit_49);
DEFLIT(lit_63);
DEFLIT(lit_11);
DEFLIT(lit_57);
DEFLIT(lit_70);
DEFLIT(lit_71);

/* FUNCTIONS: */

LOCFOR(fun_env_global_binding_value_0);
LOCFOR(fun_env_global_binding_value_setter_1);
LOCFOR(fun_env_global_binding_boundQ_2);
LOCFOR(fun_env_runtime_value_3);
LOCFOR(fun_env_runtime_value_setter_4);
LOCFOR(fun_env_parent_5);
LOCFOR(fun_env_parent_setter_6);
LOCFOR(fun_7);
LOCFOR(fun_env_function_8);
LOCFOR(fun_env_function_setter_9);
LOCFOR(fun_10);
LOCFOR(fun_env_names_11);
LOCFOR(fun_env_names_setter_12);
LOCFOR(fun_13);
LOCFOR(fun_env_values_14);
LOCFOR(fun_env_values_setter_15);
LOCFOR(fun_16);
LOCFOR(fun_env_frameX_17);
LOCFOR(fun_env_local_value_18);
LOCFOR(fun_env_local_value_setter_19);
LOCFOR(fun_loop_20);
LOCFOR(fun_env_binding_value_21);
LOCFOR(fun_loop_22);
LOCFOR(fun_env_binding_value_setter_23);
LOCFOR(fun_ast_evaluate_24);
LOCFOR(fun_ast_eval_25);
LOCFOR(fun_ast_eval_26);
LOCFOR(fun_ast_eval_27);
LOCFOR(fun_loop_28);
LOCFOR(fun_ast_eval_specs_29);
FUNFOR(Yx8rSast_evalYarrange_arguments);
LOCFOR(fun_x_1458_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_as_fun_name_34);
LOCFOR(fun_as_fun_name_35);
LOCFOR(fun_as_fun_name_36);
LOCFOR(fun_as_fun_name_37);
LOCFOR(fun_as_fun_name_38);
LOCFOR(fun_as_fun_name_39);
LOCFOR(fun_40);
LOCFOR(fun_export_goo_method_41);
LOCFOR(fun_42);
LOCFOR(fun_ast_eval_43);
LOCFOR(fun_ast_eval_44);
LOCFOR(fun_env_local_reference_value_45);
LOCFOR(fun_env_local_reference_value_setter_46);
LOCFOR(fun_ast_eval_47);
LOCFOR(fun_ast_eval_48);
LOCFOR(fun_ast_eval_49);
LOCFOR(fun_ast_eval_50);
LOCFOR(fun_ast_eval_boundQ_51);
LOCFOR(fun_ast_eval_boundQ_52);
LOCFOR(fun_ast_eval_53);
LOCFOR(fun_ast_eval_54);
LOCFOR(fun_ast_eval_55);
LOCFOR(fun_ast_eval_56);
LOCFOR(fun_env_define_bindingX_57);
LOCFOR(fun_ast_eval_58);
LOCFOR(fun_ast_eval_59);
LOCFOR(fun_eval_60);
LOCFOR(fun_ast_eval_61);
LOCFOR(fun_eval_62);
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
FUNFOR(Yx8rSastYinit_environment_for_eval);
extern P Yx8rSast_evalYPdefine_binding (P,P);
extern P Yx8rSast_evalYPlookup_binding (P,P);
extern P Yx8rSast_evalYPensure_binding (P,P);
extern P Yx8rSast_evalYPdlvar_binding (P);
extern P Yx8rSast_evalYPbinding_boundQ (P);
extern P Yx8rSast_evalYPbinding_value (P);
extern P Yx8rSast_evalYPbinding_value_setter (P,P);
extern P Yx8rSast_evalY___main_0___ ();
extern P Yx8rSast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_env_global_binding_value_0) {
  P b_;
  P boxF1904;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_global_box),b_);
  boxF1904 = T1;
  if (boxF1904 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSastYglobal_box_value),boxF1904);
    T2 = T3;
  } else {
    T5 = CALL1(1,VARREF(Yx8rSastYbinding_name),b_);
    T4 = CALL2(1,VARREF(Yerror),LITREF(lit_2),T5);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_setter_1) {
  P value_,b_;
  P boxF1905;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_global_box),b_);
  boxF1905 = T1;
  boxF1905 = BOXFAB(boxF1905);
  T4 = BOXVAL(boxF1905);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSastYLglobal_boxG));
    T6 = CALL2(1,VARREF(Yx8rSastYbinding_global_box_setter),T7,b_);
    T5 = BOXVAL(boxF1905) = T6;
  } else {
  }
  T9 = BOXVAL(boxF1905);
  T8 = CALL2(1,VARREF(Yx8rSastYglobal_box_value_setter),value_,T9);
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF1906;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_global_box),b_);
  boxF1906 = T1;
  if (boxF1906 != YPfalse) {
    T2 = YPtrue;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_runtime_value_3) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSruntimeYloc_val),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_runtime_value_setter_4) {
  P v_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSruntimeYloc_val_setter),v_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_parent_5) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_evalYenv_parent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_parent_setter_6) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_evalYenv_parent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_function_8) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_evalYenv_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_function_setter_9) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_evalYenv_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_names_11) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_evalYenv_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_names_setter_12) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_evalYenv_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_env_values_14) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_evalYenv_values));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_values_setter_15) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_evalYenv_values));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_16) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_env_frameX_17) {
  P env_,function_,names_,args_;
  P valuesF1907;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(function_, 1);
  ARG(names_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLvecG),args_);
  valuesF1907 = T1;
  T2 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSast_evalYLloc_envG),VARREF(Yx8rSast_evalYenv_parent),env_,VARREF(Yx8rSast_evalYenv_function),function_,VARREF(Yx8rSast_evalYenv_values),valuesF1907,VARREF(Yx8rSast_evalYenv_names),names_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_local_value_18) {
  P env_,i_,j_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(i_, 1);
  ARG(j_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSast_evalYenv_values),env_);
    T2 = CALL2(1,VARREF(YgooSmacrosYelt),T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yx8rSast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALL3(1,VARREF(Yx8rSast_evalYenv_local_value),T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_value_setter_19) {
  P v_,env_,i_,j_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(i_, 2);
  ARG(j_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSast_evalYenv_values),env_);
    T2 = CALL3(1,VARREF(YgooScolsScolYelt_setter),v_,T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yx8rSast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALLN(1,VARREF(Yx8rSast_evalYenv_local_value_setter),4,v_,T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_20) {
  P names_,i_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSast_evalYenv_parent),FREEREF(0));
    T2 = CALL2(1,VARREF(Yx8rSast_evalYenv_binding_value),T3,FREEREF(1));
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(1),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(Yx8rSast_evalYenv_values),FREEREF(0));
      T7 = CALL2(1,VARREF(YgooSmacrosYelt),T8,i_);
      T4 = T7;
    } else {
      T10 = CALL1(1,VARREF(Ytail),names_);
      T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T10;
      a2 = T11;
      names_ = a1;
      i_ = a2;
      goto loop;
      T4 = T9;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_binding_value_21) {
  P env_,name_;
  P loopF1908;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),env_,VARREF(Yx8rSast_evalYDnul_loc_env));
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    T3 = FUNSHELL(1,fun_loop_20,3);
    loopF1908 = T3;
    FUNINIT(loopF1908, 3,env_,name_,loopF1908);
    T5 = CALL1(1,VARREF(Yx8rSast_evalYenv_names),env_);
    T4 = CALL2(0,loopF1908,T5,YPint((P)0));
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_22) {
  P names_,i_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSast_evalYenv_parent),FREEREF(1));
    T2 = CALL3(1,VARREF(Yx8rSast_evalYenv_binding_value_setter),FREEREF(0),T3,FREEREF(2));
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(2),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(Yx8rSast_evalYenv_values),FREEREF(1));
      T7 = CALL3(1,VARREF(YgooScolsScolYelt_setter),FREEREF(0),T8,i_);
      T4 = T7;
    } else {
      T10 = CALL1(1,VARREF(Ytail),names_);
      T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T10;
      a2 = T11;
      names_ = a1;
      i_ = a2;
      goto loop;
      T4 = T9;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_binding_value_setter_23) {
  P v_,env_,name_;
  P loopF1909;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_22,4);
  loopF1909 = T1;
  FUNINIT(loopF1909, 4,v_,env_,name_,loopF1909);
  T3 = CALL1(1,VARREF(Yx8rSast_evalYenv_names),env_);
  T2 = CALL2(0,loopF1909,T3,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_evaluate_24) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),e_,VARREF(Yx8rSast_evalYDnul_loc_env));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_25) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_26) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_27) {
  P e_,ee_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(ee_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYcompile_time_program),e_);
  T0 = CALL1(1,VARREF(Yx8rSastYast_evaluate),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_28) {
  P res_,specs_,i_;
  P typeF1911;
  P specF1910;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(specs_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),specs_);
    specF1910 = T4;
    if (specF1910 != YPfalse) {
      T7 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),specF1910,FREEREF(1));
      T6 = T7;
    } else {
      T6 = VARREF(YLanyG);
    }
    typeF1911 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYpair),typeF1911,res_);
    T10 = CALL1(1,VARREF(Ytail),specs_);
    T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T9;
    a2 = T10;
    a3 = T11;
    res_ = a1;
    specs_ = a2;
    i_ = a3;
    goto loop;
    T5 = T8;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_specs_29) {
  P specs_,naryQ_,env_;
  P loopF1913;
  P nreqF1912;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(specs_, 0);
  ARG(naryQ_, 1);
  ARG(env_, 2);
loop:
  if (naryQ_ != YPfalse) {
    T3 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T1 = T4;
  }
  nreqF1912 = T1;
  T6 = FUNSHELL(1,fun_loop_28,3);
  loopF1913 = T6;
  FUNINIT(loopF1913, 3,nreqF1912,env_,loopF1913);
  T7 = CALL3(0,loopF1913,Ynil,specs_,YPint((P)0));
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF1914;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  countF1914 = T1;
  if (naryQ_ != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagYL),countF1914,arity_);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Yx8rSast_evalYas_fun_name),f_);
      T5 = CALLN(1,VARREF(Yerror),4,LITREF(lit_45),T6,args_,arity_);
      T3 = T5;
    } else {
      T8 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,YPint((P)0),arity_);
      T10 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,arity_,countF1914);
      T9 = CALL1(1,VARREF(Ylst),T10);
      T7 = CALL2(1,VARREF(YgooScolsSseqYcat2),T8,T9);
      T3 = T7;
    }
    T2 = T3;
  } else {
    T12 = CALL2(1,VARREF(YgooSmathYNEE),countF1914,arity_);
    if (T12 != YPfalse) {
      T14 = CALL1(1,VARREF(Yx8rSast_evalYas_fun_name),f_);
      T13 = CALLN(1,VARREF(Yerror),4,LITREF(lit_46),T14,args_,arity_);
      T11 = T13;
    } else {
      T11 = args_;
    }
    T2 = T11;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1458_31) {
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

FUNCODEDEF(fun_32) {
  P return_;
  P x_1457F1929;
  P x_1457F1928;
  P x_1457F1927;
  P x_1457F1926;
  P x_1457F1925;
  P x_1457F1924;
  P x_1457F1923;
  P bodyF1922;
  P namesF1921;
  P arityF1920;
  P naryQF1919;
  P fF1918;
  P envF1917;
  P x_1457F1916;
  P x_1458F1915;
  P T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88;
  P T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72;
  P T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1458_31,1);
  x_1458F1915 = T1;
  FUNINIT(x_1458F1915, 1,return_);
  x_1457F1916 = FREEREF(0);
  envF1917 = YPfalse;
  envF1917 = BOXFAB(envF1917);
  fF1918 = YPfalse;
  fF1918 = BOXFAB(fF1918);
  naryQF1919 = YPfalse;
  naryQF1919 = BOXFAB(naryQF1919);
  arityF1920 = YPfalse;
  arityF1920 = BOXFAB(arityF1920);
  namesF1921 = YPfalse;
  namesF1921 = BOXFAB(namesF1921);
  bodyF1922 = YPfalse;
  bodyF1922 = BOXFAB(bodyF1922);
  T15 = CALL2(1,VARREF(YisaQ),x_1457F1916,VARREF(YLlstG));
  if (T15 != YPfalse) {
    T17 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1457F1916,LITREF(lit_51),x_1458F1915);
    x_1457F1923 = T17;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1457F1923,x_1458F1915);
    BOXVAL(envF1917) = T19;
    T20 = CALL1(1,VARREF(Ytail),x_1457F1923);
    x_1457F1924 = T20;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1457F1924,x_1458F1915);
    BOXVAL(fF1918) = T22;
    T23 = CALL1(1,VARREF(Ytail),x_1457F1924);
    x_1457F1925 = T23;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1457F1925,x_1458F1915);
    BOXVAL(naryQF1919) = T25;
    T26 = CALL1(1,VARREF(Ytail),x_1457F1925);
    x_1457F1926 = T26;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1457F1926,x_1458F1915);
    BOXVAL(arityF1920) = T28;
    T29 = CALL1(1,VARREF(Ytail),x_1457F1926);
    x_1457F1927 = T29;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1457F1927,x_1458F1915);
    BOXVAL(namesF1921) = T31;
    T32 = CALL1(1,VARREF(Ytail),x_1457F1927);
    x_1457F1928 = T32;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1457F1928,x_1458F1915);
    BOXVAL(bodyF1922) = T34;
    T35 = CALL1(1,VARREF(Ytail),x_1457F1928);
    x_1457F1929 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1457F1929,x_1458F1915);
    T33 = T36;
    T30 = T33;
    T27 = T30;
    T24 = T27;
    T21 = T24;
    T18 = T21;
    T16 = T18;
  } else {
    T37 = CALL2(1,x_1458F1915,LITREF(lit_52),x_1457F1916);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T41 = CALL2(1,VARREF(YgooSmacrosYcat),T42,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_40));
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T57 = CALLN(1,VARREF(YgooSmacrosYcat),4,T58,T59,T60,Ynil);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T51 = CALLN(1,VARREF(YgooSmacrosYcat),6,T52,T53,T54,T55,T56,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T47 = CALLN(1,VARREF(YgooSmacrosYcat),4,T48,T49,T50,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T66 = CALL2(1,VARREF(YgooSmacrosYcat),T67,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T62 = CALLN(1,VARREF(YgooSmacrosYcat),4,T63,T64,T65,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
  T76 = BOXVAL(envF1917);
  T75 = CALL1(1,VARREF(Ylst),T76);
  T78 = BOXVAL(fF1918);
  T77 = CALL1(1,VARREF(Ylst),T78);
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T83 = BOXVAL(namesF1921);
  T82 = CALL1(1,VARREF(Ylst),T83);
  T86 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T88 = CALL3(1,VARREF(YgooSmacrosYcat),T89,T90,Ynil);
  T87 = CALL1(1,VARREF(Ylst),T88);
  T85 = CALL3(1,VARREF(YgooSmacrosYcat),T86,T87,Ynil);
  T84 = CALL1(1,VARREF(Ylst),T85);
  T80 = CALLN(1,VARREF(YgooSmacrosYcat),4,T81,T82,T84,Ynil);
  T79 = CALL1(1,VARREF(Ylst),T80);
  T93 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T97 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T98 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T96 = CALL3(1,VARREF(YgooSmacrosYcat),T97,T98,Ynil);
  T95 = CALL1(1,VARREF(Ylst),T96);
  T92 = CALLN(1,VARREF(YgooSmacrosYcat),4,T93,T94,T95,Ynil);
  T91 = CALL1(1,VARREF(Ylst),T92);
  T73 = CALLN(1,VARREF(YgooSmacrosYcat),6,T74,T75,T77,T79,T91,Ynil);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T69 = CALLN(1,VARREF(YgooSmacrosYcat),4,T70,T71,T72,Ynil);
  T68 = CALL1(1,VARREF(Ylst),T69);
  T102 = BOXVAL(bodyF1922);
  T101 = CALL1(1,VARREF(Ylst),T102);
  T103 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T100 = CALL3(1,VARREF(YgooSmacrosYcat),T101,T103,Ynil);
  T99 = CALL1(1,VARREF(Ylst),T100);
  T38 = CALLN(1,VARREF(YgooSmacrosYcat),7,T39,T40,T46,T61,T68,T99,Ynil);
  T13 = T38;
  T11 = T13;
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_32,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_34) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(Yfun_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_35) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_debug_name),x_);
  T0 = CALL1(1,VARREF(Yx8rSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_36) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYbinding_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_37) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYconstant_value),x_);
  T0 = CALL1(1,VARREF(Yx8rSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_38) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_fun_name_39) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_40) {
  P arg_vector_;
  P frameF1932;
  P nmsF1931;
  P argsF1930;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(arg_vector_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),arg_vector_);
  T1 = CALLN(1,VARREF(Yx8rSast_evalYarrange_arguments),4,FREEREF(0),FREEREF(1),FREEREF(2),T2);
  argsF1930 = T1;
  T4 = (P)YPnext_methods();
  nmsF1931 = T4;
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T7 = CALL2(1,VARREF(YgooScolsSseqYcat2),FREEREF(4),T8);
  T10 = CALL1(1,VARREF(Ylst),nmsF1931);
  T9 = CALL2(1,VARREF(YgooScolsSseqYcat2),argsF1930,T10);
  T6 = CALLN(1,VARREF(Yx8rSast_evalYenv_frameX),4,FREEREF(3),FREEREF(0),T7,T9);
  frameF1932 = T6;
  T11 = CALL1(1,FREEREF(5),frameF1932);
  T5 = T11;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_export_goo_method_41) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF1934;
  P arityF1933;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
LINK_STACK();
  ARG(f_, 0);
  ARG(names_, 1);
  ARG(specs_, 2);
  ARG(naryQ_, 3);
  ARG(value_, 4);
  ARG(body_, 5);
  ARG(env_, 6);
loop:
  if (naryQ_ != YPfalse) {
    T3 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
    T1 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T1 = T4;
  }
  arityF1933 = T1;
  T6 = FUNFAB(fun_40,6,f_,naryQ_,arityF1933,env_,names_,body_);
  efunF1934 = T6;
  T7 = CALL1(1,VARREF(Yx8rSast_evalYas_fun_name),f_);
  CALL2(1,VARREF(Yfun_name_setter),T7,efunF1934);
  T9 = CALL3(1,VARREF(Yx8rSast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (value_ != YPfalse) {
    T11 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),value_,env_);
    T10 = T11;
  } else {
    T10 = VARREF(YLanyG);
  }
  T8 = CALLN(1,VARREF(Ynew),13,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),T9,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),arityF1933,VARREF(Ysig_val),T10,VARREF(Ysig_unification_vars),Ynil);
  CALL2(1,VARREF(Yfun_sig_setter),T8,efunF1934);
  T5 = efunF1934;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P env_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_body),FREEREF(0));
  T0 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_43) {
  P e_,env_;
  P evalF1936;
  P paramsF1935;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),e_);
  paramsF1935 = T1;
  T3 = FUNFAB(fun_42,1,e_);
  evalF1936 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYbinding_name),paramsF1935);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYbinding_type),paramsF1935);
  T7 = CALL1(1,VARREF(Yx8rSastYfunction_naryQ),e_);
  T8 = CALL1(1,VARREF(Yx8rSastYfunction_value),e_);
  T4 = CALLN(1,VARREF(Yx8rSast_evalYexport_goo_method),7,e_,T5,T6,T7,T8,evalF1936,env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_44) {
  P e_,env_;
  P specsF1940;
  P namesF1939;
  P naryQF1938;
  P paramsF1937;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),e_);
  paramsF1937 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_naryQ),e_);
  naryQF1938 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYbinding_name),paramsF1937);
  namesF1939 = T5;
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYbinding_type),paramsF1937);
  T7 = CALL3(1,VARREF(Yx8rSast_evalYast_eval_specs),T8,naryQF1938,env_);
  specsF1940 = T7;
  T10 = CALL1(1,VARREF(Yx8rSast_evalYas_fun_name),e_);
  T9 = CALLN(1,VARREF(Yfab_gen),5,T10,namesF1939,specsF1940,naryQF1938,Ynil);
  T6 = T9;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_45) {
  P env_,ref_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(ref_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(Yx8rSastYreference_frame_offset),ref_);
  T0 = CALL3(1,VARREF(Yx8rSast_evalYenv_local_value),env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_setter_46) {
  P val_,env_,ref_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(val_, 0);
  ARG(env_, 1);
  ARG(ref_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(Yx8rSastYreference_frame_offset),ref_);
  T0 = CALLN(1,VARREF(Yx8rSast_evalYenv_local_value_setter),4,val_,env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_47) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL2(1,VARREF(Yx8rSast_evalYenv_local_reference_value),env_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_48) {
  P e_,env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_binding),e_);
  T0 = CALL1(1,VARREF(Yx8rSast_evalYenv_global_binding_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_49) {
  P e_,env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_locative),T2);
  T0 = CALL1(1,VARREF(Yx8rSast_evalYenv_runtime_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_50) {
  P e_,env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYboundQ_reference),e_);
  T1 = CALL1(1,VARREF(Yx8rSastYreference_binding),T2);
  T0 = CALL3(1,VARREF(Yx8rSast_evalYast_eval_boundQ),e_,T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_51) {
  P e_,binding_,env_;
  P x_1460F1942;
  P x_1459F1941;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_kind),binding_);
  x_1459F1941 = T1;
  x_1460F1942 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1460F1942,x_1459F1941,LITREF(lit_74));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(Yx8rSast_evalYenv_global_binding_boundQ),binding_);
    T3 = T5;
  } else {
    T3 = YPtrue;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_52) {
  P e_,binding_,env_;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_ast_eval_53) {
  P e_,env_;
  P valueF1943;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  valueF1943 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYassignment_binding),e_);
  T3 = CALL2(1,VARREF(Yx8rSast_evalYenv_global_binding_value_setter),valueF1943,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_54) {
  P e_,env_;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_55) {
  P e_,env_;
  P valueF1944;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  valueF1944 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(Yx8rSast_evalYenv_runtime_value_setter),valueF1944,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_56) {
  P e_,env_;
  P valueF1945;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  valueF1945 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYassignment_reference),e_);
  T3 = CALL3(1,VARREF(Yx8rSast_evalYenv_local_reference_value_setter),valueF1945,env_,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_57) {
  P b_,v_;
  P x_1462F1947;
  P x_1461F1946;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_kind),b_);
  x_1461F1946 = T1;
  x_1462F1947 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1462F1947,x_1461F1946,LITREF(lit_76));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYbinding_locative),b_);
    T5 = CALL2(1,VARREF(Yx8rSast_evalYenv_runtime_value_setter),v_,T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,x_1462F1947,x_1461F1946,LITREF(lit_74));
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(Yx8rSast_evalYenv_global_binding_value_setter),v_,b_);
      T7 = T9;
    } else {
      T11 = CALL1(1,VARREF(Yx8rSastYbinding_kind),b_);
      T10 = CALL2(1,VARREF(Yerror),LITREF(lit_77),T11);
      T7 = T10;
    }
    T3 = T7;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_58) {
  P e_,env_;
  P valueF1948;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  valueF1948 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYassignment_binding),e_);
  CALL2(1,VARREF(Yx8rSast_evalYenv_define_bindingX),T3,valueF1948);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_59) {
  P e_,env_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYalternative_condition),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yx8rSastYalternative_consequent),e_);
    T3 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T4,env_);
    T0 = T3;
  } else {
    T6 = CALL1(1,VARREF(Yx8rSastYalternative_alternant),e_);
    T5 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T6,env_);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_60) {
  P e_;
  P valF1950;
  P nxtF1949;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),e_);
  nxtF1949 = T1;
  T4 = CALL1(1,VARREF(Yhead),e_);
  T3 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T4,FREEREF(0));
  valF1950 = T3;
  T6 = CALL1(1,VARREF(YgooSmacrosYemptyQ),nxtF1949);
  if (T6 != YPfalse) {
    T5 = valF1950;
  } else {
    a1 = nxtF1949;
    e_ = a1;
    goto loop;
    T5 = T7;
  }
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_61) {
  P e_,env_;
  P evalF1951;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_60,2);
  evalF1951 = T1;
  FUNINIT(evalF1951, 2,env_,evalF1951);
  T2 = CALL1(0,evalF1951,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_62) {
  P res_,args_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),args_);
    T5 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T6,FREEREF(1));
    T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,res_);
    T7 = CALL1(1,VARREF(Ytail),args_);
    a1 = T4;
    a2 = T7;
    res_ = a1;
    args_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_63) {
  P e_,env_;
  P evalF1952;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_62,2);
  evalF1952 = T1;
  FUNINIT(evalF1952, 2,evalF1952,env_);
  T2 = CALL2(0,evalF1952,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_64) {
  P e_,env_;
  P argsF1954;
  P fF1953;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYapplication_function),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  fF1953 = T1;
  T5 = CALL1(1,VARREF(Yx8rSastYapplication_arguments),e_);
  T4 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T5,env_);
  argsF1954 = T4;
  T6 = CALL3(1,VARREF(YgooSmacrosYnapp),fF1953,YPfalse,argsF1954);
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_65) {
  P e_,env_;
  P argsF1958;
  P fF1957;
  P nmsF1956;
  P bF1955;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYapplication_binding),e_);
  bF1955 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_name),bF1955);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_60));
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(Yx8rSast_evalYenv_binding_value),env_,LITREF(lit_60));
    nmsF1956 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nmsF1956,VARREF(Ynul));
    if (T8 != YPfalse) {
      T7 = YPfalse;
    } else {
      T7 = nmsF1956;
    }
    T5 = T7;
    T2 = T5;
  } else {
    T10 = CALL1(1,VARREF(Yx8rSastYbinding_info),bF1955);
    fF1957 = T10;
    T13 = CALL1(1,VARREF(Yx8rSastYapplication_arguments),e_);
    T12 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T13,env_);
    argsF1958 = T12;
    T14 = CALL3(1,VARREF(YgooSmacrosYnapp),fF1957,YPfalse,argsF1958);
    T11 = T14;
    T9 = T11;
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_66) {
  P e_,env_;
  P nenvF1960;
  P argsF1959;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYfix_let_arguments),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  argsF1959 = T1;
  T6 = CALL1(1,VARREF(Yx8rSastYfix_let_bindings),e_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYbinding_name),T6);
  T4 = CALLN(1,VARREF(Yx8rSast_evalYenv_frameX),4,env_,YPfalse,T5,argsF1959);
  nenvF1960 = T4;
  T8 = CALL1(1,VARREF(Yx8rSastYfix_let_body),e_);
  T7 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T8,nenvF1960);
  T3 = T7;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P name_,value_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(value_, 1);
loop:
  T0 = CALL3(1,VARREF(Yx8rSast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_68) {
  P e_,env_;
  P new_envF1962;
  P bindingsF1961;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYlocals_bindings),e_);
  bindingsF1961 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYbinding_name),bindingsF1961);
  T6 = CALL1(1,VARREF(YgooSruntimeYalways),VARREF(Ynul));
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,bindingsF1961);
  T3 = CALLN(1,VARREF(Yx8rSast_evalYenv_frameX),4,env_,YPfalse,T4,T5);
  new_envF1962 = T3;
  T7 = FUNFAB(fun_67,1,new_envF1962);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYbinding_name),bindingsF1961);
  T10 = CALL2(1,VARREF(YgooSruntimeYrcurry),VARREF(Yx8rSast_evalYast_eval),new_envF1962);
  T11 = CALL1(1,VARREF(Yx8rSastYlocals_functions),e_);
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),T10,T11);
  CALL3(1,VARREF(YgooScolsScolYdo2),T7,T8,T9);
  T13 = CALL1(1,VARREF(Yx8rSastYlocals_body),e_);
  T12 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T13,new_envF1962);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P env_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL2(1,VARREF(Yx8rSast_evalYenv_binding_value),env_,LITREF(lit_7));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P return_;
  P exitF1964;
  P rprocF1963;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNFAB(fun_69,1,return_);
  rprocF1963 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(Yx8rSast_evalYexport_goo_method),7,rprocF1963,T4,T5,YPfalse,YPfalse,rprocF1963,FREEREF(0));
  exitF1964 = T3;
  T8 = CALL1(1,VARREF(Yx8rSastYbind_exit_main_fun),FREEREF(1));
  T7 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T8,FREEREF(0));
  T6 = CALL1(1,T7,exitF1964);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_71) {
  P e_,env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_70,2,env_,e_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYunwind_protect_protected_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYunwind_protect_cleanup_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_74) {
  P e_,env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_72,2,e_,env_);
  T2 = FUNFAB(fun_73,2,e_,env_);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_75) {
  P e_,env_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYmonitor_type),e_);
  T1 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T2,env_);
  T4 = CALL1(1,VARREF(Yx8rSastYmonitor_info),e_);
  T3 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T4,env_);
  T6 = CALL1(1,VARREF(Yx8rSastYmonitor_test),e_);
  T5 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T6,env_);
  T8 = CALL1(1,VARREF(Yx8rSastYmonitor_handler),e_);
  T7 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T8,env_);
  T10 = CALL1(1,VARREF(Yx8rSastYmonitor_main_thunk),e_);
  T9 = CALL2(1,VARREF(Yx8rSast_evalYast_eval),T10,env_);
  T0 = CALLN(1,VARREF(YPwith_monitor),5,T1,T3,T5,T7,T9);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSastYinit_environment_for_eval) {
  P env_;
  P bF1965;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  CALLN(1,VARREF(Yx8rSastYast_define_binding),4,env_,LITREF(lit_60),YPfalse,LITREF(lit_80));
  T1 = CALLN(1,VARREF(Yx8rSastYast_define_binding),4,env_,LITREF(lit_81),YPfalse,LITREF(lit_74));
  bF1965 = T1;
  T2 = CALL2(1,VARREF(Yx8rSast_evalYenv_global_binding_value_setter),VARREF(YgooSmacrosYpair),bF1965);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P Yx8rSast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF1966;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(Yx8rSastYunchecked_runtime_environment),T2);
  eF1966 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALLN(1,VARREF(Yx8rSastYast_define_binding),4,eF1966,T4,YPfalse,LITREF(lit_74));
  T0 = T3;
  return T0;
}

P Yx8rSast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF1967;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(Yx8rSastYunchecked_runtime_environment),T2);
  eF1967 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALL2(1,VARREF(Yx8rSastYfind_binding),T4,eF1967);
  T0 = T3;
  return T0;
}

P Yx8rSast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF1968;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)Yx8rSast_evalYPlookup_binding(raw_mod_,raw_nam_);
  tmpF1968 = T1;
  if (tmpF1968 != YPfalse) {
    T2 = tmpF1968;
  } else {
    T3 = (P)Yx8rSast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T2 = T3;
  }
  T0 = T2;
  return T0;
}

P Yx8rSast_evalYPdlvar_binding(P dlvar_) {
  P bF1969;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = (P)Yx8rSast_evalYPdlvar(dlvar_);
  bF1969 = T1;
  T4 = (P)YPiu(YPint((P)0));
  T3 = (P)YOEE(bF1969,T4);
  if (T3 != YPfalse) {
    T7 = (P)Yx8rSast_evalYPdlvar_mod(dlvar_);
    T8 = (P)Yx8rSast_evalYPdlvar_nam(dlvar_);
    T6 = (P)Yx8rSast_evalYPensure_binding(T7,T8);
    T5 = (P)Yx8rSast_evalYPdlvar_setter(T6,dlvar_);
    T2 = T5;
  } else {
    T2 = bF1969;
  }
  T0 = T2;
  return T0;
}

P Yx8rSast_evalYPbinding_boundQ(P dlvar_) {
  P tmpF1971;
  P bF1970;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T2 = (P)Yx8rSast_evalYPdlvar_mod(dlvar_);
  T3 = (P)Yx8rSast_evalYPdlvar_nam(dlvar_);
  T1 = (P)Yx8rSast_evalYPlookup_binding(T2,T3);
  bF1970 = T1;
  tmpF1971 = bF1970;
  if (tmpF1971 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYbinding_info),bF1970);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  T0 = T4;
  return T0;
}

P Yx8rSast_evalYPbinding_value(P dlvar_) {
  P bindingF1972;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = (P)Yx8rSast_evalYPdlvar_binding(dlvar_);
  bindingF1972 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_kind),bindingF1972);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYbinding_locative),bindingF1972);
    T5 = CALL1(1,VARREF(Yx8rSast_evalYenv_runtime_value),T6);
    T2 = T5;
  } else {
    T7 = CALL1(1,VARREF(Yx8rSast_evalYenv_global_binding_value),bindingF1972);
    T2 = T7;
  }
  T0 = T2;
  return T0;
}

P Yx8rSast_evalYPbinding_value_setter(P val_,P dlvar_) {
  P bindingF1973;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)Yx8rSast_evalYPdlvar_binding(dlvar_);
  bindingF1973 = T1;
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_kind),bindingF1973);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSastYbinding_locative),bindingF1973);
    T5 = CALL2(1,VARREF(Yx8rSast_evalYenv_runtime_value_setter),val_,T6);
    T2 = T5;
  } else {
    T7 = CALL2(1,VARREF(Yx8rSast_evalYenv_global_binding_value_setter),val_,bindingF1973);
    T2 = T7;
  }
  T0 = T2;
  return T0;
}

P Yx8rSast_evalY___main_0___() {
  P T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260;
  P T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244;
  P T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228;
  P T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212;
  P T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196;
  P T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180;
  P T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164;
  P T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148;
  P T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132;
  P T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116;
  P T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100;
  P T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84;
  P T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68;
  P T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"env-global-binding-value");
  lit_1 = YPPsym((P)"b");
  lit_2 = YPsb((P)"Unbound binding: %=");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_0 = YPmet(FUNCODEREF(fun_env_global_binding_value_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yx8rSast_evalYenv_global_binding_value);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSast_evalYenv_global_binding_value);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_env_global_binding_value_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yx8rSast_evalYenv_global_binding_value,T1);
  lit_3 = YPPsym((P)"env-global-binding-value-setter");
  lit_4 = YPPsym((P)"value");
  T5 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_setter_1 = YPmet(FUNCODEREF(fun_env_global_binding_value_setter_1),LITREF(lit_3),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yx8rSast_evalYenv_global_binding_value_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(Yx8rSast_evalYenv_global_binding_value_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_env_global_binding_value_setter_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yx8rSast_evalYenv_global_binding_value_setter,T6);
  lit_5 = YPPsym((P)"env-global-binding-bound?");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_env_global_binding_boundQ_2 = YPmet(FUNCODEREF(fun_env_global_binding_boundQ_2),LITREF(lit_5),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(Yx8rSast_evalYenv_global_binding_boundQ);
  if (T13 != YPfalse) {
    T12 = VARREF(Yx8rSast_evalYenv_global_binding_boundQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_env_global_binding_boundQ_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(Yx8rSast_evalYenv_global_binding_boundQ,T11);
  lit_6 = YPPsym((P)"env-runtime-value");
  lit_7 = YPPsym((P)"x");
  T15 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_3 = YPmet(FUNCODEREF(fun_env_runtime_value_3),LITREF(lit_6),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(Yx8rSast_evalYenv_runtime_value);
  if (T18 != YPfalse) {
    T17 = VARREF(Yx8rSast_evalYenv_runtime_value);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_env_runtime_value_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(Yx8rSast_evalYenv_runtime_value,T16);
  lit_8 = YPPsym((P)"env-runtime-value-setter");
  lit_9 = YPPsym((P)"v");
  T20 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_setter_4 = YPmet(FUNCODEREF(fun_env_runtime_value_setter_4),LITREF(lit_8),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(Yx8rSast_evalYenv_runtime_value_setter);
  if (T23 != YPfalse) {
    T22 = VARREF(Yx8rSast_evalYenv_runtime_value_setter);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_env_runtime_value_setter_4;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(Yx8rSast_evalYenv_runtime_value_setter,T21);
  lit_10 = YPPsym((P)"<loc-env>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = CALL2(1,VARREF(Yfab_class),LITREF(lit_10),T26);
  VARSET(Yx8rSast_evalYLloc_envG,T25);
  lit_11 = YPPsym((P)"env-parent");
  lit_12 = YPPsym((P)"_x");
  T27 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_parent_5 = YPmet(FUNCODEREF(fun_env_parent_5),LITREF(lit_11),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(Yx8rSast_evalYenv_parent);
  if (T30 != YPfalse) {
    T29 = VARREF(Yx8rSast_evalYenv_parent);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_env_parent_5;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Yx8rSast_evalYenv_parent,T28);
  lit_13 = YPPsym((P)"env-parent-setter");
  lit_14 = YPPsym((P)"_z");
  T32 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_parent_setter_6 = YPmet(FUNCODEREF(fun_env_parent_setter_6),LITREF(lit_13),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(Yx8rSast_evalYenv_parent_setter);
  if (T35 != YPfalse) {
    T34 = VARREF(Yx8rSast_evalYenv_parent_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_env_parent_setter_6;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(Yx8rSast_evalYenv_parent_setter,T33);
  T37 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T38 = fun_7;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_evalYLloc_envG),VARREF(Yx8rSast_evalYenv_parent),VARREF(Yx8rSast_evalYenv_parent_setter),VARREF(YLanyG),T38);
  lit_15 = YPPsym((P)"env-function");
  T39 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_function_8 = YPmet(FUNCODEREF(fun_env_function_8),LITREF(lit_15),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(Yx8rSast_evalYenv_function);
  if (T42 != YPfalse) {
    T41 = VARREF(Yx8rSast_evalYenv_function);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_env_function_8;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(Yx8rSast_evalYenv_function,T40);
  lit_16 = YPPsym((P)"env-function-setter");
  T44 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_function_setter_9 = YPmet(FUNCODEREF(fun_env_function_setter_9),LITREF(lit_16),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(Yx8rSast_evalYenv_function_setter);
  if (T47 != YPfalse) {
    T46 = VARREF(Yx8rSast_evalYenv_function_setter);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_env_function_setter_9;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(Yx8rSast_evalYenv_function_setter,T45);
  T49 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T50 = fun_10;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_evalYLloc_envG),VARREF(Yx8rSast_evalYenv_function),VARREF(Yx8rSast_evalYenv_function_setter),VARREF(YLanyG),T50);
  lit_17 = YPPsym((P)"env-names");
  T51 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_names_11 = YPmet(FUNCODEREF(fun_env_names_11),LITREF(lit_17),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(Yx8rSast_evalYenv_names);
  if (T54 != YPfalse) {
    T53 = VARREF(Yx8rSast_evalYenv_names);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_env_names_11;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(Yx8rSast_evalYenv_names,T52);
  lit_18 = YPPsym((P)"env-names-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLlstG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_names_setter_12 = YPmet(FUNCODEREF(fun_env_names_setter_12),LITREF(lit_18),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(Yx8rSast_evalYenv_names_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(Yx8rSast_evalYenv_names_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_env_names_setter_12;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(Yx8rSast_evalYenv_names_setter,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T62 = fun_13;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_evalYLloc_envG),VARREF(Yx8rSast_evalYenv_names),VARREF(Yx8rSast_evalYenv_names_setter),VARREF(YLlstG),T62);
  lit_19 = YPPsym((P)"env-values");
  T63 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_values_14 = YPmet(FUNCODEREF(fun_env_values_14),LITREF(lit_19),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(Yx8rSast_evalYenv_values);
  if (T66 != YPfalse) {
    T65 = VARREF(Yx8rSast_evalYenv_values);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_env_values_14;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(Yx8rSast_evalYenv_values,T64);
  lit_20 = YPPsym((P)"env-values-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLvecG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_values_setter_15 = YPmet(FUNCODEREF(fun_env_values_setter_15),LITREF(lit_20),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(Yx8rSast_evalYenv_values_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(Yx8rSast_evalYenv_values_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_env_values_setter_15;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(Yx8rSast_evalYenv_values_setter,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T74 = fun_16;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_evalYLloc_envG),VARREF(Yx8rSast_evalYenv_values),VARREF(Yx8rSast_evalYenv_values_setter),VARREF(YLvecG),T74);
  T75 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSast_evalYLloc_envG));
  VARSET(Yx8rSast_evalYDnul_loc_env,T75);
  lit_21 = YPPsym((P)"env-frame!");
  lit_22 = YPPsym((P)"env");
  lit_23 = YPPsym((P)"function");
  lit_24 = YPPsym((P)"names");
  lit_25 = YPPsym((P)"args");
  T76 = YPsig(YPPlist(4,LITREF(lit_22),LITREF(lit_23),LITREF(lit_24),LITREF(lit_25)),YPPlist(4,VARREF(Yx8rSast_evalYLloc_envG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(Yx8rSast_evalYLloc_envG),Ynil);
  fun_env_frameX_17 = YPmet(FUNCODEREF(fun_env_frameX_17),LITREF(lit_21),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(Yx8rSast_evalYenv_frameX);
  if (T79 != YPfalse) {
    T78 = VARREF(Yx8rSast_evalYenv_frameX);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_env_frameX_17;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(Yx8rSast_evalYenv_frameX,T77);
  lit_26 = YPPsym((P)"env-local-value");
  lit_27 = YPPsym((P)"i");
  lit_28 = YPPsym((P)"j");
  T81 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_27),LITREF(lit_28)),YPPlist(3,VARREF(Yx8rSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_value_18 = YPmet(FUNCODEREF(fun_env_local_value_18),LITREF(lit_26),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(Yx8rSast_evalYenv_local_value);
  if (T84 != YPfalse) {
    T83 = VARREF(Yx8rSast_evalYenv_local_value);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_env_local_value_18;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(Yx8rSast_evalYenv_local_value,T82);
  lit_29 = YPPsym((P)"env-local-value-setter");
  T86 = YPsig(YPPlist(4,LITREF(lit_9),LITREF(lit_22),LITREF(lit_27),LITREF(lit_28)),YPPlist(4,VARREF(YLanyG),VARREF(Yx8rSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_env_local_value_setter_19 = YPmet(FUNCODEREF(fun_env_local_value_setter_19),LITREF(lit_29),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(Yx8rSast_evalYenv_local_value_setter);
  if (T89 != YPfalse) {
    T88 = VARREF(Yx8rSast_evalYenv_local_value_setter);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_env_local_value_setter_19;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(Yx8rSast_evalYenv_local_value_setter,T87);
  lit_30 = YPPsym((P)"env-binding-value");
  lit_31 = YPPsym((P)"name");
  lit_32 = YPPsym((P)"loop");
  T92 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_20 = YPmet(FUNCODEREF(fun_loop_20),LITREF(lit_32),T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_31)),YPPlist(2,VARREF(Yx8rSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_binding_value_21 = YPmet(FUNCODEREF(fun_env_binding_value_21),LITREF(lit_30),T91,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(Yx8rSast_evalYenv_binding_value);
  if (T95 != YPfalse) {
    T94 = VARREF(Yx8rSast_evalYenv_binding_value);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_env_binding_value_21;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(Yx8rSast_evalYenv_binding_value,T93);
  lit_33 = YPPsym((P)"env-binding-value-setter");
  T98 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_22 = YPmet(FUNCODEREF(fun_loop_22),LITREF(lit_32),T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(3,LITREF(lit_9),LITREF(lit_22),LITREF(lit_31)),YPPlist(3,VARREF(YLanyG),VARREF(Yx8rSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_binding_value_setter_23 = YPmet(FUNCODEREF(fun_env_binding_value_setter_23),LITREF(lit_33),T97,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(Yx8rSast_evalYenv_binding_value_setter);
  if (T101 != YPfalse) {
    T100 = VARREF(Yx8rSast_evalYenv_binding_value_setter);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_env_binding_value_setter_23;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(Yx8rSast_evalYenv_binding_value_setter,T99);
  lit_34 = YPPsym((P)"ast-evaluate");
  lit_35 = YPPsym((P)"e");
  T103 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_evaluate_24 = YPmet(FUNCODEREF(fun_ast_evaluate_24),LITREF(lit_34),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(Yx8rSastYast_evaluate);
  if (T106 != YPfalse) {
    T105 = VARREF(Yx8rSastYast_evaluate);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_ast_evaluate_24;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(Yx8rSastYast_evaluate,T104);
  lit_36 = YPPsym((P)"ast-eval");
  T109 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLprogramG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T108 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_36),T109,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yx8rSast_evalYast_eval,T108);
  T110 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_25 = YPmet(FUNCODEREF(fun_ast_eval_25),LITREF(lit_36),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T113 != YPfalse) {
    T112 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_ast_eval_25;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(Yx8rSast_evalYast_eval,T111);
  T115 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLraw_constantG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_26 = YPmet(FUNCODEREF(fun_ast_eval_26),LITREF(lit_36),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T118 != YPfalse) {
    T117 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_ast_eval_26;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(Yx8rSast_evalYast_eval,T116);
  lit_37 = YPPsym((P)"ee");
  T120 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_37)),YPPlist(2,VARREF(Yx8rSastYLcompile_timeG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_27 = YPmet(FUNCODEREF(fun_ast_eval_27),LITREF(lit_36),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T123 != YPfalse) {
    T122 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_ast_eval_27;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(Yx8rSast_evalYast_eval,T121);
  lit_38 = YPPsym((P)"ast-eval-specs");
  lit_39 = YPPsym((P)"specs");
  lit_40 = YPPsym((P)"nary?");
  lit_41 = YPPsym((P)"res");
  T126 = YPsig(YPPlist(3,LITREF(lit_41),LITREF(lit_39),LITREF(lit_27)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_28 = YPmet(FUNCODEREF(fun_loop_28),LITREF(lit_32),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(YPPlist(3,LITREF(lit_39),LITREF(lit_40),LITREF(lit_22)),YPPlist(3,VARREF(YLlstG),VARREF(YLlogG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_specs_29 = YPmet(FUNCODEREF(fun_ast_eval_specs_29),LITREF(lit_38),T125,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(Yx8rSast_evalYast_eval_specs);
  if (T129 != YPfalse) {
    T128 = VARREF(Yx8rSast_evalYast_eval_specs);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_ast_eval_specs_29;
  T127 = CALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(Yx8rSast_evalYast_eval_specs,T127);
  T131 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSbufYLbufG),YPint((P)0));
  VARSET(Yx8rSast_evalYTstackT,T131);
  lit_42 = YPPsym((P)"arrange-arguments");
  lit_43 = YPPsym((P)"f");
  lit_44 = YPPsym((P)"arity");
  lit_45 = YPsb((P)"%= called with %=; needs at least %d arguments");
  lit_46 = YPsb((P)"%= called with %=; needs %d arguments");
  T132 = YPsig(YPPlist(4,LITREF(lit_43),LITREF(lit_40),LITREF(lit_44),LITREF(lit_25)),YPPlist(4,VARREF(YLanyG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  Yx8rSast_evalYarrange_arguments = YPmet(FUNCODEREF(Yx8rSast_evalYarrange_arguments),LITREF(lit_42),T132,ENVNUL,PNUL,YPfalse);
  T133 = Yx8rSast_evalYarrange_arguments;
  VARSET(Yx8rSast_evalYarrange_arguments,T133);
  lit_47 = YPPsym((P)"exp");
  lit_48 = YPPsym((P)"return");
  lit_49 = YPPsym((P)"x-1458");
  lit_50 = YPPsym((P)"msg");
  lit_51 = YPPsym((P)"ifun");
  lit_52 = YPsb((P)"Match Pattern Failure");
  lit_53 = YPPsym((P)"fun");
  lit_54 = YPPsym((P)"arg-vector");
  lit_55 = YPPsym((P)"...");
  lit_56 = YPPsym((P)"def");
  lit_57 = YPPsym((P)"as");
  lit_58 = YPPsym((P)"<lst>");
  lit_59 = YPPsym((P)"nms");
  lit_60 = YPPsym((P)"%next-methods");
  lit_61 = YPPsym((P)"frame");
  lit_62 = YPPsym((P)"cat2");
  lit_63 = YPPsym((P)"lst");
  lit_64 = YPPsym((P)"quote");
  T136 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_25)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1458_31 = YPmet(FUNCODEREF(fun_x_1458_31),LITREF(lit_49),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T137 = fun_33;
  YPmacro(YPPsym((P)"x8r/ast-eval"),YPPsym((P)"ifun"),T137);
  lit_65 = YPPsym((P)"as-fun-name");
  T138 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_34 = YPmet(FUNCODEREF(fun_as_fun_name_34),LITREF(lit_65),T138,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(Yx8rSast_evalYas_fun_name);
  if (T141 != YPfalse) {
    T140 = VARREF(Yx8rSast_evalYas_fun_name);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_as_fun_name_34;
  T139 = CALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(Yx8rSast_evalYas_fun_name,T139);
  T143 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(Yx8rSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_35 = YPmet(FUNCODEREF(fun_as_fun_name_35),LITREF(lit_65),T143,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(Yx8rSast_evalYas_fun_name);
  if (T146 != YPfalse) {
    T145 = VARREF(Yx8rSast_evalYas_fun_name);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_as_fun_name_35;
  T144 = CALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(Yx8rSast_evalYas_fun_name,T144);
  T148 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_36 = YPmet(FUNCODEREF(fun_as_fun_name_36),LITREF(lit_65),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(Yx8rSast_evalYas_fun_name);
  if (T151 != YPfalse) {
    T150 = VARREF(Yx8rSast_evalYas_fun_name);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_as_fun_name_36;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(Yx8rSast_evalYas_fun_name,T149);
  T153 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(Yx8rSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_37 = YPmet(FUNCODEREF(fun_as_fun_name_37),LITREF(lit_65),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(Yx8rSast_evalYas_fun_name);
  if (T156 != YPfalse) {
    T155 = VARREF(Yx8rSast_evalYas_fun_name);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_as_fun_name_37;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(Yx8rSast_evalYas_fun_name,T154);
  T158 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_as_fun_name_38 = YPmet(FUNCODEREF(fun_as_fun_name_38),LITREF(lit_65),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(Yx8rSast_evalYas_fun_name);
  if (T161 != YPfalse) {
    T160 = VARREF(Yx8rSast_evalYas_fun_name);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_as_fun_name_38;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(Yx8rSast_evalYas_fun_name,T159);
  T163 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_39 = YPmet(FUNCODEREF(fun_as_fun_name_39),LITREF(lit_65),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(Yx8rSast_evalYas_fun_name);
  if (T166 != YPfalse) {
    T165 = VARREF(Yx8rSast_evalYas_fun_name);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_as_fun_name_39;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(Yx8rSast_evalYas_fun_name,T164);
  lit_66 = YPPsym((P)"export-goo-method");
  lit_67 = YPPsym((P)"body");
  T169 = YPsig(YPPlist(1,LITREF(lit_54)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(7,LITREF(lit_43),LITREF(lit_24),LITREF(lit_39),LITREF(lit_40),LITREF(lit_4),LITREF(lit_67),LITREF(lit_22)),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YLanyG),Ynil);
  fun_export_goo_method_41 = YPmet(FUNCODEREF(fun_export_goo_method_41),LITREF(lit_66),T168,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(Yx8rSast_evalYexport_goo_method);
  if (T172 != YPfalse) {
    T171 = VARREF(Yx8rSast_evalYexport_goo_method);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_export_goo_method_41;
  T170 = CALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(Yx8rSast_evalYexport_goo_method,T170);
  T175 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLast_methodG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_43 = YPmet(FUNCODEREF(fun_ast_eval_43),LITREF(lit_36),T174,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T178 != YPfalse) {
    T177 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_ast_eval_43;
  T176 = CALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(Yx8rSast_evalYast_eval,T176);
  T180 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLast_genericG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_44 = YPmet(FUNCODEREF(fun_ast_eval_44),LITREF(lit_36),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T183 != YPfalse) {
    T182 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_ast_eval_44;
  T181 = CALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(Yx8rSast_evalYast_eval,T181);
  lit_68 = YPPsym((P)"env-local-reference-value");
  lit_69 = YPPsym((P)"ref");
  T185 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_69)),YPPlist(2,VARREF(Yx8rSast_evalYLloc_envG),VARREF(Yx8rSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_45 = YPmet(FUNCODEREF(fun_env_local_reference_value_45),LITREF(lit_68),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(Yx8rSast_evalYenv_local_reference_value);
  if (T188 != YPfalse) {
    T187 = VARREF(Yx8rSast_evalYenv_local_reference_value);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_env_local_reference_value_45;
  T186 = CALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(Yx8rSast_evalYenv_local_reference_value,T186);
  lit_70 = YPPsym((P)"env-local-reference-value-setter");
  lit_71 = YPPsym((P)"val");
  T190 = YPsig(YPPlist(3,LITREF(lit_71),LITREF(lit_22),LITREF(lit_69)),YPPlist(3,VARREF(YLanyG),VARREF(Yx8rSast_evalYLloc_envG),VARREF(Yx8rSastYLlocal_referenceG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_setter_46 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_46),LITREF(lit_70),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(Yx8rSast_evalYenv_local_reference_value_setter);
  if (T193 != YPfalse) {
    T192 = VARREF(Yx8rSast_evalYenv_local_reference_value_setter);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_env_local_reference_value_setter_46;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(Yx8rSast_evalYenv_local_reference_value_setter,T191);
  T195 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLlocal_referenceG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_47 = YPmet(FUNCODEREF(fun_ast_eval_47),LITREF(lit_36),T195,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T198 != YPfalse) {
    T197 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_ast_eval_47;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(Yx8rSast_evalYast_eval,T196);
  T200 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLglobal_referenceG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_48 = YPmet(FUNCODEREF(fun_ast_eval_48),LITREF(lit_36),T200,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T203 != YPfalse) {
    T202 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_ast_eval_48;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(Yx8rSast_evalYast_eval,T201);
  T205 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLruntime_referenceG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_49 = YPmet(FUNCODEREF(fun_ast_eval_49),LITREF(lit_36),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T208 != YPfalse) {
    T207 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_ast_eval_49;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(Yx8rSast_evalYast_eval,T206);
  T210 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLboundQG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_50 = YPmet(FUNCODEREF(fun_ast_eval_50),LITREF(lit_36),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T213 != YPfalse) {
    T212 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_ast_eval_50;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(Yx8rSast_evalYast_eval,T211);
  lit_72 = YPPsym((P)"ast-eval-bound?");
  lit_73 = YPPsym((P)"binding");
  lit_74 = YPPsym((P)"global");
  T215 = YPsig(YPPlist(3,LITREF(lit_35),LITREF(lit_73),LITREF(lit_22)),YPPlist(3,VARREF(Yx8rSastYLboundQG),VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_51 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_51),LITREF(lit_72),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(Yx8rSast_evalYast_eval_boundQ);
  if (T218 != YPfalse) {
    T217 = VARREF(Yx8rSast_evalYast_eval_boundQ);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_ast_eval_boundQ_51;
  T216 = CALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(Yx8rSast_evalYast_eval_boundQ,T216);
  T220 = YPsig(YPPlist(3,LITREF(lit_35),LITREF(lit_73),LITREF(lit_22)),YPPlist(3,VARREF(Yx8rSastYLboundQG),VARREF(Yx8rSastYLlocal_bindingG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_52 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_52),LITREF(lit_72),T220,ENVNUL,PNUL,YPfalse);
  T223 = BOUNDP(Yx8rSast_evalYast_eval_boundQ);
  if (T223 != YPfalse) {
    T222 = VARREF(Yx8rSast_evalYast_eval_boundQ);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_ast_eval_boundQ_52;
  T221 = CALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(Yx8rSast_evalYast_eval_boundQ,T221);
  T225 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLglobal_assignmentG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_53 = YPmet(FUNCODEREF(fun_ast_eval_53),LITREF(lit_36),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T228 != YPfalse) {
    T227 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_ast_eval_53;
  T226 = CALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(Yx8rSast_evalYast_eval,T226);
  T230 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLast_macro_definitionG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_54 = YPmet(FUNCODEREF(fun_ast_eval_54),LITREF(lit_36),T230,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T233 != YPfalse) {
    T232 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_ast_eval_54;
  T231 = CALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(Yx8rSast_evalYast_eval,T231);
  T235 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLruntime_assignmentG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_55 = YPmet(FUNCODEREF(fun_ast_eval_55),LITREF(lit_36),T235,ENVNUL,PNUL,YPfalse);
  T238 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T238 != YPfalse) {
    T237 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T237 = YPfalse;
  }
  T239 = fun_ast_eval_55;
  T236 = CALL2(1,VARREF(YPdefine_method),T237,T239);
  VARSET(Yx8rSast_evalYast_eval,T236);
  T240 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLlocal_assignmentG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_56 = YPmet(FUNCODEREF(fun_ast_eval_56),LITREF(lit_36),T240,ENVNUL,PNUL,YPfalse);
  T243 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T243 != YPfalse) {
    T242 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T242 = YPfalse;
  }
  T244 = fun_ast_eval_56;
  T241 = CALL2(1,VARREF(YPdefine_method),T242,T244);
  VARSET(Yx8rSast_evalYast_eval,T241);
  lit_75 = YPPsym((P)"env-define-binding!");
  lit_76 = YPPsym((P)"runtime");
  lit_77 = YPsb((P)"Defining invalid binding kind %=");
  T245 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(Yx8rSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_define_bindingX_57 = YPmet(FUNCODEREF(fun_env_define_bindingX_57),LITREF(lit_75),T245,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(Yx8rSast_evalYenv_define_bindingX);
  if (T248 != YPfalse) {
    T247 = VARREF(Yx8rSast_evalYenv_define_bindingX);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_env_define_bindingX_57;
  T246 = CALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(Yx8rSast_evalYenv_define_bindingX,T246);
  T250 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLdefinitionG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_58 = YPmet(FUNCODEREF(fun_ast_eval_58),LITREF(lit_36),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T253 != YPfalse) {
    T252 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_ast_eval_58;
  T251 = CALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(Yx8rSast_evalYast_eval,T251);
  T255 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLalternativeG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_59 = YPmet(FUNCODEREF(fun_ast_eval_59),LITREF(lit_36),T255,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T258 != YPfalse) {
    T257 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_ast_eval_59;
  T256 = CALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(Yx8rSast_evalYast_eval,T256);
  lit_78 = YPPsym((P)"eval");
  T261 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_eval_60 = YPmet(FUNCODEREF(fun_eval_60),LITREF(lit_78),T261,ENVNUL,PNUL,YPfalse);
  T260 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLsequentialG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_61 = YPmet(FUNCODEREF(fun_ast_eval_61),LITREF(lit_36),T260,ENVNUL,PNUL,YPfalse);
  T264 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T264 != YPfalse) {
    T263 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T263 = YPfalse;
  }
  T265 = fun_ast_eval_61;
  T262 = CALL2(1,VARREF(YPdefine_method),T263,T265);
  VARSET(Yx8rSast_evalYast_eval,T262);
  T270 = YPsig(YPPlist(2,LITREF(lit_41),LITREF(lit_25)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T269 = fun_eval_62 = YPmet(FUNCODEREF(fun_eval_62),LITREF(lit_78),T270,ENVNUL,PNUL,YPfalse);
  T268 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLargumentsG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T267 = fun_ast_eval_63 = YPmet(FUNCODEREF(fun_ast_eval_63),LITREF(lit_36),T268,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T274 != YPfalse) {
    T273 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_ast_eval_63;
  T272 = CALL2(1,VARREF(YPdefine_method),T273,T275);
  T271 = VARSET(Yx8rSast_evalYast_eval,T272);
  T266 = T271;
  return T266;
}

P Yx8rSast_evalY___main_1___() {
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLregular_applicationG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_64 = YPmet(FUNCODEREF(fun_ast_eval_64),LITREF(lit_36),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_ast_eval_64;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yx8rSast_evalYast_eval,T1);
  T5 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLpredefined_applicationG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_65 = YPmet(FUNCODEREF(fun_ast_eval_65),LITREF(lit_36),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T8 != YPfalse) {
    T7 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_ast_eval_65;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yx8rSast_evalYast_eval,T6);
  T10 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLfix_letG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_66 = YPmet(FUNCODEREF(fun_ast_eval_66),LITREF(lit_36),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T13 != YPfalse) {
    T12 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_ast_eval_66;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(Yx8rSast_evalYast_eval,T11);
  T16 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLlocalsG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_68 = YPmet(FUNCODEREF(fun_ast_eval_68),LITREF(lit_36),T15,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T19 != YPfalse) {
    T18 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_ast_eval_68;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(Yx8rSast_evalYast_eval,T17);
  T23 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLbind_exitG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_71 = YPmet(FUNCODEREF(fun_ast_eval_71),LITREF(lit_36),T21,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T26 != YPfalse) {
    T25 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_ast_eval_71;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(Yx8rSast_evalYast_eval,T24);
  T30 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLunwind_protectG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_74 = YPmet(FUNCODEREF(fun_ast_eval_74),LITREF(lit_36),T28,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T33 != YPfalse) {
    T32 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_ast_eval_74;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(Yx8rSast_evalYast_eval,T31);
  T35 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(Yx8rSastYLmonitorG),VARREF(Yx8rSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_75 = YPmet(FUNCODEREF(fun_ast_eval_75),LITREF(lit_36),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(Yx8rSast_evalYast_eval);
  if (T38 != YPfalse) {
    T37 = VARREF(Yx8rSast_evalYast_eval);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_ast_eval_75;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(Yx8rSast_evalYast_eval,T36);
  lit_79 = YPPsym((P)"init-environment-for-eval");
  lit_80 = YPPsym((P)"predefined");
  lit_81 = YPPsym((P)"%pair");
  T40 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(Yx8rSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSastYinit_environment_for_eval = YPmet(FUNCODEREF(Yx8rSastYinit_environment_for_eval),LITREF(lit_79),T40,ENVNUL,PNUL,YPfalse);
  T41 = Yx8rSastYinit_environment_for_eval;
  VARSET(Yx8rSastYinit_environment_for_eval,T41);
  T42 = YPfalse;
  return T42;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_x8rSast;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSbuf;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_x8rSsyntax;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_goo},
  {&module_info_x8rSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"always", &module_info_gooSruntime, "always"},
  {"def-programs", &module_info_x8rSast, "def-programs"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<global-reference>", &module_info_x8rSast, "<global-reference>"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"binding-info", &module_info_x8rSast, "binding-info"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"application-arguments", &module_info_x8rSast, "application-arguments"},
  {"$goo-boot-module-name", &module_info_x8rSast, "$goo-boot-module-name"},
  {"set-module-environments", &module_info_x8rSast, "set-module-environments"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"<runtime-assignment>", &module_info_x8rSast, "<runtime-assignment>"},
  {"<module-binding>", &module_info_x8rSast, "<module-binding>"},
  {"<ast-primitive>", &module_info_x8rSast, "<ast-primitive>"},
  {"function-value", &module_info_x8rSast, "function-value"},
  {"or", &module_info_gooSmacros, "or"},
  {"<programs>", &module_info_x8rSast, "<programs>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"locals-bindings", &module_info_x8rSast, "locals-bindings"},
  {"install-initial-bindings", &module_info_x8rSast, "install-initial-bindings"},
  {"t=", &module_info_gooStypes, "t="},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"signature-nary?-setter", &module_info_x8rSast, "signature-nary?-setter"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"monitor-handler", &module_info_x8rSast, "monitor-handler"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"constant-index", &module_info_x8rSast, "constant-index"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"reference-binding", &module_info_x8rSast, "reference-binding"},
  {"locals-body", &module_info_x8rSast, "locals-body"},
  {"round/", &module_info_gooSmath, "round/"},
  {"any?", &module_info_gooStypes, "any?"},
  {"|", &module_info_gooSmath, "|"},
  {"close", &module_info_gooSioSport, "close"},
  {"signature-value", &module_info_x8rSast, "signature-value"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"do", &module_info_gooSmacros, "do"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"application-function", &module_info_x8rSast, "application-function"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<locals>", &module_info_x8rSast, "<locals>"},
  {"<local-assignment>", &module_info_x8rSast, "<local-assignment>"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%bb", &module_info_gooSboot, "%bb"},
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
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"neg", &module_info_gooSmath, "neg"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"find-environment-module", &module_info_x8rSast, "find-environment-module"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"<ast-signature>", &module_info_x8rSast, "<ast-signature>"},
  {"function-debug-name", &module_info_x8rSast, "function-debug-name"},
  {"read", &module_info_gooSruntime, "read"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"env-object-name", &module_info_x8rSast, "env-object-name"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"<static-global-environment>", &module_info_x8rSast, "<static-global-environment>"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"<sequential>", &module_info_x8rSast, "<sequential>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"fix-let-bindings-setter", &module_info_x8rSast, "fix-let-bindings-setter"},
  {"do-named-static-global-bindings", &module_info_x8rSast, "do-named-static-global-bindings"},
  {"pop-last!", &module_info_gooScolsSbuf, "pop-last!"},
  {"@<", &module_info_gooSboot, "@<"},
  {"now", &module_info_gooScolsScol, "now"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"binding-global-box", &module_info_x8rSast, "binding-global-box"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"+", &module_info_gooSmath, "+"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"sequentialize", &module_info_x8rSast, "sequentialize"},
  {"max", &module_info_gooSmag, "max"},
  {"locals-functions-setter", &module_info_x8rSast, "locals-functions-setter"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"<constant>", &module_info_x8rSast, "<constant>"},
  {"binding-index-setter", &module_info_x8rSast, "binding-index-setter"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"1st", &module_info_gooScolsSseq, "1st"},
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
  {"say", &module_info_gooSioSwrite, "say"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"signature-nary?", &module_info_x8rSast, "signature-nary?"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"<program>", &module_info_x8rSast, "<program>"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"<ast-function>", &module_info_x8rSast, "<ast-function>"},
  {"fix-let-types-setter", &module_info_x8rSast, "fix-let-types-setter"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"reference-called-function?", &module_info_x8rSast, "reference-called-function?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"binding-inferred-type-setter", &module_info_x8rSast, "binding-inferred-type-setter"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"program-register-setter", &module_info_x8rSast, "program-register-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"<bind-exit>", &module_info_x8rSast, "<bind-exit>"},
  {"reference-frame-number", &module_info_x8rSast, "reference-frame-number"},
  {"out", &module_info_gooSioSport, "out"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"signature-bindings-setter", &module_info_x8rSast, "signature-bindings-setter"},
  {"ds", &module_info_gooSboot, "ds"},
  {"bound?-reference", &module_info_x8rSast, "bound?-reference"},
  {"program-type", &module_info_x8rSast, "program-type"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"bind-exit-main-fun", &module_info_x8rSast, "bind-exit-main-fun"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"fab-g2c-module", &module_info_x8rSast, "fab-g2c-module"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"add", &module_info_gooScolsScol, "add"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"global-box-value", &module_info_x8rSast, "global-box-value"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"match", &module_info_gooSmacros, "match"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%im", &module_info_gooSboot, "%im"},
  {"round", &module_info_gooSmath, "round"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"binding-locative", &module_info_x8rSast, "binding-locative"},
  {"function-binding", &module_info_x8rSast, "function-binding"},
  {"remove-modules-by-name!", &module_info_x8rSast, "remove-modules-by-name!"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<arguments>", &module_info_x8rSast, "<arguments>"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"in", &module_info_gooSioSport, "in"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"environment-bindings", &module_info_x8rSast, "environment-bindings"},
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
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"probe-module", &module_info_x8rSast, "probe-module"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"assignment-binding", &module_info_x8rSast, "assignment-binding"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"open", &module_info_gooSioSport, "open"},
  {"%i*", &module_info_gooSboot, "%i*"},
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
  {"gets", &module_info_gooSioSport, "gets"},
  {"<local-reference>", &module_info_x8rSast, "<local-reference>"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"binding-inferred-type", &module_info_x8rSast, "binding-inferred-type"},
  {"new", &module_info_gooSboot, "new"},
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
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"function-bindings", &module_info_x8rSast, "function-bindings"},
  {"binding-name", &module_info_x8rSast, "binding-name"},
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
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"unchecked-runtime-environment", &module_info_x8rSast, "unchecked-runtime-environment"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {">=", &module_info_gooSmag, ">="},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"def", &module_info_gooSboot, "def"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"signature-specs-setter", &module_info_x8rSast, "signature-specs-setter"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"signature-arity-setter", &module_info_x8rSast, "signature-arity-setter"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"set", &module_info_gooSboot, "set"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"floor", &module_info_gooSmath, "floor"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"lst", &module_info_gooSboot, "lst"},
  {"not", &module_info_gooSboot, "not"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"binding-global-box-setter", &module_info_x8rSast, "binding-global-box-setter"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"<buf>", &module_info_gooScolsSbuf, "<buf>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"module-loader-module-type", &module_info_x8rSast, "module-loader-module-type"},
  {"sexpr-signature-parameters", &module_info_x8rSsyntax, "sexpr-signature-parameters"},
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
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"module-syntax-environment", &module_info_x8rSast, "module-syntax-environment"},
  {"application-known?-setter", &module_info_x8rSast, "application-known?-setter"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"format-to-string", &module_info_gooSruntime, "format-to-string"},
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
  {"get", &module_info_gooSioSport, "get"},
  {"try", &module_info_gooSboot, "try"},
  {"dss", &module_info_gooSboot, "dss"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"signature-arity", &module_info_x8rSast, "signature-arity"},
  {"fix-let-body", &module_info_x8rSast, "fix-let-body"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"binding-dotted?-setter", &module_info_x8rSast, "binding-dotted?-setter"},
  {"function-temporaries-setter", &module_info_x8rSast, "function-temporaries-setter"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<application>", &module_info_x8rSast, "<application>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"fix-let-body-setter", &module_info_x8rSast, "fix-let-body-setter"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
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
  {"keys", &module_info_gooScolsScol, "keys"},
  {"locals-bindings-setter", &module_info_x8rSast, "locals-bindings-setter"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"binding-type", &module_info_x8rSast, "binding-type"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"module-binding", &module_info_x8rSast, "module-binding"},
  {"binding-type-setter", &module_info_x8rSast, "binding-type-setter"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"module-name", &module_info_x8rSast, "module-name"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"objectify-with-subtransaction", &module_info_x8rSast, "objectify-with-subtransaction"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"when", &module_info_gooSmacros, "when"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"unwind-protect-protected-thunk", &module_info_x8rSast, "unwind-protect-protected-thunk"},
  {"<passive-program>", &module_info_x8rSast, "<passive-program>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"signature-names", &module_info_x8rSast, "signature-names"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"min", &module_info_gooSmag, "min"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"environment-uses-modules", &module_info_x8rSast, "environment-uses-modules"},
  {"fix-let-bindings", &module_info_x8rSast, "fix-let-bindings"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"until", &module_info_gooSmacros, "until"},
  {"t*", &module_info_gooStypes, "t*"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"program-register", &module_info_x8rSast, "program-register"},
  {"init-environment-for-eval", &module_info_x8rSast, "init-environment-for-eval"},
  {"report-undefined-global-bindings", &module_info_x8rSast, "report-undefined-global-bindings"},
  {"push-last!", &module_info_gooScolsSbuf, "push-last!"},
  {"alternative-alternant", &module_info_x8rSast, "alternative-alternant"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"assignment-reference", &module_info_x8rSast, "assignment-reference"},
  {"function-data-refs-setter", &module_info_x8rSast, "function-data-refs-setter"},
  {"global-box-value-setter", &module_info_x8rSast, "global-box-value-setter"},
  {"function-source-setter", &module_info_x8rSast, "function-source-setter"},
  {"ast-evaluate", &module_info_x8rSast, "ast-evaluate"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"display", &module_info_gooSioSwrite, "display"},
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
  {">", &module_info_gooSmag, ">"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"<computed-program>", &module_info_x8rSast, "<computed-program>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<bound?>", &module_info_x8rSast, "<bound?>"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"~=", &module_info_gooSmath, "~="},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"module-target-environment", &module_info_x8rSast, "module-target-environment"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"binding-kind", &module_info_x8rSast, "binding-kind"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"<predefined-application>", &module_info_x8rSast, "<predefined-application>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<free-environment>", &module_info_x8rSast, "<free-environment>"},
  {"monitor-main-thunk", &module_info_x8rSast, "monitor-main-thunk"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"fix-let-arguments", &module_info_x8rSast, "fix-let-arguments"},
  {"load-module", &module_info_x8rSast, "load-module"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"fix-let-arguments-setter", &module_info_x8rSast, "fix-let-arguments-setter"},
  {"application-tail?", &module_info_x8rSast, "application-tail?"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<fab-list>", &module_info_x8rSast, "<fab-list>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"signature-specs", &module_info_x8rSast, "signature-specs"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"reference-frame-offset", &module_info_x8rSast, "reference-frame-offset"},
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
  {"<compile-time>", &module_info_x8rSast, "<compile-time>"},
  {"<module>", &module_info_x8rSast, "<module>"},
  {"buf", &module_info_gooScolsSbuf, "buf"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<runtime-reference>", &module_info_x8rSast, "<runtime-reference>"},
  {"<<", &module_info_gooSmath, "<<"},
  {"abs", &module_info_gooSmath, "abs"},
  {"put", &module_info_gooSioSport, "put"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"function-registers-setter", &module_info_x8rSast, "function-registers-setter"},
  {"/", &module_info_gooSmath, "/"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"binding-value-setter", &module_info_x8rSast, "binding-value-setter"},
  {"function-data-refs", &module_info_x8rSast, "function-data-refs"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
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
  {"=", &module_info_gooSmath, "="},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"monitor-type", &module_info_x8rSast, "monitor-type"},
  {"for", &module_info_gooSmacros, "for"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
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
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"function-index-setter", &module_info_x8rSast, "function-index-setter"},
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
  {"force-out", &module_info_gooSioSport, "force-out"},
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
  {"<module-loader>", &module_info_x8rSast, "<module-loader>"},
  {"<ast-macro-definition>", &module_info_x8rSast, "<ast-macro-definition>"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"&", &module_info_gooSmath, "&"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"@+", &module_info_gooSboot, "@+"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"constant-value", &module_info_x8rSast, "constant-value"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"monitor-info", &module_info_x8rSast, "monitor-info"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"*", &module_info_gooSmath, "*"},
  {"t?", &module_info_gooStypes, "t?"},
  {"binding-native-to?", &module_info_x8rSast, "binding-native-to?"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"locals-body-setter", &module_info_x8rSast, "locals-body-setter"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
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
  {"alternative-condition", &module_info_x8rSast, "alternative-condition"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"items", &module_info_gooScolsScol, "items"},
  {"compile-time-program", &module_info_x8rSast, "compile-time-program"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"environment-module", &module_info_x8rSast, "environment-module"},
  {"<fix-let>", &module_info_x8rSast, "<fix-let>"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"1+", &module_info_gooSmath, "1+"},
  {"<reference>", &module_info_x8rSast, "<reference>"},
  {"function-registers", &module_info_x8rSast, "function-registers"},
  {"binding-dotted?", &module_info_x8rSast, "binding-dotted?"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<regular-application>", &module_info_x8rSast, "<regular-application>"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"monitor-test", &module_info_x8rSast, "monitor-test"},
  {"<raw-constant>", &module_info_x8rSast, "<raw-constant>"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"as-lst", &module_info_x8rSast, "as-lst"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"loc", &module_info_gooSboot, "loc"},
  {"alternative-consequent", &module_info_x8rSast, "alternative-consequent"},
  {"do-module-loader-modules", &module_info_x8rSast, "do-module-loader-modules"},
  {"binding-dynamic-extent?-setter", &module_info_x8rSast, "binding-dynamic-extent?-setter"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"function-nary?", &module_info_x8rSast, "function-nary?"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {">>", &module_info_gooSmath, ">>"},
  {"^", &module_info_gooSmath, "^"},
  {"function-self-recursive?", &module_info_x8rSast, "function-self-recursive?"},
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
  {"env-values-setter", &Yx8rSast_evalYenv_values_setter},
  {"env-local-reference-value", &Yx8rSast_evalYenv_local_reference_value},
  {"env-binding-value-setter", &Yx8rSast_evalYenv_binding_value_setter},
  {"%lookup-binding", NULL},
  {"%dlvar-mod", NULL},
  {"arrange-arguments", &Yx8rSast_evalYarrange_arguments},
  {"%dlvar", NULL},
  {"%dlvar-nam", NULL},
  {"%define-binding", NULL},
  {"%ensure-binding", NULL},
  {"ifun", NULL},
  {"%binding-value", NULL},
  {"export-goo-method", &Yx8rSast_evalYexport_goo_method},
  {"%dlvar-setter", NULL},
  {"env-global-binding-bound?", &Yx8rSast_evalYenv_global_binding_boundQ},
  {"ast-eval-specs", &Yx8rSast_evalYast_eval_specs},
  {"env-parent", &Yx8rSast_evalYenv_parent},
  {"env-global-binding-value", &Yx8rSast_evalYenv_global_binding_value},
  {"$nul-loc-env", &Yx8rSast_evalYDnul_loc_env},
  {"env-runtime-value", &Yx8rSast_evalYenv_runtime_value},
  {"env-local-value", &Yx8rSast_evalYenv_local_value},
  {"---main-0---", NULL},
  {"env-binding-value", &Yx8rSast_evalYenv_binding_value},
  {"as-fun-name", &Yx8rSast_evalYas_fun_name},
  {"ast-eval", &Yx8rSast_evalYast_eval},
  {"env-values", &Yx8rSast_evalYenv_values},
  {"env-define-binding!", &Yx8rSast_evalYenv_define_bindingX},
  {"env-local-reference-value-setter", &Yx8rSast_evalYenv_local_reference_value_setter},
  {"env-function", &Yx8rSast_evalYenv_function},
  {"env-global-binding-value-setter", &Yx8rSast_evalYenv_global_binding_value_setter},
  {"env-local-value-setter", &Yx8rSast_evalYenv_local_value_setter},
  {"env-names", &Yx8rSast_evalYenv_names},
  {"---main-1---", NULL},
  {"env-frame!", &Yx8rSast_evalYenv_frameX},
  {"env-runtime-value-setter", &Yx8rSast_evalYenv_runtime_value_setter},
  {"env-parent-setter", &Yx8rSast_evalYenv_parent_setter},
  {"ast-eval-bound?", &Yx8rSast_evalYast_eval_boundQ},
  {"env-function-setter", &Yx8rSast_evalYenv_function_setter},
  {"*stack*", &Yx8rSast_evalYTstackT},
  {"%binding-value-setter", NULL},
  {"%binding-bound?", NULL},
  {"<loc-env>", &Yx8rSast_evalYLloc_envG},
  {"%dlvar-binding", NULL},
  {"env-names-setter", &Yx8rSast_evalYenv_names_setter},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%binding-value-setter", "%binding-value-setter"},
  {"%binding-value", "%binding-value"},
  {"ast-evaluate", "ast-evaluate"},
  {"%binding-bound?", "%binding-bound?"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_x8rSast_eval;
MODULE_INFO module_info_x8rSast_eval = {
  "x8r/ast-eval",
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
extern void load_module_goo (void);
extern void load_module_x8rSast (void);

/* EXPRESSION: */

extern void load_module_x8rSast_eval (void);

void load_module_x8rSast_eval (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_goo();
  load_module_x8rSast();

  (P)Yx8rSast_evalY___main_0___();
  (P)Yx8rSast_evalY___main_1___();

}

/* END OF GENERATED CODE. */
