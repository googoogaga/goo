/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/optimize");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/optimize */

EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
DEF(YevalSoptimizeYensure_loop,"eval/optimize","ensure-loop");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(Yfab_pair,"goo/boot","fab-pair");
DEF(YevalSoptimizeYpreceding_specializerQ,"eval/optimize","preceding-specializer?");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YevalSoptimizeYdo_do_call_analysisX,"eval/optimize","do-do-call-analysis!");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YevalSoptimizeYDmethods_unordered,"eval/optimize","$methods-unordered");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yarity_error,"goo/boot","arity-error");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
DEF(YevalSoptimizeYLarg_seqG,"eval/optimize","<arg-seq>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
DEF(YevalSoptimizeYDmethod2_precedes,"eval/optimize","$method2-precedes");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YevalSoptimizeYarguments_potentially_jointQ,"eval/optimize","arguments-potentially-joint?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
DEF(YevalSoptimizeYdo_call_analysisX,"eval/optimize","do-call-analysis!");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
DEF(YevalSoptimizeYunconstrained_typeQ,"eval/optimize","unconstrained-type?");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
DEF(YevalSoptimizeYsorted_applicable_methods_using_types,"eval/optimize","sorted-applicable-methods-using-types");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YevalSoptimizeYmethod_relationship,"eval/optimize","method-relationship");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSoptimizeYtype_equivQ,"eval/optimize","type-equiv?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YsubtypeQ,"goo/boot","subtype?");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
DEF(YevalSoptimizeYanalyze_calls,"eval/optimize","analyze-calls");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
DEF(YevalSoptimizeYreopt_topX,"eval/optimize","reopt-top!");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
DEF(YevalSoptimizeYpotentially_jointQ,"eval/optimize","potentially-joint?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
DEF(YevalSoptimizeYDmethod1_precedes,"eval/optimize","$method1-precedes");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YevalSoptimizeYLmet_seqG,"eval/optimize","<met-seq>");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
DEF(YevalSoptimizeYmethod_precedesQ,"eval/optimize","method-precedes?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_11);
DEFLIT(lit_18);
DEFLIT(lit_12);
DEFLIT(lit_33);
DEFLIT(lit_14);
DEFLIT(lit_28);
DEFLIT(lit_35);
DEFLIT(lit_10);
DEFLIT(lit_21);
DEFLIT(lit_25);
DEFLIT(lit_30);
DEFLIT(lit_41);
DEFLIT(lit_40);
DEFLIT(lit_39);
DEFLIT(lit_38);
DEFLIT(lit_17);
DEFLIT(lit_7);
DEFLIT(lit_23);
DEFLIT(lit_31);
DEFLIT(lit_2);
DEFLIT(lit_44);
DEFLIT(lit_9);
DEFLIT(lit_22);
DEFLIT(lit_29);
DEFLIT(lit_36);
DEFLIT(lit_27);
DEFLIT(lit_43);
DEFLIT(lit_0);
DEFLIT(lit_20);
DEFLIT(lit_13);
DEFLIT(lit_8);
DEFLIT(lit_32);
DEFLIT(lit_1);
DEFLIT(lit_24);
DEFLIT(lit_37);
DEFLIT(lit_16);
DEFLIT(lit_6);
DEFLIT(lit_34);
DEFLIT(lit_15);
DEFLIT(lit_26);
DEFLIT(lit_5);
DEFLIT(lit_19);
DEFLIT(lit_4);
DEFLIT(lit_42);
DEFLIT(lit_3);

/* FUNCTIONS: */

LOCFOR(fun_unconstrained_typeQ_0);
LOCFOR(fun_unconstrained_typeQ_1);
LOCFOR(fun_unconstrained_typeQ_2);
LOCFOR(fun_after_mQ_3);
LOCFOR(fun_merge_method_4);
LOCFOR(fun_sorted_applicable_methods_using_types_5);
LOCFOR(fun_method_precedesQ_6);
LOCFOR(fun_method_relationship_7);
LOCFOR(fun_preceding_specializerQ_8);
LOCFOR(fun_arguments_potentially_jointQ_9);
FUNFOR(YevalSoptimizeYpotentially_jointQ);
LOCFOR(fun_type_equivQ_11);
LOCFOR(fun_do_do_call_analysisX_12);
LOCFOR(fun_do_call_analysisX_13);
FUNFOR(YevalSoptimizeYreopt_topX);
LOCFOR(fun_do_call_analysisX_15);
LOCFOR(fun_do_call_analysisX_16);
LOCFOR(fun_ensure_loop_17);
LOCFOR(fun_18);
LOCFOR(fun_do_call_analysisX_19);
LOCFOR(fun_do_call_analysisX_20);
LOCFOR(fun_21);
LOCFOR(fun_22);
LOCFOR(fun_analyze_calls_23);
extern P YevalSoptimizeY___main_0___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_unconstrained_typeQ_0) {
  P b_;
LINK_STACK();
  ARG(b_, 0);
UNLINK_STACK();
  RET(YPfalse);
}

LOCCODEDEF(fun_unconstrained_typeQ_1) {
  P b_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(b_, 0);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_3));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_name),b_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_4));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_unconstrained_typeQ_2) {
  P o_;
  P T0,T1;
LINK_STACK();
  ARG(o_, 0);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  T0 = CALL1(1,VARREF(YevalSoptimizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_after_mQ_3) {
  P other_m_;
  P T0;
LINK_STACK();
  ARG(other_m_, 0);
  T0 = CALL3(1,VARREF(YevalSoptimizeYmethod_precedesQ),FREEREF(0),other_m_,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_merge_method_4) {
  P m_,sorted_;
  P x_1962F5786;
  P x_1961F5785;
  P leadF5784;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(m_, 0);
  ARG(sorted_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),sorted_);
  if (T1 != YPfalse) {
    T4 = FUNFAB(fun_after_mQ_3,2,m_,FREEREF(0));
    T5 = BOXGET(FREEREF(1));
    T3 = CALL2(1,VARREF(YgooScolsScolYallQ),T4,T5);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Ylst),m_);
      T2 = T6;
    } else {
      T8 = BOXGET(FREEREF(1));
      T7 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T8,m_);
      BOXPUT(T7,FREEREF(1));
      T2 = Ynil;
    }
    T0 = T2;
  } else {
    T23 = CALL1(1,VARREF(Yhead),sorted_);
    leadF5784 = T23;
    T22 = CALL3(1,VARREF(YevalSoptimizeYmethod_relationship),m_,leadF5784,FREEREF(0));
    x_1961F5785 = T22;
    x_1962F5786 = VARREF(YgooSmacrosYEE);
    T10 = CALL2(0,x_1962F5786,x_1961F5785,VARREF(YevalSoptimizeYDmethod1_precedes));
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSmacrosYpair),m_,sorted_);
      T9 = T11;
    } else {
      T13 = CALL2(0,x_1962F5786,x_1961F5785,VARREF(YevalSoptimizeYDmethod2_precedes));
      if (T13 != YPfalse) {
        T16 = CALL1(1,VARREF(Ytail),sorted_);
        T15 = CALL2(0,FREEREF(2),m_,T16);
        T14 = CALL2(1,VARREF(YgooSmacrosYpair),leadF5784,T15);
        T12 = T14;
      } else {
        T18 = CALL2(0,x_1962F5786,x_1961F5785,VARREF(YevalSoptimizeYDmethods_unordered));
        if (T18 != YPfalse) {
          T21 = BOXGET(FREEREF(1));
          T20 = CALL2(1,VARREF(YgooSmacrosYcat),sorted_,T21);
          T19 = CALL2(1,VARREF(YgooSmacrosYpair),m_,T20);
          BOXPUT(T19,FREEREF(1));
          T17 = Ynil;
        } else {
          T17 = YPfalse;
        }
        T12 = T17;
      }
      T9 = T12;
    }
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sorted_applicable_methods_using_types_5) {
  P methods_,arg_types_;
  P UF5792;
  P mF5791;
  P x_1963F5790;
  P merge_methodF5789;
  P othersF5788;
  P leading_sortedF5787;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(methods_, 0);
  ARG(arg_types_, 1);
  leading_sortedF5787 = Ynil;
  othersF5788 = Ynil;
  othersF5788 = BOXFAB(othersF5788);
  T15 = FUNSHELL(1,fun_merge_method_4,3);
  merge_methodF5789 = T15;
  FUNINIT(merge_methodF5789, 3,arg_types_,othersF5788,merge_methodF5789);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),methods_);
  x_1963F5790 = T14;
  LOOP_282: {
    P a282_0;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1963F5790);
    T3 = CALL1(1,VARREF(Ynot),T4);
    if (T3 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1963F5790);
      mF5791 = T13;
      T6 = CALL1(1,VARREF(YgooSfunYfun_specs),mF5791);
      T7 = CALL1(1,VARREF(YgooSfunYfun_arity),mF5791);
      T5 = CALL3(1,VARREF(YevalSoptimizeYarguments_potentially_jointQ),arg_types_,T6,T7);
      if (T5 != YPfalse) {
        T10 = leading_sortedF5787;
        UF5792 = T10;
        T9 = CALL2(1,merge_methodF5789,mF5791,UF5792);
        T8 = leading_sortedF5787 = T9;
      } else {
      }
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1963F5790);
      a282_0 = T12;
      x_1963F5790 = a282_0;
      goto LOOP_282;
      T2 = T11;
    } else {
      T2 = YPfalse;
    }
  }
  T17 = leading_sortedF5787;
  T18 = BOXGET(othersF5788);
  T16 = CALL2(1,VARREF(Ytup),T17,T18);
UNLINK_STACK();
  RET(T16);
}

LOCCODEDEF(fun_method_precedesQ_6) {
  P m1_,m2_,arg_types_;
  P T0,T1;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(arg_types_, 2);
  T1 = CALL3(1,VARREF(YevalSoptimizeYmethod_relationship),m1_,m2_,arg_types_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),T1,VARREF(YevalSoptimizeYDmethod1_precedes));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_method_relationship_7) {
  P m1_,m2_,arg_types_;
  P arg_typeF5804;
  P spec1F5803;
  P spec2F5802;
  P tmpF5801;
  P tmpF5800;
  P x_1965F5799;
  P x_1966F5798;
  P x_1967F5797;
  P follows_somewhereQF5796;
  P precedes_somewhereQF5795;
  P specs2F5794;
  P specs1F5793;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(arg_types_, 2);
  T37 = CALL1(1,VARREF(YgooSfunYfun_specs),m1_);
  specs1F5793 = T37;
  T36 = CALL1(1,VARREF(YgooSfunYfun_specs),m2_);
  specs2F5794 = T36;
  precedes_somewhereQF5795 = YPfalse;
  follows_somewhereQF5796 = YPfalse;
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),specs2F5794);
  x_1967F5797 = T27;
  T28 = CALL1(1,VARREF(YgooScolsScolYenum),specs1F5793);
  x_1966F5798 = T28;
  T29 = CALL1(1,VARREF(YgooScolsScolYenum),arg_types_);
  x_1965F5799 = T29;
  LOOP_283: {
    P a283_0,a283_1,a283_2;
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1967F5797);
    tmpF5800 = T8;
    if (tmpF5800 != YPfalse) {
      T4 = tmpF5800;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1966F5798);
      tmpF5801 = T7;
      if (tmpF5801 != YPfalse) {
        T5 = tmpF5801;
      } else {
        T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1965F5799);
        T5 = T6;
      }
      T4 = T5;
    }
    T3 = CALL1(1,VARREF(Ynot),T4);
    if (T3 != YPfalse) {
      T26 = CALL1(1,VARREF(YgooScolsScolYnow),x_1967F5797);
      spec2F5802 = T26;
      T25 = CALL1(1,VARREF(YgooScolsScolYnow),x_1966F5798);
      spec1F5803 = T25;
      T24 = CALL1(1,VARREF(YgooScolsScolYnow),x_1965F5799);
      arg_typeF5804 = T24;
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),spec1F5803,spec2F5802);
      if (T9 != YPfalse) {
      } else {
        T11 = CALL3(1,VARREF(YevalSoptimizeYpreceding_specializerQ),spec1F5803,spec2F5802,arg_typeF5804);
        if (T11 != YPfalse) {
          T14 = CALL2(1,VARREF(YsubtypeQ),spec2F5802,spec1F5803);
          T13 = CALL1(1,VARREF(Ynot),T14);
          if (T13 != YPfalse) {
            T15 = precedes_somewhereQF5795 = YPtrue;
            T12 = T15;
          } else {
            T12 = YPfalse;
          }
          T10 = T12;
        } else {
          T17 = CALL3(1,VARREF(YevalSoptimizeYpreceding_specializerQ),spec2F5802,spec1F5803,arg_typeF5804);
          if (T17 != YPfalse) {
            T18 = follows_somewhereQF5796 = YPtrue;
            T16 = T18;
          } else {
            if (YPtrue != YPfalse) {
              T19 = YPfalse;
            } else {
              T19 = YPfalse;
            }
            T16 = T19;
          }
          T10 = T16;
        }
      }
      T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1967F5797);
      T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1966F5798);
      T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1965F5799);
      a283_0 = T21;
      a283_1 = T22;
      a283_2 = T23;
      x_1967F5797 = a283_0;
      x_1966F5798 = a283_1;
      x_1965F5799 = a283_2;
      goto LOOP_283;
      T2 = T20;
    } else {
      T2 = YPfalse;
    }
  }
  T31 = precedes_somewhereQF5795;
  if (T31 != YPfalse) {
    T33 = follows_somewhereQF5796;
    if (T33 != YPfalse) {
      T32 = VARREF(YevalSoptimizeYDmethods_unordered);
    } else {
      T32 = VARREF(YevalSoptimizeYDmethod1_precedes);
    }
    T30 = T32;
  } else {
    T35 = follows_somewhereQF5796;
    if (T35 != YPfalse) {
      T34 = VARREF(YevalSoptimizeYDmethod2_precedes);
    } else {
      T34 = VARREF(YevalSoptimizeYDmethods_unordered);
    }
    T30 = T34;
  }
UNLINK_STACK();
  RET(T30);
}

LOCCODEDEF(fun_preceding_specializerQ_8) {
  P t1_,t2_,arg_;
  P T0;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T0 = CALL2(1,VARREF(YsubtypeQ),t1_,t2_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_arguments_potentially_jointQ_9) {
  P arg_types_,domain_types_,max_;
  P T0;
LINK_STACK();
  ARG(arg_types_, 0);
  ARG(domain_types_, 1);
  ARG(max_, 2);
  T0 = CALL3(1,VARREF(YgooStypesYall2Q),VARREF(YevalSoptimizeYpotentially_jointQ),arg_types_,domain_types_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSoptimizeYpotentially_jointQ) {
  P t1_,t2_;
  P tmpF5805;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T2 = CALL2(1,VARREF(YsubtypeQ),t1_,t2_);
  tmpF5805 = T2;
  if (tmpF5805 != YPfalse) {
    T0 = tmpF5805;
  } else {
    T1 = CALL2(1,VARREF(YsubtypeQ),t2_,t1_);
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_type_equivQ_11) {
  P x_,y_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL2(1,VARREF(YsubtypeQ),x_,y_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YsubtypeQ),y_,x_);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_do_do_call_analysisX_12) {
  P o_,r_,t_,f_,s_,funs_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T0 = CALLN(1,VARREF(YevalSastYast_walkX),7,VARREF(YevalSoptimizeYdo_call_analysisX),o_,r_,t_,f_,s_,funs_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_call_analysisX_13) {
  P o_,r_,t_,f_,s_,funs_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T0 = CALLN(1,VARREF(YevalSoptimizeYdo_do_call_analysisX),6,o_,r_,t_,f_,s_,funs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSoptimizeYreopt_topX) {
  P s_,t_;
  P tmpF5806;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(s_, 0);
  ARG(t_, 1);
  T4 = CALL1(1,VARREF(Ynot),t_);
  tmpF5806 = T4;
  if (tmpF5806 != YPfalse) {
    T2 = tmpF5806;
  } else {
    T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),s_,t_);
    T2 = T3;
  }
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooScolsScolxYaddX),s_,t_);
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_call_analysisX_15) {
  P o_,r_,t_,f_,s_,funs_;
  P funQF5807;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T1 = CALL1(1,VARREF(YevalSastYreference_called_functionQ),o_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
    T2 = CALL2(1,VARREF(YevalSastYbinding_dynamic_extentQ_setter),YPfalse,T3);
  } else {
  }
  T13 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  T12 = CALL1(1,VARREF(YevalSastYbinding_value),T13);
  funQF5807 = T12;
  if (funQF5807 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),funs_,funQF5807);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  if (T5 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYfunction_ref_count),funQF5807);
    T8 = CALL2(1,VARREF(YgooSlogYE),T9,YPint((P)1));
    if (T8 != YPfalse) {
      CALL2(1,VARREF(YevalSoptimizeYreopt_topX),s_,t_);
      T11 = CALL1(1,VARREF(YevalSastYfunction_ref_count),funQF5807);
      T10 = CALL2(1,VARREF(YgooSmathY_),T11,YPint((P)1));
      CALL2(1,VARREF(YevalSastYfunction_ref_count_setter),T10,funQF5807);
      T7 = funQF5807;
    } else {
      T7 = o_;
    }
    T4 = T7;
  } else {
    T4 = o_;
  }
UNLINK_STACK();
  QRET(T4);
}

LOCCODEDEF(fun_do_call_analysisX_16) {
  P o_,r_,t_,f_,s_,funs_;
  P bodyF5808;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),o_);
  CALLN(1,VARREF(YevalSoptimizeYdo_call_analysisX),6,T0,r_,t_,f_,s_,funs_);
  T9 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T8 = CALLN(1,VARREF(YevalSoptimizeYdo_call_analysisX),6,T9,r_,t_,o_,s_,funs_);
  bodyF5808 = T8;
  T2 = CALL1(1,VARREF(YevalSastYfunction_loop),o_);
  if (T2 != YPfalse) {
    T4 = CALL2(1,VARREF(YisaQ),bodyF5808,VARREF(YevalSastYLloopG));
    T3 = CALL1(1,VARREF(Ynot),T4);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYfunction_loop),o_);
    CALL2(1,VARREF(YevalSastYloop_body_setter),bodyF5808,T5);
    T7 = CALL1(1,VARREF(YevalSastYfunction_loop),o_);
    T6 = CALL2(1,VARREF(YevalSastYfunction_body_setter),T7,o_);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

LOCCODEDEF(fun_ensure_loop_17) {
  P f_;
  P tmpF5810;
  P UF5809;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  T5 = CALL1(1,VARREF(YevalSastYfunction_loop),f_);
  UF5809 = T5;
  T4 = CALL1(1,VARREF(YevalSastYfunction_loop),f_);
  tmpF5810 = T4;
  if (tmpF5810 != YPfalse) {
    T0 = tmpF5810;
  } else {
    T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
    T2 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLloopG),VARREF(YevalSastYloop_bindings),T3);
    T1 = CALL2(1,VARREF(YevalSastYfunction_loop_setter),T2,f_);
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_18) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSmoduleYbinding_type),x_);
  T0 = CALL1(1,VARREF(YevalSoptimizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_call_analysisX_19) {
  P o_,r_,t_,f_,s_,funs_;
  P loopF5815;
  P calleeF5814;
  P x_1970F5813;
  P x_1969F5812;
  P refF5811;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  CALLN(1,VARREF(YevalSoptimizeYdo_do_call_analysisX),6,o_,r_,t_,f_,s_,funs_);
  T39 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
  refF5811 = T39;
  x_1969F5812 = refF5811;
  x_1970F5813 = VARREF(YisaQ);
  T1 = CALL2(1,x_1970F5813,x_1969F5812,VARREF(YevalSastYLlocal_referenceG));
  if (T1 != YPfalse) {
    T33 = CALL1(1,VARREF(YevalSastYreference_binding),refF5811);
    T32 = CALL1(1,VARREF(YevalSastYbinding_value),T33);
    calleeF5814 = T32;
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),calleeF5814,f_);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSastYapplication_tailQ),o_);
      if (T6 != YPfalse) {
        T8 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
        T7 = CALL1(1,VARREF(Ynot),T8);
        T5 = T7;
      } else {
        T5 = YPfalse;
      }
      T3 = T5;
    } else {
      T3 = YPfalse;
    }
    if (T3 != YPfalse) {
      T13 = CALL1(1,VARREF(YevalSoptimizeYensure_loop),f_);
      loopF5815 = T13;
      T10 = CALL1(1,VARREF(YevalSastYfunction_ref_count),f_);
      T9 = CALL2(1,VARREF(YgooSmathY_),T10,YPint((P)1));
      CALL2(1,VARREF(YevalSastYfunction_ref_count_setter),T9,f_);
      CALL2(1,VARREF(YevalSoptimizeYreopt_topX),s_,t_);
      T12 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
      T11 = CALL5(1,VARREF(Ynew),VARREF(YevalSastYLloop_applicationG),VARREF(YevalSastYapplication_loop),loopF5815,VARREF(YevalSastYapplication_arguments),T12);
      T2 = T11;
    } else {
      T16 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_functionG));
      if (T16 != YPfalse) {
        T19 = fun_18;
        T20 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
        T18 = CALL2(1,VARREF(YgooScolsScolYallQ),T19,T20);
        if (T18 != YPfalse) {
          T23 = CALL1(1,VARREF(YevalSastYfunction_value),f_);
          T22 = CALL1(1,VARREF(YevalSoptimizeYunconstrained_typeQ),T23);
          if (T22 != YPfalse) {
            T26 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
            T25 = CALL1(1,VARREF(Ynot),T26);
            if (T25 != YPfalse) {
              T29 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
              T28 = CALL1(1,VARREF(YgooStypesYlen),T29);
              T31 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
              T30 = CALL1(1,VARREF(YgooStypesYlen),T31);
              T27 = CALL2(1,VARREF(YgooSlogYE),T28,T30);
              T24 = T27;
            } else {
              T24 = YPfalse;
            }
            T21 = T24;
          } else {
            T21 = YPfalse;
          }
          T17 = T21;
        } else {
          T17 = YPfalse;
        }
        T15 = T17;
      } else {
        T15 = YPfalse;
      }
      if (T15 != YPfalse) {
        CALL2(1,VARREF(YevalSastYapplication_knownQ_setter),YPtrue,o_);
        T14 = o_;
      } else {
        T14 = o_;
      }
      T2 = T14;
    }
    T0 = T2;
  } else {
    T35 = CALL2(1,x_1970F5813,x_1969F5812,VARREF(YevalSastYLast_embodied_functionG));
    if (T35 != YPfalse) {
      CALL2(1,VARREF(YevalSoptimizeYreopt_topX),s_,t_);
      T37 = CALL1(1,VARREF(YevalSastYapplication_arguments),o_);
      T38 = CALL1(1,VARREF(YevalSastYapplication_tailQ),o_);
      T36 = CALL4(1,VARREF(YevalSastYprocess_closed_application),refF5811,T37,r_,T38);
      T34 = T36;
    } else {
      T34 = o_;
    }
    T0 = T34;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_call_analysisX_20) {
  P o_,r_,t_,f_,s_,funs_;
  P resF5818;
  P new_funsF5817;
  P singleQF5816;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(t_, 2);
  ARG(f_, 3);
  ARG(s_, 4);
  ARG(funs_, 5);
  T14 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T13 = CALL1(1,VARREF(YgooStypesYlen),T14);
  T12 = CALL2(1,VARREF(YgooSlogYE),T13,YPint((P)1));
  singleQF5816 = T12;
  if (singleQF5816 != YPfalse) {
    T11 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
    T10 = CALL1(1,VARREF(YgooSmacrosY1st),T11);
    T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,funs_);
    T8 = T9;
  } else {
    T8 = funs_;
  }
  new_funsF5817 = T8;
  T7 = CALLN(1,VARREF(YevalSoptimizeYdo_do_call_analysisX),6,o_,r_,t_,f_,s_,new_funsF5817);
  resF5818 = T7;
  if (singleQF5816 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosY1st),new_funsF5817);
    T3 = CALL1(1,VARREF(YevalSastYfunction_ref_count),T4);
    T2 = CALL2(1,VARREF(YgooSlogYE),T3,YPint((P)0));
    if (T2 != YPfalse) {
      CALL2(1,VARREF(YevalSoptimizeYreopt_topX),s_,t_);
      T5 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YevalSastYLfunctionsG));
      CALL2(1,VARREF(YevalSastYlocals_functions_setter),T5,o_);
      CALL2(1,VARREF(YevalSastYlocals_bindings_setter),Ynil,o_);
      T6 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
      T1 = T6;
    } else {
      T1 = resF5818;
    }
    T0 = T1;
  } else {
    T0 = resF5818;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_21) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALLN(1,VARREF(YevalSoptimizeYdo_call_analysisX),6,x_,FREEREF(0),x_,YPfalse,FREEREF(1),Ynil);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_22) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL2(1,VARREF(YevalSoptimizeYanalyze_calls),e_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_analyze_calls_23) {
  P o_,r_;
  P resF5820;
  P sF5819;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  T8 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  sF5819 = T8;
  T4 = CALL2(1,VARREF(YisaQ),o_,VARREF(YevalSastYLsequentialG));
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_21,2,r_,sF5819);
    T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,o_);
    T3 = T5;
  } else {
    T7 = CALLN(1,VARREF(YevalSoptimizeYdo_call_analysisX),6,o_,r_,o_,YPfalse,sF5819,Ynil);
    T3 = T7;
  }
  resF5820 = T3;
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),sF5819);
  if (T1 != YPfalse) {
    T0 = resF5820;
  } else {
    T2 = FUNFAB(fun_22,1,r_);
    CALL2(1,VARREF(YgooSmacrosYdo),T2,sF5819);
    T0 = resF5820;
  }
UNLINK_STACK();
  QRET(T0);
}

P YevalSoptimizeY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80;
DEFCREGS();
  lit_0 = YPPsym((P)"unconstrained-type?");
  lit_1 = YPPlist(1,YPPsym((P)"b"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_0 = YPfab_met(FUNCODEREF(fun_unconstrained_typeQ_0),T0,LITREF(lit_0),LITREF(lit_1),sloc(7),YPsb((P)"(fun ((b <program>) => <log>) #f)"));
  T2 = VARREF_OR(YevalSoptimizeYunconstrained_typeQ,YPfalse);
  T3 = fun_unconstrained_typeQ_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSoptimizeYunconstrained_typeQ,T1);
  lit_2 = YPPlist(1,YPPsym((P)"b"));
  lit_3 = YPPsym((P)"goo/boot");
  lit_4 = YPPsym((P)"<any>");
  T4 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_1 = YPfab_met(FUNCODEREF(fun_unconstrained_typeQ_1),T4,LITREF(lit_0),LITREF(lit_2),sloc(10),YPsb((P)"(fun ((b <module-binding>) => <log>) (and (== (binding-module-name b) 'goo/boot) (== (binding-name b) '<any>)))"));
  T6 = VARREF_OR(YevalSoptimizeYunconstrained_typeQ,YPfalse);
  T7 = fun_unconstrained_typeQ_1;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSoptimizeYunconstrained_typeQ,T5);
  lit_5 = YPPlist(1,YPPsym((P)"o"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLmodule_binding_referenceG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_2 = YPfab_met(FUNCODEREF(fun_unconstrained_typeQ_2),T8,LITREF(lit_0),LITREF(lit_5),sloc(13),YPsb((P)"(fun ((o <module-binding-reference>) => <log>) (unconstrained-type? (reference-binding o)))"));
  T10 = VARREF_OR(YevalSoptimizeYunconstrained_typeQ,YPfalse);
  T11 = fun_unconstrained_typeQ_2;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSoptimizeYunconstrained_typeQ,T9);
  VARSET(YevalSoptimizeYLarg_seqG,VARREF(YLlstG));
  VARSET(YevalSoptimizeYLmet_seqG,VARREF(YLlstG));
  lit_6 = YPPsym((P)"sorted-applicable-methods-using-types");
  lit_7 = YPPlist(2,YPPsym((P)"methods"),YPPsym((P)"arg-types"));
  lit_8 = YPPsym((P)"merge-method");
  lit_9 = YPPlist(2,YPPsym((P)"m"),YPPsym((P)"sorted"));
  lit_10 = YPPsym((P)"after-m?");
  lit_11 = YPPlist(1,YPPsym((P)"other-m"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_after_mQ_3 = YPfab_met(FUNCODEREF(fun_after_mQ_3),T15,LITREF(lit_10),LITREF(lit_11),sloc(28),YPsb((P)"(fun (other-m) (method-precedes? m other-m arg-types))"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_merge_method_4 = YPfab_met(FUNCODEREF(fun_merge_method_4),T14,LITREF(lit_8),LITREF(lit_9),sloc(26),YPsb((P)"(fun (m sorted) (if (nul? sorted) (loc ((after-m? (other-m) (method-precedes? m other-m arg-types))) (if (all? after-m? others) (lst m) (seq (pushf others m) '()))) (let ((lead (head sorted))) (case (method-relationship m lead arg-types) (($method1-precedes) (pair m sorted)) (($method2-precedes) (pair lead (merge-method m (tail sorted)))) (($methods-unordered) (set others (pair m (cat sorted others))) '())))))"));
  T13 = XCALL2(1,VARREF(YtT),VARREF(YevalSoptimizeYLmet_seqG),VARREF(YevalSoptimizeYLmet_seqG));
  T12 = YPfab_sig(YPPlist(2,VARREF(YevalSoptimizeYLmet_seqG),VARREF(YevalSoptimizeYLarg_seqG)),YPfalse,YPint((P)2),T13,Ynil);
  fun_sorted_applicable_methods_using_types_5 = YPfab_met(FUNCODEREF(fun_sorted_applicable_methods_using_types_5),T12,LITREF(lit_6),LITREF(lit_7),sloc(21),YPsb((P)"(fun ((methods <met-seq>) (arg-types <arg-seq>) => (tup (sorted <met-seq>) (others <met-seq>))) (def leading-sorted '()) (def others '()) (loc ((merge-method (m sorted) (if (nul? sorted) (loc ((after-m? (other-m) (method-precedes? m other-m arg-types))) (if (all? after-m? others) (lst m) (seq (pushf others m) '()))) (let ((lead (head sorted))) (case (method-relationship m lead arg-types) (($method1-precedes) (pair m sorted)) (($method2-precedes) (pair lead (merge-method m (tail sorted)))) (($methods-unordered) (set others (pair m (cat sorted others))) '())))))) (for ((m methods)) (when (arguments-potentially-joint? arg-types (fun-specs m) (fun-arity m)) (opf leading-sorted (merge-method m _))))) (tup leading-sorted others))"));
  T17 = VARREF_OR(YevalSoptimizeYsorted_applicable_methods_using_types,YPfalse);
  T18 = fun_sorted_applicable_methods_using_types_5;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YevalSoptimizeYsorted_applicable_methods_using_types,T16);
  lit_12 = YPPsym((P)"unordered");
  VARSET(YevalSoptimizeYDmethods_unordered,LITREF(lit_12));
  lit_13 = YPPsym((P)"method1");
  VARSET(YevalSoptimizeYDmethod1_precedes,LITREF(lit_13));
  lit_14 = YPPsym((P)"method2");
  VARSET(YevalSoptimizeYDmethod2_precedes,LITREF(lit_14));
  lit_15 = YPPsym((P)"method-precedes?");
  lit_16 = YPPlist(3,YPPsym((P)"m1"),YPPsym((P)"m2"),YPPsym((P)"arg-types"));
  T19 = YPfab_sig(YPPlist(3,VARREF(YLmetG),VARREF(YLmetG),VARREF(YevalSoptimizeYLarg_seqG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_method_precedesQ_6 = YPfab_met(FUNCODEREF(fun_method_precedesQ_6),T19,LITREF(lit_15),LITREF(lit_16),sloc(59),YPsb((P)"(fun ((m1 <met>) (m2 <met>) (arg-types <arg-seq>)) (== (method-relationship m1 m2 arg-types) $method1-precedes))"));
  T21 = VARREF_OR(YevalSoptimizeYmethod_precedesQ,YPfalse);
  T22 = fun_method_precedesQ_6;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YevalSoptimizeYmethod_precedesQ,T20);
  lit_17 = YPPsym((P)"method-relationship");
  lit_18 = YPPlist(3,YPPsym((P)"m1"),YPPsym((P)"m2"),YPPsym((P)"arg-types"));
  T23 = YPfab_sig(YPPlist(3,VARREF(YLmetG),VARREF(YLmetG),VARREF(YevalSoptimizeYLarg_seqG)),YPfalse,YPint((P)3),VARREF(YLsymG),Ynil);
  fun_method_relationship_7 = YPfab_met(FUNCODEREF(fun_method_relationship_7),T23,LITREF(lit_17),LITREF(lit_18),sloc(65),YPsb((P)"(fun ((m1 <met>) (m2 <met>) (arg-types <arg-seq>) => <sym>) (def specs1 (fun-specs m1)) (def specs2 (fun-specs m2)) (def precedes-somewhere? #f) (def follows-somewhere? #f) (for ((arg-type arg-types) (spec1 specs1) (spec2 specs2)) (cond ((== spec1 spec2) #f) ((preceding-specializer? spec1 spec2 arg-type) (unless (subtype? spec2 spec1) (set precedes-somewhere? #t))) ((preceding-specializer? spec2 spec1 arg-type) (set follows-somewhere? #t)) (#t #f))) (if precedes-somewhere? (if follows-somewhere? $methods-unordered $method1-precedes) (if follows-somewhere? $method2-precedes $methods-unordered)))"));
  T25 = VARREF_OR(YevalSoptimizeYmethod_relationship,YPfalse);
  T26 = fun_method_relationship_7;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YevalSoptimizeYmethod_relationship,T24);
  lit_19 = YPPsym((P)"preceding-specializer?");
  lit_20 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T28 = YPfab_sig(YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T27 = YPfab_gen(T28,LITREF(lit_19),LITREF(lit_20),YPfalse);
  VARSET(YevalSoptimizeYpreceding_specializerQ,T27);
  lit_21 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T29 = YPfab_sig(YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_preceding_specializerQ_8 = YPfab_met(FUNCODEREF(fun_preceding_specializerQ_8),T29,LITREF(lit_19),LITREF(lit_21),sloc(85),YPsb((P)"(fun ((t1 <type>) (t2 <type>) (arg <type>) => <log>) (subtype? t1 t2))"));
  T31 = VARREF_OR(YevalSoptimizeYpreceding_specializerQ,YPfalse);
  T32 = fun_preceding_specializerQ_8;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YevalSoptimizeYpreceding_specializerQ,T30);
  lit_22 = YPPsym((P)"arguments-potentially-joint?");
  lit_23 = YPPlist(3,YPPsym((P)"arg-types"),YPPsym((P)"domain-types"),YPPsym((P)"max"));
  T33 = YPfab_sig(YPPlist(3,VARREF(YevalSoptimizeYLarg_seqG),VARREF(YevalSoptimizeYLarg_seqG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_arguments_potentially_jointQ_9 = YPfab_met(FUNCODEREF(fun_arguments_potentially_jointQ_9),T33,LITREF(lit_22),LITREF(lit_23),sloc(88),YPsb((P)"(fun ((arg-types <arg-seq>) (domain-types <arg-seq>) (max <int>) => <log>) (all2? potentially-joint? arg-types domain-types))"));
  T35 = VARREF_OR(YevalSoptimizeYarguments_potentially_jointQ,YPfalse);
  T36 = fun_arguments_potentially_jointQ_9;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YevalSoptimizeYarguments_potentially_jointQ,T34);
  lit_24 = YPPsym((P)"potentially-joint?");
  lit_25 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T37 = YPfab_sig(YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSoptimizeYpotentially_jointQ = YPfab_met(FUNCODEREF(YevalSoptimizeYpotentially_jointQ),T37,LITREF(lit_24),LITREF(lit_25),sloc(92),YPsb((P)"(fun ((t1 <type>) (t2 <type>) => <log>) (or (subtype? t1 t2) (subtype? t2 t1)))"));
  T38 = YevalSoptimizeYpotentially_jointQ;
  VARSET(YevalSoptimizeYpotentially_jointQ,T38);
  lit_26 = YPPsym((P)"type-equiv?");
  lit_27 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_type_equivQ_11 = YPfab_met(FUNCODEREF(fun_type_equivQ_11),T39,LITREF(lit_26),LITREF(lit_27),sloc(97),YPsb((P)"(fun ((x <type>) (y <type>) => <log>) (and (subtype? x y) (subtype? y x)))"));
  T41 = VARREF_OR(YevalSoptimizeYtype_equivQ,YPfalse);
  T42 = fun_type_equivQ_11;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YevalSoptimizeYtype_equivQ,T40);
  lit_28 = YPPsym((P)"do-do-call-analysis!");
  lit_29 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T43 = YPfab_sig(YPPlist(6,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_do_call_analysisX_12 = YPfab_met(FUNCODEREF(fun_do_do_call_analysisX_12),T43,LITREF(lit_28),LITREF(lit_29),sloc(102),YPsb((P)"(fun ((o <program>) r t f s funs) (ast-walk! do-call-analysis! o r t f s funs))"));
  T45 = VARREF_OR(YevalSoptimizeYdo_do_call_analysisX,YPfalse);
  T46 = fun_do_do_call_analysisX_12;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YevalSoptimizeYdo_do_call_analysisX,T44);
  lit_30 = YPPsym((P)"do-call-analysis!");
  lit_31 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T47 = YPfab_sig(YPPlist(6,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_13 = YPfab_met(FUNCODEREF(fun_do_call_analysisX_13),T47,LITREF(lit_30),LITREF(lit_31),sloc(105),YPsb((P)"(fun ((o <program>) r t f s funs) (do-do-call-analysis! o r t f s funs))"));
  T49 = VARREF_OR(YevalSoptimizeYdo_call_analysisX,YPfalse);
  T50 = fun_do_call_analysisX_13;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YevalSoptimizeYdo_call_analysisX,T48);
  lit_32 = YPPsym((P)"reopt-top!");
  lit_33 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"t"));
  T51 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSoptimizeYreopt_topX = YPfab_met(FUNCODEREF(YevalSoptimizeYreopt_topX),T51,LITREF(lit_32),LITREF(lit_33),sloc(108),YPsb((P)"(fun (s t) (unless (or (not t) (mem? s t)) (add! s t)))"));
  T52 = YevalSoptimizeYreopt_topX;
  VARSET(YevalSoptimizeYreopt_topX,T52);
  lit_34 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T53 = YPfab_sig(YPPlist(6,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_15 = YPfab_met(FUNCODEREF(fun_do_call_analysisX_15),T53,LITREF(lit_30),LITREF(lit_34),sloc(111),YPsb((P)"(fun ((o <local-reference>) r t f s funs) (unless (reference-called-function? o) (set (binding-dynamic-extent? (reference-binding o)) #f)) (def fun? (binding-value (reference-binding o))) (if (and fun? (mem? funs fun?)) (if (= (function-ref-count fun?) 1) (seq (reopt-top! s t) (decf (function-ref-count fun?)) fun?) o) o))"));
  T55 = VARREF_OR(YevalSoptimizeYdo_call_analysisX,YPfalse);
  T56 = fun_do_call_analysisX_15;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalSoptimizeYdo_call_analysisX,T54);
  lit_35 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T57 = YPfab_sig(YPPlist(6,VARREF(YevalSastYLast_embodied_functionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_16 = YPfab_met(FUNCODEREF(fun_do_call_analysisX_16),T57,LITREF(lit_30),LITREF(lit_35),sloc(123),YPsb((P)"(fun ((o <ast-embodied-function>) r t f s funs) (do-call-analysis! (function-signature o) r t f s funs) (def body (do-call-analysis! (function-body o) r t o s funs)) (when (and (function-loop o) (not (isa? body <loop>))) (set (loop-body (function-loop o)) body) (set (function-body o) (function-loop o))) o)"));
  T59 = VARREF_OR(YevalSoptimizeYdo_call_analysisX,YPfalse);
  T60 = fun_do_call_analysisX_16;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSoptimizeYdo_call_analysisX,T58);
  lit_36 = YPPsym((P)"ensure-loop");
  lit_37 = YPPlist(1,YPPsym((P)"f"));
  T61 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_embodied_functionG)),YPfalse,YPint((P)1),VARREF(YevalSastYLloopG),Ynil);
  fun_ensure_loop_17 = YPfab_met(FUNCODEREF(fun_ensure_loop_17),T61,LITREF(lit_36),LITREF(lit_37),sloc(131),YPsb((P)"(fun ((f <ast-embodied-function>) => <loop>) (or/set (function-loop f) (new <loop> loop-bindings (function-bindings f))))"));
  T63 = VARREF_OR(YevalSoptimizeYensure_loop,YPfalse);
  T64 = fun_ensure_loop_17;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSoptimizeYensure_loop,T62);
  lit_38 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  lit_39 = YPPlist(1,YPPsym((P)"x"));
  T66 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T66,YPfalse,LITREF(lit_39),sloc(149),YPsb((P)"(fun (x) (unconstrained-type? (binding-type x)))"));
  T65 = YPfab_sig(YPPlist(6,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_19 = YPfab_met(FUNCODEREF(fun_do_call_analysisX_19),T65,LITREF(lit_30),LITREF(lit_38),sloc(135),YPsb((P)"(fun ((o <regular-application>) r t f s funs) (do-do-call-analysis! o r t f s funs) (def ref (application-function o)) (case-by ref isa? ((<local-reference>) (let ((callee (binding-value (reference-binding ref)))) (if (and (== callee f) (application-tail? o) (not (function-nary? f))) (let ((loop (ensure-loop f))) (decf (function-ref-count f)) (reopt-top! s t) (new <loop-application> application-loop loop application-arguments (application-arguments o))) (if (and (isa? f <ast-function>) (all? (fun (x) (unconstrained-type? (binding-type x))) (function-bindings f)) (unconstrained-type? (function-value f)) (not (function-nary? f)) (= (len (application-arguments o)) (len (function-bindings f)))) (seq (set (application-known? o) #t) o) o)))) ((<ast-embodied-function>) (reopt-top! s t) (process-closed-application ref (application-arguments o) r (application-tail? o))) (#t o)))"));
  T68 = VARREF_OR(YevalSoptimizeYdo_call_analysisX,YPfalse);
  T69 = fun_do_call_analysisX_19;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalSoptimizeYdo_call_analysisX,T67);
  lit_40 = YPPlist(6,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"t"),YPPsym((P)"f"),YPPsym((P)"s"),YPPsym((P)"funs"));
  T70 = YPfab_sig(YPPlist(6,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_do_call_analysisX_20 = YPfab_met(FUNCODEREF(fun_do_call_analysisX_20),T70,LITREF(lit_30),LITREF(lit_40),sloc(163),YPsb((P)"(fun ((o <locals>) r t f s funs) (def single? (= (len (locals-functions o)) 1)) (def new-funs (if single? (pair (1st (locals-functions o)) funs) funs)) (def res (do-do-call-analysis! o r t f s new-funs)) (if single? (if (= (function-ref-count (1st new-funs)) 0) (seq (reopt-top! s t) (set (locals-functions o) (nul <functions>)) (set (locals-bindings o) '()) (locals-body o)) res) res))"));
  T72 = VARREF_OR(YevalSoptimizeYdo_call_analysisX,YPfalse);
  T73 = fun_do_call_analysisX_20;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YevalSoptimizeYdo_call_analysisX,T71);
  lit_41 = YPPsym((P)"analyze-calls");
  lit_42 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"r"));
  lit_43 = YPPlist(1,YPPsym((P)"x"));
  lit_44 = YPPlist(1,YPPsym((P)"e"));
  T76 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPfab_met(FUNCODEREF(fun_21),T76,YPfalse,LITREF(lit_43),sloc(180),YPsb((P)"(fun (x) (do-call-analysis! x r x #f s '()))"));
  T75 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPfab_met(FUNCODEREF(fun_22),T75,YPfalse,LITREF(lit_44),sloc(184),YPsb((P)"(fun (e) (analyze-calls e r))"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_analyze_calls_23 = YPfab_met(FUNCODEREF(fun_analyze_calls_23),T74,LITREF(lit_41),LITREF(lit_42),sloc(176),YPsb((P)"(fun (o r) (def s (fab <vec> 0)) (def res (if (isa? o <sequential>) (map (fun (x) (do-call-analysis! x r x #f s '())) o) (do-call-analysis! o r o #f s '()))) (if (nul? s) res (seq (do (fun (e) (analyze-calls e r)) s) res)))"));
  T78 = VARREF_OR(YevalSoptimizeYanalyze_calls,YPfalse);
  T79 = fun_analyze_calls_23;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSoptimizeYanalyze_calls,T77);
  T80 = YPfalse;
  return T80;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_evalSdependency;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSloc},
  {&module_info_evalSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {">", &module_info_gooSmag, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"function-specs", &module_info_evalSast, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"function-names", &module_info_evalSast, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"ensure-loop", CVAR, &YevalSoptimizeYensure_loop},
  {"preceding-specializer?", CVAR, &YevalSoptimizeYpreceding_specializerQ},
  {"do-do-call-analysis!", CVAR, &YevalSoptimizeYdo_do_call_analysisX},
  {"---main-0---", PVAR, NULL},
  {"$methods-unordered", CVAR, &YevalSoptimizeYDmethods_unordered},
  {"<arg-seq>", CVAR, &YevalSoptimizeYLarg_seqG},
  {"$method2-precedes", CVAR, &YevalSoptimizeYDmethod2_precedes},
  {"arguments-potentially-joint?", CVAR, &YevalSoptimizeYarguments_potentially_jointQ},
  {"do-call-analysis!", CVAR, &YevalSoptimizeYdo_call_analysisX},
  {"unconstrained-type?", CVAR, &YevalSoptimizeYunconstrained_typeQ},
  {"sorted-applicable-methods-using-types", CVAR, &YevalSoptimizeYsorted_applicable_methods_using_types},
  {"method-relationship", CVAR, &YevalSoptimizeYmethod_relationship},
  {"type-equiv?", CVAR, &YevalSoptimizeYtype_equivQ},
  {"analyze-calls", CVAR, &YevalSoptimizeYanalyze_calls},
  {"reopt-top!", CVAR, &YevalSoptimizeYreopt_topX},
  {"potentially-joint?", CVAR, &YevalSoptimizeYpotentially_jointQ},
  {"$method1-precedes", CVAR, &YevalSoptimizeYDmethod1_precedes},
  {"<met-seq>", CVAR, &YevalSoptimizeYLmet_seqG},
  {"method-precedes?", CVAR, &YevalSoptimizeYmethod_precedesQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"unconstrained-type?", NULL},
  {"type-equiv?", NULL},
  {"analyze-calls", NULL},
  {"sorted-applicable-methods-using-types", NULL},
  {"potentially-joint?", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSoptimize;
MODULE_INFO module_info_evalSoptimize = {
  "eval/optimize",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSloc (void);
extern void load_module_evalSast (void);

/* EXPRESSION: */

extern void load_module_evalSoptimize (void);

void load_module_evalSoptimize (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSloc();
  load_module_evalSast();

  (P)YevalSoptimizeY___main_0___();

}

/* END OF GENERATED CODE. */
