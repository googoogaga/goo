/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/ast-eval */

EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
DEF(YevalSast_evalYenv_global_binding_value_setter,"eval/ast-eval","env-global-binding-value-setter");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
DEF(YevalSast_evalYenv_parent_setter,"eval/ast-eval","env-parent-setter");
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
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(Ytype_object,"goo/boot","type-object");
DEF(YevalSast_evalYenv_binding_value,"eval/ast-eval","env-binding-value");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
DEF(YevalSast_evalYenv_frameX,"eval/ast-eval","env-frame!");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
DEF(YevalSast_evalYenv_dynamic_value,"eval/ast-eval","env-dynamic-value");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
DEF(YevalSast_evalYenv_function_setter,"eval/ast-eval","env-function-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYlogn,"goo/math","logn");
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
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YevalSast_evalYenv_parent,"eval/ast-eval","env-parent");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSruntimeYstack_overflow_error,"goo/runtime","stack-overflow-error");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YPprop,"goo/boot","%prop");
DEF(YevalSast_evalYenv_define_bindingX,"eval/ast-eval","env-define-binding!");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
DEF(YevalSast_evalYenv_binding_value_setter,"eval/ast-eval","env-binding-value-setter");
EXT(YisaQ,"goo/boot","isa?");
DEF(YevalSast_evalYast_eval,"eval/ast-eval","ast-eval");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YevalSast_evalYLloc_envG,"eval/ast-eval","<loc-env>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
DEF(YevalSast_evalYenv_runtime_value_setter,"eval/ast-eval","env-runtime-value-setter");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YevalSast_evalYenv_global_binding_value,"eval/ast-eval","env-global-binding-value");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
DEF(YevalSast_evalYast_eval_specs,"eval/ast-eval","ast-eval-specs");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
DEF(YevalSast_evalYDnul_loc_env,"eval/ast-eval","$nul-loc-env");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
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
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
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
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YevalSast_evalYenv_local_value_setter,"eval/ast-eval","env-local-value-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
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
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
DEF(YevalSast_evalYenv_local_reference_value_setter,"eval/ast-eval","env-local-reference-value-setter");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yerror,"goo/boot","error");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
DEF(YevalSast_evalYenv_runtime_value,"eval/ast-eval","env-runtime-value");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YevalSast_evalYenv_function,"eval/ast-eval","env-function");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
DEF(YevalSast_evalYenv_names_setter,"eval/ast-eval","env-names-setter");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YevalSast_evalYast_eval_boundQ,"eval/ast-eval","ast-eval-bound?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSast_evalYas_fun_name,"eval/ast-eval","as-fun-name");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLfloG,"goo/boot","<flo>");
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
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
DEF(YevalSast_evalYenv_local_value,"eval/ast-eval","env-local-value");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YevalSast_evalYenv_values_setter,"eval/ast-eval","env-values-setter");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YevalSast_evalYexport_goo_method,"eval/ast-eval","export-goo-method");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
DEF(YevalSast_evalYenv_global_binding_boundQ,"eval/ast-eval","env-global-binding-bound?");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
DEF(YevalSast_evalYarrange_arguments,"eval/ast-eval","arrange-arguments");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
DEF(YevalSast_evalYenv_local_reference_value,"eval/ast-eval","env-local-reference-value");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
DEF(YevalSast_evalYenv_dynamic_value_setter,"eval/ast-eval","env-dynamic-value-setter");
DEF(YevalSast_evalYenv_names,"eval/ast-eval","env-names");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
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
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
DEF(YevalSast_evalYenv_values,"eval/ast-eval","env-values");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_18);
DEFLIT(lit_75);
DEFLIT(lit_9);
DEFLIT(lit_25);
DEFLIT(lit_35);
DEFLIT(lit_17);
DEFLIT(lit_49);
DEFLIT(lit_71);
DEFLIT(lit_11);
DEFLIT(lit_64);
DEFLIT(lit_8);
DEFLIT(lit_31);
DEFLIT(lit_65);
DEFLIT(lit_10);
DEFLIT(lit_45);
DEFLIT(lit_6);
DEFLIT(lit_81);
DEFLIT(lit_3);
DEFLIT(lit_28);
DEFLIT(lit_5);
DEFLIT(lit_56);
DEFLIT(lit_39);
DEFLIT(lit_70);
DEFLIT(lit_62);
DEFLIT(lit_0);
DEFLIT(lit_46);
DEFLIT(lit_34);
DEFLIT(lit_54);
DEFLIT(lit_24);
DEFLIT(lit_7);
DEFLIT(lit_77);
DEFLIT(lit_60);
DEFLIT(lit_67);
DEFLIT(lit_30);
DEFLIT(lit_41);
DEFLIT(lit_83);
DEFLIT(lit_59);
DEFLIT(lit_68);
DEFLIT(lit_47);
DEFLIT(lit_80);
DEFLIT(lit_14);
DEFLIT(lit_1);
DEFLIT(lit_69);
DEFLIT(lit_38);
DEFLIT(lit_73);
DEFLIT(lit_57);
DEFLIT(lit_63);
DEFLIT(lit_36);
DEFLIT(lit_55);
DEFLIT(lit_84);
DEFLIT(lit_82);
DEFLIT(lit_50);
DEFLIT(lit_51);
DEFLIT(lit_16);
DEFLIT(lit_42);
DEFLIT(lit_53);
DEFLIT(lit_15);
DEFLIT(lit_29);
DEFLIT(lit_32);
DEFLIT(lit_61);
DEFLIT(lit_44);
DEFLIT(lit_27);
DEFLIT(lit_58);
DEFLIT(lit_43);
DEFLIT(lit_48);
DEFLIT(lit_52);
DEFLIT(lit_20);
DEFLIT(lit_79);
DEFLIT(lit_66);
DEFLIT(lit_26);
DEFLIT(lit_72);
DEFLIT(lit_12);
DEFLIT(lit_19);
DEFLIT(lit_13);
DEFLIT(lit_2);
DEFLIT(lit_23);
DEFLIT(lit_22);
DEFLIT(lit_40);
DEFLIT(lit_4);
DEFLIT(lit_33);
DEFLIT(lit_37);
DEFLIT(lit_76);
DEFLIT(lit_21);
DEFLIT(lit_74);
DEFLIT(lit_78);

/* FUNCTIONS: */

LOCFOR(fun_env_global_binding_value_0);
LOCFOR(fun_env_global_binding_value_setter_1);
LOCFOR(fun_env_global_binding_boundQ_2);
LOCFOR(fun_env_runtime_value_3);
LOCFOR(fun_env_runtime_value_setter_4);
LOCFOR(fun_env_dynamic_value_5);
LOCFOR(fun_env_dynamic_value_setter_6);
LOCFOR(fun_env_parent_7);
LOCFOR(fun_env_parent_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_env_function_10);
LOCFOR(fun_env_function_setter_11);
LOCFOR(fun_12);
LOCFOR(fun_env_names_13);
LOCFOR(fun_env_names_setter_14);
LOCFOR(fun_15);
LOCFOR(fun_env_values_16);
LOCFOR(fun_env_values_setter_17);
LOCFOR(fun_env_frameX_18);
LOCFOR(fun_env_local_value_19);
LOCFOR(fun_env_local_value_setter_20);
LOCFOR(fun_loop_21);
LOCFOR(fun_env_binding_value_22);
LOCFOR(fun_loop_23);
LOCFOR(fun_env_binding_value_setter_24);
LOCFOR(fun_ast_evaluate_25);
LOCFOR(fun_ast_eval_26);
LOCFOR(fun_ast_eval_27);
LOCFOR(fun_ast_eval_28);
LOCFOR(fun_loop_29);
LOCFOR(fun_ast_eval_specs_30);
FUNFOR(YevalSast_evalYarrange_arguments);
LOCFOR(fun_x_1474_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_as_fun_name_35);
LOCFOR(fun_as_fun_name_36);
LOCFOR(fun_as_fun_name_37);
LOCFOR(fun_as_fun_name_38);
LOCFOR(fun_as_fun_name_39);
LOCFOR(fun_as_fun_name_40);
LOCFOR(fun_41);
LOCFOR(fun_export_goo_method_42);
LOCFOR(fun_43);
LOCFOR(fun_ast_eval_44);
LOCFOR(fun_ast_eval_45);
LOCFOR(fun_env_local_reference_value_46);
LOCFOR(fun_env_local_reference_value_setter_47);
LOCFOR(fun_ast_eval_48);
LOCFOR(fun_ast_eval_49);
LOCFOR(fun_ast_eval_50);
LOCFOR(fun_ast_eval_51);
LOCFOR(fun_ast_eval_52);
LOCFOR(fun_ast_eval_53);
LOCFOR(fun_ast_eval_boundQ_54);
LOCFOR(fun_ast_eval_boundQ_55);
LOCFOR(fun_ast_eval_56);
LOCFOR(fun_ast_eval_57);
LOCFOR(fun_ast_eval_58);
LOCFOR(fun_ast_eval_59);
LOCFOR(fun_ast_eval_60);
LOCFOR(fun_env_define_bindingX_61);
LOCFOR(fun_ast_eval_62);
LOCFOR(fun_ast_eval_63);
LOCFOR(fun_eval_64);
LOCFOR(fun_ast_eval_65);
LOCFOR(fun_eval_66);
LOCFOR(fun_ast_eval_67);
LOCFOR(fun_ast_eval_68);
LOCFOR(fun_ast_eval_69);
LOCFOR(fun_ast_eval_70);
LOCFOR(fun_71);
LOCFOR(fun_ast_eval_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_ast_eval_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
LOCFOR(fun_ast_eval_78);
LOCFOR(fun_ast_eval_79);
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
  P boxF2776;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF2776 = T1;
  if (boxF2776 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYglobal_box_value),boxF2776);
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
  P boxF2777;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF2777 = T1;
  boxF2777 = BOXFAB(boxF2777);
  T4 = BOXVAL(boxF2777);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLglobal_boxG));
    T6 = CALL2(1,VARREF(YevalSastYbinding_global_box_setter),T7,b_);
    T5 = BOXVAL(boxF2777) = T6;
  } else {
  }
  T9 = BOXVAL(boxF2777);
  T8 = CALL2(1,VARREF(YevalSastYglobal_box_value_setter),value_,T9);
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF2778;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF2778 = T1;
  if (boxF2778 != YPfalse) {
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

FUNCODEDEF(fun_env_dynamic_value_5) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSruntimeYloc_val),x_);
  T0 = (P)YPdyn_var_val(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_dynamic_value_setter_6) {
  P v_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL1(1,VARREF(YgooSruntimeYloc_val),x_);
  (P)YPdyn_var_val_setter(v_,T0);
UNLINK_STACK();
  QRET(v_);
}

FUNCODEDEF(fun_env_parent_7) {
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

FUNCODEDEF(fun_env_parent_setter_8) {
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

FUNCODEDEF(fun_9) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_function_10) {
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

FUNCODEDEF(fun_env_function_setter_11) {
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

FUNCODEDEF(fun_12) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_names_13) {
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

FUNCODEDEF(fun_env_names_setter_14) {
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

FUNCODEDEF(fun_15) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_env_values_16) {
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

FUNCODEDEF(fun_env_values_setter_17) {
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

FUNCODEDEF(fun_env_frameX_18) {
  P env_,function_,names_,args_;
  P valuesF2779;
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
  valuesF2779 = T1;
  T4 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),env_,VARREF(YevalSast_evalYenv_function),function_,VARREF(YevalSast_evalYenv_values),valuesF2779,VARREF(YevalSast_evalYenv_names),names_);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_local_value_19) {
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

FUNCODEDEF(fun_env_local_value_setter_20) {
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

FUNCODEDEF(fun_env_binding_value_22) {
  P env_,name_;
  P loopF2780;
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
    T3 = FUNSHELL(1,fun_loop_21,3);
    loopF2780 = T3;
    FUNINIT(loopF2780, 3,env_,name_,loopF2780);
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
    T4 = CALL2(0,loopF2780,T5,YPint((P)0));
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_23) {
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

FUNCODEDEF(fun_env_binding_value_setter_24) {
  P v_,env_,name_;
  P loopF2781;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_23,4);
  loopF2781 = T1;
  FUNINIT(loopF2781, 4,v_,env_,name_,loopF2781);
  T3 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
  T2 = CALL2(0,loopF2781,T3,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_evaluate_25) {
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

FUNCODEDEF(fun_ast_eval_26) {
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

FUNCODEDEF(fun_ast_eval_27) {
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

FUNCODEDEF(fun_ast_eval_28) {
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

FUNCODEDEF(fun_loop_29) {
  P res_,specs_,i_;
  P typeF2783;
  P specF2782;
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
    specF2782 = T4;
    if (specF2782 != YPfalse) {
      T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),specF2782,FREEREF(1));
      T6 = T7;
    } else {
      T6 = VARREF(YLanyG);
    }
    typeF2783 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYpair),typeF2783,res_);
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

FUNCODEDEF(fun_ast_eval_specs_30) {
  P specs_,naryQ_,env_;
  P loopF2785;
  P nreqF2784;
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
  nreqF2784 = T1;
  T6 = FUNSHELL(1,fun_loop_29,3);
  loopF2785 = T6;
  FUNINIT(loopF2785, 3,nreqF2784,env_,loopF2785);
  T7 = CALL3(0,loopF2785,Ynil,specs_,YPint((P)0));
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF2786;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  countF2786 = T1;
  if (naryQ_ != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagYL),countF2786,arity_);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
      T5 = CALL4(1,VARREF(Yerror),LITREF(lit_47),T6,args_,arity_);
      T3 = T5;
    } else {
      T8 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,YPint((P)0),arity_);
      T10 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,arity_,countF2786);
      T9 = CALL1(1,VARREF(Ylst),T10);
      T7 = CALL2(1,VARREF(YgooScolsSseqYcat2),T8,T9);
      T3 = T7;
    }
    T2 = T3;
  } else {
    T12 = CALL2(1,VARREF(YgooSmathYNEE),countF2786,arity_);
    if (T12 != YPfalse) {
      T14 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
      T13 = CALL4(1,VARREF(Yerror),LITREF(lit_48),T14,args_,arity_);
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

FUNCODEDEF(fun_x_1474_32) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_53));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P return_;
  P x_1473F2801;
  P x_1473F2800;
  P x_1473F2799;
  P x_1473F2798;
  P x_1473F2797;
  P x_1473F2796;
  P x_1473F2795;
  P bodyF2794;
  P namesF2793;
  P arityF2792;
  P naryQF2791;
  P fF2790;
  P envF2789;
  P x_1473F2788;
  P x_1474F2787;
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
  T1 = FUNSHELL(0,fun_x_1474_32,1);
  x_1474F2787 = T1;
  FUNINIT(x_1474F2787, 1,return_);
  x_1473F2788 = FREEREF(0);
  envF2789 = YPfalse;
  envF2789 = BOXFAB(envF2789);
  fF2790 = YPfalse;
  fF2790 = BOXFAB(fF2790);
  naryQF2791 = YPfalse;
  naryQF2791 = BOXFAB(naryQF2791);
  arityF2792 = YPfalse;
  arityF2792 = BOXFAB(arityF2792);
  namesF2793 = YPfalse;
  namesF2793 = BOXFAB(namesF2793);
  bodyF2794 = YPfalse;
  bodyF2794 = BOXFAB(bodyF2794);
  T15 = CALL2(1,VARREF(YisaQ),x_1473F2788,VARREF(YLlstG));
  if (T15 != YPfalse) {
    T17 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1473F2788,LITREF(lit_53),x_1474F2787);
    x_1473F2795 = T17;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1473F2795,x_1474F2787);
    BOXVAL(envF2789) = T19;
    T20 = CALL1(1,VARREF(Ytail),x_1473F2795);
    x_1473F2796 = T20;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1473F2796,x_1474F2787);
    BOXVAL(fF2790) = T22;
    T23 = CALL1(1,VARREF(Ytail),x_1473F2796);
    x_1473F2797 = T23;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1473F2797,x_1474F2787);
    BOXVAL(naryQF2791) = T25;
    T26 = CALL1(1,VARREF(Ytail),x_1473F2797);
    x_1473F2798 = T26;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1473F2798,x_1474F2787);
    BOXVAL(arityF2792) = T28;
    T29 = CALL1(1,VARREF(Ytail),x_1473F2798);
    x_1473F2799 = T29;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1473F2799,x_1474F2787);
    BOXVAL(namesF2793) = T31;
    T32 = CALL1(1,VARREF(Ytail),x_1473F2799);
    x_1473F2800 = T32;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1473F2800,x_1474F2787);
    BOXVAL(bodyF2794) = T34;
    T35 = CALL1(1,VARREF(Ytail),x_1473F2800);
    x_1473F2801 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1473F2801,x_1474F2787);
    T33 = T36;
    T30 = T33;
    T27 = T30;
    T24 = T27;
    T21 = T24;
    T18 = T21;
    T16 = T18;
  } else {
    T37 = CALL2(1,x_1474F2787,LITREF(lit_54),x_1473F2788);
  }
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T41 = CALL2(1,VARREF(YgooSmacrosYcat),T42,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_45));
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_46));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T57 = CALL4(1,VARREF(YgooSmacrosYcat),T58,T59,T60,Ynil);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T51 = CALLN(1,VARREF(YgooSmacrosYcat),6,T52,T53,T54,T55,T56,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T66 = CALL2(1,VARREF(YgooSmacrosYcat),T67,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T62 = CALL4(1,VARREF(YgooSmacrosYcat),T63,T64,T65,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_23));
  T76 = BOXVAL(envF2789);
  T75 = CALL1(1,VARREF(Ylst),T76);
  T78 = BOXVAL(fF2790);
  T77 = CALL1(1,VARREF(Ylst),T78);
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T83 = BOXVAL(namesF2793);
  T82 = CALL1(1,VARREF(Ylst),T83);
  T86 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T89 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T88 = CALL3(1,VARREF(YgooSmacrosYcat),T89,T90,Ynil);
  T87 = CALL1(1,VARREF(Ylst),T88);
  T85 = CALL3(1,VARREF(YgooSmacrosYcat),T86,T87,Ynil);
  T84 = CALL1(1,VARREF(Ylst),T85);
  T80 = CALL4(1,VARREF(YgooSmacrosYcat),T81,T82,T84,Ynil);
  T79 = CALL1(1,VARREF(Ylst),T80);
  T93 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T97 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T98 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T96 = CALL3(1,VARREF(YgooSmacrosYcat),T97,T98,Ynil);
  T95 = CALL1(1,VARREF(Ylst),T96);
  T92 = CALL4(1,VARREF(YgooSmacrosYcat),T93,T94,T95,Ynil);
  T91 = CALL1(1,VARREF(Ylst),T92);
  T73 = CALLN(1,VARREF(YgooSmacrosYcat),6,T74,T75,T77,T79,T91,Ynil);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T71,T72,Ynil);
  T68 = CALL1(1,VARREF(Ylst),T69);
  T102 = BOXVAL(bodyF2794);
  T101 = CALL1(1,VARREF(Ylst),T102);
  T103 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
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

FUNCODEDEF(fun_34) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_33,1,exp_);
  T0 = with_exit(T1);
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
  T0 = CALL1(1,VARREF(Yfun_name),x_);
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
  T1 = CALL1(1,VARREF(YevalSastYfunction_debug_name),x_);
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_37) {
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

FUNCODEDEF(fun_as_fun_name_38) {
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

FUNCODEDEF(fun_as_fun_name_39) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_fun_name_40) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_41) {
  P arg_vector_;
  P frameF2804;
  P nmsF2803;
  P argsF2802;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  NARGS(arg_vector_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),arg_vector_);
  T1 = CALL4(1,VARREF(YevalSast_evalYarrange_arguments),FREEREF(0),FREEREF(1),FREEREF(2),T2);
  argsF2802 = T1;
  T4 = (P)YPnext_methods();
  nmsF2803 = T4;
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T7 = CALL2(1,VARREF(YgooScolsSseqYcat2),FREEREF(4),T8);
  T10 = CALL1(1,VARREF(Ylst),nmsF2803);
  T9 = CALL2(1,VARREF(YgooScolsSseqYcat2),argsF2802,T10);
  T6 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),FREEREF(3),FREEREF(0),T7,T9);
  frameF2804 = T6;
  T11 = CALL1(1,FREEREF(5),frameF2804);
  T5 = T11;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_export_goo_method_42) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF2806;
  P arityF2805;
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
  arityF2805 = T1;
  T6 = FUNFAB(fun_41,6,f_,naryQ_,arityF2805,env_,names_,body_);
  efunF2806 = T6;
  T7 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
  CALL2(1,VARREF(Yfun_name_setter),T7,efunF2806);
  T9 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (value_ != YPfalse) {
    T11 = CALL2(1,VARREF(YevalSast_evalYast_eval),value_,env_);
    T10 = T11;
  } else {
    T10 = VARREF(YLanyG);
  }
  T8 = CALLN(1,VARREF(Ynew),13,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),T9,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),arityF2805,VARREF(Ysig_val),T10,VARREF(Ysig_unification_vars),Ynil);
  CALL2(1,VARREF(Yfun_sig_setter),T8,efunF2806);
  T5 = efunF2806;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
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

FUNCODEDEF(fun_ast_eval_44) {
  P e_,env_;
  P evalF2808;
  P paramsF2807;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF2807 = T1;
  T3 = FUNFAB(fun_43,1,e_);
  evalF2808 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF2807);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF2807);
  T7 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  T8 = CALL1(1,VARREF(YevalSastYfunction_value),e_);
  T4 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,e_,T5,T6,T7,T8,evalF2808,env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_45) {
  P e_,env_;
  P specsF2812;
  P namesF2811;
  P naryQF2810;
  P paramsF2809;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF2809 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  naryQF2810 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF2809);
  namesF2811 = T5;
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF2809);
  T7 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),T8,naryQF2810,env_);
  specsF2812 = T7;
  T10 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),e_);
  T9 = CALLN(1,VARREF(Yfab_gen),6,T10,namesF2811,specsF2812,naryQF2810,VARREF(YLanyG),Ynil);
  T6 = T9;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_46) {
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

FUNCODEDEF(fun_env_local_reference_value_setter_47) {
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

FUNCODEDEF(fun_ast_eval_48) {
  P e_,env_;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_49) {
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

FUNCODEDEF(fun_ast_eval_50) {
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

FUNCODEDEF(fun_ast_eval_51) {
  P e_,env_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_locative),T2);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_dynamic_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_52) {
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

FUNCODEDEF(fun_ast_eval_53) {
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

FUNCODEDEF(fun_ast_eval_boundQ_54) {
  P e_,binding_,env_;
  P x_1476F2814;
  P x_1475F2813;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_1475F2813 = T1;
  x_1476F2814 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1476F2814,x_1475F2813,LITREF(lit_76));
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

FUNCODEDEF(fun_ast_eval_boundQ_55) {
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

FUNCODEDEF(fun_ast_eval_56) {
  P e_,env_;
  P valueF2815;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2815 = T1;
  T4 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),valueF2815,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_57) {
  P e_,env_;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_58) {
  P e_,env_;
  P valueF2816;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2816 = T1;
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),valueF2816,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_59) {
  P e_,env_;
  P valueF2817;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2817 = T1;
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),valueF2817,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_60) {
  P e_,env_;
  P valueF2818;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2818 = T1;
  T4 = CALL1(1,VARREF(YevalSastYassignment_reference),e_);
  T3 = CALL3(1,VARREF(YevalSast_evalYenv_local_reference_value_setter),valueF2818,env_,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_61) {
  P b_,v_;
  P xF2821;
  P x_1478F2820;
  P x_1477F2819;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_1477F2819 = T1;
  x_1478F2820 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1478F2820,x_1477F2819,LITREF(lit_78));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_locative),b_);
    T5 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),v_,T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,x_1478F2820,x_1477F2819,LITREF(lit_76));
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),v_,b_);
      T7 = T9;
    } else {
      T11 = CALL2(1,x_1478F2820,x_1477F2819,LITREF(lit_79));
      if (T11 != YPfalse) {
        T13 = (P)YPfab_dyn_var();
        xF2821 = T13;
        T14 = (P)YPtag_into(xF2821,(P)3);
        T12 = T14;
        CALL2(1,VARREF(YevalSastYbinding_locative_setter),T12,b_);
        T16 = CALL1(1,VARREF(YevalSastYbinding_locative),b_);
        T15 = CALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),v_,T16);
        T10 = T15;
      } else {
        T18 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
        T17 = CALL2(1,VARREF(Yerror),LITREF(lit_80),T18);
        T10 = T17;
      }
      T7 = T10;
    }
    T3 = T7;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_62) {
  P e_,env_;
  P valueF2822;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2822 = T1;
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSast_evalYenv_define_bindingX),T3,valueF2822);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_63) {
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

FUNCODEDEF(fun_eval_64) {
  P e_;
  P valF2824;
  P nxtF2823;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),e_);
  nxtF2823 = T1;
  T4 = CALL1(1,VARREF(Yhead),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,FREEREF(0));
  valF2824 = T3;
  T6 = CALL1(1,VARREF(YgooSmacrosYemptyQ),nxtF2823);
  if (T6 != YPfalse) {
    T5 = valF2824;
  } else {
    a1 = nxtF2823;
    e_ = a1;
    goto loop;
    T5 = T7;
  }
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_65) {
  P e_,env_;
  P evalF2825;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_64,2);
  evalF2825 = T1;
  FUNINIT(evalF2825, 2,env_,evalF2825);
  T2 = CALL1(0,evalF2825,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_66) {
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

FUNCODEDEF(fun_ast_eval_67) {
  P e_,env_;
  P evalF2826;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_66,2);
  evalF2826 = T1;
  FUNINIT(evalF2826, 2,env_,evalF2826);
  T2 = CALL2(0,evalF2826,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_68) {
  P e_,env_;
  P argsF2828;
  P fF2827;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  fF2827 = T1;
  T5 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T4 = CALL2(1,VARREF(YevalSast_evalYast_eval),T5,env_);
  argsF2828 = T4;
  T6 = CALL3(1,VARREF(YgooSmacrosYnapp),fF2827,YPfalse,argsF2828);
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_69) {
  P e_,env_;
  P argsF2832;
  P fF2831;
  P nmsF2830;
  P bF2829;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bF2829 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),bF2829);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_62));
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_62));
    nmsF2830 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nmsF2830,VARREF(Ynul));
    if (T8 != YPfalse) {
      T7 = YPfalse;
    } else {
      T7 = nmsF2830;
    }
    T5 = T7;
    T2 = T5;
  } else {
    T10 = CALL1(1,VARREF(YevalSastYbinding_info),bF2829);
    fF2831 = T10;
    T13 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T12 = CALL2(1,VARREF(YevalSast_evalYast_eval),T13,env_);
    argsF2832 = T12;
    T14 = CALL3(1,VARREF(YgooSmacrosYnapp),fF2831,YPfalse,argsF2832);
    T11 = T14;
    T9 = T11;
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_70) {
  P e_,env_;
  P nenvF2834;
  P argsF2833;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  argsF2833 = T1;
  T6 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),T6);
  T4 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T5,argsF2833);
  nenvF2834 = T4;
  T8 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,nenvF2834);
  T3 = T7;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
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

FUNCODEDEF(fun_ast_eval_72) {
  P e_,env_;
  P new_envF2836;
  P bindingsF2835;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  bindingsF2835 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF2835);
  T6 = CALL1(1,VARREF(YgooSruntimeYalways),VARREF(Ynul));
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,bindingsF2835);
  T3 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T4,T5);
  new_envF2836 = T3;
  T7 = FUNFAB(fun_71,1,new_envF2836);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF2835);
  T10 = CALL2(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_evalYast_eval),new_envF2836);
  T11 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),T10,T11);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T7,T8,T9);
  T13 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T12 = CALL2(1,VARREF(YevalSast_evalYast_eval),T13,new_envF2836);
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
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

FUNCODEDEF(fun_74) {
  P return_;
  P exitF2838;
  P rprocF2837;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNFAB(fun_73,1,return_);
  rprocF2837 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,rprocF2837,T4,T5,YPfalse,YPfalse,rprocF2837,FREEREF(0));
  exitF2838 = T3;
  T8 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),FREEREF(1));
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,FREEREF(0));
  T6 = CALL1(1,T7,exitF2838);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_75) {
  P e_,env_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_74,2,env_,e_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_78) {
  P e_,env_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNFAB(fun_76,2,e_,env_);
  T2 = FUNFAB(fun_77,2,e_,env_);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_79) {
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
  P bF2839;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_62),YPfalse,LITREF(lit_83));
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_84),YPfalse,LITREF(lit_76));
  bF2839 = T1;
  T2 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),VARREF(YgooSmacrosYpair),bF2839);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YevalSast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF2840;
  P T0,T1,T2,T3,T4;
  P a1,a2;
DEFCREGS();
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = XCALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T2);
  eF2840 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = XCALL4(1,VARREF(YevalSastYast_define_binding),eF2840,T4,YPfalse,LITREF(lit_76));
  T0 = T3;
  return T0;
}

P YevalSast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF2841;
  P T0,T1,T2,T3,T4;
  P a1,a2;
DEFCREGS();
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = XCALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T2);
  eF2841 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = XCALL2(1,VARREF(YevalSastYfind_binding),T4,eF2841);
  T0 = T3;
  return T0;
}

P YevalSast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF2842;
  P T0,T1,T2,T3;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YevalSast_evalYPlookup_binding(raw_mod_,raw_nam_);
  tmpF2842 = T1;
  if (tmpF2842 != YPfalse) {
    T2 = tmpF2842;
  } else {
    T3 = (P)YevalSast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T2 = T3;
  }
  T0 = T2;
  return T0;
}

P YevalSast_evalYPdlvar_binding(P dlvar_) {
  P yF2847;
  P xF2846;
  P xF2845;
  P xF2844;
  P bF2843;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YevalSast_evalYPdlvar(dlvar_);
  bF2843 = T1;
  xF2846 = bF2843;
  xF2844 = YPint((P)0);
  xF2845 = xF2844;
  T6 = (P)YPiGG(xF2845,(P)2);
  T5 = T6;
  T4 = T5;
  yF2847 = T4;
  T8 = (P)YPeqQ(xF2846,yF2847);
  T7 = (P)YPbb(T8);
  T3 = T7;
  if (T3 != YPfalse) {
    T11 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
    T12 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
    T10 = (P)YevalSast_evalYPensure_binding(T11,T12);
    T9 = (P)YevalSast_evalYPdlvar_setter(T10,dlvar_);
    T2 = T9;
  } else {
    T2 = bF2843;
  }
  T0 = T2;
  return T0;
}

P YevalSast_evalYPbinding_boundQ(P dlvar_) {
  P tmpF2849;
  P bF2848;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
DEFCREGS();
loop:
  T2 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
  T3 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
  T1 = (P)YevalSast_evalYPlookup_binding(T2,T3);
  bF2848 = T1;
  tmpF2849 = bF2848;
  if (tmpF2849 != YPfalse) {
    T6 = XCALL1(1,VARREF(YevalSastYbinding_info),bF2848);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  T0 = T4;
  return T0;
}

P YevalSast_evalYPbinding_value(P dlvar_) {
  P x_1480F2852;
  P x_1479F2851;
  P bindingF2850;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  bindingF2850 = T1;
  T3 = XCALL1(1,VARREF(YevalSastYbinding_kind),bindingF2850);
  x_1479F2851 = T3;
  x_1480F2852 = VARREF(YgooSmacrosYEE);
  T6 = XCALL2(1,x_1480F2852,x_1479F2851,LITREF(lit_78));
  if (T6 != YPfalse) {
    T8 = XCALL1(1,VARREF(YevalSastYbinding_locative),bindingF2850);
    T7 = XCALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T8);
    T5 = T7;
  } else {
    T10 = XCALL2(1,x_1480F2852,x_1479F2851,LITREF(lit_79));
    if (T10 != YPfalse) {
      T12 = XCALL1(1,VARREF(YevalSastYbinding_locative),bindingF2850);
      T11 = XCALL1(1,VARREF(YevalSast_evalYenv_dynamic_value),T12);
      T9 = T11;
    } else {
      T13 = XCALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),bindingF2850);
      T9 = T13;
    }
    T5 = T9;
  }
  T4 = T5;
  T2 = T4;
  T0 = T2;
  return T0;
}

P YevalSast_evalYPbinding_value_setter(P val_,P dlvar_) {
  P x_1482F2855;
  P x_1481F2854;
  P bindingF2853;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  bindingF2853 = T1;
  T3 = XCALL1(1,VARREF(YevalSastYbinding_kind),bindingF2853);
  x_1481F2854 = T3;
  x_1482F2855 = VARREF(YgooSmacrosYEE);
  T6 = XCALL2(1,x_1482F2855,x_1481F2854,LITREF(lit_78));
  if (T6 != YPfalse) {
    T8 = XCALL1(1,VARREF(YevalSastYbinding_locative),bindingF2853);
    T7 = XCALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),val_,T8);
    T5 = T7;
  } else {
    T10 = XCALL2(1,x_1482F2855,x_1481F2854,LITREF(lit_79));
    if (T10 != YPfalse) {
      T12 = XCALL1(1,VARREF(YevalSastYbinding_locative),bindingF2853);
      T11 = XCALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),val_,T12);
      T9 = T11;
    } else {
      T13 = XCALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),val_,bindingF2853);
      T9 = T13;
    }
    T5 = T9;
  }
  T4 = T5;
  T2 = T4;
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
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269;
DEFCREGS();
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
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
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
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
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
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
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
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
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
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSast_evalYenv_runtime_value_setter,T21);
  lit_10 = YPPsym((P)"env-dynamic-value");
  T25 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_dynamic_value_5 = YPmet(FUNCODEREF(fun_env_dynamic_value_5),LITREF(lit_10),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSast_evalYenv_dynamic_value);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSast_evalYenv_dynamic_value);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_env_dynamic_value_5;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSast_evalYenv_dynamic_value,T26);
  lit_11 = YPPsym((P)"env-dynamic-value-setter");
  T30 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_dynamic_value_setter_6 = YPmet(FUNCODEREF(fun_env_dynamic_value_setter_6),LITREF(lit_11),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSast_evalYenv_dynamic_value_setter);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSast_evalYenv_dynamic_value_setter);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_env_dynamic_value_setter_6;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSast_evalYenv_dynamic_value_setter,T31);
  lit_12 = YPPsym((P)"<loc-env>");
  T36 = (P)YPpair(VARREF(YLanyG),Ynil);
  T35 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_12),T36);
  VARSET(YevalSast_evalYLloc_envG,T35);
  lit_13 = YPPsym((P)"env-parent");
  lit_14 = YPPsym((P)"_x");
  T37 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_parent_7 = YPmet(FUNCODEREF(fun_env_parent_7),LITREF(lit_13),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YevalSast_evalYenv_parent);
  if (T40 != YPfalse) {
    T39 = VARREF(YevalSast_evalYenv_parent);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_env_parent_7;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YevalSast_evalYenv_parent,T38);
  lit_15 = YPPsym((P)"env-parent-setter");
  lit_16 = YPPsym((P)"_z");
  T42 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_14)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_parent_setter_8 = YPmet(FUNCODEREF(fun_env_parent_setter_8),LITREF(lit_15),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YevalSast_evalYenv_parent_setter);
  if (T45 != YPfalse) {
    T44 = VARREF(YevalSast_evalYenv_parent_setter);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_env_parent_setter_8;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YevalSast_evalYenv_parent_setter,T43);
  T47 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T48 = fun_9;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),VARREF(YevalSast_evalYenv_parent_setter),VARREF(YLanyG),T48);
  lit_17 = YPPsym((P)"env-function");
  T49 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_function_10 = YPmet(FUNCODEREF(fun_env_function_10),LITREF(lit_17),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YevalSast_evalYenv_function);
  if (T52 != YPfalse) {
    T51 = VARREF(YevalSast_evalYenv_function);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_env_function_10;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YevalSast_evalYenv_function,T50);
  lit_18 = YPPsym((P)"env-function-setter");
  T54 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_14)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_function_setter_11 = YPmet(FUNCODEREF(fun_env_function_setter_11),LITREF(lit_18),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YevalSast_evalYenv_function_setter);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSast_evalYenv_function_setter);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_env_function_setter_11;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSast_evalYenv_function_setter,T55);
  T59 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T60 = fun_12;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_function),VARREF(YevalSast_evalYenv_function_setter),VARREF(YLanyG),T60);
  lit_19 = YPPsym((P)"env-names");
  T61 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_names_13 = YPmet(FUNCODEREF(fun_env_names_13),LITREF(lit_19),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YevalSast_evalYenv_names);
  if (T64 != YPfalse) {
    T63 = VARREF(YevalSast_evalYenv_names);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_env_names_13;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YevalSast_evalYenv_names,T62);
  lit_20 = YPPsym((P)"env-names-setter");
  T66 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_14)),YPPlist(2,VARREF(YLlstG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_names_setter_14 = YPmet(FUNCODEREF(fun_env_names_setter_14),LITREF(lit_20),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YevalSast_evalYenv_names_setter);
  if (T69 != YPfalse) {
    T68 = VARREF(YevalSast_evalYenv_names_setter);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_env_names_setter_14;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YevalSast_evalYenv_names_setter,T67);
  T71 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T72 = fun_15;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_names),VARREF(YevalSast_evalYenv_names_setter),VARREF(YLlstG),T72);
  lit_21 = YPPsym((P)"env-values");
  T73 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_values_16 = YPmet(FUNCODEREF(fun_env_values_16),LITREF(lit_21),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YevalSast_evalYenv_values);
  if (T76 != YPfalse) {
    T75 = VARREF(YevalSast_evalYenv_values);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_env_values_16;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YevalSast_evalYenv_values,T74);
  lit_22 = YPPsym((P)"env-values-setter");
  T78 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_14)),YPPlist(2,VARREF(YLrepG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_values_setter_17 = YPmet(FUNCODEREF(fun_env_values_setter_17),LITREF(lit_22),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(YevalSast_evalYenv_values_setter);
  if (T81 != YPfalse) {
    T80 = VARREF(YevalSast_evalYenv_values_setter);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_env_values_setter_17;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YevalSast_evalYenv_values_setter,T79);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_values),VARREF(YevalSast_evalYenv_values_setter),VARREF(YLrepG),VARREF(YPprop_unbound_error));
  T83 = XCALL1(1,VARREF(Ynew),VARREF(YevalSast_evalYLloc_envG));
  VARSET(YevalSast_evalYDnul_loc_env,T83);
  lit_23 = YPPsym((P)"env-frame!");
  lit_24 = YPPsym((P)"env");
  lit_25 = YPPsym((P)"function");
  lit_26 = YPPsym((P)"names");
  lit_27 = YPPsym((P)"args");
  T84 = YPsig(YPPlist(4,LITREF(lit_24),LITREF(lit_25),LITREF(lit_26),LITREF(lit_27)),YPPlist(4,VARREF(YevalSast_evalYLloc_envG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YevalSast_evalYLloc_envG),Ynil);
  fun_env_frameX_18 = YPmet(FUNCODEREF(fun_env_frameX_18),LITREF(lit_23),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YevalSast_evalYenv_frameX);
  if (T87 != YPfalse) {
    T86 = VARREF(YevalSast_evalYenv_frameX);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_env_frameX_18;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YevalSast_evalYenv_frameX,T85);
  lit_28 = YPPsym((P)"env-local-value");
  lit_29 = YPPsym((P)"i");
  lit_30 = YPPsym((P)"j");
  T89 = YPsig(YPPlist(3,LITREF(lit_24),LITREF(lit_29),LITREF(lit_30)),YPPlist(3,VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_value_19 = YPmet(FUNCODEREF(fun_env_local_value_19),LITREF(lit_28),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YevalSast_evalYenv_local_value);
  if (T92 != YPfalse) {
    T91 = VARREF(YevalSast_evalYenv_local_value);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_env_local_value_19;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YevalSast_evalYenv_local_value,T90);
  lit_31 = YPPsym((P)"env-local-value-setter");
  T94 = YPsig(YPPlist(4,LITREF(lit_9),LITREF(lit_24),LITREF(lit_29),LITREF(lit_30)),YPPlist(4,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_env_local_value_setter_20 = YPmet(FUNCODEREF(fun_env_local_value_setter_20),LITREF(lit_31),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YevalSast_evalYenv_local_value_setter);
  if (T97 != YPfalse) {
    T96 = VARREF(YevalSast_evalYenv_local_value_setter);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_env_local_value_setter_20;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YevalSast_evalYenv_local_value_setter,T95);
  lit_32 = YPPsym((P)"env-binding-value");
  lit_33 = YPPsym((P)"name");
  lit_34 = YPPsym((P)"loop");
  T100 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_21 = YPmet(FUNCODEREF(fun_loop_21),LITREF(lit_34),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_33)),YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_binding_value_22 = YPmet(FUNCODEREF(fun_env_binding_value_22),LITREF(lit_32),T99,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalSast_evalYenv_binding_value);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSast_evalYenv_binding_value);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_env_binding_value_22;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSast_evalYenv_binding_value,T101);
  lit_35 = YPPsym((P)"env-binding-value-setter");
  T106 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_23 = YPmet(FUNCODEREF(fun_loop_23),LITREF(lit_34),T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(3,LITREF(lit_9),LITREF(lit_24),LITREF(lit_33)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_binding_value_setter_24 = YPmet(FUNCODEREF(fun_env_binding_value_setter_24),LITREF(lit_35),T105,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSast_evalYenv_binding_value_setter);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSast_evalYenv_binding_value_setter);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_env_binding_value_setter_24;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSast_evalYenv_binding_value_setter,T107);
  lit_36 = YPPsym((P)"ast-evaluate");
  lit_37 = YPPsym((P)"e");
  T111 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_evaluate_25 = YPmet(FUNCODEREF(fun_ast_evaluate_25),LITREF(lit_36),T111,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YevalSastYast_evaluate);
  if (T114 != YPfalse) {
    T113 = VARREF(YevalSastYast_evaluate);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_ast_evaluate_25;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YevalSastYast_evaluate,T112);
  lit_38 = YPPsym((P)"ast-eval");
  T117 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T116 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_38),T117,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSast_evalYast_eval,T116);
  T118 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_26 = YPmet(FUNCODEREF(fun_ast_eval_26),LITREF(lit_38),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YevalSast_evalYast_eval);
  if (T121 != YPfalse) {
    T120 = VARREF(YevalSast_evalYast_eval);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_ast_eval_26;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YevalSast_evalYast_eval,T119);
  T123 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_27 = YPmet(FUNCODEREF(fun_ast_eval_27),LITREF(lit_38),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YevalSast_evalYast_eval);
  if (T126 != YPfalse) {
    T125 = VARREF(YevalSast_evalYast_eval);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_ast_eval_27;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YevalSast_evalYast_eval,T124);
  lit_39 = YPPsym((P)"ee");
  T128 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_39)),YPPlist(2,VARREF(YevalSastYLcompile_timeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_28 = YPmet(FUNCODEREF(fun_ast_eval_28),LITREF(lit_38),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(YevalSast_evalYast_eval);
  if (T131 != YPfalse) {
    T130 = VARREF(YevalSast_evalYast_eval);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_ast_eval_28;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(YevalSast_evalYast_eval,T129);
  lit_40 = YPPsym((P)"ast-eval-specs");
  lit_41 = YPPsym((P)"specs");
  lit_42 = YPPsym((P)"nary?");
  lit_43 = YPPsym((P)"res");
  T134 = YPsig(YPPlist(3,LITREF(lit_43),LITREF(lit_41),LITREF(lit_29)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_29 = YPmet(FUNCODEREF(fun_loop_29),LITREF(lit_34),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(3,LITREF(lit_41),LITREF(lit_42),LITREF(lit_24)),YPPlist(3,VARREF(YLlstG),VARREF(YLlogG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_specs_30 = YPmet(FUNCODEREF(fun_ast_eval_specs_30),LITREF(lit_40),T133,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YevalSast_evalYast_eval_specs);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSast_evalYast_eval_specs);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_ast_eval_specs_30;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSast_evalYast_eval_specs,T135);
  lit_44 = YPPsym((P)"arrange-arguments");
  lit_45 = YPPsym((P)"f");
  lit_46 = YPPsym((P)"arity");
  lit_47 = YPsb((P)"%= called with %=; needs at least %d arguments");
  lit_48 = YPsb((P)"%= called with %=; needs %d arguments");
  T139 = YPsig(YPPlist(4,LITREF(lit_45),LITREF(lit_42),LITREF(lit_46),LITREF(lit_27)),YPPlist(4,VARREF(YLanyG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  YevalSast_evalYarrange_arguments = YPmet(FUNCODEREF(YevalSast_evalYarrange_arguments),LITREF(lit_44),T139,ENVNUL,PNUL,YPfalse);
  T140 = YevalSast_evalYarrange_arguments;
  VARSET(YevalSast_evalYarrange_arguments,T140);
  lit_49 = YPPsym((P)"exp");
  lit_50 = YPPsym((P)"return");
  lit_51 = YPPsym((P)"x-1474");
  lit_52 = YPPsym((P)"msg");
  lit_53 = YPPsym((P)"ifun");
  lit_54 = YPsb((P)"Match Pattern Failure");
  lit_55 = YPPsym((P)"fun");
  lit_56 = YPPsym((P)"arg-vector");
  lit_57 = YPPsym((P)"...");
  lit_58 = YPPsym((P)"def");
  lit_59 = YPPsym((P)"as");
  lit_60 = YPPsym((P)"<lst>");
  lit_61 = YPPsym((P)"nms");
  lit_62 = YPPsym((P)"%next-methods");
  lit_63 = YPPsym((P)"frame");
  lit_64 = YPPsym((P)"cat2");
  lit_65 = YPPsym((P)"lst");
  lit_66 = YPPsym((P)"quote");
  T143 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_27)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1474_32 = YPmet(FUNCODEREF(fun_x_1474_32),LITREF(lit_51),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_50)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T144 = fun_34;
  YPmacro(YPPsym((P)"eval/ast-eval"),YPPsym((P)"ifun"),T144);
  lit_67 = YPPsym((P)"as-fun-name");
  T145 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_35 = YPmet(FUNCODEREF(fun_as_fun_name_35),LITREF(lit_67),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_as_fun_name_35;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSast_evalYas_fun_name,T146);
  T150 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_36 = YPmet(FUNCODEREF(fun_as_fun_name_36),LITREF(lit_67),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T153 != YPfalse) {
    T152 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_as_fun_name_36;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YevalSast_evalYas_fun_name,T151);
  T155 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_37 = YPmet(FUNCODEREF(fun_as_fun_name_37),LITREF(lit_67),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_as_fun_name_37;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSast_evalYas_fun_name,T156);
  T160 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_38 = YPmet(FUNCODEREF(fun_as_fun_name_38),LITREF(lit_67),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T163 != YPfalse) {
    T162 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_as_fun_name_38;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YevalSast_evalYas_fun_name,T161);
  T165 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_as_fun_name_39 = YPmet(FUNCODEREF(fun_as_fun_name_39),LITREF(lit_67),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T168 != YPfalse) {
    T167 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_as_fun_name_39;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YevalSast_evalYas_fun_name,T166);
  T170 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_40 = YPmet(FUNCODEREF(fun_as_fun_name_40),LITREF(lit_67),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YevalSast_evalYas_fun_name);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSast_evalYas_fun_name);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_as_fun_name_40;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSast_evalYas_fun_name,T171);
  lit_68 = YPPsym((P)"export-goo-method");
  lit_69 = YPPsym((P)"body");
  T176 = YPsig(YPPlist(1,LITREF(lit_56)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(YPPlist(7,LITREF(lit_45),LITREF(lit_26),LITREF(lit_41),LITREF(lit_42),LITREF(lit_4),LITREF(lit_69),LITREF(lit_24)),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YLanyG),Ynil);
  fun_export_goo_method_42 = YPmet(FUNCODEREF(fun_export_goo_method_42),LITREF(lit_68),T175,ENVNUL,PNUL,YPfalse);
  T179 = BOUNDP(YevalSast_evalYexport_goo_method);
  if (T179 != YPfalse) {
    T178 = VARREF(YevalSast_evalYexport_goo_method);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_export_goo_method_42;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T180);
  VARSET(YevalSast_evalYexport_goo_method,T177);
  T182 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_44 = YPmet(FUNCODEREF(fun_ast_eval_44),LITREF(lit_38),T181,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YevalSast_evalYast_eval);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSast_evalYast_eval);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_ast_eval_44;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSast_evalYast_eval,T183);
  T187 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLast_genericG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_45 = YPmet(FUNCODEREF(fun_ast_eval_45),LITREF(lit_38),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YevalSast_evalYast_eval);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalSast_evalYast_eval);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_ast_eval_45;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalSast_evalYast_eval,T188);
  lit_70 = YPPsym((P)"env-local-reference-value");
  lit_71 = YPPsym((P)"ref");
  T192 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_71)),YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_46 = YPmet(FUNCODEREF(fun_env_local_reference_value_46),LITREF(lit_70),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YevalSast_evalYenv_local_reference_value);
  if (T195 != YPfalse) {
    T194 = VARREF(YevalSast_evalYenv_local_reference_value);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_env_local_reference_value_46;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YevalSast_evalYenv_local_reference_value,T193);
  lit_72 = YPPsym((P)"env-local-reference-value-setter");
  lit_73 = YPPsym((P)"val");
  T197 = YPsig(YPPlist(3,LITREF(lit_73),LITREF(lit_24),LITREF(lit_71)),YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_setter_47 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_47),LITREF(lit_72),T197,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YevalSast_evalYenv_local_reference_value_setter);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSast_evalYenv_local_reference_value_setter);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_env_local_reference_value_setter_47;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSast_evalYenv_local_reference_value_setter,T198);
  T202 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_48 = YPmet(FUNCODEREF(fun_ast_eval_48),LITREF(lit_38),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YevalSast_evalYast_eval);
  if (T205 != YPfalse) {
    T204 = VARREF(YevalSast_evalYast_eval);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_ast_eval_48;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YevalSast_evalYast_eval,T203);
  T207 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_49 = YPmet(FUNCODEREF(fun_ast_eval_49),LITREF(lit_38),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YevalSast_evalYast_eval);
  if (T210 != YPfalse) {
    T209 = VARREF(YevalSast_evalYast_eval);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_ast_eval_49;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YevalSast_evalYast_eval,T208);
  T212 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_50 = YPmet(FUNCODEREF(fun_ast_eval_50),LITREF(lit_38),T212,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(YevalSast_evalYast_eval);
  if (T215 != YPfalse) {
    T214 = VARREF(YevalSast_evalYast_eval);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_ast_eval_50;
  T213 = XCALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YevalSast_evalYast_eval,T213);
  T217 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_51 = YPmet(FUNCODEREF(fun_ast_eval_51),LITREF(lit_38),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(YevalSast_evalYast_eval);
  if (T220 != YPfalse) {
    T219 = VARREF(YevalSast_evalYast_eval);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_ast_eval_51;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YevalSast_evalYast_eval,T218);
  T222 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_52 = YPmet(FUNCODEREF(fun_ast_eval_52),LITREF(lit_38),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(YevalSast_evalYast_eval);
  if (T225 != YPfalse) {
    T224 = VARREF(YevalSast_evalYast_eval);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_ast_eval_52;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YevalSast_evalYast_eval,T223);
  T227 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLboundQG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_53 = YPmet(FUNCODEREF(fun_ast_eval_53),LITREF(lit_38),T227,ENVNUL,PNUL,YPfalse);
  T230 = BOUNDP(YevalSast_evalYast_eval);
  if (T230 != YPfalse) {
    T229 = VARREF(YevalSast_evalYast_eval);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_ast_eval_53;
  T228 = XCALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(YevalSast_evalYast_eval,T228);
  lit_74 = YPPsym((P)"ast-eval-bound?");
  lit_75 = YPPsym((P)"binding");
  lit_76 = YPPsym((P)"global");
  T232 = YPsig(YPPlist(3,LITREF(lit_37),LITREF(lit_75),LITREF(lit_24)),YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_54 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_54),LITREF(lit_74),T232,ENVNUL,PNUL,YPfalse);
  T235 = BOUNDP(YevalSast_evalYast_eval_boundQ);
  if (T235 != YPfalse) {
    T234 = VARREF(YevalSast_evalYast_eval_boundQ);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_ast_eval_boundQ_54;
  T233 = XCALL2(1,VARREF(YPdefine_method),T234,T236);
  VARSET(YevalSast_evalYast_eval_boundQ,T233);
  T237 = YPsig(YPPlist(3,LITREF(lit_37),LITREF(lit_75),LITREF(lit_24)),YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_55 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_55),LITREF(lit_74),T237,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(YevalSast_evalYast_eval_boundQ);
  if (T240 != YPfalse) {
    T239 = VARREF(YevalSast_evalYast_eval_boundQ);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_ast_eval_boundQ_55;
  T238 = XCALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(YevalSast_evalYast_eval_boundQ,T238);
  T242 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_56 = YPmet(FUNCODEREF(fun_ast_eval_56),LITREF(lit_38),T242,ENVNUL,PNUL,YPfalse);
  T245 = BOUNDP(YevalSast_evalYast_eval);
  if (T245 != YPfalse) {
    T244 = VARREF(YevalSast_evalYast_eval);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_ast_eval_56;
  T243 = XCALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(YevalSast_evalYast_eval,T243);
  T247 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_57 = YPmet(FUNCODEREF(fun_ast_eval_57),LITREF(lit_38),T247,ENVNUL,PNUL,YPfalse);
  T250 = BOUNDP(YevalSast_evalYast_eval);
  if (T250 != YPfalse) {
    T249 = VARREF(YevalSast_evalYast_eval);
  } else {
    T249 = YPfalse;
  }
  T251 = fun_ast_eval_57;
  T248 = XCALL2(1,VARREF(YPdefine_method),T249,T251);
  VARSET(YevalSast_evalYast_eval,T248);
  T252 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLruntime_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_58 = YPmet(FUNCODEREF(fun_ast_eval_58),LITREF(lit_38),T252,ENVNUL,PNUL,YPfalse);
  T255 = BOUNDP(YevalSast_evalYast_eval);
  if (T255 != YPfalse) {
    T254 = VARREF(YevalSast_evalYast_eval);
  } else {
    T254 = YPfalse;
  }
  T256 = fun_ast_eval_58;
  T253 = XCALL2(1,VARREF(YPdefine_method),T254,T256);
  VARSET(YevalSast_evalYast_eval,T253);
  T257 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLdynamic_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_59 = YPmet(FUNCODEREF(fun_ast_eval_59),LITREF(lit_38),T257,ENVNUL,PNUL,YPfalse);
  T260 = BOUNDP(YevalSast_evalYast_eval);
  if (T260 != YPfalse) {
    T259 = VARREF(YevalSast_evalYast_eval);
  } else {
    T259 = YPfalse;
  }
  T261 = fun_ast_eval_59;
  T258 = XCALL2(1,VARREF(YPdefine_method),T259,T261);
  VARSET(YevalSast_evalYast_eval,T258);
  T264 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T263 = fun_ast_eval_60 = YPmet(FUNCODEREF(fun_ast_eval_60),LITREF(lit_38),T264,ENVNUL,PNUL,YPfalse);
  T268 = BOUNDP(YevalSast_evalYast_eval);
  if (T268 != YPfalse) {
    T267 = VARREF(YevalSast_evalYast_eval);
  } else {
    T267 = YPfalse;
  }
  T269 = fun_ast_eval_60;
  T266 = XCALL2(1,VARREF(YPdefine_method),T267,T269);
  T265 = VARSET(YevalSast_evalYast_eval,T266);
  T262 = T265;
  return T262;
}

P YevalSast_evalY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69;
DEFCREGS();
loop:
  lit_77 = YPPsym((P)"env-define-binding!");
  lit_78 = YPPsym((P)"runtime");
  lit_79 = YPPsym((P)"dynamic");
  lit_80 = YPsb((P)"Defining invalid binding kind %=");
  T0 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_9)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_define_bindingX_61 = YPmet(FUNCODEREF(fun_env_define_bindingX_61),LITREF(lit_77),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSast_evalYenv_define_bindingX);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSast_evalYenv_define_bindingX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_env_define_bindingX_61;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSast_evalYenv_define_bindingX,T1);
  T5 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLdefinitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_62 = YPmet(FUNCODEREF(fun_ast_eval_62),LITREF(lit_38),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSast_evalYast_eval);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSast_evalYast_eval);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_ast_eval_62;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSast_evalYast_eval,T6);
  T10 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLalternativeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_63 = YPmet(FUNCODEREF(fun_ast_eval_63),LITREF(lit_38),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSast_evalYast_eval);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSast_evalYast_eval);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_ast_eval_63;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSast_evalYast_eval,T11);
  lit_81 = YPPsym((P)"eval");
  T16 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_eval_64 = YPmet(FUNCODEREF(fun_eval_64),LITREF(lit_81),T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_65 = YPmet(FUNCODEREF(fun_ast_eval_65),LITREF(lit_38),T15,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YevalSast_evalYast_eval);
  if (T19 != YPfalse) {
    T18 = VARREF(YevalSast_evalYast_eval);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_ast_eval_65;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YevalSast_evalYast_eval,T17);
  T22 = YPsig(YPPlist(2,LITREF(lit_43),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_66 = YPmet(FUNCODEREF(fun_eval_66),LITREF(lit_81),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLargumentsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_67 = YPmet(FUNCODEREF(fun_ast_eval_67),LITREF(lit_38),T21,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalSast_evalYast_eval);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSast_evalYast_eval);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_ast_eval_67;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSast_evalYast_eval,T23);
  T27 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_68 = YPmet(FUNCODEREF(fun_ast_eval_68),LITREF(lit_38),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSast_evalYast_eval);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSast_evalYast_eval);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_ast_eval_68;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSast_evalYast_eval,T28);
  T32 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_69 = YPmet(FUNCODEREF(fun_ast_eval_69),LITREF(lit_38),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YevalSast_evalYast_eval);
  if (T35 != YPfalse) {
    T34 = VARREF(YevalSast_evalYast_eval);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_ast_eval_69;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSast_evalYast_eval,T33);
  T37 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_70 = YPmet(FUNCODEREF(fun_ast_eval_70),LITREF(lit_38),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YevalSast_evalYast_eval);
  if (T40 != YPfalse) {
    T39 = VARREF(YevalSast_evalYast_eval);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_ast_eval_70;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YevalSast_evalYast_eval,T38);
  T43 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_72 = YPmet(FUNCODEREF(fun_ast_eval_72),LITREF(lit_38),T42,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YevalSast_evalYast_eval);
  if (T46 != YPfalse) {
    T45 = VARREF(YevalSast_evalYast_eval);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_ast_eval_72;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YevalSast_evalYast_eval,T44);
  T50 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_50)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLbind_exitG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_75 = YPmet(FUNCODEREF(fun_ast_eval_75),LITREF(lit_38),T48,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalSast_evalYast_eval);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSast_evalYast_eval);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_ast_eval_75;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSast_evalYast_eval,T51);
  T57 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLunwind_protectG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_78 = YPmet(FUNCODEREF(fun_ast_eval_78),LITREF(lit_38),T55,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YevalSast_evalYast_eval);
  if (T60 != YPfalse) {
    T59 = VARREF(YevalSast_evalYast_eval);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_ast_eval_78;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YevalSast_evalYast_eval,T58);
  T62 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_24)),YPPlist(2,VARREF(YevalSastYLmonitorG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_79 = YPmet(FUNCODEREF(fun_ast_eval_79),LITREF(lit_38),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YevalSast_evalYast_eval);
  if (T65 != YPfalse) {
    T64 = VARREF(YevalSast_evalYast_eval);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_ast_eval_79;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YevalSast_evalYast_eval,T63);
  lit_82 = YPPsym((P)"init-environment-for-eval");
  lit_83 = YPPsym((P)"predefined");
  lit_84 = YPPsym((P)"%pair");
  T67 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_environment_for_eval = YPmet(FUNCODEREF(YevalSastYinit_environment_for_eval),LITREF(lit_82),T67,ENVNUL,PNUL,YPfalse);
  T68 = YevalSastYinit_environment_for_eval;
  VARSET(YevalSastYinit_environment_for_eval,T68);
  T69 = YPfalse;
  return T69;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;

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
  {"open", &module_info_gooSioSport, "open"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"until", &module_info_gooSmacros, "until"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"rep", &module_info_gooSboot, "rep"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"min", &module_info_gooSmag, "min"},
  {"%str", &module_info_gooSboot, "%str"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"@len", &module_info_gooSboot, "@len"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"ct", &module_info_gooSboot, "ct"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"@+", &module_info_gooSboot, "@+"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"rem", &module_info_gooSmath, "rem"},
  {"^", &module_info_gooSmath, "^"},
  {">", &module_info_gooSmag, ">"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"app", &module_info_gooSmacros, "app"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"esc", &module_info_gooSboot, "esc"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"neg", &module_info_gooSmath, "neg"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"<", &module_info_gooSmag, "<"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {">=", &module_info_gooSmag, ">="},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"round/", &module_info_gooSmath, "round/"},
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
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"stack-overflow-error", &module_info_gooSruntime, "stack-overflow-error"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"add", &module_info_gooScolsScol, "add"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"for", &module_info_gooSmacros, "for"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"tail", &module_info_gooSboot, "tail"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"%put", &module_info_gooSboot, "%put"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%enable-stack-checks", &module_info_gooSboot, "%enable-stack-checks"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"ast-walk", &module_info_evalSast, "ast-walk"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"+", &module_info_gooSmath, "+"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use", &module_info_gooSboot, "use"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"dm", &module_info_gooSboot, "dm"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"def", &module_info_gooSboot, "def"},
  {"while", &module_info_gooSmacros, "while"},
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
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"not", &module_info_gooSboot, "not"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"dc", &module_info_gooSboot, "dc"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
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
  {"%i*", &module_info_gooSboot, "%i*"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
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
  {"packing", &module_info_gooSpacker, "packing"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"dl", &module_info_gooSboot, "dl"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"mod", &module_info_gooSmath, "mod"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"function-adjectives", &module_info_evalSast, "function-adjectives"},
  {"compose", &module_info_gooSruntime, "compose"},
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
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"function-frame-len-setter", &module_info_evalSast, "function-frame-len-setter"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"lst", &module_info_gooSboot, "lst"},
  {"pop", &module_info_gooScolsSseq, "pop"},
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
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"<low-let>", &module_info_evalSast, "<low-let>"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"in", &module_info_gooSioSport, "in"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"as", &module_info_gooStypes, "as"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"head", &module_info_gooSboot, "head"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@<", &module_info_gooSboot, "@<"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"round", &module_info_gooSmath, "round"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"error", &module_info_gooSboot, "error"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"out", &module_info_gooSioSport, "out"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"gets", &module_info_gooSioSport, "gets"},
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
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"~", &module_info_gooSmath, "~"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"/", &module_info_gooSmath, "/"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"op", &module_info_gooSmacros, "op"},
  {"div", &module_info_gooSmath, "div"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"atan", &module_info_gooSmath, "atan"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"if", &module_info_gooSboot, "if"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"get", &module_info_gooSioSport, "get"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
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
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fin", &module_info_gooSboot, "fin"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"items", &module_info_gooScolsScol, "items"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"$e", &module_info_gooSmath, "$e"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"ast-walk!", &module_info_evalSast, "ast-walk!"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%get", &module_info_gooSboot, "%get"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"try", &module_info_gooSboot, "try"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"export", &module_info_gooSboot, "export"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"tup", &module_info_gooSboot, "tup"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
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
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"let", &module_info_gooSboot, "let"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"cat", &module_info_gooSmacros, "cat"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"last", &module_info_gooSmacros, "last"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"put", &module_info_gooSioSport, "put"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
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
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"set", &module_info_gooSboot, "set"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"@==", &module_info_gooSboot, "@=="},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"==", &module_info_gooSmacros, "=="},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pow", &module_info_gooSmath, "pow"},
  {"&", &module_info_gooSmath, "&"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*", &module_info_gooSmath, "*"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
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
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"t<", &module_info_gooStypes, "t<"},
  {"cos", &module_info_gooSmath, "cos"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"case", &module_info_gooSmacros, "case"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
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
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"map", &module_info_gooSmacros, "map"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"-", &module_info_gooSmath, "-"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"match", &module_info_gooSmacros, "match"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"%time", &module_info_gooSboot, "%time"},
  {">>", &module_info_gooSmath, ">>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"nul", &module_info_gooSboot, "nul"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
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
  {"use/export", &module_info_gooSboot, "use/export"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"abs", &module_info_gooSmath, "abs"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"when", &module_info_gooSmacros, "when"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"1-", &module_info_gooSmath, "1-"},
  {"len", &module_info_gooStypes, "len"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"~=", &module_info_gooSmath, "~="},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"env-global-binding-value-setter", CVAR, &YevalSast_evalYenv_global_binding_value_setter},
  {"env-parent-setter", CVAR, &YevalSast_evalYenv_parent_setter},
  {"%binding-value", PVAR, NULL},
  {"env-binding-value", CVAR, &YevalSast_evalYenv_binding_value},
  {"env-frame!", CVAR, &YevalSast_evalYenv_frameX},
  {"env-dynamic-value", CVAR, &YevalSast_evalYenv_dynamic_value},
  {"env-function-setter", CVAR, &YevalSast_evalYenv_function_setter},
  {"env-parent", CVAR, &YevalSast_evalYenv_parent},
  {"env-define-binding!", CVAR, &YevalSast_evalYenv_define_bindingX},
  {"env-binding-value-setter", CVAR, &YevalSast_evalYenv_binding_value_setter},
  {"ast-eval", CVAR, &YevalSast_evalYast_eval},
  {"<loc-env>", CVAR, &YevalSast_evalYLloc_envG},
  {"env-runtime-value-setter", CVAR, &YevalSast_evalYenv_runtime_value_setter},
  {"env-global-binding-value", CVAR, &YevalSast_evalYenv_global_binding_value},
  {"%binding-bound?", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"%lookup-binding", PVAR, NULL},
  {"ast-eval-specs", CVAR, &YevalSast_evalYast_eval_specs},
  {"$nul-loc-env", CVAR, &YevalSast_evalYDnul_loc_env},
  {"%dlvar-binding", PVAR, NULL},
  {"ifun", PVAR, NULL},
  {"env-local-value-setter", CVAR, &YevalSast_evalYenv_local_value_setter},
  {"%binding-value-setter", PVAR, NULL},
  {"%dlvar-setter", PVAR, NULL},
  {"env-local-reference-value-setter", CVAR, &YevalSast_evalYenv_local_reference_value_setter},
  {"env-runtime-value", CVAR, &YevalSast_evalYenv_runtime_value},
  {"%ensure-binding", PVAR, NULL},
  {"env-function", CVAR, &YevalSast_evalYenv_function},
  {"env-names-setter", CVAR, &YevalSast_evalYenv_names_setter},
  {"ast-eval-bound?", CVAR, &YevalSast_evalYast_eval_boundQ},
  {"as-fun-name", CVAR, &YevalSast_evalYas_fun_name},
  {"%define-binding", PVAR, NULL},
  {"env-local-value", CVAR, &YevalSast_evalYenv_local_value},
  {"%dlvar-nam", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"env-values-setter", CVAR, &YevalSast_evalYenv_values_setter},
  {"export-goo-method", CVAR, &YevalSast_evalYexport_goo_method},
  {"env-global-binding-bound?", CVAR, &YevalSast_evalYenv_global_binding_boundQ},
  {"arrange-arguments", CVAR, &YevalSast_evalYarrange_arguments},
  {"env-local-reference-value", CVAR, &YevalSast_evalYenv_local_reference_value},
  {"env-dynamic-value-setter", CVAR, &YevalSast_evalYenv_dynamic_value_setter},
  {"env-names", CVAR, &YevalSast_evalYenv_names},
  {"%dlvar-mod", PVAR, NULL},
  {"%dlvar", PVAR, NULL},
  {"env-values", CVAR, &YevalSast_evalYenv_values},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%binding-value", "%binding-value"},
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"ast-evaluate", "ast-evaluate"},
  {"%binding-value-setter", "%binding-value-setter"},
  {"%binding-bound?", "%binding-bound?"},
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
