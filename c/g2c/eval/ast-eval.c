/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/ast-eval */

EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
DEF(YevalSast_evalYenv_frameX,"eval/ast-eval","env-frame!");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YevalSast_evalYenv_function_setter,"eval/ast-eval","env-function-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
DEF(YevalSast_evalYenv_names,"eval/ast-eval","env-names");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYupperQ,"goo/math","upper?");
DEF(YevalSast_evalYenv_runtime_value,"eval/ast-eval","env-runtime-value");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
DEF(YevalSast_evalYast_eval_boundQ,"eval/ast-eval","ast-eval-bound?");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
DEF(YevalSast_evalYenv_local_reference_value_setter,"eval/ast-eval","env-local-reference-value-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYS,"goo/math","/");
DEF(YevalSast_evalYTstackT,"eval/ast-eval","*stack*");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
DEF(YevalSast_evalYenv_global_binding_value_setter,"eval/ast-eval","env-global-binding-value-setter");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YevalSast_evalYenv_local_reference_value,"eval/ast-eval","env-local-reference-value");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YevalSast_evalYenv_runtime_value_setter,"eval/ast-eval","env-runtime-value-setter");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YPprop,"goo/boot","%prop");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalSast_evalYenv_parent_setter,"eval/ast-eval","env-parent-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
DEF(YevalSast_evalYenv_function,"eval/ast-eval","env-function");
DEF(YevalSast_evalYenv_local_value_setter,"eval/ast-eval","env-local-value-setter");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(YevalSast_evalYas_fun_name,"eval/ast-eval","as-fun-name");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YevalSast_evalYast_eval,"eval/ast-eval","ast-eval");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooSmathYB,"goo/math","&");
DEF(YevalSast_evalYenv_binding_value_setter,"eval/ast-eval","env-binding-value-setter");
DEF(YevalSast_evalYenv_values_setter,"eval/ast-eval","env-values-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSast_evalYenv_values,"eval/ast-eval","env-values");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YevalSast_evalYenv_names_setter,"eval/ast-eval","env-names-setter");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
DEF(YevalSast_evalYexport_goo_method,"eval/ast-eval","export-goo-method");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YevalSast_evalYenv_binding_value,"eval/ast-eval","env-binding-value");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSast_evalYenv_global_binding_boundQ,"eval/ast-eval","env-global-binding-bound?");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YevalSast_evalYenv_local_value,"eval/ast-eval","env-local-value");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
DEF(YevalSast_evalYenv_define_bindingX,"eval/ast-eval","env-define-binding!");
EXT(YtT,"goo/boot","t*");
DEF(YevalSast_evalYLloc_envG,"eval/ast-eval","<loc-env>");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
DEF(YevalSast_evalYDnul_loc_env,"eval/ast-eval","$nul-loc-env");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
DEF(YevalSast_evalYenv_parent,"eval/ast-eval","env-parent");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(Ynil,"goo/boot","nil");
DEF(YevalSast_evalYenv_global_binding_value,"eval/ast-eval","env-global-binding-value");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YevalSast_evalYarrange_arguments,"eval/ast-eval","arrange-arguments");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
DEF(YevalSast_evalYast_eval_specs,"eval/ast-eval","ast-eval-specs");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ynew,"goo/boot","new");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_44);
DEFLIT(lit_63);
DEFLIT(lit_5);
DEFLIT(lit_38);
DEFLIT(lit_16);
DEFLIT(lit_6);
DEFLIT(lit_60);
DEFLIT(lit_0);
DEFLIT(lit_7);
DEFLIT(lit_33);
DEFLIT(lit_19);
DEFLIT(lit_54);
DEFLIT(lit_48);
DEFLIT(lit_79);
DEFLIT(lit_12);
DEFLIT(lit_69);
DEFLIT(lit_39);
DEFLIT(lit_70);
DEFLIT(lit_61);
DEFLIT(lit_62);
DEFLIT(lit_11);
DEFLIT(lit_81);
DEFLIT(lit_52);
DEFLIT(lit_76);
DEFLIT(lit_35);
DEFLIT(lit_45);
DEFLIT(lit_41);
DEFLIT(lit_15);
DEFLIT(lit_66);
DEFLIT(lit_24);
DEFLIT(lit_29);
DEFLIT(lit_20);
DEFLIT(lit_71);
DEFLIT(lit_21);
DEFLIT(lit_28);
DEFLIT(lit_13);
DEFLIT(lit_17);
DEFLIT(lit_46);
DEFLIT(lit_65);
DEFLIT(lit_42);
DEFLIT(lit_68);
DEFLIT(lit_59);
DEFLIT(lit_55);
DEFLIT(lit_75);
DEFLIT(lit_3);
DEFLIT(lit_58);
DEFLIT(lit_49);
DEFLIT(lit_64);
DEFLIT(lit_56);
DEFLIT(lit_37);
DEFLIT(lit_51);
DEFLIT(lit_78);
DEFLIT(lit_67);
DEFLIT(lit_43);
DEFLIT(lit_27);
DEFLIT(lit_30);
DEFLIT(lit_80);
DEFLIT(lit_77);
DEFLIT(lit_25);
DEFLIT(lit_47);
DEFLIT(lit_53);
DEFLIT(lit_40);
DEFLIT(lit_73);
DEFLIT(lit_2);
DEFLIT(lit_74);
DEFLIT(lit_10);
DEFLIT(lit_22);
DEFLIT(lit_31);
DEFLIT(lit_8);
DEFLIT(lit_9);
DEFLIT(lit_34);
DEFLIT(lit_26);
DEFLIT(lit_4);
DEFLIT(lit_14);
DEFLIT(lit_57);
DEFLIT(lit_50);
DEFLIT(lit_23);
DEFLIT(lit_72);
DEFLIT(lit_36);
DEFLIT(lit_32);
DEFLIT(lit_1);
DEFLIT(lit_18);

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
LOCFOR(fun_env_frameX_16);
LOCFOR(fun_env_local_value_17);
LOCFOR(fun_env_local_value_setter_18);
LOCFOR(fun_loop_19);
LOCFOR(fun_env_binding_value_20);
LOCFOR(fun_loop_21);
LOCFOR(fun_env_binding_value_setter_22);
LOCFOR(fun_ast_evaluate_23);
LOCFOR(fun_ast_eval_24);
LOCFOR(fun_ast_eval_25);
LOCFOR(fun_ast_eval_26);
LOCFOR(fun_loop_27);
LOCFOR(fun_ast_eval_specs_28);
FUNFOR(YevalSast_evalYarrange_arguments);
LOCFOR(fun_x_3192_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_as_fun_name_33);
LOCFOR(fun_as_fun_name_34);
LOCFOR(fun_as_fun_name_35);
LOCFOR(fun_as_fun_name_36);
LOCFOR(fun_as_fun_name_37);
LOCFOR(fun_as_fun_name_38);
LOCFOR(fun_39);
LOCFOR(fun_export_goo_method_40);
LOCFOR(fun_41);
LOCFOR(fun_ast_eval_42);
LOCFOR(fun_ast_eval_43);
LOCFOR(fun_env_local_reference_value_44);
LOCFOR(fun_env_local_reference_value_setter_45);
LOCFOR(fun_ast_eval_46);
LOCFOR(fun_ast_eval_47);
LOCFOR(fun_ast_eval_48);
LOCFOR(fun_ast_eval_49);
LOCFOR(fun_ast_eval_boundQ_50);
LOCFOR(fun_ast_eval_boundQ_51);
LOCFOR(fun_ast_eval_52);
LOCFOR(fun_ast_eval_53);
LOCFOR(fun_ast_eval_54);
LOCFOR(fun_ast_eval_55);
LOCFOR(fun_env_define_bindingX_56);
LOCFOR(fun_ast_eval_57);
LOCFOR(fun_ast_eval_58);
LOCFOR(fun_eval_59);
LOCFOR(fun_ast_eval_60);
LOCFOR(fun_eval_61);
LOCFOR(fun_ast_eval_62);
LOCFOR(fun_ast_eval_63);
LOCFOR(fun_ast_eval_64);
LOCFOR(fun_ast_eval_65);
LOCFOR(fun_66);
LOCFOR(fun_ast_eval_67);
LOCFOR(fun_68);
LOCFOR(fun_69);
LOCFOR(fun_ast_eval_70);
LOCFOR(fun_71);
LOCFOR(fun_72);
LOCFOR(fun_ast_eval_73);
LOCFOR(fun_ast_eval_74);
FUNFOR(YevalSastYinit_environment_for_eval);
extern P YevalSast_evalYPdefine_binding (P,P);
extern P YevalSast_evalYPlookup_binding (P,P);
extern P YevalSast_evalYPensure_binding (P,P);
extern P YevalSast_evalYPdlvar_binding (P);
extern P YevalSast_evalYPbinding_boundQ (P);
extern P YevalSast_evalYPbinding_value (P);
extern P YevalSast_evalYPbinding_value_setter (P,P);
extern P YevalSast_evalY___main_0___ ();
extern P YevalSast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_env_global_binding_value_0) {
  P b_;
  P boxF7817;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF7817 = T1;
  if (boxF7817 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYglobal_box_value),boxF7817);
    T2 = T3;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T4 = CALL2(1,VARREF(Yerror),LITREF(lit_2),T5);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_setter_1) {
  P value_,b_;
  P boxF7818;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF7818 = T1;
  boxF7818 = BOXFAB(boxF7818);
  T4 = BOXVAL(boxF7818);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLglobal_boxG));
    T6 = CALL2(1,VARREF(YevalSastYbinding_global_box_setter),T7,b_);
    T5 = BOXVAL(boxF7818) = T6;
  } else {
  }
  T9 = BOXVAL(boxF7818);
  T8 = CALL2(1,VARREF(YevalSastYglobal_box_value_setter),value_,T9);
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF7819;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF7819 = T1;
  if (boxF7819 != YPfalse) {
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_parent));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_parent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_function));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_names));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSast_evalYenv_values));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSast_evalYenv_values));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_frameX_16) {
  P env_,function_,names_,args_;
  P valuesF7820;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(function_, 1);
  ARG(names_, 2);
  ARG(args_, 3);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),args_);
  T2 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T3,VARREF(Ynul));
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_intoX),T2,args_);
  valuesF7820 = T1;
  T4 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),env_,VARREF(YevalSast_evalYenv_function),function_,VARREF(YevalSast_evalYenv_values),valuesF7820,VARREF(YevalSast_evalYenv_names),names_);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_local_value_17) {
  P env_,i_,j_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(i_, 1);
  ARG(j_, 2);
loop:
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

FUNCODEDEF(fun_env_local_value_setter_18) {
  P v_,env_,i_,j_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(i_, 2);
  ARG(j_, 3);
loop:
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

FUNCODEDEF(fun_loop_19) {
  P names_,i_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_evalYenv_parent),FREEREF(0));
    T2 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),T3,FREEREF(1));
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(1),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YevalSast_evalYenv_values),FREEREF(0));
      T7 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T8,i_);
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

FUNCODEDEF(fun_env_binding_value_20) {
  P env_,name_;
  P loopF7821;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),env_,VARREF(YevalSast_evalYDnul_loc_env));
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    T3 = FUNSHELL(1,fun_loop_19,3);
    loopF7821 = T3;
    FUNINIT(loopF7821, 3,env_,name_,loopF7821);
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
    T4 = CALL2(0,loopF7821,T5,YPint((P)0));
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_21) {
  P names_,i_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_evalYenv_parent),FREEREF(1));
    T2 = CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),FREEREF(0),T3,FREEREF(2));
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(2),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YevalSast_evalYenv_values),FREEREF(1));
      T7 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),FREEREF(0),T8,i_);
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

FUNCODEDEF(fun_env_binding_value_setter_22) {
  P v_,env_,name_;
  P loopF7822;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_21,4);
  loopF7822 = T1;
  FUNINIT(loopF7822, 4,v_,env_,name_,loopF7822);
  T3 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
  T2 = CALL2(0,loopF7822,T3,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_evaluate_23) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),e_,VARREF(YevalSast_evalYDnul_loc_env));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_24) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
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
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_26) {
  P e_,ee_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(ee_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYcompile_time_program),e_);
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_27) {
  P res_,specs_,i_;
  P typeF7824;
  P specF7823;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
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
    specF7823 = T4;
    if (specF7823 != YPfalse) {
      T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),specF7823,FREEREF(1));
      T6 = T7;
    } else {
      T6 = VARREF(YLanyG);
    }
    typeF7824 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYpair),typeF7824,res_);
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

FUNCODEDEF(fun_ast_eval_specs_28) {
  P specs_,naryQ_,env_;
  P loopF7826;
  P nreqF7825;
  P T0,T1,T2,T3,T4,T5,T6,T7;
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
  nreqF7825 = T1;
  T6 = FUNSHELL(1,fun_loop_27,3);
  loopF7826 = T6;
  FUNINIT(loopF7826, 3,nreqF7825,env_,loopF7826);
  T7 = CALL3(0,loopF7826,Ynil,specs_,YPint((P)0));
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF7827;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  countF7827 = T1;
  if (naryQ_ != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagYL),countF7827,arity_);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
      T5 = CALL4(1,VARREF(Yerror),LITREF(lit_45),T6,args_,arity_);
      T3 = T5;
    } else {
      T8 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,YPint((P)0),arity_);
      T10 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,arity_,countF7827);
      T9 = CALL1(1,VARREF(Ylst),T10);
      T7 = CALL2(1,VARREF(YgooScolsSseqYcat2),T8,T9);
      T3 = T7;
    }
    T2 = T3;
  } else {
    T12 = CALL2(1,VARREF(YgooSmathYNEE),countF7827,arity_);
    if (T12 != YPfalse) {
      T14 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
      T13 = CALL4(1,VARREF(Yerror),LITREF(lit_46),T14,args_,arity_);
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

FUNCODEDEF(fun_x_3192_30) {
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

FUNCODEDEF(fun_31) {
  P return_;
  P x_3191F7842;
  P x_3191F7841;
  P x_3191F7840;
  P x_3191F7839;
  P x_3191F7838;
  P x_3191F7837;
  P x_3191F7836;
  P bodyF7835;
  P namesF7834;
  P arityF7833;
  P naryQF7832;
  P fF7831;
  P envF7830;
  P x_3191F7829;
  P x_3192F7828;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3192_30,1);
  x_3192F7828 = T1;
  FUNINIT(x_3192F7828, 1,return_);
  x_3191F7829 = FREEREF(0);
  envF7830 = YPfalse;
  envF7830 = BOXFAB(envF7830);
  fF7831 = YPfalse;
  fF7831 = BOXFAB(fF7831);
  naryQF7832 = YPfalse;
  naryQF7832 = BOXFAB(naryQF7832);
  arityF7833 = YPfalse;
  arityF7833 = BOXFAB(arityF7833);
  namesF7834 = YPfalse;
  namesF7834 = BOXFAB(namesF7834);
  bodyF7835 = YPfalse;
  bodyF7835 = BOXFAB(bodyF7835);
  T15 = CALL2(1,VARREF(YisaQ),x_3191F7829,VARREF(YLlstG));
  if (T15 != YPfalse) {
    T17 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3191F7829,LITREF(lit_51),x_3192F7828);
    x_3191F7836 = T17;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3191F7836,x_3192F7828);
    BOXVAL(envF7830) = T19;
    T20 = CALL1(1,VARREF(Ytail),x_3191F7836);
    x_3191F7837 = T20;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3191F7837,x_3192F7828);
    BOXVAL(fF7831) = T22;
    T23 = CALL1(1,VARREF(Ytail),x_3191F7837);
    x_3191F7838 = T23;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3191F7838,x_3192F7828);
    BOXVAL(naryQF7832) = T25;
    T26 = CALL1(1,VARREF(Ytail),x_3191F7838);
    x_3191F7839 = T26;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3191F7839,x_3192F7828);
    BOXVAL(arityF7833) = T28;
    T29 = CALL1(1,VARREF(Ytail),x_3191F7839);
    x_3191F7840 = T29;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3191F7840,x_3192F7828);
    BOXVAL(namesF7834) = T31;
    T32 = CALL1(1,VARREF(Ytail),x_3191F7840);
    x_3191F7841 = T32;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3191F7841,x_3192F7828);
    BOXVAL(bodyF7835) = T34;
    T35 = CALL1(1,VARREF(Ytail),x_3191F7841);
    x_3191F7842 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3191F7842,x_3192F7828);
    T33 = T36;
    T30 = T33;
    T27 = T30;
    T24 = T27;
    T21 = T24;
    T18 = T21;
    T16 = T18;
  } else {
    T37 = CALL2(1,x_3192F7828,LITREF(lit_52),x_3191F7829);
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
  T57 = CALL4(1,VARREF(YgooSmacrosYcat),T58,T59,T60,Ynil);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T51 = CALLN(1,VARREF(YgooSmacrosYcat),6,T52,T53,T54,T55,T56,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T66 = CALL2(1,VARREF(YgooSmacrosYcat),T67,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T62 = CALL4(1,VARREF(YgooSmacrosYcat),T63,T64,T65,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
  T76 = BOXVAL(envF7830);
  T75 = CALL1(1,VARREF(Ylst),T76);
  T78 = BOXVAL(fF7831);
  T77 = CALL1(1,VARREF(Ylst),T78);
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T83 = BOXVAL(namesF7834);
  T82 = CALL1(1,VARREF(Ylst),T83);
  T86 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T88 = CALL3(1,VARREF(YgooSmacrosYcat),T89,T90,Ynil);
  T87 = CALL1(1,VARREF(Ylst),T88);
  T85 = CALL3(1,VARREF(YgooSmacrosYcat),T86,T87,Ynil);
  T84 = CALL1(1,VARREF(Ylst),T85);
  T80 = CALL4(1,VARREF(YgooSmacrosYcat),T81,T82,T84,Ynil);
  T79 = CALL1(1,VARREF(Ylst),T80);
  T93 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T97 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T98 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T96 = CALL3(1,VARREF(YgooSmacrosYcat),T97,T98,Ynil);
  T95 = CALL1(1,VARREF(Ylst),T96);
  T92 = CALL4(1,VARREF(YgooSmacrosYcat),T93,T94,T95,Ynil);
  T91 = CALL1(1,VARREF(Ylst),T92);
  T73 = CALLN(1,VARREF(YgooSmacrosYcat),6,T74,T75,T77,T79,T91,Ynil);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T71,T72,Ynil);
  T68 = CALL1(1,VARREF(Ylst),T69);
  T102 = BOXVAL(bodyF7835);
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

FUNCODEDEF(fun_as_fun_name_33) {
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

FUNCODEDEF(fun_as_fun_name_34) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_debug_name),x_);
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_35) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YevalSastYbinding_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_36) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),x_);
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_37) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_fun_name_38) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_39) {
  P arg_vector_;
  P frameF7845;
  P nmsF7844;
  P argsF7843;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  NARGS(arg_vector_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),arg_vector_);
  T1 = CALL4(1,VARREF(YevalSast_evalYarrange_arguments),FREEREF(0),FREEREF(1),FREEREF(2),T2);
  argsF7843 = T1;
  T4 = (P)YPnext_methods();
  nmsF7844 = T4;
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T7 = CALL2(1,VARREF(YgooScolsSseqYcat2),FREEREF(4),T8);
  T10 = CALL1(1,VARREF(Ylst),nmsF7844);
  T9 = CALL2(1,VARREF(YgooScolsSseqYcat2),argsF7843,T10);
  T6 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),FREEREF(3),FREEREF(0),T7,T9);
  frameF7845 = T6;
  T11 = CALL1(1,FREEREF(5),frameF7845);
  T5 = T11;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_export_goo_method_40) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF7847;
  P arityF7846;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
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
  arityF7846 = T1;
  T6 = FUNFAB(fun_39,6,f_,naryQ_,arityF7846,env_,names_,body_);
  efunF7847 = T6;
  T7 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
  CALL2(1,VARREF(Yfun_name_setter),T7,efunF7847);
  T9 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (value_ != YPfalse) {
    T11 = CALL2(1,VARREF(YevalSast_evalYast_eval),value_,env_);
    T10 = T11;
  } else {
    T10 = VARREF(YLanyG);
  }
  T8 = CALLN(1,VARREF(Ynew),13,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),T9,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),arityF7846,VARREF(Ysig_val),T10,VARREF(Ysig_unification_vars),Ynil);
  CALL2(1,VARREF(Yfun_sig_setter),T8,efunF7847);
  T5 = efunF7847;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P env_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_42) {
  P e_,env_;
  P evalF7849;
  P paramsF7848;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF7848 = T1;
  T3 = FUNFAB(fun_41,1,e_);
  evalF7849 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF7848);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF7848);
  T7 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  T8 = CALL1(1,VARREF(YevalSastYfunction_value),e_);
  T4 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,e_,T5,T6,T7,T8,evalF7849,env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_43) {
  P e_,env_;
  P specsF7853;
  P namesF7852;
  P naryQF7851;
  P paramsF7850;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF7850 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  naryQF7851 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF7850);
  namesF7852 = T5;
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF7850);
  T7 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),T8,naryQF7851,env_);
  specsF7853 = T7;
  T10 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),e_);
  T9 = CALLN(1,VARREF(Yfab_gen),6,T10,namesF7852,specsF7853,naryQF7851,VARREF(YLanyG),Ynil);
  T6 = T9;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_44) {
  P env_,ref_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(env_, 0);
  ARG(ref_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YevalSastYreference_frame_offset),ref_);
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_local_value),env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_setter_45) {
  P val_,env_,ref_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(val_, 0);
  ARG(env_, 1);
  ARG(ref_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YevalSastYreference_frame_offset),ref_);
  T0 = CALL4(1,VARREF(YevalSast_evalYenv_local_value_setter),val_,env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_46) {
  P e_,env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_local_reference_value),env_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_47) {
  P e_,env_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_48) {
  P e_,env_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_locative),T2);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_49) {
  P e_,env_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),T2);
  T0 = CALL3(1,VARREF(YevalSast_evalYast_eval_boundQ),e_,T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_50) {
  P e_,binding_,env_;
  P x_3194F7855;
  P x_3193F7854;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_3193F7854 = T1;
  x_3194F7855 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_3194F7855,x_3193F7854,LITREF(lit_74));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_boundQ),binding_);
    T3 = T5;
  } else {
    T3 = YPtrue;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_51) {
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

FUNCODEDEF(fun_ast_eval_52) {
  P e_,env_;
  P valueF7856;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF7856 = T1;
  T4 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),valueF7856,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_53) {
  P e_,env_;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_54) {
  P e_,env_;
  P valueF7857;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF7857 = T1;
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),valueF7857,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_55) {
  P e_,env_;
  P valueF7858;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF7858 = T1;
  T4 = CALL1(1,VARREF(YevalSastYassignment_reference),e_);
  T3 = CALL3(1,VARREF(YevalSast_evalYenv_local_reference_value_setter),valueF7858,env_,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_56) {
  P b_,v_;
  P x_3196F7860;
  P x_3195F7859;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_3195F7859 = T1;
  x_3196F7860 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_3196F7860,x_3195F7859,LITREF(lit_76));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_locative),b_);
    T5 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),v_,T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,x_3196F7860,x_3195F7859,LITREF(lit_74));
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),v_,b_);
      T7 = T9;
    } else {
      T11 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
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

FUNCODEDEF(fun_ast_eval_57) {
  P e_,env_;
  P valueF7861;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF7861 = T1;
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSast_evalYenv_define_bindingX),T3,valueF7861);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_58) {
  P e_,env_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
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

FUNCODEDEF(fun_eval_59) {
  P e_;
  P valF7863;
  P nxtF7862;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),e_);
  nxtF7862 = T1;
  T4 = CALL1(1,VARREF(Yhead),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,FREEREF(0));
  valF7863 = T3;
  T6 = CALL1(1,VARREF(YgooSmacrosYemptyQ),nxtF7862);
  if (T6 != YPfalse) {
    T5 = valF7863;
  } else {
    a1 = nxtF7862;
    e_ = a1;
    goto loop;
    T5 = T7;
  }
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_60) {
  P e_,env_;
  P evalF7864;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_59,2);
  evalF7864 = T1;
  FUNINIT(evalF7864, 2,env_,evalF7864);
  T2 = CALL1(0,evalF7864,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_61) {
  P res_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
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
    T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,FREEREF(0));
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

FUNCODEDEF(fun_ast_eval_62) {
  P e_,env_;
  P evalF7865;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_61,2);
  evalF7865 = T1;
  FUNINIT(evalF7865, 2,env_,evalF7865);
  T2 = CALL2(0,evalF7865,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_63) {
  P e_,env_;
  P argsF7867;
  P fF7866;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  fF7866 = T1;
  T5 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T4 = CALL2(1,VARREF(YevalSast_evalYast_eval),T5,env_);
  argsF7867 = T4;
  T6 = CALL3(1,VARREF(YgooSmacrosYnapp),fF7866,YPfalse,argsF7867);
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_64) {
  P e_,env_;
  P argsF7871;
  P fF7870;
  P nmsF7869;
  P bF7868;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bF7868 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),bF7868);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_60));
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_60));
    nmsF7869 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nmsF7869,VARREF(Ynul));
    if (T8 != YPfalse) {
      T7 = YPfalse;
    } else {
      T7 = nmsF7869;
    }
    T5 = T7;
    T2 = T5;
  } else {
    T10 = CALL1(1,VARREF(YevalSastYbinding_info),bF7868);
    fF7870 = T10;
    T13 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T12 = CALL2(1,VARREF(YevalSast_evalYast_eval),T13,env_);
    argsF7871 = T12;
    T14 = CALL3(1,VARREF(YgooSmacrosYnapp),fF7870,YPfalse,argsF7871);
    T11 = T14;
    T9 = T11;
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_65) {
  P e_,env_;
  P nenvF7873;
  P argsF7872;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  argsF7872 = T1;
  T6 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),T6);
  T4 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T5,argsF7872);
  nenvF7873 = T4;
  T8 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,nenvF7873);
  T3 = T7;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  P name_,value_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(value_, 1);
loop:
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_67) {
  P e_,env_;
  P new_envF7875;
  P bindingsF7874;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  bindingsF7874 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF7874);
  T6 = CALL1(1,VARREF(YgooSruntimeYalways),VARREF(Ynul));
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,bindingsF7874);
  T3 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T4,T5);
  new_envF7875 = T3;
  T7 = FUNFAB(fun_66,1,new_envF7875);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF7874);
  T10 = CALL2(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_evalYast_eval),new_envF7875);
  T11 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),T10,T11);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T7,T8,T9);
  T13 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T12 = CALL2(1,VARREF(YevalSast_evalYast_eval),T13,new_envF7875);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P env_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_7));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P exitF7877;
  P rprocF7876;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNFAB(fun_68,1,return_);
  rprocF7876 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,rprocF7876,T4,T5,YPfalse,YPfalse,rprocF7876,FREEREF(0));
  exitF7877 = T3;
  T8 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),FREEREF(1));
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,FREEREF(0));
  T6 = CALL1(1,T7,exitF7877);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_70) {
  P e_,env_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_69,2,env_,e_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_73) {
  P e_,env_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_71,2,e_,env_);
  T2 = FUNFAB(fun_72,2,e_,env_);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_74) {
  P e_,env_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
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
  P bF7878;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_60),YPfalse,LITREF(lit_80));
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_81),YPfalse,LITREF(lit_74));
  bF7878 = T1;
  T2 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),VARREF(YgooSmacrosYpair),bF7878);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YevalSast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF7879;
  P T0,T1,T2,T3,T4;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T2);
  eF7879 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALL4(1,VARREF(YevalSastYast_define_binding),eF7879,T4,YPfalse,LITREF(lit_74));
  T0 = T3;
  return T0;
}

P YevalSast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF7880;
  P T0,T1,T2,T3,T4;
  P a1,a2;
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = CALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T2);
  eF7880 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = CALL2(1,VARREF(YevalSastYfind_binding),T4,eF7880);
  T0 = T3;
  return T0;
}

P YevalSast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF7881;
  P T0,T1,T2,T3;
  P a1,a2;
loop:
  T1 = (P)YevalSast_evalYPlookup_binding(raw_mod_,raw_nam_);
  tmpF7881 = T1;
  if (tmpF7881 != YPfalse) {
    T2 = tmpF7881;
  } else {
    T3 = (P)YevalSast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T2 = T3;
  }
  T0 = T2;
  return T0;
}

P YevalSast_evalYPdlvar_binding(P dlvar_) {
  P bF7882;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
loop:
  T1 = (P)YevalSast_evalYPdlvar(dlvar_);
  bF7882 = T1;
  T4 = (P)YPiu(YPint((P)0));
  T3 = (P)YOEE(bF7882,T4);
  if (T3 != YPfalse) {
    T7 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
    T8 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
    T6 = (P)YevalSast_evalYPensure_binding(T7,T8);
    T5 = (P)YevalSast_evalYPdlvar_setter(T6,dlvar_);
    T2 = T5;
  } else {
    T2 = bF7882;
  }
  T0 = T2;
  return T0;
}

P YevalSast_evalYPbinding_boundQ(P dlvar_) {
  P tmpF7884;
  P bF7883;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
loop:
  T2 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
  T3 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
  T1 = (P)YevalSast_evalYPlookup_binding(T2,T3);
  bF7883 = T1;
  tmpF7884 = bF7883;
  if (tmpF7884 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_info),bF7883);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  T0 = T4;
  return T0;
}

P YevalSast_evalYPbinding_value(P dlvar_) {
  P bindingF7885;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
loop:
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  bindingF7885 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_kind),bindingF7885);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_locative),bindingF7885);
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T6);
    T2 = T5;
  } else {
    T7 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),bindingF7885);
    T2 = T7;
  }
  T0 = T2;
  return T0;
}

P YevalSast_evalYPbinding_value_setter(P val_,P dlvar_) {
  P bindingF7886;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
loop:
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  bindingF7886 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_kind),bindingF7886);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_76));
  if (T3 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_locative),bindingF7886);
    T5 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),val_,T6);
    T2 = T5;
  } else {
    T7 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),val_,bindingF7886);
    T2 = T7;
  }
  T0 = T2;
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
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267;
loop:
  lit_0 = YPPsym((P)"env-global-binding-value");
  lit_1 = YPPsym((P)"b");
  lit_2 = YPsb((P)"Unbound binding: %=");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_0 = YPmet(FUNCODEREF(fun_env_global_binding_value_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSast_evalYenv_global_binding_value);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSast_evalYenv_global_binding_value);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_env_global_binding_value_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSast_evalYenv_global_binding_value,T1);
  lit_3 = YPPsym((P)"env-global-binding-value-setter");
  lit_4 = YPPsym((P)"value");
  T5 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_setter_1 = YPmet(FUNCODEREF(fun_env_global_binding_value_setter_1),LITREF(lit_3),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSast_evalYenv_global_binding_value_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSast_evalYenv_global_binding_value_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_env_global_binding_value_setter_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSast_evalYenv_global_binding_value_setter,T6);
  lit_5 = YPPsym((P)"env-global-binding-bound?");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_env_global_binding_boundQ_2 = YPmet(FUNCODEREF(fun_env_global_binding_boundQ_2),LITREF(lit_5),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSast_evalYenv_global_binding_boundQ);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSast_evalYenv_global_binding_boundQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_env_global_binding_boundQ_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSast_evalYenv_global_binding_boundQ,T11);
  lit_6 = YPPsym((P)"env-runtime-value");
  lit_7 = YPPsym((P)"x");
  T15 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_3 = YPmet(FUNCODEREF(fun_env_runtime_value_3),LITREF(lit_6),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSast_evalYenv_runtime_value);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSast_evalYenv_runtime_value);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_env_runtime_value_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSast_evalYenv_runtime_value,T16);
  lit_8 = YPPsym((P)"env-runtime-value-setter");
  lit_9 = YPPsym((P)"v");
  T20 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_setter_4 = YPmet(FUNCODEREF(fun_env_runtime_value_setter_4),LITREF(lit_8),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSast_evalYenv_runtime_value_setter);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSast_evalYenv_runtime_value_setter);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_env_runtime_value_setter_4;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSast_evalYenv_runtime_value_setter,T21);
  lit_10 = YPPsym((P)"<loc-env>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = CALL2(1,VARREF(Yfab_class),LITREF(lit_10),T26);
  VARSET(YevalSast_evalYLloc_envG,T25);
  lit_11 = YPPsym((P)"env-parent");
  lit_12 = YPPsym((P)"_x");
  T27 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_parent_5 = YPmet(FUNCODEREF(fun_env_parent_5),LITREF(lit_11),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSast_evalYenv_parent);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSast_evalYenv_parent);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_env_parent_5;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSast_evalYenv_parent,T28);
  lit_13 = YPPsym((P)"env-parent-setter");
  lit_14 = YPPsym((P)"_z");
  T32 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_parent_setter_6 = YPmet(FUNCODEREF(fun_env_parent_setter_6),LITREF(lit_13),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YevalSast_evalYenv_parent_setter);
  if (T35 != YPfalse) {
    T34 = VARREF(YevalSast_evalYenv_parent_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_env_parent_setter_6;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSast_evalYenv_parent_setter,T33);
  T37 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T38 = fun_7;
  CALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),VARREF(YevalSast_evalYenv_parent_setter),VARREF(YLanyG),T38);
  lit_15 = YPPsym((P)"env-function");
  T39 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_function_8 = YPmet(FUNCODEREF(fun_env_function_8),LITREF(lit_15),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YevalSast_evalYenv_function);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSast_evalYenv_function);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_env_function_8;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSast_evalYenv_function,T40);
  lit_16 = YPPsym((P)"env-function-setter");
  T44 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_function_setter_9 = YPmet(FUNCODEREF(fun_env_function_setter_9),LITREF(lit_16),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YevalSast_evalYenv_function_setter);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSast_evalYenv_function_setter);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_env_function_setter_9;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSast_evalYenv_function_setter,T45);
  T49 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T50 = fun_10;
  CALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_function),VARREF(YevalSast_evalYenv_function_setter),VARREF(YLanyG),T50);
  lit_17 = YPPsym((P)"env-names");
  T51 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_names_11 = YPmet(FUNCODEREF(fun_env_names_11),LITREF(lit_17),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YevalSast_evalYenv_names);
  if (T54 != YPfalse) {
    T53 = VARREF(YevalSast_evalYenv_names);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_env_names_11;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YevalSast_evalYenv_names,T52);
  lit_18 = YPPsym((P)"env-names-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLlstG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_names_setter_12 = YPmet(FUNCODEREF(fun_env_names_setter_12),LITREF(lit_18),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YevalSast_evalYenv_names_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(YevalSast_evalYenv_names_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_env_names_setter_12;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YevalSast_evalYenv_names_setter,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T62 = fun_13;
  CALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_names),VARREF(YevalSast_evalYenv_names_setter),VARREF(YLlstG),T62);
  lit_19 = YPPsym((P)"env-values");
  T63 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_values_14 = YPmet(FUNCODEREF(fun_env_values_14),LITREF(lit_19),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YevalSast_evalYenv_values);
  if (T66 != YPfalse) {
    T65 = VARREF(YevalSast_evalYenv_values);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_env_values_14;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YevalSast_evalYenv_values,T64);
  lit_20 = YPPsym((P)"env-values-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YLrepG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_values_setter_15 = YPmet(FUNCODEREF(fun_env_values_setter_15),LITREF(lit_20),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YevalSast_evalYenv_values_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YevalSast_evalYenv_values_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_env_values_setter_15;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YevalSast_evalYenv_values_setter,T69);
  CALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_values),VARREF(YevalSast_evalYenv_values_setter),VARREF(YLrepG),VARREF(YPprop_unbound_error));
  T73 = CALL1(1,VARREF(Ynew),VARREF(YevalSast_evalYLloc_envG));
  VARSET(YevalSast_evalYDnul_loc_env,T73);
  lit_21 = YPPsym((P)"env-frame!");
  lit_22 = YPPsym((P)"env");
  lit_23 = YPPsym((P)"function");
  lit_24 = YPPsym((P)"names");
  lit_25 = YPPsym((P)"args");
  T74 = YPsig(YPPlist(4,LITREF(lit_22),LITREF(lit_23),LITREF(lit_24),LITREF(lit_25)),YPPlist(4,VARREF(YevalSast_evalYLloc_envG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YevalSast_evalYLloc_envG),Ynil);
  fun_env_frameX_16 = YPmet(FUNCODEREF(fun_env_frameX_16),LITREF(lit_21),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YevalSast_evalYenv_frameX);
  if (T77 != YPfalse) {
    T76 = VARREF(YevalSast_evalYenv_frameX);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_env_frameX_16;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YevalSast_evalYenv_frameX,T75);
  lit_26 = YPPsym((P)"env-local-value");
  lit_27 = YPPsym((P)"i");
  lit_28 = YPPsym((P)"j");
  T79 = YPsig(YPPlist(3,LITREF(lit_22),LITREF(lit_27),LITREF(lit_28)),YPPlist(3,VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_value_17 = YPmet(FUNCODEREF(fun_env_local_value_17),LITREF(lit_26),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YevalSast_evalYenv_local_value);
  if (T82 != YPfalse) {
    T81 = VARREF(YevalSast_evalYenv_local_value);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_env_local_value_17;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YevalSast_evalYenv_local_value,T80);
  lit_29 = YPPsym((P)"env-local-value-setter");
  T84 = YPsig(YPPlist(4,LITREF(lit_9),LITREF(lit_22),LITREF(lit_27),LITREF(lit_28)),YPPlist(4,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_env_local_value_setter_18 = YPmet(FUNCODEREF(fun_env_local_value_setter_18),LITREF(lit_29),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YevalSast_evalYenv_local_value_setter);
  if (T87 != YPfalse) {
    T86 = VARREF(YevalSast_evalYenv_local_value_setter);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_env_local_value_setter_18;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YevalSast_evalYenv_local_value_setter,T85);
  lit_30 = YPPsym((P)"env-binding-value");
  lit_31 = YPPsym((P)"name");
  lit_32 = YPPsym((P)"loop");
  T90 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_19 = YPmet(FUNCODEREF(fun_loop_19),LITREF(lit_32),T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_31)),YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_binding_value_20 = YPmet(FUNCODEREF(fun_env_binding_value_20),LITREF(lit_30),T89,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalSast_evalYenv_binding_value);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSast_evalYenv_binding_value);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_env_binding_value_20;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSast_evalYenv_binding_value,T91);
  lit_33 = YPPsym((P)"env-binding-value-setter");
  T96 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_21 = YPmet(FUNCODEREF(fun_loop_21),LITREF(lit_32),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(3,LITREF(lit_9),LITREF(lit_22),LITREF(lit_31)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_binding_value_setter_22 = YPmet(FUNCODEREF(fun_env_binding_value_setter_22),LITREF(lit_33),T95,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSast_evalYenv_binding_value_setter);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSast_evalYenv_binding_value_setter);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_env_binding_value_setter_22;
  T97 = CALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSast_evalYenv_binding_value_setter,T97);
  lit_34 = YPPsym((P)"ast-evaluate");
  lit_35 = YPPsym((P)"e");
  T101 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_evaluate_23 = YPmet(FUNCODEREF(fun_ast_evaluate_23),LITREF(lit_34),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSastYast_evaluate);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSastYast_evaluate);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_ast_evaluate_23;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSastYast_evaluate,T102);
  lit_36 = YPPsym((P)"ast-eval");
  T107 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T106 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_36),T107,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSast_evalYast_eval,T106);
  T108 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_24 = YPmet(FUNCODEREF(fun_ast_eval_24),LITREF(lit_36),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YevalSast_evalYast_eval);
  if (T111 != YPfalse) {
    T110 = VARREF(YevalSast_evalYast_eval);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_ast_eval_24;
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YevalSast_evalYast_eval,T109);
  T113 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_25 = YPmet(FUNCODEREF(fun_ast_eval_25),LITREF(lit_36),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YevalSast_evalYast_eval);
  if (T116 != YPfalse) {
    T115 = VARREF(YevalSast_evalYast_eval);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_ast_eval_25;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YevalSast_evalYast_eval,T114);
  lit_37 = YPPsym((P)"ee");
  T118 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_37)),YPPlist(2,VARREF(YevalSastYLcompile_timeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_26 = YPmet(FUNCODEREF(fun_ast_eval_26),LITREF(lit_36),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YevalSast_evalYast_eval);
  if (T121 != YPfalse) {
    T120 = VARREF(YevalSast_evalYast_eval);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_ast_eval_26;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YevalSast_evalYast_eval,T119);
  lit_38 = YPPsym((P)"ast-eval-specs");
  lit_39 = YPPsym((P)"specs");
  lit_40 = YPPsym((P)"nary?");
  lit_41 = YPPsym((P)"res");
  T124 = YPsig(YPPlist(3,LITREF(lit_41),LITREF(lit_39),LITREF(lit_27)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_27 = YPmet(FUNCODEREF(fun_loop_27),LITREF(lit_32),T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(3,LITREF(lit_39),LITREF(lit_40),LITREF(lit_22)),YPPlist(3,VARREF(YLlstG),VARREF(YLlogG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_specs_28 = YPmet(FUNCODEREF(fun_ast_eval_specs_28),LITREF(lit_38),T123,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalSast_evalYast_eval_specs);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSast_evalYast_eval_specs);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_ast_eval_specs_28;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSast_evalYast_eval_specs,T125);
  T129 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  VARSET(YevalSast_evalYTstackT,T129);
  lit_42 = YPPsym((P)"arrange-arguments");
  lit_43 = YPPsym((P)"f");
  lit_44 = YPPsym((P)"arity");
  lit_45 = YPsb((P)"%= called with %=; needs at least %d arguments");
  lit_46 = YPsb((P)"%= called with %=; needs %d arguments");
  T130 = YPsig(YPPlist(4,LITREF(lit_43),LITREF(lit_40),LITREF(lit_44),LITREF(lit_25)),YPPlist(4,VARREF(YLanyG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  YevalSast_evalYarrange_arguments = YPmet(FUNCODEREF(YevalSast_evalYarrange_arguments),LITREF(lit_42),T130,ENVNUL,PNUL,YPfalse);
  T131 = YevalSast_evalYarrange_arguments;
  VARSET(YevalSast_evalYarrange_arguments,T131);
  lit_47 = YPPsym((P)"exp");
  lit_48 = YPPsym((P)"return");
  lit_49 = YPPsym((P)"x-3192");
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
  T134 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_25)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3192_30 = YPmet(FUNCODEREF(fun_x_3192_30),LITREF(lit_49),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T135 = fun_32;
  YPmacro(YPPsym((P)"eval/ast-eval"),YPPsym((P)"ifun"),T135);
  lit_65 = YPPsym((P)"as-fun-name");
  T136 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_33 = YPmet(FUNCODEREF(fun_as_fun_name_33),LITREF(lit_65),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T139 != YPfalse) {
    T138 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_as_fun_name_33;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YevalSast_evalYas_fun_name,T137);
  T141 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_34 = YPmet(FUNCODEREF(fun_as_fun_name_34),LITREF(lit_65),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T144 != YPfalse) {
    T143 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_as_fun_name_34;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YevalSast_evalYas_fun_name,T142);
  T146 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_35 = YPmet(FUNCODEREF(fun_as_fun_name_35),LITREF(lit_65),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T149 != YPfalse) {
    T148 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_as_fun_name_35;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YevalSast_evalYas_fun_name,T147);
  T151 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_36 = YPmet(FUNCODEREF(fun_as_fun_name_36),LITREF(lit_65),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_as_fun_name_36;
  T152 = CALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSast_evalYas_fun_name,T152);
  T156 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_as_fun_name_37 = YPmet(FUNCODEREF(fun_as_fun_name_37),LITREF(lit_65),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_as_fun_name_37;
  T157 = CALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSast_evalYas_fun_name,T157);
  T161 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_38 = YPmet(FUNCODEREF(fun_as_fun_name_38),LITREF(lit_65),T161,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T164 != YPfalse) {
    T163 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_as_fun_name_38;
  T162 = CALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YevalSast_evalYas_fun_name,T162);
  lit_66 = YPPsym((P)"export-goo-method");
  lit_67 = YPPsym((P)"body");
  T167 = YPsig(YPPlist(1,LITREF(lit_54)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(7,LITREF(lit_43),LITREF(lit_24),LITREF(lit_39),LITREF(lit_40),LITREF(lit_4),LITREF(lit_67),LITREF(lit_22)),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YLanyG),Ynil);
  fun_export_goo_method_40 = YPmet(FUNCODEREF(fun_export_goo_method_40),LITREF(lit_66),T166,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSast_evalYexport_goo_method);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSast_evalYexport_goo_method);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_export_goo_method_40;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSast_evalYexport_goo_method,T168);
  T173 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_42 = YPmet(FUNCODEREF(fun_ast_eval_42),LITREF(lit_36),T172,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YevalSast_evalYast_eval);
  if (T176 != YPfalse) {
    T175 = VARREF(YevalSast_evalYast_eval);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_ast_eval_42;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YevalSast_evalYast_eval,T174);
  T178 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLast_genericG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_43 = YPmet(FUNCODEREF(fun_ast_eval_43),LITREF(lit_36),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YevalSast_evalYast_eval);
  if (T181 != YPfalse) {
    T180 = VARREF(YevalSast_evalYast_eval);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_ast_eval_43;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YevalSast_evalYast_eval,T179);
  lit_68 = YPPsym((P)"env-local-reference-value");
  lit_69 = YPPsym((P)"ref");
  T183 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_69)),YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_44 = YPmet(FUNCODEREF(fun_env_local_reference_value_44),LITREF(lit_68),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YevalSast_evalYenv_local_reference_value);
  if (T186 != YPfalse) {
    T185 = VARREF(YevalSast_evalYenv_local_reference_value);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_env_local_reference_value_44;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YevalSast_evalYenv_local_reference_value,T184);
  lit_70 = YPPsym((P)"env-local-reference-value-setter");
  lit_71 = YPPsym((P)"val");
  T188 = YPsig(YPPlist(3,LITREF(lit_71),LITREF(lit_22),LITREF(lit_69)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_setter_45 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_45),LITREF(lit_70),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(YevalSast_evalYenv_local_reference_value_setter);
  if (T191 != YPfalse) {
    T190 = VARREF(YevalSast_evalYenv_local_reference_value_setter);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_env_local_reference_value_setter_45;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YevalSast_evalYenv_local_reference_value_setter,T189);
  T193 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_46 = YPmet(FUNCODEREF(fun_ast_eval_46),LITREF(lit_36),T193,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YevalSast_evalYast_eval);
  if (T196 != YPfalse) {
    T195 = VARREF(YevalSast_evalYast_eval);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_ast_eval_46;
  T194 = CALL2(1,VARREF(YPdefine_method),T195,T197);
  VARSET(YevalSast_evalYast_eval,T194);
  T198 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_47 = YPmet(FUNCODEREF(fun_ast_eval_47),LITREF(lit_36),T198,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YevalSast_evalYast_eval);
  if (T201 != YPfalse) {
    T200 = VARREF(YevalSast_evalYast_eval);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_ast_eval_47;
  T199 = CALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YevalSast_evalYast_eval,T199);
  T203 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_48 = YPmet(FUNCODEREF(fun_ast_eval_48),LITREF(lit_36),T203,ENVNUL,PNUL,YPfalse);
  T206 = BOUNDP(YevalSast_evalYast_eval);
  if (T206 != YPfalse) {
    T205 = VARREF(YevalSast_evalYast_eval);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_ast_eval_48;
  T204 = CALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YevalSast_evalYast_eval,T204);
  T208 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLboundQG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_49 = YPmet(FUNCODEREF(fun_ast_eval_49),LITREF(lit_36),T208,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YevalSast_evalYast_eval);
  if (T211 != YPfalse) {
    T210 = VARREF(YevalSast_evalYast_eval);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_ast_eval_49;
  T209 = CALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YevalSast_evalYast_eval,T209);
  lit_72 = YPPsym((P)"ast-eval-bound?");
  lit_73 = YPPsym((P)"binding");
  lit_74 = YPPsym((P)"global");
  T213 = YPsig(YPPlist(3,LITREF(lit_35),LITREF(lit_73),LITREF(lit_22)),YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_50 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_50),LITREF(lit_72),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YevalSast_evalYast_eval_boundQ);
  if (T216 != YPfalse) {
    T215 = VARREF(YevalSast_evalYast_eval_boundQ);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_ast_eval_boundQ_50;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YevalSast_evalYast_eval_boundQ,T214);
  T218 = YPsig(YPPlist(3,LITREF(lit_35),LITREF(lit_73),LITREF(lit_22)),YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_51 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_51),LITREF(lit_72),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(YevalSast_evalYast_eval_boundQ);
  if (T221 != YPfalse) {
    T220 = VARREF(YevalSast_evalYast_eval_boundQ);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_ast_eval_boundQ_51;
  T219 = CALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(YevalSast_evalYast_eval_boundQ,T219);
  T223 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_52 = YPmet(FUNCODEREF(fun_ast_eval_52),LITREF(lit_36),T223,ENVNUL,PNUL,YPfalse);
  T226 = BOUNDP(YevalSast_evalYast_eval);
  if (T226 != YPfalse) {
    T225 = VARREF(YevalSast_evalYast_eval);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_ast_eval_52;
  T224 = CALL2(1,VARREF(YPdefine_method),T225,T227);
  VARSET(YevalSast_evalYast_eval,T224);
  T228 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_53 = YPmet(FUNCODEREF(fun_ast_eval_53),LITREF(lit_36),T228,ENVNUL,PNUL,YPfalse);
  T231 = BOUNDP(YevalSast_evalYast_eval);
  if (T231 != YPfalse) {
    T230 = VARREF(YevalSast_evalYast_eval);
  } else {
    T230 = YPfalse;
  }
  T232 = fun_ast_eval_53;
  T229 = CALL2(1,VARREF(YPdefine_method),T230,T232);
  VARSET(YevalSast_evalYast_eval,T229);
  T233 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLruntime_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_54 = YPmet(FUNCODEREF(fun_ast_eval_54),LITREF(lit_36),T233,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(YevalSast_evalYast_eval);
  if (T236 != YPfalse) {
    T235 = VARREF(YevalSast_evalYast_eval);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_ast_eval_54;
  T234 = CALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(YevalSast_evalYast_eval,T234);
  T238 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_55 = YPmet(FUNCODEREF(fun_ast_eval_55),LITREF(lit_36),T238,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(YevalSast_evalYast_eval);
  if (T241 != YPfalse) {
    T240 = VARREF(YevalSast_evalYast_eval);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_ast_eval_55;
  T239 = CALL2(1,VARREF(YPdefine_method),T240,T242);
  VARSET(YevalSast_evalYast_eval,T239);
  lit_75 = YPPsym((P)"env-define-binding!");
  lit_76 = YPPsym((P)"runtime");
  lit_77 = YPsb((P)"Defining invalid binding kind %=");
  T243 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_define_bindingX_56 = YPmet(FUNCODEREF(fun_env_define_bindingX_56),LITREF(lit_75),T243,ENVNUL,PNUL,YPfalse);
  T246 = BOUNDP(YevalSast_evalYenv_define_bindingX);
  if (T246 != YPfalse) {
    T245 = VARREF(YevalSast_evalYenv_define_bindingX);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_env_define_bindingX_56;
  T244 = CALL2(1,VARREF(YPdefine_method),T245,T247);
  VARSET(YevalSast_evalYenv_define_bindingX,T244);
  T248 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLdefinitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_57 = YPmet(FUNCODEREF(fun_ast_eval_57),LITREF(lit_36),T248,ENVNUL,PNUL,YPfalse);
  T251 = BOUNDP(YevalSast_evalYast_eval);
  if (T251 != YPfalse) {
    T250 = VARREF(YevalSast_evalYast_eval);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_ast_eval_57;
  T249 = CALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(YevalSast_evalYast_eval,T249);
  T253 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLalternativeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_58 = YPmet(FUNCODEREF(fun_ast_eval_58),LITREF(lit_36),T253,ENVNUL,PNUL,YPfalse);
  T256 = BOUNDP(YevalSast_evalYast_eval);
  if (T256 != YPfalse) {
    T255 = VARREF(YevalSast_evalYast_eval);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_ast_eval_58;
  T254 = CALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(YevalSast_evalYast_eval,T254);
  lit_78 = YPPsym((P)"eval");
  T262 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T261 = fun_eval_59 = YPmet(FUNCODEREF(fun_eval_59),LITREF(lit_78),T262,ENVNUL,PNUL,YPfalse);
  T260 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T259 = fun_ast_eval_60 = YPmet(FUNCODEREF(fun_ast_eval_60),LITREF(lit_36),T260,ENVNUL,PNUL,YPfalse);
  T266 = BOUNDP(YevalSast_evalYast_eval);
  if (T266 != YPfalse) {
    T265 = VARREF(YevalSast_evalYast_eval);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_ast_eval_60;
  T264 = CALL2(1,VARREF(YPdefine_method),T265,T267);
  T263 = VARSET(YevalSast_evalYast_eval,T264);
  T258 = T263;
  return T258;
}

P YevalSast_evalY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
loop:
  T1 = YPsig(YPPlist(2,LITREF(lit_41),LITREF(lit_25)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_61 = YPmet(FUNCODEREF(fun_eval_61),LITREF(lit_78),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLargumentsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_62 = YPmet(FUNCODEREF(fun_ast_eval_62),LITREF(lit_36),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YevalSast_evalYast_eval);
  if (T4 != YPfalse) {
    T3 = VARREF(YevalSast_evalYast_eval);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_ast_eval_62;
  T2 = CALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YevalSast_evalYast_eval,T2);
  T6 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_63 = YPmet(FUNCODEREF(fun_ast_eval_63),LITREF(lit_36),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YevalSast_evalYast_eval);
  if (T9 != YPfalse) {
    T8 = VARREF(YevalSast_evalYast_eval);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_ast_eval_63;
  T7 = CALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YevalSast_evalYast_eval,T7);
  T11 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_64 = YPmet(FUNCODEREF(fun_ast_eval_64),LITREF(lit_36),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YevalSast_evalYast_eval);
  if (T14 != YPfalse) {
    T13 = VARREF(YevalSast_evalYast_eval);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_ast_eval_64;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YevalSast_evalYast_eval,T12);
  T16 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_65 = YPmet(FUNCODEREF(fun_ast_eval_65),LITREF(lit_36),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YevalSast_evalYast_eval);
  if (T19 != YPfalse) {
    T18 = VARREF(YevalSast_evalYast_eval);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_ast_eval_65;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YevalSast_evalYast_eval,T17);
  T22 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_67 = YPmet(FUNCODEREF(fun_ast_eval_67),LITREF(lit_36),T21,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalSast_evalYast_eval);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSast_evalYast_eval);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_ast_eval_67;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSast_evalYast_eval,T23);
  T29 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLbind_exitG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_70 = YPmet(FUNCODEREF(fun_ast_eval_70),LITREF(lit_36),T27,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YevalSast_evalYast_eval);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSast_evalYast_eval);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_ast_eval_70;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSast_evalYast_eval,T30);
  T36 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLunwind_protectG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_73 = YPmet(FUNCODEREF(fun_ast_eval_73),LITREF(lit_36),T34,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YevalSast_evalYast_eval);
  if (T39 != YPfalse) {
    T38 = VARREF(YevalSast_evalYast_eval);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_ast_eval_73;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YevalSast_evalYast_eval,T37);
  T41 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_22)),YPPlist(2,VARREF(YevalSastYLmonitorG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_74 = YPmet(FUNCODEREF(fun_ast_eval_74),LITREF(lit_36),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YevalSast_evalYast_eval);
  if (T44 != YPfalse) {
    T43 = VARREF(YevalSast_evalYast_eval);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_ast_eval_74;
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YevalSast_evalYast_eval,T42);
  lit_79 = YPPsym((P)"init-environment-for-eval");
  lit_80 = YPPsym((P)"predefined");
  lit_81 = YPPsym((P)"%pair");
  T46 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_environment_for_eval = YPmet(FUNCODEREF(YevalSastYinit_environment_for_eval),LITREF(lit_79),T46,ENVNUL,PNUL,YPfalse);
  T47 = YevalSastYinit_environment_for_eval;
  VARSET(YevalSastYinit_environment_for_eval,T47);
  T48 = YPfalse;
  return T48;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_evalSsyntax;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_goo},
  {&module_info_gooScolsSrep},
  {&module_info_evalSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"ds", &module_info_gooSboot, "ds"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {">", &module_info_gooSmag, ">"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"set", &module_info_gooSboot, "set"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"find", &module_info_gooScolsScol, "find"},
  {"tan", &module_info_gooSmath, "tan"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"error", &module_info_gooSboot, "error"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"try", &module_info_gooSboot, "try"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"@<", &module_info_gooSboot, "@<"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"+", &module_info_gooSmath, "+"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"in", &module_info_gooSioSport, "in"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"<", &module_info_gooSmag, "<"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"while", &module_info_gooSmacros, "while"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"put", &module_info_gooSioSport, "put"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"fun", &module_info_gooSboot, "fun"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"tail", &module_info_gooSboot, "tail"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"==", &module_info_gooSmacros, "=="},
  {"%im", &module_info_gooSboot, "%im"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%su", &module_info_gooSboot, "%su"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"t?", &module_info_gooStypes, "t?"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"=", &module_info_gooSmath, "="},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"and", &module_info_gooSmacros, "and"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"when", &module_info_gooSmacros, "when"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"case", &module_info_gooSmacros, "case"},
  {"asin", &module_info_gooSmath, "asin"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%str", &module_info_gooSboot, "%str"},
  {"rem", &module_info_gooSmath, "rem"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"items", &module_info_gooScolsScol, "items"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"t<", &module_info_gooStypes, "t<"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"atan", &module_info_gooSmath, "atan"},
  {"dm", &module_info_gooSboot, "dm"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"|", &module_info_gooSmath, "|"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"^", &module_info_gooSmath, "^"},
  {"~", &module_info_gooSmath, "~"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"/", &module_info_gooSmath, "/"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"if", &module_info_gooSboot, "if"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"round", &module_info_gooSmath, "round"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"mif", &module_info_gooSboot, "mif"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"dv", &module_info_gooSboot, "dv"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"~=", &module_info_gooSmath, "~="},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"nul", &module_info_gooSboot, "nul"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"t=", &module_info_gooStypes, "t="},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"loc", &module_info_gooSboot, "loc"},
  {"app", &module_info_gooSmacros, "app"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"close", &module_info_gooSioSport, "close"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"read", &module_info_gooSruntime, "read"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"max", &module_info_gooSmag, "max"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"log", &module_info_gooSmath, "log"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"add", &module_info_gooScolsScol, "add"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"&", &module_info_gooSmath, "&"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"def", &module_info_gooSboot, "def"},
  {"let", &module_info_gooSboot, "let"},
  {"logn", &module_info_gooSmath, "logn"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"export", &module_info_gooSboot, "export"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"application-function", &module_info_evalSast, "application-function"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"into", &module_info_gooScolsScol, "into"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"match", &module_info_gooSmacros, "match"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"map", &module_info_gooSmacros, "map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"head", &module_info_gooSboot, "head"},
  {"cos", &module_info_gooSmath, "cos"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"always", &module_info_gooSruntime, "always"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"for", &module_info_gooSmacros, "for"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"-", &module_info_gooSmath, "-"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"as", &module_info_gooStypes, "as"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"not", &module_info_gooSboot, "not"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"df", &module_info_gooSboot, "df"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"abs", &module_info_gooSmath, "abs"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"any?", &module_info_gooStypes, "any?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"*", &module_info_gooSmath, "*"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {">=", &module_info_gooSmag, ">="},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {">>", &module_info_gooSmath, ">>"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%put", &module_info_gooSboot, "%put"},
  {"until", &module_info_gooSmacros, "until"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"open", &module_info_gooSioSport, "open"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"dc", &module_info_gooSboot, "dc"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"len", &module_info_gooStypes, "len"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"out", &module_info_gooSioSport, "out"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<=", &module_info_gooSmag, "<="},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"op", &module_info_gooSmacros, "op"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"do", &module_info_gooSmacros, "do"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<<", &module_info_gooSmath, "<<"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"@len", &module_info_gooSboot, "@len"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"get", &module_info_gooSioSport, "get"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"or", &module_info_gooSmacros, "or"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"nil", &module_info_gooSboot, "nil"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"%get", &module_info_gooSboot, "%get"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"col", &module_info_gooScolsScol, "col"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"@+", &module_info_gooSboot, "@+"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"1-", &module_info_gooSmath, "1-"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"sin", &module_info_gooSmath, "sin"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"floor", &module_info_gooSmath, "floor"},
  {"new", &module_info_gooSboot, "new"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%dlvar", NULL},
  {"env-frame!", &YevalSast_evalYenv_frameX},
  {"env-function-setter", &YevalSast_evalYenv_function_setter},
  {"env-names", &YevalSast_evalYenv_names},
  {"env-runtime-value", &YevalSast_evalYenv_runtime_value},
  {"%dlvar-binding", NULL},
  {"ast-eval-bound?", &YevalSast_evalYast_eval_boundQ},
  {"%define-binding", NULL},
  {"env-local-reference-value-setter", &YevalSast_evalYenv_local_reference_value_setter},
  {"*stack*", &YevalSast_evalYTstackT},
  {"env-global-binding-value-setter", &YevalSast_evalYenv_global_binding_value_setter},
  {"env-local-reference-value", &YevalSast_evalYenv_local_reference_value},
  {"env-runtime-value-setter", &YevalSast_evalYenv_runtime_value_setter},
  {"env-parent-setter", &YevalSast_evalYenv_parent_setter},
  {"env-function", &YevalSast_evalYenv_function},
  {"env-local-value-setter", &YevalSast_evalYenv_local_value_setter},
  {"as-fun-name", &YevalSast_evalYas_fun_name},
  {"ast-eval", &YevalSast_evalYast_eval},
  {"%lookup-binding", NULL},
  {"env-binding-value-setter", &YevalSast_evalYenv_binding_value_setter},
  {"env-values-setter", &YevalSast_evalYenv_values_setter},
  {"env-values", &YevalSast_evalYenv_values},
  {"env-names-setter", &YevalSast_evalYenv_names_setter},
  {"export-goo-method", &YevalSast_evalYexport_goo_method},
  {"%dlvar-nam", NULL},
  {"---main-1---", NULL},
  {"env-binding-value", &YevalSast_evalYenv_binding_value},
  {"%ensure-binding", NULL},
  {"%dlvar-mod", NULL},
  {"%dlvar-setter", NULL},
  {"env-global-binding-bound?", &YevalSast_evalYenv_global_binding_boundQ},
  {"ifun", NULL},
  {"env-local-value", &YevalSast_evalYenv_local_value},
  {"env-define-binding!", &YevalSast_evalYenv_define_bindingX},
  {"<loc-env>", &YevalSast_evalYLloc_envG},
  {"%binding-value-setter", NULL},
  {"%binding-bound?", NULL},
  {"%binding-value", NULL},
  {"$nul-loc-env", &YevalSast_evalYDnul_loc_env},
  {"env-parent", &YevalSast_evalYenv_parent},
  {"---main-0---", NULL},
  {"env-global-binding-value", &YevalSast_evalYenv_global_binding_value},
  {"arrange-arguments", &YevalSast_evalYarrange_arguments},
  {"ast-eval-specs", &YevalSast_evalYast_eval_specs},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"ast-evaluate", "ast-evaluate"},
  {"%binding-value-setter", "%binding-value-setter"},
  {"%binding-bound?", "%binding-bound?"},
  {"%binding-value", "%binding-value"},
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
extern void load_module_gooSmacros (void);
extern void load_module_gooSruntime (void);
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
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_goo();
  load_module_gooScolsSrep();
  load_module_evalSast();

  (P)YevalSast_evalY___main_0___();
  (P)YevalSast_evalY___main_1___();

}

/* END OF GENERATED CODE. */
