/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/main */

EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
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
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
DEF(YevalSmainYTgoo_dateT,"eval/main","*goo-date*");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YgooSmathYlogn,"goo/math","logn");
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
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YPprop,"goo/boot","%prop");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ytail,"goo/boot","tail");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSrandomYrandom_using,"goo/random","random-using");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLstrG,"goo/boot","<str>");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
DEF(YevalSmainYTgoo_versionT,"eval/main","*goo-version*");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
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
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYatan2,"goo/math","atan2");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YcolsSpipeYdeqX,"cols/pipe","deq!");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
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
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalStopYtop,"eval/top","top");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(Yerror,"goo/boot","error");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalStopYload,"eval/top","load");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalStopYD,"eval/top","$");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
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
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSrandomYrandom_unit_using,"goo/random","random-unit-using");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YLnumG,"goo/boot","<num>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YcolsSpipeYenqX,"cols/pipe","enq!");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
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
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YgooSrandomYfab_random,"goo/random","fab-random");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooSrandomYrandom_unit,"goo/random","random-unit");
EXT(YgooSrandomYrandom,"goo/random","random");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
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
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
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
EXT(YcolsSpipeYLpipeG,"cols/pipe","<pipe>");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
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
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_6);
DEFLIT(lit_7);
DEFLIT(lit_11);
DEFLIT(lit_2);
DEFLIT(lit_10);
DEFLIT(lit_8);
DEFLIT(lit_9);
DEFLIT(lit_0);
DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_1);
DEFLIT(lit_4);

/* FUNCTIONS: */

extern P YevalSmainY___main_0___ ();

/* FUNCTION CODES: */

P YevalSmainY___main_0___() {
  P tmpF3501;
  P fileF3500;
  P tmpF3499;
  P fileF3498;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
loop:
  lit_0 = YPsb((P)"0.142");
  VARSET(YevalSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"AUG 16, 2002");
  VARSET(YevalSmainYTgoo_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; GOO\n");
  XCALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_2));
  lit_3 = YPsb((P)";;; JONATHAN BACHRACH\n");
  XCALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_3));
  lit_4 = YPsb((P)";;; MIT AI Lab\n");
  XCALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_4));
  lit_5 = YPsb((P)";;; %s\n");
  XCALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_5),VARREF(YevalSmainYTgoo_dateT));
  lit_6 = YPsb((P)";;; \n");
  XCALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_6));
  lit_7 = YPsb((P)";;; VERSION = %s\n");
  XCALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_7),VARREF(YevalSmainYTgoo_versionT));
  lit_8 = YPsb((P)";;; ROOT    = %s\n");
  XCALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_8),VARREF(YgooSsystemYTgoo_rootT));
  XCALL0(1,VARREF(YevalSastYinit_ast));
  lit_9 = YPsb((P)"init");
  lit_10 = YPPsym((P)"goo/user");
  T0 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_9),VARREF(YgooSsystemYTgoo_rootT));
  fileF3498 = T0;
  tmpF3499 = fileF3498;
  if (tmpF3499 != YPfalse) {
    T3 = XCALL2(1,VARREF(YevalStopYload_file),fileF3498,LITREF(lit_10));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  lit_11 = YPsb((P)"init");
  T4 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_11),VARREF(YgooSsystemYTgoo_personal_rootT));
  fileF3500 = T4;
  tmpF3501 = fileF3500;
  if (tmpF3501 != YPfalse) {
    T7 = XCALL2(1,VARREF(YevalStopYload_file),fileF3500,LITREF(lit_10));
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
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;

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
  {"open", &module_info_gooSioSport, "open"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"until", &module_info_gooSmacros, "until"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"min", &module_info_gooSmag, "min"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"frame", &module_info_evalStop, "frame"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"event-name", &module_info_timeSevent, "event-name"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"ct", &module_info_gooSboot, "ct"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"event-broadcast", &module_info_timeSevent, "event-broadcast"},
  {"do", &module_info_gooSmacros, "do"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"rem", &module_info_gooSmath, "rem"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"^", &module_info_gooSmath, "^"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {">", &module_info_gooSmag, ">"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"app", &module_info_gooSmacros, "app"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"esc", &module_info_gooSboot, "esc"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"neg", &module_info_gooSmath, "neg"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
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
  {"function-body", &module_info_evalSast, "function-body"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"lock-unlock", &module_info_timeSlock, "lock-unlock"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"del", &module_info_gooScolsScol, "del"},
  {"g2c-build-app", &module_info_evalSg2c, "g2c-build-app"},
  {"logn", &module_info_gooSmath, "logn"},
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
  {"map2", &module_info_gooSmacros, "map2"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"<lock>", &module_info_timeSlock, "<lock>"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"seq", &module_info_gooSboot, "seq"},
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
  {"$$", &module_info_evalStop, "$$"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"tail", &module_info_gooSboot, "tail"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"thread-yield", &module_info_timeSthreads, "thread-yield"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"ast-walk", &module_info_evalSast, "ast-walk"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"fun", &module_info_gooSboot, "fun"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"random-using", &module_info_gooSrandom, "random-using"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"dp", &module_info_gooSboot, "dp"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"+", &module_info_gooSmath, "+"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use", &module_info_gooSboot, "use"},
  {"thread-current", &module_info_timeSthreads, "thread-current"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"dm", &module_info_gooSboot, "dm"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"def", &module_info_gooSboot, "def"},
  {"<thread>", &module_info_timeSthreads, "<thread>"},
  {"while", &module_info_gooSmacros, "while"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"g2c-goo", &module_info_evalSg2c, "g2c-goo"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"df", &module_info_gooSboot, "df"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"lock-handle", &module_info_timeSlock, "lock-handle"},
  {"not", &module_info_gooSboot, "not"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"dc", &module_info_gooSboot, "dc"},
  {"event-signal", &module_info_timeSevent, "event-signal"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"dg", &module_info_gooSboot, "dg"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"|", &module_info_gooSmath, "|"},
  {"module-uses-c-includes", &module_info_evalSast, "module-uses-c-includes"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"lock-state", &module_info_timeSlock, "lock-state"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"from", &module_info_gooScolsSrange, "from"},
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
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"mod", &module_info_gooSmath, "mod"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"function-adjectives", &module_info_evalSast, "function-adjectives"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<<", &module_info_gooSmath, "<<"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"col", &module_info_gooScolsScol, "col"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"read", &module_info_gooSruntime, "read"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"function-frame-len-setter", &module_info_evalSast, "function-frame-len-setter"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"<event>", &module_info_timeSevent, "<event>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"<low-let>", &module_info_evalSast, "<low-let>"},
  {"asin", &module_info_gooSmath, "asin"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"$$$", &module_info_evalStop, "$$$"},
  {"lock-lock", &module_info_timeSlock, "lock-lock"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"in", &module_info_gooSioSport, "in"},
  {"deq!", &module_info_colsSpipe, "deq!"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
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
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"test-thread-2", &module_info_timeSthreads, "test-thread-2"},
  {"head", &module_info_gooSboot, "head"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"top", &module_info_evalStop, "top"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"round", &module_info_gooSmath, "round"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"g2c-exp", &module_info_evalSg2c, "g2c-exp"},
  {"error", &module_info_gooSboot, "error"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"out", &module_info_gooSioSport, "out"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"event-wait", &module_info_timeSevent, "event-wait"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"sleep", &module_info_timeSthreads, "sleep"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"~", &module_info_gooSmath, "~"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"/", &module_info_gooSmath, "/"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"div", &module_info_gooSmath, "div"},
  {"op", &module_info_gooSmacros, "op"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"load", &module_info_evalStop, "load"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"event-wait-timed", &module_info_timeSevent, "event-wait-timed"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"$", &module_info_evalStop, "$"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
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
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"get", &module_info_gooSioSport, "get"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"function-frame-len", &module_info_evalSast, "function-frame-len"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"random-unit-using", &module_info_gooSrandom, "random-unit-using"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"always", &module_info_gooSruntime, "always"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"fin", &module_info_gooSboot, "fin"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"$e", &module_info_gooSmath, "$e"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"ast-walk!", &module_info_evalSast, "ast-walk!"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"try", &module_info_gooSboot, "try"},
  {"export", &module_info_gooSboot, "export"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"let", &module_info_gooSboot, "let"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"enq!", &module_info_colsSpipe, "enq!"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"g2c-ast", &module_info_evalSg2c, "g2c-ast"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"last", &module_info_gooSmacros, "last"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"lock-destroy", &module_info_timeSlock, "lock-destroy"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"thread-priority", &module_info_timeSthreads, "thread-priority"},
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
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"g2c-def-app", &module_info_evalSg2c, "g2c-def-app"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"g2c-clean", &module_info_evalSg2c, "g2c-clean"},
  {"set", &module_info_gooSboot, "set"},
  {"fab-random", &module_info_gooSrandom, "fab-random"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"random-unit", &module_info_gooSrandom, "random-unit"},
  {"random", &module_info_gooSrandom, "random"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"event-reset", &module_info_timeSevent, "event-reset"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"with-lock", &module_info_timeSlock, "with-lock"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"==", &module_info_gooSmacros, "=="},
  {"pow", &module_info_gooSmath, "pow"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"&", &module_info_gooSmath, "&"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"thread-name", &module_info_timeSthreads, "thread-name"},
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
  {"bt", &module_info_evalStop, "bt"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"t<", &module_info_gooStypes, "t<"},
  {"cos", &module_info_gooSmath, "cos"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"case", &module_info_gooSmacros, "case"},
  {"close", &module_info_gooSioSport, "close"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"floor", &module_info_gooSmath, "floor"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"<pipe>", &module_info_colsSpipe, "<pipe>"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"map", &module_info_gooSmacros, "map"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"-", &module_info_gooSmath, "-"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"test-thread-1", &module_info_timeSthreads, "test-thread-1"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {">>", &module_info_gooSmath, ">>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"atan", &module_info_gooSmath, "atan"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"max", &module_info_gooSmag, "max"},
  {"module-uses-c-libraries", &module_info_evalSast, "module-uses-c-libraries"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"~=", &module_info_gooSmath, "~="},
  {"g2c-top", &module_info_evalSg2c, "g2c-top"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"reject", &module_info_gooScolsSseq, "reject"},
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
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"t+", &module_info_gooStypes, "t+"},
  {"spawn", &module_info_timeSthreads, "spawn"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"thread-function", &module_info_timeSthreads, "thread-function"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"when", &module_info_gooSmacros, "when"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"g2c-test", &module_info_evalSg2c, "g2c-test"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"1-", &module_info_gooSmath, "1-"},
  {"len", &module_info_gooStypes, "len"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"*goo-date*", CVAR, &YevalSmainYTgoo_dateT},
  {"*goo-version*", CVAR, &YevalSmainYTgoo_versionT},
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
