/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: x8r/main */

EXT(Yx8rStopYauto_eval,"x8r/top","auto-eval");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yx8rSastYbinding_global_box,"x8r/ast","binding-global-box");
EXT(Yx8rSastYruntime_environment,"x8r/ast","runtime-environment");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yx8rSastYapplication_knownQ_setter,"x8r/ast","application-known?-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yx8rSastYfunction_data_refs,"x8r/ast","function-data-refs");
EXT(Yx8rSastYconstant_index,"x8r/ast","constant-index");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(Yx8rSastYmonitor_info,"x8r/ast","monitor-info");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yx8rSastYbinding_index_setter,"x8r/ast","binding-index-setter");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yx8rSastYLmonitorG,"x8r/ast","<monitor>");
EXT(Yx8rStopYg2c_eval,"x8r/top","g2c-eval");
EXT(Yx8rSastYfunction_registers,"x8r/ast","function-registers");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ynil,"goo/boot","nil");
EXT(Yx8rSastYbinding_index,"x8r/ast","binding-index");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
EXT(Yx8rSastYLboundQG,"x8r/ast","<bound?>");
EXT(Yx8rSg2cYg2c_def_app,"x8r/g2c","g2c-def-app");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yx8rSastYload_module,"x8r/ast","load-module");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yx8rSastYLargumentsG,"x8r/ast","<arguments>");
EXT(Yx8rSastYLapplicationG,"x8r/ast","<application>");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yx8rSg2cYg2c_test,"x8r/g2c","g2c-test");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(Yx8rStopYbt,"x8r/top","bt");
EXT(Yx8rSastYfunction_value,"x8r/ast","function-value");
EXT(Yx8rSastYLreal_referenceG,"x8r/ast","<real-reference>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yx8rSastYfunction_signature_setter,"x8r/ast","function-signature-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yx8rSastYassignment_reference,"x8r/ast","assignment-reference");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yx8rSastYLunwind_protectG,"x8r/ast","<unwind-protect>");
EXT(Yx8rStopYload,"x8r/top","load");
EXT(Yx8rSastYLast_signatureG,"x8r/ast","<ast-signature>");
EXT(Yx8rSastYbinding_kind,"x8r/ast","binding-kind");
EXT(Yx8rSastYbinding_native_toQ,"x8r/ast","binding-native-to?");
EXT(Yx8rSastYfind_environment_module,"x8r/ast","find-environment-module");
EXT(Yx8rSastYLalternativeG,"x8r/ast","<alternative>");
EXT(Yx8rSastYconstant_index_setter,"x8r/ast","constant-index-setter");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(Yx8rSastYfunction_signature,"x8r/ast","function-signature");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yx8rSastYLcompile_timeG,"x8r/ast","<compile-time>");
EXT(Yx8rSastYenvironment_module,"x8r/ast","environment-module");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yx8rSastYLast_primitive_definitionG,"x8r/ast","<ast-primitive-definition>");
EXT(Yx8rSastYglobal_box_value,"x8r/ast","global-box-value");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yx8rSastYbinding_dottedQ_setter,"x8r/ast","binding-dotted?-setter");
EXT(Yx8rSastYfix_let_body_setter,"x8r/ast","fix-let-body-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yx8rSastYremove_modules_by_nameX,"x8r/ast","remove-modules-by-name!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yx8rStopYsave_image,"x8r/top","save-image");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yx8rSastYbinding_dottedQ,"x8r/ast","binding-dotted?");
EXT(Yx8rSg2cYg2c_exp,"x8r/g2c","g2c-exp");
EXT(Yx8rSastYdo_static_global_bindings,"x8r/ast","do-static-global-bindings");
EXT(Yx8rSastYmonitor_test,"x8r/ast","monitor-test");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yx8rSastYLast_genericG,"x8r/ast","<ast-generic>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yx8rSastYLcomputed_programG,"x8r/ast","<computed-program>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Yx8rSastYunchecked_runtime_environment,"x8r/ast","unchecked-runtime-environment");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
DEF(Yx8rSmainYTgoo_versionT,"x8r/main","*goo-version*");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yx8rSastYenvironment_bindings,"x8r/ast","environment-bindings");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yx8rSastYLast_methodG,"x8r/ast","<ast-method>");
EXT(Yx8rSastYreport_undefined_global_bindings,"x8r/ast","report-undefined-global-bindings");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(Yx8rSg2cYg2c_clean,"x8r/g2c","g2c-clean");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yx8rSastYLreferenceG,"x8r/ast","<reference>");
EXT(Yx8rSastYLglobal_boxG,"x8r/ast","<global-box>");
EXT(Yx8rSastYalternative_alternant,"x8r/ast","alternative-alternant");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(Yx8rSastYapplication_knownQ,"x8r/ast","application-known?");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yx8rSastYenvironment_uses_modules,"x8r/ast","environment-uses-modules");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(Yx8rSastYlocals_body_setter,"x8r/ast","locals-body-setter");
EXT(Yx8rSastYreference_frame_offset,"x8r/ast","reference-frame-offset");
EXT(Yx8rSastYfix_let_arguments,"x8r/ast","fix-let-arguments");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yx8rStopYframe_var,"x8r/top","frame-var");
EXT(Yx8rSastYfunction_temporaries_setter,"x8r/ast","function-temporaries-setter");
EXT(Ytype_elts,"goo/boot","type-elts");
DEF(Yx8rSmainYTgoo_dateT,"x8r/main","*goo-date*");
EXT(Yx8rSastYLconstantG,"x8r/ast","<constant>");
EXT(Yx8rSastYapplication_arguments,"x8r/ast","application-arguments");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yx8rSastYcompile_time_program,"x8r/ast","compile-time-program");
EXT(Yx8rStopYdo_stack_frames,"x8r/top","do-stack-frames");
EXT(Yx8rSastYassignment_form_setter,"x8r/ast","assignment-form-setter");
EXT(YPprop,"goo/boot","%prop");
EXT(Yx8rSastYLmodule_loaderG,"x8r/ast","<module-loader>");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Yx8rStopYframe,"x8r/top","frame");
EXT(Yx8rSastYfunction_source,"x8r/ast","function-source");
EXT(Yx8rSastYfix_let_types_setter,"x8r/ast","fix-let-types-setter");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(Yx8rSastYset_module_environments,"x8r/ast","set-module-environments");
EXT(Yx8rSastYLfix_letG,"x8r/ast","<fix-let>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YPisa,"goo/boot","%isa");
EXT(Yx8rSastYast_evaluate,"x8r/ast","ast-evaluate");
EXT(Yx8rSastYobjectify_with_subtransaction,"x8r/ast","objectify-with-subtransaction");
EXT(Yx8rSastYenv_object_name,"x8r/ast","env-object-name");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yx8rSastYfunction_naryQ,"x8r/ast","function-nary?");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yx8rSastYLmoduleG,"x8r/ast","<module>");
EXT(Yx8rSastYbinding_value,"x8r/ast","binding-value");
EXT(Yx8rSastYfree_environment,"x8r/ast","free-environment");
EXT(Yx8rSastYLast_functionG,"x8r/ast","<ast-function>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yx8rSastYfunction_debug_name_setter,"x8r/ast","function-debug-name-setter");
EXT(Yx8rSastYinstall_initial_bindings,"x8r/ast","install-initial-bindings");
EXT(Yx8rSastYLpassive_programG,"x8r/ast","<passive-program>");
EXT(Yx8rSastYLmodule_bindingG,"x8r/ast","<module-binding>");
EXT(Yx8rSastYfix_let_types,"x8r/ast","fix-let-types");
EXT(Yx8rSastYsignature_arity,"x8r/ast","signature-arity");
EXT(Yx8rSastYreference_called_functionQ_setter,"x8r/ast","reference-called-function?-setter");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(Yx8rSastYfix_let_body,"x8r/ast","fix-let-body");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yx8rSastYfunction_debug_name,"x8r/ast","function-debug-name");
EXT(Yx8rSastYreference_binding,"x8r/ast","reference-binding");
EXT(Yx8rSastYLast_macro_definitionG,"x8r/ast","<ast-macro-definition>");
EXT(Yx8rSastYfunction_binding,"x8r/ast","function-binding");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(Yx8rSastYfunction_free,"x8r/ast","function-free");
EXT(Yx8rSastYapplication_binding,"x8r/ast","application-binding");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yvec,"goo/boot","vec");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yx8rSastYfunction_source_setter,"x8r/ast","function-source-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yx8rSastYobjectify_quotation,"x8r/ast","objectify-quotation");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yx8rSastYbinding_type_setter,"x8r/ast","binding-type-setter");
EXT(Yx8rSsyntaxYsexpr_signature_parameters,"x8r/syntax","sexpr-signature-parameters");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLvecG,"goo/boot","<vec>");
EXT(Yx8rSastYprogram_type,"x8r/ast","program-type");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yx8rSastYalternative_condition,"x8r/ast","alternative-condition");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yx8rSastYreference_called_functionQ,"x8r/ast","reference-called-function?");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSbufYpop_lastX,"goo/cols/buf","pop-last!");
EXT(Yx8rSastYLfab_listG,"x8r/ast","<fab-list>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yx8rSastYLlocalsG,"x8r/ast","<locals>");
EXT(Yx8rSastYbinding_inferred_type,"x8r/ast","binding-inferred-type");
EXT(Yx8rSastYmodule_syntax_environment,"x8r/ast","module-syntax-environment");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yx8rSastYfunction_index,"x8r/ast","function-index");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yx8rSastYLglobal_referenceG,"x8r/ast","<global-reference>");
EXT(Yx8rSastYlocals_functions_setter,"x8r/ast","locals-functions-setter");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ynew,"goo/boot","new");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(Yx8rSastYsignature_naryQ,"x8r/ast","signature-nary?");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yx8rSastYLpredefined_applicationG,"x8r/ast","<predefined-application>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yx8rSastYmodule_target_environment,"x8r/ast","module-target-environment");
EXT(Yx8rSastYLlocal_referenceG,"x8r/ast","<local-reference>");
EXT(Yx8rSastYalternative_consequent,"x8r/ast","alternative-consequent");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yx8rSg2cYg2c_build_app,"x8r/g2c","g2c-build-app");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yx8rSastYDgoo_boot_module_name,"x8r/ast","$goo-boot-module-name");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yx8rSastYdo_named_static_global_bindings,"x8r/ast","do-named-static-global-bindings");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Yx8rSastYassignment_binding,"x8r/ast","assignment-binding");
EXT(Yx8rSastYmonitor_type,"x8r/ast","monitor-type");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yx8rSastYassignment_form,"x8r/ast","assignment-form");
EXT(Yx8rSastYLdefinitionG,"x8r/ast","<definition>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yx8rSastYsignature_names,"x8r/ast","signature-names");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yx8rSastYLbind_exitG,"x8r/ast","<bind-exit>");
EXT(Yx8rSastYapplication_function,"x8r/ast","application-function");
EXT(Yx8rSastYfunction_body_setter,"x8r/ast","function-body-setter");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSbufYLbufG,"goo/cols/buf","<buf>");
EXT(Ylst,"goo/boot","lst");
EXT(Yx8rSastYdo_module_loader_modules,"x8r/ast","do-module-loader-modules");
EXT(Yx8rSastYlocals_body,"x8r/ast","locals-body");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yx8rSastYbind_exit_main_fun,"x8r/ast","bind-exit-main-fun");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yx8rSastYmodule_exports,"x8r/ast","module-exports");
EXT(Yx8rStopYparse_in,"x8r/top","parse-in");
EXT(Yx8rSastYprogram_register,"x8r/ast","program-register");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yx8rSastYLraw_constantG,"x8r/ast","<raw-constant>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(Yx8rSastYmonitor_handler,"x8r/ast","monitor-handler");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Yx8rSastYlocals_bindings_setter,"x8r/ast","locals-bindings-setter");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
EXT(Yx8rSastYLruntime_referenceG,"x8r/ast","<runtime-reference>");
EXT(Yx8rSastYboundQ_reference,"x8r/ast","bound?-reference");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yx8rSastYsignature_naryQ_setter,"x8r/ast","signature-nary?-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yx8rSastYload_in,"x8r/ast","load-in");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Ytup,"goo/boot","tup");
EXT(Yx8rSastYprogram_type_setter,"x8r/ast","program-type-setter");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsScolYfillX,"goo/cols/col","fill!");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yx8rSastYLmodule_binding_referenceG,"x8r/ast","<module-binding-reference>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yx8rSastYfix_let_bindings_setter,"x8r/ast","fix-let-bindings-setter");
EXT(Yx8rSastYfunction_temporaries,"x8r/ast","function-temporaries");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(Yx8rSsyntaxYeval,"x8r/syntax","eval");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yx8rSastYfunction_registers_setter,"x8r/ast","function-registers-setter");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yx8rSastYfab_g2c_module,"x8r/ast","fab-g2c-module");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yx8rSastYbinding_value_setter,"x8r/ast","binding-value-setter");
EXT(Yx8rStopYesctst,"x8r/top","esctst");
EXT(Yx8rSastYsignature_value_setter,"x8r/ast","signature-value-setter");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Yx8rSastYprogram_register_setter,"x8r/ast","program-register-setter");
EXT(Yx8rSastYbinding_info,"x8r/ast","binding-info");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yx8rSastYreference_frame_number,"x8r/ast","reference-frame-number");
EXT(Yx8rSastYLlocal_bindingG,"x8r/ast","<local-binding>");
EXT(Yx8rSastYLassignmentG,"x8r/ast","<assignment>");
EXT(Yx8rSastYmodule_name_to_relpath,"x8r/ast","module-name-to-relpath");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(Ynul,"goo/boot","nul");
EXT(Yx8rSastYsignature_value,"x8r/ast","signature-value");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yx8rSastYmodule_name,"x8r/ast","module-name");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yx8rSastYfunction_bindings,"x8r/ast","function-bindings");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooScolsSbufYpush_lastX,"goo/cols/buf","push-last!");
EXT(Yx8rSastYbinding_type,"x8r/ast","binding-type");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yx8rSastYfunction_body,"x8r/ast","function-body");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(Yx8rStopYread_file,"x8r/top","read-file");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yx8rSastYLruntime_assignmentG,"x8r/ast","<runtime-assignment>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yx8rSastYfix_let_bindings,"x8r/ast","fix-let-bindings");
EXT(Yx8rStopYtop,"x8r/top","top");
EXT(Yx8rSastYLfree_environmentG,"x8r/ast","<free-environment>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yx8rSastYsignature_bindings_setter,"x8r/ast","signature-bindings-setter");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(Yx8rSastYbinding_info_setter,"x8r/ast","binding-info-setter");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
EXT(Yx8rSastYLprogramG,"x8r/ast","<program>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yx8rSastYfind_binding,"x8r/ast","find-binding");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yx8rSastYLregular_applicationG,"x8r/ast","<regular-application>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yx8rSastYapplication_tailQ,"x8r/ast","application-tail?");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yx8rSastYfunction_self_recursiveQ_setter,"x8r/ast","function-self-recursive?-setter");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yx8rSastYbinding_global_box_setter,"x8r/ast","binding-global-box-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Yx8rSastYbinding_module_name,"x8r/ast","binding-module-name");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yx8rSastYsignature_specs_setter,"x8r/ast","signature-specs-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yx8rSastYlocals_functions,"x8r/ast","locals-functions");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yx8rSastYunwind_protect_cleanup_thunk,"x8r/ast","unwind-protect-cleanup-thunk");
EXT(YgooScolsSbufYbuf,"goo/cols/buf","buf");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yx8rSastYmonitor_main_thunk,"x8r/ast","monitor-main-thunk");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
EXT(Yx8rSg2cYg2c_ast,"x8r/g2c","g2c-ast");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yx8rSastYmodule_binding,"x8r/ast","module-binding");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yx8rSastYsequentialize,"x8r/ast","sequentialize");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yx8rSastYas_lst,"x8r/ast","as-lst");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yx8rSastYfunction_free_setter,"x8r/ast","function-free-setter");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yx8rSastYbinding_dynamic_extentQ_setter,"x8r/ast","binding-dynamic-extent?-setter");
EXT(Yx8rSastYbinding_inferred_type_setter,"x8r/ast","binding-inferred-type-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yx8rSastYlocals_bindings,"x8r/ast","locals-bindings");
EXT(Yx8rSastYunwind_protect_protected_thunk,"x8r/ast","unwind-protect-protected-thunk");
EXT(Yx8rSastYmodule_loader_module_type,"x8r/ast","module-loader-module-type");
EXT(Yx8rSastYbinding_dynamic_extentQ,"x8r/ast","binding-dynamic-extent?");
EXT(Yx8rSastYbinding_mutableQ,"x8r/ast","binding-mutable?");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(Yx8rSastYast_define_binding,"x8r/ast","ast-define-binding");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yx8rSastYLsequentialG,"x8r/ast","<sequential>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yx8rSastYLast_primitiveG,"x8r/ast","<ast-primitive>");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(Yx8rSastYprobe_module,"x8r/ast","probe-module");
EXT(Yx8rSastYfunction_index_setter,"x8r/ast","function-index-setter");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yx8rSastYLlocal_assignmentG,"x8r/ast","<local-assignment>");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yx8rSastYLbindingG,"x8r/ast","<binding>");
EXT(Yx8rSastYLimmediate_constantG,"x8r/ast","<immediate-constant>");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yx8rSg2cYg2c_top,"x8r/g2c","g2c-top");
EXT(Yx8rSastYLstatic_global_environmentG,"x8r/ast","<static-global-environment>");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yx8rSastYLglobal_assignmentG,"x8r/ast","<global-assignment>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yx8rSastYsignature_arity_setter,"x8r/ast","signature-arity-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yx8rSastYobjectify_signature,"x8r/ast","objectify-signature");
EXT(Yx8rSastYfunction_data_refs_setter,"x8r/ast","function-data-refs-setter");
EXT(Yx8rStopYbacktrace,"x8r/top","backtrace");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(Yx8rSastYinit_ast,"x8r/ast","init-ast");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yx8rSastYsignature_names_setter,"x8r/ast","signature-names-setter");
EXT(Yx8rSastYinit_environment_for_eval,"x8r/ast","init-environment-for-eval");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Yx8rSastYfix_let_arguments_setter,"x8r/ast","fix-let-arguments-setter");
EXT(Yx8rSastYsignature_specs,"x8r/ast","signature-specs");
EXT(Yx8rSastYsignature_bindings,"x8r/ast","signature-bindings");
EXT(Yx8rSastYbinding_name,"x8r/ast","binding-name");
EXT(Yx8rSastYLprogramsG,"x8r/ast","<programs>");
EXT(Yx8rSastYbinding_locative,"x8r/ast","binding-locative");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yx8rSastYglobal_box_value_setter,"x8r/ast","global-box-value-setter");
EXT(Yx8rSastYconstant_value,"x8r/ast","constant-value");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(Yx8rSastYfunction_self_recursiveQ,"x8r/ast","function-self-recursive?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYB,"goo/math","&");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_6);
DEFLIT(lit_3);
DEFLIT(lit_10);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_5);
DEFLIT(lit_8);
DEFLIT(lit_4);
DEFLIT(lit_1);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_0);

/* FUNCTIONS: */

extern P Yx8rSmainY___main_0___ ();

/* FUNCTION CODES: */

P Yx8rSmainY___main_0___() {
  P T3,T2,T1,T0;
loop:
  lit_0 = YPsb((P)"0.117");
  VARSET(Yx8rSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"MAR 19, 2002");
  VARSET(Yx8rSmainYTgoo_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; GOO\n");
  CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_2));
  lit_3 = YPsb((P)";;; JONATHAN BACHRACH\n");
  CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_3));
  lit_4 = YPsb((P)";;; MIT AI Lab\n");
  CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_4));
  lit_5 = YPsb((P)";;; %s\n");
  CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_5),VARREF(Yx8rSmainYTgoo_dateT));
  lit_6 = YPsb((P)";;; \n");
  CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_6));
  lit_7 = YPsb((P)";;; VERSION = %s\n");
  CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_7),VARREF(Yx8rSmainYTgoo_versionT));
  lit_8 = YPsb((P)";;; ROOT    = %s\n");
  CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_8),VARREF(YgooSsystemYTgoo_rootT));
  CALL0(1,VARREF(Yx8rSastYinit_ast));
  lit_9 = YPsb((P)"system-patches.goo");
  lit_10 = YPPsym((P)"goo/user");
  T0 = CALL1(1,VARREF(YgooSsystemYadd_src_path),LITREF(lit_9));
  CALL2(1,VARREF(Yx8rStopYload),T0,LITREF(lit_10));
  lit_11 = YPsb((P)"user-patches.goo");
  T1 = CALL1(1,VARREF(YgooSsystemYadd_src_path),LITREF(lit_11));
  CALL2(1,VARREF(Yx8rStopYload),T1,LITREF(lit_10));
  T3 = CALL1(1,VARREF(Yx8rStopYtop),LITREF(lit_10));
  T2 = T3;
  return T2;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSeval;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_x8rSast;
extern MODULE_INFO module_info_x8rStop;
extern MODULE_INFO module_info_x8rSg2c;
extern MODULE_INFO module_info_gooSuser;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_x8rSsyntax;
extern MODULE_INFO module_info_gooScolsSbuf;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSeval},
  {&module_info_gooSsystem},
  {&module_info_x8rSast},
  {&module_info_x8rStop},
  {&module_info_x8rSg2c},
  {&module_info_gooSuser},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"auto-eval", &module_info_x8rStop, "auto-eval"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"binding-global-box", &module_info_x8rSast, "binding-global-box"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"runtime-environment", &module_info_x8rSast, "runtime-environment"},
  {"*", &module_info_gooSmath, "*"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"application-known?-setter", &module_info_x8rSast, "application-known?-setter"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"function-data-refs", &module_info_x8rSast, "function-data-refs"},
  {"constant-index", &module_info_x8rSast, "constant-index"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"~==", &module_info_gooSmath, "~=="},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"monitor-info", &module_info_x8rSast, "monitor-info"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"put", &module_info_gooSioSport, "put"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"binding-index-setter", &module_info_x8rSast, "binding-index-setter"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"<monitor>", &module_info_x8rSast, "<monitor>"},
  {"g2c-eval", &module_info_x8rStop, "g2c-eval"},
  {"function-registers", &module_info_x8rSast, "function-registers"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"1+", &module_info_gooSmath, "1+"},
  {"nil", &module_info_gooSboot, "nil"},
  {"def-programs", &module_info_x8rSast, "def-programs"},
  {"binding-index", &module_info_x8rSast, "binding-index"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"<bound?>", &module_info_x8rSast, "<bound?>"},
  {"g2c-def-app", &module_info_x8rSg2c, "g2c-def-app"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"load-module", &module_info_x8rSast, "load-module"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<arguments>", &module_info_x8rSast, "<arguments>"},
  {"<application>", &module_info_x8rSast, "<application>"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {">>", &module_info_gooSmath, ">>"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"^", &module_info_gooSmath, "^"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"t<", &module_info_gooStypes, "t<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"g2c-test", &module_info_x8rSg2c, "g2c-test"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"bt", &module_info_x8rStop, "bt"},
  {"function-value", &module_info_x8rSast, "function-value"},
  {"<real-reference>", &module_info_x8rSast, "<real-reference>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"function-signature-setter", &module_info_x8rSast, "function-signature-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"assignment-reference", &module_info_x8rSast, "assignment-reference"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"<unwind-protect>", &module_info_x8rSast, "<unwind-protect>"},
  {"load", &module_info_x8rStop, "load"},
  {"<ast-signature>", &module_info_x8rSast, "<ast-signature>"},
  {"binding-kind", &module_info_x8rSast, "binding-kind"},
  {"binding-native-to?", &module_info_x8rSast, "binding-native-to?"},
  {"find-environment-module", &module_info_x8rSast, "find-environment-module"},
  {"<alternative>", &module_info_x8rSast, "<alternative>"},
  {"constant-index-setter", &module_info_x8rSast, "constant-index-setter"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"function-signature", &module_info_x8rSast, "function-signature"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<compile-time>", &module_info_x8rSast, "<compile-time>"},
  {"environment-module", &module_info_x8rSast, "environment-module"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"<ast-primitive-definition>", &module_info_x8rSast, "<ast-primitive-definition>"},
  {"global-box-value", &module_info_x8rSast, "global-box-value"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"binding-dotted?-setter", &module_info_x8rSast, "binding-dotted?-setter"},
  {"fix-let-body-setter", &module_info_x8rSast, "fix-let-body-setter"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"or", &module_info_gooSmacros, "or"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"remove-modules-by-name!", &module_info_x8rSast, "remove-modules-by-name!"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"save-image", &module_info_x8rStop, "save-image"},
  {"t=", &module_info_gooStypes, "t="},
  {"items", &module_info_gooScolsScol, "items"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"binding-dotted?", &module_info_x8rSast, "binding-dotted?"},
  {"g2c-exp", &module_info_x8rSg2c, "g2c-exp"},
  {"do-static-global-bindings", &module_info_x8rSast, "do-static-global-bindings"},
  {"monitor-test", &module_info_x8rSast, "monitor-test"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<ast-generic>", &module_info_x8rSast, "<ast-generic>"},
  {"any?", &module_info_gooStypes, "any?"},
  {"round/", &module_info_gooSmath, "round/"},
  {"|", &module_info_gooSmath, "|"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"def", &module_info_gooSboot, "def"},
  {"<computed-program>", &module_info_x8rSast, "<computed-program>"},
  {"do", &module_info_gooSmacros, "do"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"mif", &module_info_gooSboot, "mif"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"unchecked-runtime-environment", &module_info_x8rSast, "unchecked-runtime-environment"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"out", &module_info_gooSioSport, "out"},
  {"environment-bindings", &module_info_x8rSast, "environment-bindings"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<ast-method>", &module_info_x8rSast, "<ast-method>"},
  {"report-undefined-global-bindings", &module_info_x8rSast, "report-undefined-global-bindings"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"g2c-clean", &module_info_x8rSg2c, "g2c-clean"},
  {"tail", &module_info_gooSboot, "tail"},
  {"now", &module_info_gooScolsScol, "now"},
  {"<reference>", &module_info_x8rSast, "<reference>"},
  {"<global-box>", &module_info_x8rSast, "<global-box>"},
  {"alternative-alternant", &module_info_x8rSast, "alternative-alternant"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"application-known?", &module_info_x8rSast, "application-known?"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"+", &module_info_gooSmath, "+"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"environment-uses-modules", &module_info_x8rSast, "environment-uses-modules"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"locals-body-setter", &module_info_x8rSast, "locals-body-setter"},
  {"reference-frame-offset", &module_info_x8rSast, "reference-frame-offset"},
  {"fix-let-arguments", &module_info_x8rSast, "fix-let-arguments"},
  {"max", &module_info_gooSmag, "max"},
  {"frame-var", &module_info_x8rStop, "frame-var"},
  {"function-temporaries-setter", &module_info_x8rSast, "function-temporaries-setter"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"<constant>", &module_info_x8rSast, "<constant>"},
  {"application-arguments", &module_info_x8rSast, "application-arguments"},
  {"seq", &module_info_gooSboot, "seq"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"compile-time-program", &module_info_x8rSast, "compile-time-program"},
  {"do-stack-frames", &module_info_x8rStop, "do-stack-frames"},
  {"assignment-form-setter", &module_info_x8rSast, "assignment-form-setter"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"and", &module_info_gooSmacros, "and"},
  {"op", &module_info_gooSmacros, "op"},
  {"<module-loader>", &module_info_x8rSast, "<module-loader>"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"frame", &module_info_x8rStop, "frame"},
  {"function-source", &module_info_x8rSast, "function-source"},
  {"fix-let-types-setter", &module_info_x8rSast, "fix-let-types-setter"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"fin", &module_info_gooSboot, "fin"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"set-module-environments", &module_info_x8rSast, "set-module-environments"},
  {"<fix-let>", &module_info_x8rSast, "<fix-let>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"ast-evaluate", &module_info_x8rSast, "ast-evaluate"},
  {"objectify-with-subtransaction", &module_info_x8rSast, "objectify-with-subtransaction"},
  {"env-object-name", &module_info_x8rSast, "env-object-name"},
  {"close", &module_info_gooSioSport, "close"},
  {"let", &module_info_gooSboot, "let"},
  {"function-nary?", &module_info_x8rSast, "function-nary?"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"<module>", &module_info_x8rSast, "<module>"},
  {"binding-value", &module_info_x8rSast, "binding-value"},
  {"free-environment", &module_info_x8rSast, "free-environment"},
  {"<ast-function>", &module_info_x8rSast, "<ast-function>"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"function-debug-name-setter", &module_info_x8rSast, "function-debug-name-setter"},
  {"install-initial-bindings", &module_info_x8rSast, "install-initial-bindings"},
  {"<passive-program>", &module_info_x8rSast, "<passive-program>"},
  {"<module-binding>", &module_info_x8rSast, "<module-binding>"},
  {"fix-let-types", &module_info_x8rSast, "fix-let-types"},
  {"signature-arity", &module_info_x8rSast, "signature-arity"},
  {"ds", &module_info_gooSboot, "ds"},
  {"reference-called-function?-setter", &module_info_x8rSast, "reference-called-function?-setter"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"fix-let-body", &module_info_x8rSast, "fix-let-body"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"function-debug-name", &module_info_x8rSast, "function-debug-name"},
  {"reference-binding", &module_info_x8rSast, "reference-binding"},
  {"<ast-macro-definition>", &module_info_x8rSast, "<ast-macro-definition>"},
  {"function-binding", &module_info_x8rSast, "function-binding"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"function-free", &module_info_x8rSast, "function-free"},
  {"application-binding", &module_info_x8rSast, "application-binding"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"add", &module_info_gooScolsScol, "add"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"vec", &module_info_gooSboot, "vec"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"function-source-setter", &module_info_x8rSast, "function-source-setter"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"ct", &module_info_gooSboot, "ct"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"match", &module_info_gooSmacros, "match"},
  {"min", &module_info_gooSmag, "min"},
  {"objectify-quotation", &module_info_x8rSast, "objectify-quotation"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"round", &module_info_gooSmath, "round"},
  {"binding-type-setter", &module_info_x8rSast, "binding-type-setter"},
  {"sexpr-signature-parameters", &module_info_x8rSsyntax, "sexpr-signature-parameters"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"program-type", &module_info_x8rSast, "program-type"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"in", &module_info_gooSioSport, "in"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"alternative-condition", &module_info_x8rSast, "alternative-condition"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"reference-called-function?", &module_info_x8rSast, "reference-called-function?"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"pop-last!", &module_info_gooScolsSbuf, "pop-last!"},
  {"<fab-list>", &module_info_x8rSast, "<fab-list>"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"dc", &module_info_gooSboot, "dc"},
  {"<locals>", &module_info_x8rSast, "<locals>"},
  {"binding-inferred-type", &module_info_x8rSast, "binding-inferred-type"},
  {"module-syntax-environment", &module_info_x8rSast, "module-syntax-environment"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"function-index", &module_info_x8rSast, "function-index"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"def-list", &module_info_x8rSast, "def-list"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<global-reference>", &module_info_x8rSast, "<global-reference>"},
  {"locals-functions-setter", &module_info_x8rSast, "locals-functions-setter"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"new", &module_info_gooSboot, "new"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"always", &module_info_gooSruntime, "always"},
  {"signature-nary?", &module_info_x8rSast, "signature-nary?"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"into", &module_info_gooScolsScol, "into"},
  {"<predefined-application>", &module_info_x8rSast, "<predefined-application>"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"-", &module_info_gooSmath, "-"},
  {"df", &module_info_gooSboot, "df"},
  {"module-target-environment", &module_info_x8rSast, "module-target-environment"},
  {"<local-reference>", &module_info_x8rSast, "<local-reference>"},
  {"alternative-consequent", &module_info_x8rSast, "alternative-consequent"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"g2c-build-app", &module_info_x8rSg2c, "g2c-build-app"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"$goo-boot-module-name", &module_info_x8rSast, "$goo-boot-module-name"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"do-named-static-global-bindings", &module_info_x8rSast, "do-named-static-global-bindings"},
  {">=", &module_info_gooSmag, ">="},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"dv", &module_info_gooSboot, "dv"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"assignment-binding", &module_info_x8rSast, "assignment-binding"},
  {"monitor-type", &module_info_x8rSast, "monitor-type"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"assignment-form", &module_info_x8rSast, "assignment-form"},
  {"<definition>", &module_info_x8rSast, "<definition>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"signature-names", &module_info_x8rSast, "signature-names"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"case", &module_info_gooSmacros, "case"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"<bind-exit>", &module_info_x8rSast, "<bind-exit>"},
  {"application-function", &module_info_x8rSast, "application-function"},
  {"function-body-setter", &module_info_x8rSast, "function-body-setter"},
  {"set", &module_info_gooSboot, "set"},
  {"open", &module_info_gooSioSport, "open"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"<buf>", &module_info_gooScolsSbuf, "<buf>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"do-module-loader-modules", &module_info_x8rSast, "do-module-loader-modules"},
  {"locals-body", &module_info_x8rSast, "locals-body"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"not", &module_info_gooSboot, "not"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"rep", &module_info_gooSboot, "rep"},
  {"bind-exit-main-fun", &module_info_x8rSast, "bind-exit-main-fun"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"floor", &module_info_gooSmath, "floor"},
  {"module-exports", &module_info_x8rSast, "module-exports"},
  {"parse-in", &module_info_x8rStop, "parse-in"},
  {"program-register", &module_info_x8rSast, "program-register"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<raw-constant>", &module_info_x8rSast, "<raw-constant>"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"monitor-handler", &module_info_x8rSast, "monitor-handler"},
  {"fun", &module_info_gooSboot, "fun"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"dm", &module_info_gooSboot, "dm"},
  {"locals-bindings-setter", &module_info_x8rSast, "locals-bindings-setter"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"<runtime-reference>", &module_info_x8rSast, "<runtime-reference>"},
  {"bound?-reference", &module_info_x8rSast, "bound?-reference"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"signature-nary?-setter", &module_info_x8rSast, "signature-nary?-setter"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"load-in", &module_info_x8rSast, "load-in"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"tup", &module_info_gooSboot, "tup"},
  {"program-type-setter", &module_info_x8rSast, "program-type-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"head", &module_info_gooSboot, "head"},
  {"fill!", &module_info_gooScolsScol, "fill!"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"<module-binding-reference>", &module_info_x8rSast, "<module-binding-reference>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"map", &module_info_gooSmacros, "map"},
  {"<=", &module_info_gooSmag, "<="},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"fix-let-bindings-setter", &module_info_x8rSast, "fix-let-bindings-setter"},
  {"function-temporaries", &module_info_x8rSast, "function-temporaries"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"eval", &module_info_x8rSsyntax, "eval"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"function-registers-setter", &module_info_x8rSast, "function-registers-setter"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"fab-g2c-module", &module_info_x8rSast, "fab-g2c-module"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"binding-value-setter", &module_info_x8rSast, "binding-value-setter"},
  {"esctst", &module_info_x8rStop, "esctst"},
  {"signature-value-setter", &module_info_x8rSast, "signature-value-setter"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"program-register-setter", &module_info_x8rSast, "program-register-setter"},
  {"binding-info", &module_info_x8rSast, "binding-info"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"reference-frame-number", &module_info_x8rSast, "reference-frame-number"},
  {"<local-binding>", &module_info_x8rSast, "<local-binding>"},
  {"<assignment>", &module_info_x8rSast, "<assignment>"},
  {"module-name-to-relpath", &module_info_x8rSast, "module-name-to-relpath"},
  {"as", &module_info_gooStypes, "as"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"nul", &module_info_gooSboot, "nul"},
  {"signature-value", &module_info_x8rSast, "signature-value"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"find", &module_info_gooScolsScol, "find"},
  {"module-name", &module_info_x8rSast, "module-name"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"when", &module_info_gooSmacros, "when"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"function-bindings", &module_info_x8rSast, "function-bindings"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"get", &module_info_gooSioSport, "get"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"push-last!", &module_info_gooScolsSbuf, "push-last!"},
  {"binding-type", &module_info_x8rSast, "binding-type"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"t*", &module_info_gooStypes, "t*"},
  {"until", &module_info_gooSmacros, "until"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"function-body", &module_info_x8rSast, "function-body"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"read-file", &module_info_x8rStop, "read-file"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"<runtime-assignment>", &module_info_x8rSast, "<runtime-assignment>"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"fix-let-bindings", &module_info_x8rSast, "fix-let-bindings"},
  {"top", &module_info_x8rStop, "top"},
  {"loc", &module_info_gooSboot, "loc"},
  {"<free-environment>", &module_info_x8rSast, "<free-environment>"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"signature-bindings-setter", &module_info_x8rSast, "signature-bindings-setter"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"read", &module_info_gooSruntime, "read"},
  {"binding-info-setter", &module_info_x8rSast, "binding-info-setter"},
  {"app", &module_info_gooSmacros, "app"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"push", &module_info_gooScolsSlst, "push"},
  {"<program>", &module_info_x8rSast, "<program>"},
  {">", &module_info_gooSmag, ">"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"find-binding", &module_info_x8rSast, "find-binding"},
  {"~=", &module_info_gooSmath, "~="},
  {"rem", &module_info_gooSmath, "rem"},
  {"<regular-application>", &module_info_x8rSast, "<regular-application>"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"application-tail?", &module_info_x8rSast, "application-tail?"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"format", &module_info_gooSruntime, "format"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"function-self-recursive?-setter", &module_info_x8rSast, "function-self-recursive?-setter"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"binding-global-box-setter", &module_info_x8rSast, "binding-global-box-setter"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"binding-module-name", &module_info_x8rSast, "binding-module-name"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"signature-specs-setter", &module_info_x8rSast, "signature-specs-setter"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"locals-functions", &module_info_x8rSast, "locals-functions"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"unwind-protect-cleanup-thunk", &module_info_x8rSast, "unwind-protect-cleanup-thunk"},
  {"buf", &module_info_gooScolsSbuf, "buf"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"monitor-main-thunk", &module_info_x8rSast, "monitor-main-thunk"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"<", &module_info_gooSmag, "<"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"g2c-ast", &module_info_x8rSg2c, "g2c-ast"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"module-binding", &module_info_x8rSast, "module-binding"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"sequentialize", &module_info_x8rSast, "sequentialize"},
  {"t+", &module_info_gooStypes, "t+"},
  {"as-lst", &module_info_x8rSast, "as-lst"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"function-free-setter", &module_info_x8rSast, "function-free-setter"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"binding-dynamic-extent?-setter", &module_info_x8rSast, "binding-dynamic-extent?-setter"},
  {"binding-inferred-type-setter", &module_info_x8rSast, "binding-inferred-type-setter"},
  {"mod", &module_info_gooSmath, "mod"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<<", &module_info_gooSmath, "<<"},
  {"abs", &module_info_gooSmath, "abs"},
  {"/", &module_info_gooSmath, "/"},
  {"locals-bindings", &module_info_x8rSast, "locals-bindings"},
  {"unwind-protect-protected-thunk", &module_info_x8rSast, "unwind-protect-protected-thunk"},
  {"module-loader-module-type", &module_info_x8rSast, "module-loader-module-type"},
  {"binding-dynamic-extent?", &module_info_x8rSast, "binding-dynamic-extent?"},
  {"binding-mutable?", &module_info_x8rSast, "binding-mutable?"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"ast-define-binding", &module_info_x8rSast, "ast-define-binding"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"~", &module_info_gooSmath, "~"},
  {"<sequential>", &module_info_x8rSast, "<sequential>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"error", &module_info_gooSboot, "error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"<ast-primitive>", &module_info_x8rSast, "<ast-primitive>"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"probe-module", &module_info_x8rSast, "probe-module"},
  {"function-index-setter", &module_info_x8rSast, "function-index-setter"},
  {"=", &module_info_gooSmath, "="},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<local-assignment>", &module_info_x8rSast, "<local-assignment>"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"<binding>", &module_info_x8rSast, "<binding>"},
  {"for", &module_info_gooSmacros, "for"},
  {"<immediate-constant>", &module_info_x8rSast, "<immediate-constant>"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"g2c-top", &module_info_x8rSg2c, "g2c-top"},
  {"export", &module_info_gooSboot, "export"},
  {"<static-global-environment>", &module_info_x8rSast, "<static-global-environment>"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<global-assignment>", &module_info_x8rSast, "<global-assignment>"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"signature-arity-setter", &module_info_x8rSast, "signature-arity-setter"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"objectify-signature", &module_info_x8rSast, "objectify-signature"},
  {"function-data-refs-setter", &module_info_x8rSast, "function-data-refs-setter"},
  {"backtrace", &module_info_x8rStop, "backtrace"},
  {"esc", &module_info_gooSboot, "esc"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"init-ast", &module_info_x8rSast, "init-ast"},
  {"dg", &module_info_gooSboot, "dg"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"signature-names-setter", &module_info_x8rSast, "signature-names-setter"},
  {"init-environment-for-eval", &module_info_x8rSast, "init-environment-for-eval"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"fix-let-arguments-setter", &module_info_x8rSast, "fix-let-arguments-setter"},
  {"try", &module_info_gooSboot, "try"},
  {"signature-specs", &module_info_x8rSast, "signature-specs"},
  {"signature-bindings", &module_info_x8rSast, "signature-bindings"},
  {"binding-name", &module_info_x8rSast, "binding-name"},
  {"quote", &module_info_gooSboot, "quote"},
  {"<programs>", &module_info_x8rSast, "<programs>"},
  {"isa", &module_info_gooSboot, "isa"},
  {"binding-locative", &module_info_x8rSast, "binding-locative"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"while", &module_info_gooSmacros, "while"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"global-box-value-setter", &module_info_x8rSast, "global-box-value-setter"},
  {"constant-value", &module_info_x8rSast, "constant-value"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"function-self-recursive?", &module_info_x8rSast, "function-self-recursive?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"&", &module_info_gooSmath, "&"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"*goo-version*", &Yx8rSmainYTgoo_versionT},
  {"*goo-date*", &Yx8rSmainYTgoo_dateT},
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {NULL, NULL}
};

extern MODULE_INFO module_info_x8rSmain;
MODULE_INFO module_info_x8rSmain = {
  "x8r/main",
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
extern void load_module_x8rSast (void);
extern void load_module_x8rStop (void);
extern void load_module_x8rSg2c (void);
extern void load_module_gooSuser (void);

/* EXPRESSION: */

extern void load_module_x8rSmain (void);

void load_module_x8rSmain (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSeval();
  load_module_gooSsystem();
  load_module_x8rSast();
  load_module_x8rStop();
  load_module_x8rSg2c();
  load_module_gooSuser();

  (P)Yx8rSmainY___main_0___();

}

/* END OF GENERATED CODE. */
