/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/g2c");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/g2c */

DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYC,"goo/math","^");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YLboxG,"goo/boot","<box>");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
DEF(YevalSg2cYmangle_module_into,"eval/g2c","mangle-module-into");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YevalStopYtop,"eval/top","top");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YevalStopYbt,"eval/top","bt");
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ytail,"goo/boot","tail");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YevalStopYload,"eval/top","load");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YevalSg2cYbuf_cat2X,"eval/g2c","buf-cat2!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(Yfun_code,"goo/boot","fun-code");
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
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
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
DEF(YevalSg2cYgenerate_function_forward,"eval/g2c","generate-function-forward");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
DYNDEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
DEF(YevalSg2cYTlits_atT,"eval/g2c","*lits-at*");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YOelt,"goo/boot","@elt");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooStypesYas,"goo/types","as");
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
DYNDEF(YevalSg2cYTloop_arg_counterT,"eval/g2c","*loop-arg-counter*");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
EXT(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
DEF(YevalSg2cYref_lit,"eval/g2c","ref-lit");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
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
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
DYNDEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSg2cYbbQ,"eval/g2c","bb?");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yas_error,"goo/boot","as-error");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSoptimizeYpotentially_jointQ,"eval/optimize","potentially-joint?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
EXT(YevalSoptimizeYunconstrained_typeQ,"eval/optimize","unconstrained-type?");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSoptimizeYsorted_applicable_methods_using_types,"eval/optimize","sorted-applicable-methods-using-types");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YevalStopYD,"eval/top","$");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YOdo,"goo/boot","@do");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YOallQ,"goo/boot","@all?");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
DEF(YevalSg2cYTlitsT,"eval/g2c","*lits*");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YevalStypistYtype_infer,"eval/typist","type-infer");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YevalSoptimizeYtype_equivQ,"eval/optimize","type-equiv?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YsubtypeQ,"goo/boot","subtype?");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSoptimizeYanalyze_calls,"eval/optimize","analyze-calls");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
DEF(YevalSg2cYmangle_binding,"eval/g2c","mangle-binding");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
DEF(YevalSg2cYpp,"eval/g2c","pp");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YLintG,"goo/boot","<int>");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YevalStopYvm_evaluate,"eval/top","vm-evaluate");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
DEF(YevalSg2cYmangle_quotation_name,"eval/g2c","mangle-quotation-name");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YevalStopYesctst,"eval/top","esctst");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
DEF(YevalSg2cYprimitive_inlinableQ,"eval/g2c","primitive-inlinable?");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
DEF(YevalSg2cYDnow_mod_var_name,"eval/g2c","$now-mod-var-name");
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YOnew,"goo/boot","@new");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YOrev,"goo/boot","@rev");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YLmagG,"goo/boot","<mag>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_452);
DEFLIT(lit_589);
DEFLIT(lit_18);
DEFLIT(lit_421);
DEFLIT(lit_404);
DEFLIT(lit_625);
DEFLIT(lit_272);
DEFLIT(lit_366);
DEFLIT(lit_273);
DEFLIT(lit_71);
DEFLIT(lit_263);
DEFLIT(lit_56);
DEFLIT(lit_249);
DEFLIT(lit_85);
DEFLIT(lit_277);
DEFLIT(lit_73);
DEFLIT(lit_53);
DEFLIT(lit_99);
DEFLIT(lit_65);
DEFLIT(lit_60);
DEFLIT(lit_284);
DEFLIT(lit_479);
DEFLIT(lit_137);
DEFLIT(lit_540);
DEFLIT(lit_510);
DEFLIT(lit_104);
DEFLIT(lit_370);
DEFLIT(lit_357);
DEFLIT(lit_464);
DEFLIT(lit_143);
DEFLIT(lit_439);
DEFLIT(lit_470);
DEFLIT(lit_175);
DEFLIT(lit_264);
DEFLIT(lit_402);
DEFLIT(lit_95);
DEFLIT(lit_360);
DEFLIT(lit_640);
DEFLIT(lit_20);
DEFLIT(lit_394);
DEFLIT(lit_509);
DEFLIT(lit_294);
DEFLIT(lit_265);
DEFLIT(lit_460);
DEFLIT(lit_574);
DEFLIT(lit_5);
DEFLIT(lit_74);
DEFLIT(lit_381);
DEFLIT(lit_578);
DEFLIT(lit_335);
DEFLIT(lit_305);
DEFLIT(lit_608);
DEFLIT(lit_512);
DEFLIT(lit_138);
DEFLIT(lit_345);
DEFLIT(lit_537);
DEFLIT(lit_242);
DEFLIT(lit_494);
DEFLIT(lit_112);
DEFLIT(lit_317);
DEFLIT(lit_200);
DEFLIT(lit_620);
DEFLIT(lit_401);
DEFLIT(lit_340);
DEFLIT(lit_386);
DEFLIT(lit_641);
DEFLIT(lit_172);
DEFLIT(lit_529);
DEFLIT(lit_177);
DEFLIT(lit_385);
DEFLIT(lit_392);
DEFLIT(lit_336);
DEFLIT(lit_400);
DEFLIT(lit_594);
DEFLIT(lit_605);
DEFLIT(lit_441);
DEFLIT(lit_292);
DEFLIT(lit_247);
DEFLIT(lit_0);
DEFLIT(lit_228);
DEFLIT(lit_268);
DEFLIT(lit_409);
DEFLIT(lit_389);
DEFLIT(lit_468);
DEFLIT(lit_433);
DEFLIT(lit_555);
DEFLIT(lit_168);
DEFLIT(lit_169);
DEFLIT(lit_4);
DEFLIT(lit_182);
DEFLIT(lit_442);
DEFLIT(lit_565);
DEFLIT(lit_33);
DEFLIT(lit_77);
DEFLIT(lit_528);
DEFLIT(lit_330);
DEFLIT(lit_14);
DEFLIT(lit_36);
DEFLIT(lit_383);
DEFLIT(lit_446);
DEFLIT(lit_559);
DEFLIT(lit_224);
DEFLIT(lit_90);
DEFLIT(lit_451);
DEFLIT(lit_271);
DEFLIT(lit_256);
DEFLIT(lit_482);
DEFLIT(lit_495);
DEFLIT(lit_80);
DEFLIT(lit_120);
DEFLIT(lit_39);
DEFLIT(lit_399);
DEFLIT(lit_41);
DEFLIT(lit_303);
DEFLIT(lit_165);
DEFLIT(lit_367);
DEFLIT(lit_21);
DEFLIT(lit_634);
DEFLIT(lit_6);
DEFLIT(lit_117);
DEFLIT(lit_87);
DEFLIT(lit_334);
DEFLIT(lit_250);
DEFLIT(lit_461);
DEFLIT(lit_504);
DEFLIT(lit_266);
DEFLIT(lit_626);
DEFLIT(lit_573);
DEFLIT(lit_278);
DEFLIT(lit_16);
DEFLIT(lit_615);
DEFLIT(lit_255);
DEFLIT(lit_312);
DEFLIT(lit_466);
DEFLIT(lit_657);
DEFLIT(lit_24);
DEFLIT(lit_579);
DEFLIT(lit_248);
DEFLIT(lit_68);
DEFLIT(lit_311);
DEFLIT(lit_97);
DEFLIT(lit_648);
DEFLIT(lit_205);
DEFLIT(lit_552);
DEFLIT(lit_164);
DEFLIT(lit_221);
DEFLIT(lit_174);
DEFLIT(lit_153);
DEFLIT(lit_651);
DEFLIT(lit_339);
DEFLIT(lit_314);
DEFLIT(lit_29);
DEFLIT(lit_27);
DEFLIT(lit_191);
DEFLIT(lit_456);
DEFLIT(lit_163);
DEFLIT(lit_524);
DEFLIT(lit_425);
DEFLIT(lit_119);
DEFLIT(lit_338);
DEFLIT(lit_486);
DEFLIT(lit_110);
DEFLIT(lit_46);
DEFLIT(lit_492);
DEFLIT(lit_7);
DEFLIT(lit_291);
DEFLIT(lit_67);
DEFLIT(lit_141);
DEFLIT(lit_279);
DEFLIT(lit_285);
DEFLIT(lit_210);
DEFLIT(lit_318);
DEFLIT(lit_231);
DEFLIT(lit_575);
DEFLIT(lit_465);
DEFLIT(lit_497);
DEFLIT(lit_526);
DEFLIT(lit_511);
DEFLIT(lit_105);
DEFLIT(lit_78);
DEFLIT(lit_546);
DEFLIT(lit_373);
DEFLIT(lit_63);
DEFLIT(lit_302);
DEFLIT(lit_382);
DEFLIT(lit_443);
DEFLIT(lit_226);
DEFLIT(lit_308);
DEFLIT(lit_236);
DEFLIT(lit_646);
DEFLIT(lit_118);
DEFLIT(lit_458);
DEFLIT(lit_101);
DEFLIT(lit_462);
DEFLIT(lit_129);
DEFLIT(lit_136);
DEFLIT(lit_474);
DEFLIT(lit_55);
DEFLIT(lit_487);
DEFLIT(lit_198);
DEFLIT(lit_424);
DEFLIT(lit_519);
DEFLIT(lit_316);
DEFLIT(lit_472);
DEFLIT(lit_498);
DEFLIT(lit_444);
DEFLIT(lit_72);
DEFLIT(lit_582);
DEFLIT(lit_135);
DEFLIT(lit_216);
DEFLIT(lit_372);
DEFLIT(lit_621);
DEFLIT(lit_469);
DEFLIT(lit_649);
DEFLIT(lit_50);
DEFLIT(lit_397);
DEFLIT(lit_398);
DEFLIT(lit_106);
DEFLIT(lit_563);
DEFLIT(lit_477);
DEFLIT(lit_244);
DEFLIT(lit_432);
DEFLIT(lit_204);
DEFLIT(lit_246);
DEFLIT(lit_520);
DEFLIT(lit_611);
DEFLIT(lit_237);
DEFLIT(lit_371);
DEFLIT(lit_352);
DEFLIT(lit_313);
DEFLIT(lit_180);
DEFLIT(lit_92);
DEFLIT(lit_132);
DEFLIT(lit_30);
DEFLIT(lit_556);
DEFLIT(lit_290);
DEFLIT(lit_58);
DEFLIT(lit_553);
DEFLIT(lit_162);
DEFLIT(lit_576);
DEFLIT(lit_64);
DEFLIT(lit_586);
DEFLIT(lit_583);
DEFLIT(lit_96);
DEFLIT(lit_307);
DEFLIT(lit_644);
DEFLIT(lit_353);
DEFLIT(lit_328);
DEFLIT(lit_391);
DEFLIT(lit_332);
DEFLIT(lit_417);
DEFLIT(lit_365);
DEFLIT(lit_588);
DEFLIT(lit_632);
DEFLIT(lit_240);
DEFLIT(lit_195);
DEFLIT(lit_491);
DEFLIT(lit_12);
DEFLIT(lit_560);
DEFLIT(lit_453);
DEFLIT(lit_585);
DEFLIT(lit_161);
DEFLIT(lit_420);
DEFLIT(lit_300);
DEFLIT(lit_584);
DEFLIT(lit_11);
DEFLIT(lit_554);
DEFLIT(lit_233);
DEFLIT(lit_47);
DEFLIT(lit_227);
DEFLIT(lit_550);
DEFLIT(lit_419);
DEFLIT(lit_203);
DEFLIT(lit_299);
DEFLIT(lit_220);
DEFLIT(lit_405);
DEFLIT(lit_192);
DEFLIT(lit_44);
DEFLIT(lit_186);
DEFLIT(lit_257);
DEFLIT(lit_142);
DEFLIT(lit_160);
DEFLIT(lit_145);
DEFLIT(lit_333);
DEFLIT(lit_349);
DEFLIT(lit_62);
DEFLIT(lit_232);
DEFLIT(lit_238);
DEFLIT(lit_252);
DEFLIT(lit_280);
DEFLIT(lit_70);
DEFLIT(lit_76);
DEFLIT(lit_597);
DEFLIT(lit_643);
DEFLIT(lit_587);
DEFLIT(lit_440);
DEFLIT(lit_601);
DEFLIT(lit_295);
DEFLIT(lit_396);
DEFLIT(lit_34);
DEFLIT(lit_289);
DEFLIT(lit_437);
DEFLIT(lit_32);
DEFLIT(lit_629);
DEFLIT(lit_183);
DEFLIT(lit_262);
DEFLIT(lit_348);
DEFLIT(lit_38);
DEFLIT(lit_331);
DEFLIT(lit_329);
DEFLIT(lit_503);
DEFLIT(lit_100);
DEFLIT(lit_173);
DEFLIT(lit_2);
DEFLIT(lit_213);
DEFLIT(lit_347);
DEFLIT(lit_403);
DEFLIT(lit_261);
DEFLIT(lit_591);
DEFLIT(lit_51);
DEFLIT(lit_208);
DEFLIT(lit_501);
DEFLIT(lit_28);
DEFLIT(lit_393);
DEFLIT(lit_258);
DEFLIT(lit_199);
DEFLIT(lit_467);
DEFLIT(lit_346);
DEFLIT(lit_434);
DEFLIT(lit_567);
DEFLIT(lit_315);
DEFLIT(lit_617);
DEFLIT(lit_125);
DEFLIT(lit_19);
DEFLIT(lit_549);
DEFLIT(lit_196);
DEFLIT(lit_79);
DEFLIT(lit_61);
DEFLIT(lit_128);
DEFLIT(lit_376);
DEFLIT(lit_206);
DEFLIT(lit_131);
DEFLIT(lit_375);
DEFLIT(lit_516);
DEFLIT(lit_521);
DEFLIT(lit_94);
DEFLIT(lit_525);
DEFLIT(lit_31);
DEFLIT(lit_126);
DEFLIT(lit_293);
DEFLIT(lit_310);
DEFLIT(lit_225);
DEFLIT(lit_569);
DEFLIT(lit_390);
DEFLIT(lit_475);
DEFLIT(lit_488);
DEFLIT(lit_121);
DEFLIT(lit_91);
DEFLIT(lit_459);
DEFLIT(lit_645);
DEFLIT(lit_130);
DEFLIT(lit_22);
DEFLIT(lit_37);
DEFLIT(lit_633);
DEFLIT(lit_297);
DEFLIT(lit_423);
DEFLIT(lit_190);
DEFLIT(lit_215);
DEFLIT(lit_652);
DEFLIT(lit_429);
DEFLIT(lit_155);
DEFLIT(lit_298);
DEFLIT(lit_127);
DEFLIT(lit_363);
DEFLIT(lit_116);
DEFLIT(lit_639);
DEFLIT(lit_483);
DEFLIT(lit_431);
DEFLIT(lit_154);
DEFLIT(lit_416);
DEFLIT(lit_387);
DEFLIT(lit_111);
DEFLIT(lit_457);
DEFLIT(lit_35);
DEFLIT(lit_286);
DEFLIT(lit_26);
DEFLIT(lit_531);
DEFLIT(lit_445);
DEFLIT(lit_368);
DEFLIT(lit_283);
DEFLIT(lit_384);
DEFLIT(lit_211);
DEFLIT(lit_544);
DEFLIT(lit_9);
DEFLIT(lit_327);
DEFLIT(lit_17);
DEFLIT(lit_144);
DEFLIT(lit_287);
DEFLIT(lit_388);
DEFLIT(lit_438);
DEFLIT(lit_463);
DEFLIT(lit_610);
DEFLIT(lit_81);
DEFLIT(lit_150);
DEFLIT(lit_124);
DEFLIT(lit_185);
DEFLIT(lit_245);
DEFLIT(lit_630);
DEFLIT(lit_166);
DEFLIT(lit_25);
DEFLIT(lit_415);
DEFLIT(lit_655);
DEFLIT(lit_75);
DEFLIT(lit_609);
DEFLIT(lit_309);
DEFLIT(lit_133);
DEFLIT(lit_535);
DEFLIT(lit_209);
DEFLIT(lit_506);
DEFLIT(lit_193);
DEFLIT(lit_647);
DEFLIT(lit_123);
DEFLIT(lit_251);
DEFLIT(lit_656);
DEFLIT(lit_408);
DEFLIT(lit_152);
DEFLIT(lit_98);
DEFLIT(lit_547);
DEFLIT(lit_146);
DEFLIT(lit_296);
DEFLIT(lit_480);
DEFLIT(lit_355);
DEFLIT(lit_449);
DEFLIT(lit_354);
DEFLIT(lit_241);
DEFLIT(lit_184);
DEFLIT(lit_377);
DEFLIT(lit_151);
DEFLIT(lit_638);
DEFLIT(lit_513);
DEFLIT(lit_572);
DEFLIT(lit_344);
DEFLIT(lit_471);
DEFLIT(lit_598);
DEFLIT(lit_517);
DEFLIT(lit_243);
DEFLIT(lit_201);
DEFLIT(lit_493);
DEFLIT(lit_270);
DEFLIT(lit_619);
DEFLIT(lit_15);
DEFLIT(lit_281);
DEFLIT(lit_380);
DEFLIT(lit_181);
DEFLIT(lit_518);
DEFLIT(lit_323);
DEFLIT(lit_523);
DEFLIT(lit_212);
DEFLIT(lit_217);
DEFLIT(lit_45);
DEFLIT(lit_230);
DEFLIT(lit_342);
DEFLIT(lit_418);
DEFLIT(lit_322);
DEFLIT(lit_109);
DEFLIT(lit_234);
DEFLIT(lit_189);
DEFLIT(lit_188);
DEFLIT(lit_93);
DEFLIT(lit_426);
DEFLIT(lit_592);
DEFLIT(lit_527);
DEFLIT(lit_83);
DEFLIT(lit_628);
DEFLIT(lit_167);
DEFLIT(lit_481);
DEFLIT(lit_534);
DEFLIT(lit_194);
DEFLIT(lit_562);
DEFLIT(lit_596);
DEFLIT(lit_508);
DEFLIT(lit_623);
DEFLIT(lit_341);
DEFLIT(lit_478);
DEFLIT(lit_412);
DEFLIT(lit_570);
DEFLIT(lit_176);
DEFLIT(lit_254);
DEFLIT(lit_288);
DEFLIT(lit_350);
DEFLIT(lit_107);
DEFLIT(lit_599);
DEFLIT(lit_496);
DEFLIT(lit_223);
DEFLIT(lit_103);
DEFLIT(lit_321);
DEFLIT(lit_140);
DEFLIT(lit_253);
DEFLIT(lit_159);
DEFLIT(lit_214);
DEFLIT(lit_606);
DEFLIT(lit_40);
DEFLIT(lit_319);
DEFLIT(lit_410);
DEFLIT(lit_602);
DEFLIT(lit_593);
DEFLIT(lit_10);
DEFLIT(lit_448);
DEFLIT(lit_612);
DEFLIT(lit_122);
DEFLIT(lit_356);
DEFLIT(lit_636);
DEFLIT(lit_413);
DEFLIT(lit_642);
DEFLIT(lit_533);
DEFLIT(lit_42);
DEFLIT(lit_536);
DEFLIT(lit_222);
DEFLIT(lit_358);
DEFLIT(lit_148);
DEFLIT(lit_571);
DEFLIT(lit_235);
DEFLIT(lit_320);
DEFLIT(lit_490);
DEFLIT(lit_499);
DEFLIT(lit_282);
DEFLIT(lit_557);
DEFLIT(lit_427);
DEFLIT(lit_507);
DEFLIT(lit_566);
DEFLIT(lit_113);
DEFLIT(lit_473);
DEFLIT(lit_542);
DEFLIT(lit_13);
DEFLIT(lit_102);
DEFLIT(lit_23);
DEFLIT(lit_89);
DEFLIT(lit_430);
DEFLIT(lit_86);
DEFLIT(lit_548);
DEFLIT(lit_8);
DEFLIT(lit_411);
DEFLIT(lit_351);
DEFLIT(lit_57);
DEFLIT(lit_515);
DEFLIT(lit_650);
DEFLIT(lit_88);
DEFLIT(lit_259);
DEFLIT(lit_108);
DEFLIT(lit_3);
DEFLIT(lit_545);
DEFLIT(lit_485);
DEFLIT(lit_613);
DEFLIT(lit_489);
DEFLIT(lit_595);
DEFLIT(lit_422);
DEFLIT(lit_115);
DEFLIT(lit_577);
DEFLIT(lit_603);
DEFLIT(lit_362);
DEFLIT(lit_484);
DEFLIT(lit_52);
DEFLIT(lit_568);
DEFLIT(lit_631);
DEFLIT(lit_616);
DEFLIT(lit_202);
DEFLIT(lit_49);
DEFLIT(lit_561);
DEFLIT(lit_274);
DEFLIT(lit_447);
DEFLIT(lit_627);
DEFLIT(lit_48);
DEFLIT(lit_158);
DEFLIT(lit_539);
DEFLIT(lit_454);
DEFLIT(lit_543);
DEFLIT(lit_622);
DEFLIT(lit_558);
DEFLIT(lit_301);
DEFLIT(lit_600);
DEFLIT(lit_406);
DEFLIT(lit_157);
DEFLIT(lit_522);
DEFLIT(lit_134);
DEFLIT(lit_590);
DEFLIT(lit_325);
DEFLIT(lit_618);
DEFLIT(lit_637);
DEFLIT(lit_653);
DEFLIT(lit_149);
DEFLIT(lit_156);
DEFLIT(lit_361);
DEFLIT(lit_654);
DEFLIT(lit_455);
DEFLIT(lit_139);
DEFLIT(lit_306);
DEFLIT(lit_82);
DEFLIT(lit_178);
DEFLIT(lit_532);
DEFLIT(lit_607);
DEFLIT(lit_43);
DEFLIT(lit_658);
DEFLIT(lit_436);
DEFLIT(lit_267);
DEFLIT(lit_378);
DEFLIT(lit_269);
DEFLIT(lit_538);
DEFLIT(lit_359);
DEFLIT(lit_239);
DEFLIT(lit_197);
DEFLIT(lit_276);
DEFLIT(lit_530);
DEFLIT(lit_369);
DEFLIT(lit_514);
DEFLIT(lit_395);
DEFLIT(lit_179);
DEFLIT(lit_435);
DEFLIT(lit_219);
DEFLIT(lit_275);
DEFLIT(lit_450);
DEFLIT(lit_324);
DEFLIT(lit_581);
DEFLIT(lit_170);
DEFLIT(lit_147);
DEFLIT(lit_337);
DEFLIT(lit_187);
DEFLIT(lit_635);
DEFLIT(lit_502);
DEFLIT(lit_229);
DEFLIT(lit_59);
DEFLIT(lit_604);
DEFLIT(lit_1);
DEFLIT(lit_379);
DEFLIT(lit_54);
DEFLIT(lit_374);
DEFLIT(lit_207);
DEFLIT(lit_304);
DEFLIT(lit_69);
DEFLIT(lit_414);
DEFLIT(lit_364);
DEFLIT(lit_407);
DEFLIT(lit_624);
DEFLIT(lit_505);
DEFLIT(lit_551);
DEFLIT(lit_114);
DEFLIT(lit_564);
DEFLIT(lit_84);
DEFLIT(lit_66);
DEFLIT(lit_476);
DEFLIT(lit_260);
DEFLIT(lit_500);
DEFLIT(lit_541);
DEFLIT(lit_580);
DEFLIT(lit_428);
DEFLIT(lit_171);
DEFLIT(lit_326);
DEFLIT(lit_218);
DEFLIT(lit_343);
DEFLIT(lit_614);

/* FUNCTIONS: */

LOCFOR(fun_module_loader_appname_0);
LOCFOR(fun_module_loader_app_modname_1);
LOCFOR(fun_module_src_file_2);
LOCFOR(fun_module_src_file_setter_3);
LOCFOR(fun_module_mtime_4);
LOCFOR(fun_module_mtime_setter_5);
LOCFOR(fun_module_loader_module_type_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_load_module_12);
FUNFOR(YevalSg2cYmodule_up_to_dateQ);
LOCFOR(fun_14);
LOCFOR(fun_15);
FUNFOR(YevalSg2cYpurge_outdated_modules);
FUNFOR(YevalSg2cYg2c_def_app);
LOCFOR(fun_18);
LOCFOR(fun_19);
FUNFOR(YevalSg2cYg2c_build_app);
FUNFOR(YevalSg2cYg2c_test);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_g2c_ast_28);
LOCFOR(fun_g2c_exp_29);
LOCFOR(fun_compile_load_30);
LOCFOR(fun_g2c_eval_31);
LOCFOR(fun_g2c_eval_32);
LOCFOR(fun_g2c_top_33);
LOCFOR(fun_g2c_clean_34);
LOCFOR(fun_compute_ast_35);
LOCFOR(fun_compute_program_36);
LOCFOR(fun_generate_c_module_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_generate_c_application_40);
LOCFOR(fun_x_1992_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_put_obj_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_53);
LOCFOR(fun_generate_makefile_54);
LOCFOR(fun_pp_55);
LOCFOR(fun_generate_header_56);
LOCFOR(fun_generate_trailer_57);
LOCFOR(fun_gen_binding_58);
LOCFOR(fun_generate_global_environment_59);
LOCFOR(fun_generate_global_binding_60);
FUNFOR(YevalSg2cYchar_buffer_as_string);
LOCFOR(fun_mangle_string_literal_62);
LOCFOR(fun_mangle_string_literal_63);
LOCFOR(fun_process_integer_64);
LOCFOR(fun_mangle_integer_65);
FUNFOR(YevalSg2cYmangler_reset);
FUNFOR(YevalSg2cYmangle_name_into);
LOCFOR(fun_mangle_raw_name_68);
LOCFOR(fun_mangle_raw_name_69);
LOCFOR(fun_mangle_local_name_70);
LOCFOR(fun_mangle_local_name_71);
FUNFOR(YevalSg2cYbuf_cat2X);
LOCFOR(fun_mangle_module_into_73);
LOCFOR(fun_mangle_global_name_74);
LOCFOR(fun_mangle_global_name_75);
FUNFOR(YevalSg2cYmangle_boot_name);
FUNFOR(YevalSg2cYmangle_quotation_name);
LOCFOR(fun_mangle_binding_78);
FUNFOR(YevalSg2cYmangle_local_marked_name);
LOCFOR(fun_mangle_binding_80);
LOCFOR(fun_mangle_binding_81);
LOCFOR(fun_x_2032_82);
LOCFOR(fun_83);
LOCFOR(fun_84);
LOCFOR(fun_x_2036_85);
LOCFOR(fun_86);
LOCFOR(fun_87);
LOCFOR(fun_x_2040_88);
LOCFOR(fun_89);
LOCFOR(fun_90);
LOCFOR(fun_gen_result_91);
LOCFOR(fun_gen_depth_92);
LOCFOR(fun_x_2047_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_x_2051_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_x_2055_99);
LOCFOR(fun_100);
LOCFOR(fun_101);
LOCFOR(fun_generate_quotation_forwards_102);
LOCFOR(fun_generate_quotations_103);
FUNFOR(YOlit);
LOCFOR(fun_105);
LOCFOR(fun_ref_lit_106);
LOCFOR(fun_generate_quotation_107);
LOCFOR(fun_false_name_108);
LOCFOR(fun_generate_quotation_109);
LOCFOR(fun_generate_quotation_110);
LOCFOR(fun_111);
LOCFOR(fun_generate_quotation_112);
LOCFOR(fun_generate_quotation_113);
LOCFOR(fun_generate_quotation_114);
LOCFOR(fun_115);
LOCFOR(fun_float_to_c_string_116);
LOCFOR(fun_generate_quotation_117);
LOCFOR(fun_generate_quotation_118);
LOCFOR(fun_generate_quotation_119);
LOCFOR(fun_generate_quotation_120);
LOCFOR(fun_generate_quotation_121);
FUNFOR(YevalSg2cYbinding_Gc);
LOCFOR(fun_reference_Gc_123);
LOCFOR(fun_reference_Gc_124);
LOCFOR(fun_to_c_125);
LOCFOR(fun_to_c_126);
LOCFOR(fun_gen_ref_127);
LOCFOR(fun_gen_ref_128);
LOCFOR(fun_gen_ref_129);
LOCFOR(fun_gen_ref_130);
LOCFOR(fun_gen_ref_131);
LOCFOR(fun_gen_ref_132);
LOCFOR(fun_gen_ref_133);
LOCFOR(fun_gen_ref_134);
LOCFOR(fun_gen_ref_135);
LOCFOR(fun_to_c_136);
LOCFOR(fun_to_c_137);
LOCFOR(fun_to_c_138);
LOCFOR(fun_to_c_139);
LOCFOR(fun_to_c_140);
LOCFOR(fun_bbQ_141);
LOCFOR(fun_bbQ_142);
LOCFOR(fun_bbQ_143);
LOCFOR(fun_to_c_144);
LOCFOR(fun_145);
LOCFOR(fun_to_c_146);
LOCFOR(fun_147);
LOCFOR(fun_148);
LOCFOR(fun_to_c_149);
LOCFOR(fun_to_c_150);
LOCFOR(fun_to_c_151);
LOCFOR(fun_to_c_152);
LOCFOR(fun_153);
LOCFOR(fun_154);
LOCFOR(fun_to_c_155);
LOCFOR(fun_to_c_156);
LOCFOR(fun_to_c_157);
LOCFOR(fun_to_c_158);
LOCFOR(fun_to_c_159);
LOCFOR(fun_to_c_160);
LOCFOR(fun_161);
LOCFOR(fun_162);
LOCFOR(fun_to_c_163);
LOCFOR(fun_164);
LOCFOR(fun_to_c_165);
LOCFOR(fun_funshell_to_c_166);
LOCFOR(fun_167);
LOCFOR(fun_funinit_to_c_168);
LOCFOR(fun_to_c_169);
LOCFOR(fun_out_list_builder_170);
LOCFOR(fun_171);
LOCFOR(fun_gen_fab_list_172);
LOCFOR(fun_generate_function_specs_173);
LOCFOR(fun_174);
LOCFOR(fun_to_c_175);
LOCFOR(fun_to_c_176);
LOCFOR(fun_generate_function_forwards_177);
LOCFOR(fun_178);
LOCFOR(fun_179);
LOCFOR(fun_generate_function_forward_180);
LOCFOR(fun_generate_function_binding_181);
LOCFOR(fun_generate_function_forward_182);
LOCFOR(fun_183);
LOCFOR(fun_generate_function_bodies_184);
LOCFOR(fun_185);
LOCFOR(fun_generate_functions_186);
LOCFOR(fun_generate_closure_structure_187);
LOCFOR(fun_generate_function_body_reference_188);
LOCFOR(fun_generate_return_189);
LOCFOR(fun_generate_return_190);
LOCFOR(fun_primitive_inlinableQ_191);
LOCFOR(fun_192);
LOCFOR(fun_193);
LOCFOR(fun_generate_function_code_194);
LOCFOR(fun_dispatcherQ_195);
LOCFOR(fun_196);
LOCFOR(fun_197);
LOCFOR(fun_198);
LOCFOR(fun_generate_function_code_199);
LOCFOR(fun_generate_local_temporaries_200);
LOCFOR(fun_generate_registers_201);
LOCFOR(fun_module_info_name_202);
LOCFOR(fun_maybe_declare_203);
LOCFOR(fun_204);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_206);
LOCFOR(fun_207);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_209);
LOCFOR(fun_module_init_decl_210);
LOCFOR(fun_generate_module_init_211);
LOCFOR(fun_generate_main_212);
extern P YevalSg2cY___main_0___ ();
extern P YevalSg2cY___main_1___ ();
extern P YevalSg2cY___main_2___ ();
extern P YevalSg2cY___main_3___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_module_loader_appname_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_appname));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_loader_app_modname_1) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_app_modname));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_src_file_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_src_file_setter_3) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_mtime_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_mtime_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_loader_module_type_6) {
  P loader_;
LINK_STACK();
  ARG(loader_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSg2cYLg2c_moduleG));
}

LOCCODEDEF(fun_7) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  DYNSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXGET(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_8) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_9) {
  P x_1984F5878;
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  x_1984F5878 = DYNREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_7,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T3 = FUNFAB(fun_8,1,x_1984F5878);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_10) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_11) {
  P name_;
  P tmpF5882;
  P src_fileF5881;
  P build_fileF5880;
  P fileF5879;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(name_, 0);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_name_to_relpath),name_);
  fileF5879 = T10;
  T9 = CALL2(1,VARREF(YgooSsystemYadd_build_path),FREEREF(0),fileF5879);
  build_fileF5880 = T9;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),fileF5879);
  src_fileF5881 = T8;
  T6 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),build_fileF5880);
  T5 = CALL1(1,VARREF(Ynot),T6);
  tmpF5882 = T5;
  if (tmpF5882 != YPfalse) {
    T1 = tmpF5882;
  } else {
    T3 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF5881);
    T4 = CALL1(1,VARREF(YgooSsystemYfile_mtime),build_fileF5880);
    T2 = CALL2(1,VARREF(YgooSmagYGE),T3,T4);
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSsystemYfile_copy),src_fileF5881,build_fileF5880);
    T0 = T7;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_load_module_12) {
  P loader_,name_;
  P out_portF5892;
  P prgF5891;
  P astF5890;
  P out_fileF5889;
  P appnameF5888;
  P src_fileF5887;
  P fileF5886;
  P envF5885;
  P keepmodQF5884;
  P modF5883;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T20 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF5883 = T20;
  keepmodQF5884 = YPfalse;
  T19 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),modF5883);
  envF5885 = T19;
  T18 = CALL1(1,VARREF(YevalSmoduleYmodule_name_to_relpath),name_);
  fileF5886 = T18;
  T17 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF5886);
  T16 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T17);
  src_fileF5887 = T16;
  T15 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF5888 = T15;
  T14 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF5886);
  T13 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF5888,T14);
  out_fileF5889 = T13;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF5887,modF5883);
  T0 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF5887);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T0,modF5883);
  T1 = (P)YPsu(LITREF(lit_18));
  (P)YevalSg2cYPprint_cpu_usage(T1);
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF5887,envF5885);
  astF5890 = T12;
  T11 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF5890,envF5885);
  prgF5891 = T11;
  T2 = (P)YPsu(LITREF(lit_19));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T3 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF5889);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T3);
  out_portF5892 = YPfalse;
  out_portF5892 = BOXFAB(out_portF5892);
  T6 = FUNFAB(fun_9,5,out_portF5892,out_fileF5889,prgF5891,astF5890,modF5883);
  T7 = FUNFAB(fun_10,1,out_portF5892);
  T5 = with_cleanup(T6,T7);
  T8 = FUNFAB(fun_11,1,appnameF5888);
  T9 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_files),modF5883);
  CALL2(1,VARREF(YgooSmacrosYdo),T8,T9);
  T10 = (P)YPsu(LITREF(lit_22));
  (P)YevalSg2cYPprint_cpu_usage(T10);
UNLINK_STACK();
  RET(modF5883);
}

FUNCODEDEF(YevalSg2cYmodule_up_to_dateQ) {
  P mod_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_mtime),mod_);
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_src_file),mod_);
  T2 = CALL1(1,VARREF(YgooSsystemYfile_mtime),T3);
  T0 = CALL2(1,VARREF(YgooSmagYGE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_14) {
  P mod_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_up_to_dateQ),mod_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = BOXGET(FREEREF(0));
    T6 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,T6);
    T3 = BOXPUT(T4,FREEREF(0));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_15) {
  P name_;
  P x_1985F5893;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  x_1985F5893 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1985F5893,name_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1985F5893,LITREF(lit_29));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF5894;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(loader_, 0);
  changedF5894 = Ynil;
  changedF5894 = BOXFAB(changedF5894);
  T1 = FUNFAB(fun_14,1,changedF5894);
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T1,loader_);
  T2 = fun_15;
  T3 = BOXGET(changedF5894);
  CALL2(1,VARREF(YgooSmacrosYdo),T2,T3);
  T5 = BOXGET(changedF5894);
  T4 = CALL2(1,VARREF(YevalSmoduleYremove_modules_by_nameX),loader_,T5);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YevalSg2cYg2c_def_app) {
  P appname_,modname_;
  P T0;
LINK_STACK();
  ARG(appname_, 0);
  ARG(modname_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),appname_,VARREF(YevalSg2cYmodule_loader_app_modname),modname_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_18) {
  P modF5895;
  P T0,T1;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPfalse);
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),FREEREF(0));
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSmoduleYprobe_module),FREEREF(0),T1);
  modF5895 = T0;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_34));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),VARREF(YevalSmoduleYreport_undefined_global_bindings),FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),FREEREF(0),modF5895);
  CALL1(1,VARREF(YevalSg2cYgenerate_makefile),FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_19) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSmoduleYTdynamic_compilationQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_build_app) {
  P loader_;
  P x_1986F5896;
  P T0,T1,T2;
LINK_STACK();
  ARG(loader_, 0);
  x_1986F5896 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
  T1 = FUNFAB(fun_18,1,loader_);
  T2 = FUNFAB(fun_19,1,x_1986F5896);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_test) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL1(1,VARREF(YgooSanyYto_str),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_37),T3);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),T2,LITREF(lit_38));
  T0 = VARSET(YevalSg2cYTg2c_appT,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_22) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  DYNSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXGET(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_23) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_24) {
  P x_1988F5897;
  P T0,T1,T2;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPtrue);
  x_1988F5897 = DYNREF(YevalSg2cYTdefinitionsT);
  T1 = FUNFAB(fun_22,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = FUNFAB(fun_23,1,x_1988F5897);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_25) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSmoduleYTdynamic_compilationQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_26) {
  P x_1987F5898;
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  x_1987F5898 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
  T2 = FUNFAB(fun_24,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T3 = FUNFAB(fun_25,1,x_1987F5898);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_27) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_g2c_ast_28) {
  P ast_,env_;
  P out_portF5904;
  P prgF5903;
  P out_fileF5902;
  P fileF5901;
  P nameF5900;
  P modF5899;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
  T11 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),env_);
  modF5899 = T11;
  T8 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T10 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T9 = DYNSET(YevalSg2cYTtmp_file_counterT,T10);
  T7 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_41),T8,T9);
  nameF5900 = T7;
  T6 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF5900);
  fileF5901 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF5901);
  out_fileF5902 = T5;
  T4 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF5903 = T4;
  out_portF5904 = YPfalse;
  out_portF5904 = BOXFAB(out_portF5904);
  T2 = FUNFAB(fun_26,5,out_portF5904,out_fileF5902,prgF5903,ast_,modF5899);
  T3 = FUNFAB(fun_27,1,out_portF5904);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(fileF5901);
}

LOCCODEDEF(fun_g2c_exp_29) {
  P exp_,env_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
  T1 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),exp_,env_,DYNREF(YevalSmoduleYTdynamic_compilationQT),YPfalse);
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_ast),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_compile_load_30) {
  P name_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTc_extensionT));
  T0 = (P)YPsu(T1);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_46));
  T2 = (P)YPsu(T3);
  (P)YgooSsystemYPcompile(T0,T2);
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_47));
  T5 = (P)YPsu(T6);
  T4 = (P)YgooSsystemYPload(T5);
UNLINK_STACK();
  QRET(T4);
}

LOCCODEDEF(fun_g2c_eval_31) {
  P exp_,env_;
  P nameF5905;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF5905 = T1;
  T0 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF5905);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_g2c_eval_32) {
  P ast_,env_;
  P nameF5906;
  P T0,T1;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF5906 = T1;
  T0 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF5906);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_g2c_top_33) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSg2cYg2c_build_app),VARREF(YevalSg2cYTg2c_appT));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_g2c_clean_34) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_54),LITREF(lit_38));
  VARSET(YevalSg2cYTg2c_appT,T0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_compute_ast_35) {
  P filename_,ct_env_;
  P astF5908;
  P sexprF5907;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
  T3 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  sexprF5907 = T3;
  T0 = (P)YPsu(LITREF(lit_57));
  (P)YevalSg2cYPprint_cpu_usage(T0);
  T2 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),sexprF5907,ct_env_,DYNREF(YevalSmoduleYTdynamic_compilationQT),YPfalse);
  astF5908 = T2;
  T1 = (P)YPsu(LITREF(lit_58));
  (P)YevalSg2cYPprint_cpu_usage(T1);
UNLINK_STACK();
  QRET(astF5908);
}

LOCCODEDEF(fun_compute_program_36) {
  P e_,env_;
  P fltF5913;
  P prgF5912;
  P lftF5911;
  P boxF5910;
  P anaF5909;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T11 = CALL2(1,VARREF(YevalSoptimizeYanalyze_calls),e_,env_);
  anaF5909 = T11;
  T0 = (P)YPsu(LITREF(lit_61));
  (P)YevalSg2cYPprint_cpu_usage(T0);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),anaF5909);
  boxF5910 = T10;
  T1 = (P)YPsu(LITREF(lit_62));
  (P)YevalSg2cYPprint_cpu_usage(T1);
  T9 = CALL1(1,VARREF(YevalSast_linearizeYliftX),boxF5910);
  lftF5911 = T9;
  T2 = (P)YPsu(LITREF(lit_63));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T8 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF5911);
  prgF5912 = T8;
  T3 = (P)YPsu(LITREF(lit_64));
  (P)YevalSg2cYPprint_cpu_usage(T3);
  T7 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF5912,env_,YPint((P)50));
  fltF5913 = T7;
  T4 = (P)YPsu(LITREF(lit_65));
  (P)YevalSg2cYPprint_cpu_usage(T4);
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF5913);
  T5 = (P)YPsu(LITREF(lit_66));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF5913,YPfalse);
  T6 = (P)YPsu(LITREF(lit_67));
  (P)YevalSg2cYPprint_cpu_usage(T6);
UNLINK_STACK();
  QRET(prgF5912);
}

LOCCODEDEF(fun_generate_c_module_37) {
  P out_,e_,prg_,mod_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(out_, 0);
  ARG(e_, 1);
  ARG(prg_, 2);
  ARG(mod_, 3);
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  CALL2(1,VARREF(YevalSg2cYgenerate_header),out_,T0);
  CALL2(1,VARREF(YevalSg2cYgenerate_global_environment),out_,mod_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation_forwards),out_,T1);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_forwards),out_,T2);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_bodies),out_,T3);
  T4 = CALL1(1,VARREF(Ynot),DYNREF(YevalSmoduleYTdynamic_compilationQT));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSg2cYgenerate_module_info),out_,mod_);
  } else {
  }
  T6 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),prg_);
  CALL3(1,VARREF(YevalSg2cYgenerate_module_init),out_,mod_,T6);
  CALL1(1,VARREF(YevalSg2cYgenerate_trailer),out_);
UNLINK_STACK();
  QRET(prg_);
}

LOCCODEDEF(fun_38) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  T1 = BOXGET(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_header),T1,FREEREF(2));
  T2 = BOXGET(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_main),T2,FREEREF(3));
  T4 = BOXGET(FREEREF(0));
  T3 = CALL1(1,VARREF(YevalSg2cYgenerate_trailer),T4);
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_39) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_c_application_40) {
  P loader_,mod_;
  P out_portF5917;
  P out_nameF5916;
  P init_nameF5915;
  P appnameF5914;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
  T7 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF5914 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF5914,LITREF(lit_72));
  init_nameF5915 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF5915);
  T4 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF5914,T5);
  out_nameF5916 = T4;
  out_portF5917 = YPfalse;
  out_portF5917 = BOXFAB(out_portF5917);
  T2 = FUNFAB(fun_38,4,out_portF5917,out_nameF5916,appnameF5914,mod_);
  T3 = FUNFAB(fun_39,1,out_portF5917);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_x_1992_41) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_77),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_42) {
  P return_;
  P x_1991F5932;
  P x_1991F5931;
  P x_1991F5930;
  P x_1991F5929;
  P x_1991F5928;
  P x_1991F5927;
  P x_1991F5926;
  P x_1991F5925;
  P x_1991F5924;
  P x_1991F5923;
  P bodyF5922;
  P loaderF5921;
  P modF5920;
  P x_1991F5919;
  P x_1992F5918;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(return_, 0);
  T32 = FUNSHELL(0,fun_x_1992_41,2);
  x_1992F5918 = T32;
  FUNINIT(x_1992F5918, 2,FREEREF(0),return_);
  x_1991F5919 = FREEREF(0);
  modF5920 = YPfalse;
  loaderF5921 = YPfalse;
  bodyF5922 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1991F5919,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1991F5919,LITREF(lit_77),x_1992F5918);
    x_1991F5923 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1991F5923,x_1992F5918);
    x_1991F5924 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1991F5924,x_1992F5918);
    modF5920 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1991F5924);
    x_1991F5925 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1991F5925,x_1992F5918);
    loaderF5921 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1991F5925);
    x_1991F5926 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1991F5926,x_1992F5918);
    x_1991F5927 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1991F5927,x_1992F5918);
    T11 = CALL1(1,VARREF(Ytail),x_1991F5926);
    x_1991F5928 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1991F5928,x_1992F5918);
    T17 = CALL1(1,VARREF(Ytail),x_1991F5923);
    x_1991F5929 = T17;
    bodyF5922 = x_1991F5929;
    x_1991F5930 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1991F5930,x_1992F5918);
    x_1991F5931 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1991F5931,x_1992F5918);
    T7 = CALL1(1,VARREF(Ytail),x_1991F5930);
    x_1991F5932 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1991F5932,x_1992F5918);
  } else {
    T19 = CALL2(1,x_1992F5918,LITREF(lit_78),x_1991F5919);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T28 = modF5920;
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,LITREF(lit_81));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T29 = bodyF5922;
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T29,LITREF(lit_81));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T31 = loaderF5921;
  T30 = CALL1(1,VARREF(Ylst),T31);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T30,LITREF(lit_81));
UNLINK_STACK();
  QRET(T20);
}

LOCCODEDEF(fun_43) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_42,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_44) {
  P i_;
  P x_1996F5933;
  P T0,T1;
LINK_STACK();
  ARG(i_, 0);
  T1 = BOXGET(FREEREF(0));
  x_1996F5933 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1996F5933,LITREF(lit_93));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1996F5933,i_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1996F5933,LITREF(lit_94));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_45) {
  P mod_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_44,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_includes),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_put_obj_46) {
  P name_;
  P x_1999F5934;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  T3 = BOXGET(FREEREF(0));
  x_1999F5934 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),x_1999F5934,LITREF(lit_100));
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_name_to_relpath),name_);
  T0 = CALL1(1,VARREF(YgooSsystemYobj_filename),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1999F5934,T0);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1999F5934,LITREF(lit_101));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_47) {
  P name_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,LITREF(lit_103));
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooStypesYlen),name_);
    T5 = CALL2(1,VARREF(YgooSmathY_),T6,YPint((P)2));
    T4 = CALL3(1,VARREF(YgooScolsSseqYsub),name_,YPint((P)0),T5);
    T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T4);
    T2 = CALL1(0,FREEREF(0),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_48) {
  P n_;
  P T0;
LINK_STACK();
  ARG(n_, 0);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),n_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_49) {
  P mod_;
  P put_objF5935;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  T6 = FUNSHELL(1,fun_put_obj_46,1);
  put_objF5935 = T6;
  FUNINIT(put_objF5935, 1,FREEREF(0));
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  CALL1(0,put_objF5935,T0);
  T2 = FUNFAB(fun_47,1,put_objF5935);
  T4 = fun_48;
  T5 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_files),mod_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  T1 = CALL2(1,VARREF(YgooSmacrosYdo),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_50) {
  P l_;
  P x_2003F5936;
  P T0,T1;
LINK_STACK();
  ARG(l_, 0);
  T1 = BOXGET(FREEREF(0));
  x_2003F5936 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_2003F5936,LITREF(lit_112));
  T0 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2003F5936,l_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_51) {
  P mod_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_50,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_libraries),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_52) {
  P x_2004F5945;
  P x_2002F5944;
  P x_2001F5943;
  P x_2000F5942;
  P x_1998F5941;
  P x_1997F5940;
  P x_1995F5939;
  P x_1994F5938;
  P x_1993F5937;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  T2 = BOXGET(FREEREF(0));
  x_1993F5937 = T2;
  CALL2(1,VARREF(YgooSioSportYputs),x_1993F5937,LITREF(lit_86));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1993F5937,FREEREF(2));
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1993F5937,LITREF(lit_87));
  T4 = BOXGET(FREEREF(0));
  x_1994F5938 = T4;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1994F5938,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1994F5938,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_1994F5938,LITREF(lit_88));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1994F5938,FREEREF(2));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1994F5938,LITREF(lit_89));
  T6 = BOXGET(FREEREF(0));
  x_1995F5939 = T6;
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1995F5939,LITREF(lit_90));
  T7 = FUNFAB(fun_45,1,FREEREF(0));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T7,FREEREF(3));
  T9 = BOXGET(FREEREF(0));
  x_1997F5940 = T9;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1997F5940,LITREF(lit_95));
  T11 = BOXGET(FREEREF(0));
  x_1998F5941 = T11;
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1998F5941,LITREF(lit_96));
  T12 = FUNFAB(fun_49,1,FREEREF(0));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T12,FREEREF(3));
  T15 = BOXGET(FREEREF(0));
  x_2000F5942 = T15;
  CALL2(1,VARREF(YgooSioSportYputs),x_2000F5942,LITREF(lit_105));
  T13 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2000F5942,T13);
  T14 = CALL2(1,VARREF(YgooSioSportYputs),x_2000F5942,LITREF(lit_106));
  T17 = BOXGET(FREEREF(0));
  x_2001F5943 = T17;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2001F5943,FREEREF(5));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_2001F5943,LITREF(lit_107));
  T19 = BOXGET(FREEREF(0));
  x_2002F5944 = T19;
  CALL2(1,VARREF(YgooSioSportYputs),x_2002F5944,LITREF(lit_108));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2002F5944,FREEREF(5));
  T18 = CALL2(1,VARREF(YgooSioSportYputs),x_2002F5944,LITREF(lit_109));
  T20 = FUNFAB(fun_51,1,FREEREF(0));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T20,FREEREF(3));
  T22 = BOXGET(FREEREF(0));
  x_2004F5945 = T22;
  CALL2(1,VARREF(YgooSioSportYputs),x_2004F5945,LITREF(lit_113));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2004F5945,FREEREF(5));
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_2004F5945,LITREF(lit_114));
UNLINK_STACK();
  QRET(T21);
}

LOCCODEDEF(fun_53) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_makefile_54) {
  P loader_;
  P outF5951;
  P out_nameF5950;
  P sepF5949;
  P exe_nameF5948;
  P init_nameF5947;
  P appnameF5946;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(loader_, 0);
  T7 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF5946 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF5946,LITREF(lit_84));
  init_nameF5947 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF5946);
  exe_nameF5948 = T5;
  sepF5949 = VARREF(YgooSsystemYTpath_separatorT);
  T4 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF5946,LITREF(lit_85));
  out_nameF5950 = T4;
  outF5951 = YPfalse;
  outF5951 = BOXFAB(outF5951);
  T2 = FUNFAB(fun_52,6,outF5951,out_nameF5950,sepF5949,loader_,init_nameF5947,exe_nameF5948);
  T3 = FUNFAB(fun_53,1,outF5951);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_pp_55) {
  P e_,out_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),out_,e_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_header_56) {
  P out_,modname_;
  P x_2013F5961;
  P x_2012F5960;
  P x_2011F5959;
  P x_2010F5958;
  P x_2009F5957;
  P x_2008F5956;
  P x_2007F5955;
  P x_2006F5954;
  P x_2005F5953;
  P modvarF5952;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(modname_, 1);
  modvarF5952 = VARREF(YevalSg2cYDnow_mod_var_name);
  x_2005F5953 = out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2005F5953,LITREF(lit_120));
  x_2006F5954 = out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_2006F5954,LITREF(lit_121));
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    x_2007F5955 = out_;
    T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2007F5955,LITREF(lit_122));
  } else {
  }
  x_2008F5956 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2008F5956,LITREF(lit_123));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2008F5956,modvarF5952);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2008F5956,LITREF(lit_124));
  x_2009F5957 = out_;
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2009F5957,LITREF(lit_125));
  x_2010F5958 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2010F5958,LITREF(lit_126));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2010F5958,modvarF5952);
  CALL2(1,VARREF(YgooSioSportYputs),x_2010F5958,LITREF(lit_127));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2010F5958,modvarF5952);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_2010F5958,LITREF(lit_128));
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,modname_);
  x_2011F5959 = out_;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_2011F5959,LITREF(lit_129));
  x_2012F5960 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2012F5960,LITREF(lit_130));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_131));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2012F5960,T7);
  CALL2(1,VARREF(YgooSioSportYputs),x_2012F5960,LITREF(lit_132));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_133));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2012F5960,T8);
  CALL2(1,VARREF(YgooSioSportYputs),x_2012F5960,LITREF(lit_134));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2012F5960,modvarF5952);
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_2012F5960,LITREF(lit_135));
  x_2013F5961 = out_;
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_2013F5961,LITREF(lit_136));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_generate_trailer_57) {
  P out_;
  P x_2014F5962;
  P T0;
LINK_STACK();
  ARG(out_, 0);
  x_2014F5962 = out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2014F5962,LITREF(lit_139));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_binding_58) {
  P b_;
  P T0,T1,T2;
LINK_STACK();
  ARG(b_, 0);
  T2 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),b_,FREEREF(1));
  T1 = CALL1(1,VARREF(Ynot),T2);
  T0 = CALL3(1,VARREF(YevalSg2cYgenerate_global_binding),FREEREF(0),T1,b_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_global_environment_59) {
  P out_,mod_;
  P gen_bindingF5964;
  P x_2015F5963;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  x_2015F5963 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2015F5963,LITREF(lit_142));
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2015F5963,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_2015F5963,LITREF(lit_143));
  T7 = FUNSHELL(0,fun_gen_binding_58,2);
  gen_bindingF5964 = T7;
  FUNINIT(gen_bindingF5964, 2,out_,mod_);
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSmoduleYmodule_referenced_bindings),mod_);
    T3 = CALL2(1,VARREF(YgooSmacrosYdo),gen_bindingF5964,T4);
    T2 = T3;
  } else {
    T6 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
    T5 = CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),gen_bindingF5964,T6);
    T2 = T5;
  }
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_global_binding_60) {
  P out_,importedQ_,gb_;
  P x_2018F5971;
  P x_2017F5970;
  P x_2016F5969;
  P nameF5968;
  P tmpF5967;
  P tmpF5966;
  P kindF5965;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
  T17 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),gb_);
  kindF5965 = T17;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),kindF5965,LITREF(lit_148));
  tmpF5966 = T5;
  if (tmpF5966 != YPfalse) {
    T1 = tmpF5966;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF5965,LITREF(lit_149));
    tmpF5967 = T4;
    if (tmpF5967 != YPfalse) {
      T2 = tmpF5967;
    } else {
      T3 = CALL2(1,VARREF(YgooSmacrosYEE),kindF5965,LITREF(lit_150));
      T2 = T3;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T16 = CALL1(1,VARREF(YevalSmoduleYbinding_name),gb_);
    nameF5968 = T16;
    x_2016F5969 = kindF5965;
    x_2017F5970 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_2017F5970,x_2016F5969,LITREF(lit_149));
    if (T7 != YPfalse) {
      T6 = LITREF(lit_151);
    } else {
      T9 = CALL2(1,x_2017F5970,x_2016F5969,LITREF(lit_150));
      if (T9 != YPfalse) {
        T8 = LITREF(lit_152);
      } else {
        T8 = LITREF(lit_153);
      }
      T6 = T8;
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
    x_2018F5971 = out_;
    if (importedQ_ != YPfalse) {
      T10 = LITREF(lit_154);
    } else {
      T10 = LITREF(lit_155);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2018F5971,T10);
    CALL2(1,VARREF(YgooSioSportYputs),x_2018F5971,LITREF(lit_156));
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2018F5971,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_2018F5971,LITREF(lit_157));
    T13 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),gb_);
    T12 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T13);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2018F5971,T12);
    CALL2(1,VARREF(YgooSioSportYputs),x_2018F5971,LITREF(lit_158));
    T14 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF5968);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2018F5971,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYputs),x_2018F5971,LITREF(lit_159));
    T0 = T15;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYchar_buffer_as_string) {
  P buffer_;
  P iF5974;
  P stringF5973;
  P buffer_sizeF5972;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(buffer_, 0);
  T6 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T6,VARREF(YLintG));
  buffer_sizeF5972 = T6;
  T5 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF5972);
  check_type(T5,VARREF(YLstrG));
  stringF5973 = T5;
  iF5974 = YPint((P)0);
  LOOP_286: {
    P a286_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF5974,buffer_sizeF5972);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),buffer_,iF5974);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T2,stringF5973,iF5974);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF5974,YPint((P)1));
      a286_0 = T4;
      iF5974 = a286_0;
      goto LOOP_286;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  RET(stringF5973);
}

LOCCODEDEF(fun_mangle_string_literal_62) {
  P str_;
  P encF5978;
  P cF5977;
  P iF5976;
  P lenF5975;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(str_, 0);
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T11 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF5975 = T11;
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
  iF5976 = YPint((P)0);
  LOOP_287: {
    P a287_0;
    T1 = CALL2(1,VARREF(YgooSlogYE),iF5976,lenF5975);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
      T2 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
      T0 = T2;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYelt),str_,iF5976);
      cF5977 = T10;
      T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF5977);
      T8 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T9);
      encF5978 = T8;
      T3 = CALL2(1,VARREF(YgooSlogYE),encF5978,YPfalse);
      if (T3 != YPfalse) {
        T4 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF5977);
      } else {
        T5 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF5978);
      }
      T7 = CALL2(1,VARREF(YgooSmathYA),iF5976,YPint((P)1));
      a287_0 = T7;
      iF5976 = a287_0;
      goto LOOP_287;
      T0 = T6;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mangle_string_literal_63) {
  P sym_;
  P T0,T1;
LINK_STACK();
  ARG(sym_, 0);
  T1 = CALL1(1,VARREF(Ysym_name),sym_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_process_integer_64) {
  P number_,index_;
  P resultF5984;
  P resultF5983;
  P digitF5982;
  P remainderF5981;
  P quotientF5980;
  P tup42F5979;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
  T10 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup42F5979 = T10;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup42F5979,YPint((P)0));
  check_type(T9,VARREF(YLintG));
  quotientF5980 = T9;
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup42F5979,YPint((P)1));
  check_type(T8,VARREF(YLintG));
  remainderF5981 = T8;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF5981);
  check_type(T7,VARREF(YLchrG));
  digitF5982 = T7;
  T1 = CALL2(1,VARREF(YgooSlogYE),quotientF5980,YPint((P)0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T2,VARREF(YgooScolsSvecYLvecG));
    resultF5983 = T2;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF5982,resultF5983,YPint((P)0));
    T0 = resultF5983;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T5 = CALL2(1,FREEREF(0),quotientF5980,T6);
    check_type(T5,VARREF(YgooScolsSvecYLvecG));
    resultF5984 = T5;
    T4 = CALL1(1,VARREF(YgooStypesYlen),resultF5984);
    T3 = CALL2(1,VARREF(YgooSmathY_),T4,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF5982,resultF5984,T3);
    T0 = resultF5984;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mangle_integer_65) {
  P number_;
  P process_integerF5985;
  P T0,T1,T2;
LINK_STACK();
  ARG(number_, 0);
  T2 = FUNSHELL(1,fun_process_integer_64,1);
  process_integerF5985 = T2;
  FUNINIT(process_integerF5985, 1,process_integerF5985);
  T1 = CALL2(1,process_integerF5985,number_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmangler_reset) {
  P buffer_;
  P T0;
LINK_STACK();
  ARG(buffer_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),buffer_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_name_into) {
  P buf_,name_;
  P cF5987;
  P x_2027F5986;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  x_2027F5986 = T9;
  LOOP_288: {
    P a288_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2027F5986);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2027F5986);
      cF5987 = T8;
      T5 = CALL1(1,VARREF(YgooSchrYto_lower),cF5987);
      T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T5);
      T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T4);
      CALL2(1,VARREF(YgooScolsScolxYaddX),buf_,T3);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2027F5986);
      a288_0 = T7;
      x_2027F5986 = a288_0;
      goto LOOP_288;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(buf_);
}

LOCCODEDEF(fun_mangle_raw_name_68) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mangle_raw_name_69) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mangle_local_name_70) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDlocal_marker));
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mangle_local_name_71) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYbuf_cat2X) {
  P buf_,name_;
  P iF5989;
  P lenF5988;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
  T5 = CALL1(1,VARREF(YgooStypesYlen),name_);
  lenF5988 = T5;
  iF5989 = YPint((P)0);
  LOOP_289: {
    P a289_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF5989,lenF5988);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),name_,iF5989);
      CALL2(1,VARREF(YgooScolsScolxYaddX),buf_,T2);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF5989,YPint((P)1));
      a289_0 = T4;
      iF5989 = a289_0;
      goto LOOP_289;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mangle_module_into_73) {
  P buf_,mod_;
  P nameF5992;
  P tmpF5991;
  P UF5990;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(buf_, 0);
  ARG(mod_, 1);
  T9 = CALL1(1,VARREF(YevalSmoduleYmodule_mangled_name),mod_);
  UF5990 = T9;
  T8 = CALL1(1,VARREF(YevalSmoduleYmodule_mangled_name),mod_);
  tmpF5991 = T8;
  if (tmpF5991 != YPfalse) {
    T1 = tmpF5991;
  } else {
    T5 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
    T7 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    T4 = CALL2(1,VARREF(YevalSg2cYmangle_name_into),T5,T6);
    T3 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),T4);
    T2 = CALL2(1,VARREF(YevalSmoduleYmodule_mangled_name_setter),T3,mod_);
    T1 = T2;
  }
  nameF5992 = T1;
  T0 = CALL2(1,VARREF(YevalSg2cYbuf_cat2X),buf_,nameF5992);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mangle_global_name_74) {
  P mod_,name_;
  P tmpF5993;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),mod_,VARREF(YevalSmoduleYDgoo_boot_module_name));
  tmpF5993 = T4;
  if (tmpF5993 != YPfalse) {
    T1 = tmpF5993;
  } else {
    T3 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,VARREF(YevalSmoduleYDgoo_boot_module_name));
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
    T5 = CALL2(1,VARREF(YevalSg2cYmangle_module_into),VARREF(YevalSg2cYTmangle_bufferT),mod_);
  } else {
  }
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T6 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T6);
}

LOCCODEDEF(fun_mangle_global_name_75) {
  P mod_,name_;
  P T0,T1;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),mod_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_boot_name) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),VARREF(YevalSmoduleYDgoo_boot_module_name),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_quotation_name) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),LITREF(lit_221));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),name_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_mangle_binding_78) {
  P binding_;
  P tmpF5995;
  P UF5994;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(binding_, 0);
  T11 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  UF5994 = T11;
  T10 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  tmpF5995 = T10;
  if (tmpF5995 != YPfalse) {
    T0 = tmpF5995;
  } else {
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),binding_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_224));
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
      T5 = CALL1(1,VARREF(YevalSg2cYmangle_quotation_name),T6);
      T2 = T5;
    } else {
      T8 = CALL1(1,VARREF(YevalSmoduleYbinding_module),binding_);
      T9 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
      T7 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),T8,T9);
      T2 = T7;
    }
    T1 = CALL2(1,VARREF(YevalSmoduleYbinding_mangled_name_setter),T2,binding_);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_local_marked_name) {
  P name_,marker_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  ARG(marker_, 1);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDhygiene_char));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),marker_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_mangle_binding_80) {
  P binding_;
  P tmpF5997;
  P UF5996;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(binding_, 0);
  T5 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  UF5996 = T5;
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  tmpF5997 = T4;
  if (tmpF5997 != YPfalse) {
    T0 = tmpF5997;
  } else {
    T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T3);
    T1 = CALL2(1,VARREF(YevalSmoduleYbinding_mangled_name_setter),T2,binding_);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mangle_binding_81) {
  P binding_;
  P tmpF5999;
  P UF5998;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(binding_, 0);
  T7 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  UF5998 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  tmpF5999 = T6;
  if (tmpF5999 != YPfalse) {
    T0 = tmpF5999;
  } else {
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T4);
    T5 = CALL1(1,VARREF(YevalSastYbinding_index),binding_);
    T2 = CALL2(1,VARREF(YevalSg2cYmangle_local_marked_name),T3,T5);
    T1 = CALL2(1,VARREF(YevalSmoduleYbinding_mangled_name_setter),T2,binding_);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_2032_82) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_233),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_83) {
  P return_;
  P out_varF6015;
  P x_2031F6014;
  P x_2031F6013;
  P x_2031F6012;
  P x_2031F6011;
  P x_2031F6010;
  P x_2031F6009;
  P x_2031F6008;
  P x_2031F6007;
  P x_2031F6006;
  P x_2031F6005;
  P bodyF6004;
  P clausesF6003;
  P out_valF6002;
  P x_2031F6001;
  P x_2032F6000;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
LINK_STACK();
  ARG(return_, 0);
  T58 = FUNSHELL(0,fun_x_2032_82,2);
  x_2032F6000 = T58;
  FUNINIT(x_2032F6000, 2,FREEREF(0),return_);
  x_2031F6001 = FREEREF(0);
  out_valF6002 = YPfalse;
  clausesF6003 = YPfalse;
  bodyF6004 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2031F6001,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2031F6001,LITREF(lit_233),x_2032F6000);
    x_2031F6005 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2031F6005,x_2032F6000);
    out_valF6002 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2031F6005);
    x_2031F6006 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2031F6006,x_2032F6000);
    x_2031F6007 = T12;
    clausesF6003 = x_2031F6007;
    x_2031F6008 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2031F6008,x_2032F6000);
    x_2031F6009 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2031F6009,x_2032F6000);
    T11 = CALL1(1,VARREF(Ytail),x_2031F6008);
    x_2031F6010 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2031F6010,x_2032F6000);
    T13 = CALL1(1,VARREF(Ytail),x_2031F6006);
    x_2031F6011 = T13;
    bodyF6004 = x_2031F6011;
    x_2031F6012 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2031F6012,x_2032F6000);
    x_2031F6013 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2031F6013,x_2032F6000);
    T7 = CALL1(1,VARREF(Ytail),x_2031F6012);
    x_2031F6014 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2031F6014,x_2032F6000);
  } else {
    T17 = CALL2(1,x_2032F6000,LITREF(lit_78),x_2031F6001);
  }
  T57 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF6015 = T57;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_234));
  T24 = CALL1(1,VARREF(Ylst),out_varF6015);
  T26 = out_valF6002;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_81));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T21 = CALL2(1,VARREF(YgooSmacrosYcat),T22,LITREF(lit_81));
  T20 = CALL1(1,VARREF(Ylst),T21);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_235));
  T32 = clausesF6003;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_236));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_237));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_238));
  T42 = CALL1(1,VARREF(Ylst),YPtrue);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_81));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_238));
  T46 = CALL1(1,VARREF(Ylst),YPfalse);
  T44 = CALL3(1,VARREF(YgooSmacrosYcat),T45,T46,LITREF(lit_81));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T43,LITREF(lit_81));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_81));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,LITREF(lit_81));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_236));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T54 = CALL1(1,VARREF(Ylst),out_varF6015);
  T55 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T55,LITREF(lit_81));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T48 = CALL4(1,VARREF(YgooSmacrosYcat),T49,T50,T51,LITREF(lit_81));
  T47 = CALL1(1,VARREF(Ylst),T48);
  T56 = bodyF6004;
  T28 = CALL5(1,VARREF(YgooSmacrosYcat),T29,T30,T47,T56,LITREF(lit_81));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T27,LITREF(lit_81));
UNLINK_STACK();
  QRET(T18);
}

LOCCODEDEF(fun_84) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_83,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_2036_85) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_245),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_86) {
  P return_;
  P out_varF6029;
  P x_2035F6028;
  P x_2035F6027;
  P x_2035F6026;
  P x_2035F6025;
  P x_2035F6024;
  P x_2035F6023;
  P x_2035F6022;
  P x_2035F6021;
  P x_2035F6020;
  P bodyF6019;
  P out_valF6018;
  P x_2035F6017;
  P x_2036F6016;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(return_, 0);
  T38 = FUNSHELL(0,fun_x_2036_85,2);
  x_2036F6016 = T38;
  FUNINIT(x_2036F6016, 2,FREEREF(0),return_);
  x_2035F6017 = FREEREF(0);
  out_valF6018 = YPfalse;
  bodyF6019 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2035F6017,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2035F6017,LITREF(lit_245),x_2036F6016);
    x_2035F6020 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2035F6020,x_2036F6016);
    x_2035F6021 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2035F6021,x_2036F6016);
    out_valF6018 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2035F6021);
    x_2035F6022 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2035F6022,x_2036F6016);
    x_2035F6023 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2035F6023,x_2036F6016);
    T10 = CALL1(1,VARREF(Ytail),x_2035F6022);
    x_2035F6024 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2035F6024,x_2036F6016);
    T14 = CALL1(1,VARREF(Ytail),x_2035F6020);
    x_2035F6025 = T14;
    bodyF6019 = x_2035F6025;
    x_2035F6026 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2035F6026,x_2036F6016);
    x_2035F6027 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2035F6027,x_2036F6016);
    T6 = CALL1(1,VARREF(Ytail),x_2035F6026);
    x_2035F6028 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2035F6028,x_2036F6016);
  } else {
    T16 = CALL2(1,x_2036F6016,LITREF(lit_78),x_2035F6017);
  }
  T37 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF6029 = T37;
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_234));
  T23 = CALL1(1,VARREF(Ylst),out_varF6029);
  T25 = out_valF6018;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_81));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,LITREF(lit_81));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T29 = CALL1(1,VARREF(Ylst),out_varF6029);
  T30 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,LITREF(lit_81));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T31 = bodyF6019;
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T35 = CALL1(1,VARREF(Ylst),out_varF6029);
  T36 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T36,LITREF(lit_81));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T17 = CALLN(1,VARREF(YgooSmacrosYcat),6,T18,T19,T26,T31,T32,LITREF(lit_81));
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_87) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_86,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_2040_88) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_250),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_89) {
  P return_;
  P tmpF6047;
  P firstQF6046;
  P bodyF6045;
  P formsF6044;
  P out_varF6043;
  P x_2039F6042;
  P x_2039F6041;
  P x_2039F6040;
  P x_2039F6039;
  P x_2039F6038;
  P x_2039F6037;
  P x_2039F6036;
  P x_2039F6035;
  P x_2039F6034;
  P bodyF6033;
  P out_valF6032;
  P x_2039F6031;
  P x_2040F6030;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(return_, 0);
  T51 = FUNSHELL(0,fun_x_2040_88,2);
  x_2040F6030 = T51;
  FUNINIT(x_2040F6030, 2,FREEREF(0),return_);
  x_2039F6031 = FREEREF(0);
  out_valF6032 = YPfalse;
  bodyF6033 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2039F6031,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2039F6031,LITREF(lit_250),x_2040F6030);
    x_2039F6034 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2039F6034,x_2040F6030);
    x_2039F6035 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2039F6035,x_2040F6030);
    out_valF6032 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2039F6035);
    x_2039F6036 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2039F6036,x_2040F6030);
    x_2039F6037 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2039F6037,x_2040F6030);
    T10 = CALL1(1,VARREF(Ytail),x_2039F6036);
    x_2039F6038 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2039F6038,x_2040F6030);
    T14 = CALL1(1,VARREF(Ytail),x_2039F6034);
    x_2039F6039 = T14;
    bodyF6033 = x_2039F6039;
    x_2039F6040 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2039F6040,x_2040F6030);
    x_2039F6041 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2039F6041,x_2040F6030);
    T6 = CALL1(1,VARREF(Ytail),x_2039F6040);
    x_2039F6042 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2039F6042,x_2040F6030);
  } else {
    T16 = CALL2(1,x_2040F6030,LITREF(lit_78),x_2039F6031);
  }
  T50 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF6043 = T50;
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_234));
  T23 = CALL1(1,VARREF(Ylst),out_varF6043);
  T25 = out_valF6032;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_81));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,LITREF(lit_81));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T29 = CALL1(1,VARREF(Ylst),out_varF6043);
  T30 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,LITREF(lit_81));
  T26 = CALL1(1,VARREF(Ylst),T27);
  formsF6044 = Ynil;
  T44 = bodyF6033;
  bodyF6045 = T44;
  firstQF6046 = YPtrue;
  LOOP_290: {
    P a290_0,a290_1,a290_2;
    T32 = CALL1(1,VARREF(YgooSmacrosYnulQ),bodyF6045);
    if (T32 != YPfalse) {
      T33 = CALL1(1,VARREF(YgooSmacrosYrevX),formsF6044);
      T31 = T33;
    } else {
      T36 = CALL1(1,VARREF(Yhead),bodyF6045);
      tmpF6047 = firstQF6046;
      if (tmpF6047 != YPfalse) {
        T38 = tmpF6047;
      } else {
        T40 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
        T41 = CALL1(1,VARREF(Ylst),out_varF6043);
        T42 = CALL1(1,VARREF(Ylst),YPchr((P)44));
        T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,LITREF(lit_81));
        T38 = T39;
      }
      T37 = CALL2(1,VARREF(YgooSmacrosYpair),T38,formsF6044);
      T35 = CALL2(1,VARREF(YgooSmacrosYpair),T36,T37);
      T43 = CALL1(1,VARREF(Ytail),bodyF6045);
      a290_0 = T35;
      a290_1 = T43;
      a290_2 = YPfalse;
      formsF6044 = a290_0;
      bodyF6045 = a290_1;
      firstQF6046 = a290_2;
      goto LOOP_290;
      T31 = T34;
    }
  }
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T48 = CALL1(1,VARREF(Ylst),out_varF6043);
  T49 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T46 = CALL4(1,VARREF(YgooSmacrosYcat),T47,T48,T49,LITREF(lit_81));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T17 = CALLN(1,VARREF(YgooSmacrosYcat),6,T18,T19,T26,T31,T45,LITREF(lit_81));
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_90) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_89,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_result_91) {
  P e_,d_,out_;
  P x_2041F6049;
  P regF6048;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF6048 = T4;
  if (regF6048 != YPfalse) {
    x_2041F6049 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2041F6049,LITREF(lit_253));
    T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF6048);
    CALL2(1,VARREF(YgooSioSportYputs),x_2041F6049,T2);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2041F6049,LITREF(lit_254));
    if (T3 != YPfalse) {
      T1 = YPtrue;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_gen_depth_92) {
  P d_,out_;
  P iF6051;
  P x_2042F6050;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(d_, 0);
  ARG(out_, 1);
  T7 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_2042F6050 = T6;
  LOOP_291: {
    P a291_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2042F6050);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2042F6050);
      iF6051 = T5;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_257));
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2042F6050);
      a291_0 = T4;
      x_2042F6050 = a291_0;
      goto LOOP_291;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_2047_93) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_262),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_94) {
  P return_;
  P x_2046F6066;
  P x_2046F6065;
  P x_2046F6064;
  P x_2046F6063;
  P x_2046F6062;
  P x_2046F6061;
  P x_2046F6060;
  P x_2046F6059;
  P x_2046F6058;
  P x_2046F6057;
  P bodyF6056;
  P outF6055;
  P dF6054;
  P x_2046F6053;
  P x_2047F6052;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
LINK_STACK();
  ARG(return_, 0);
  T36 = FUNSHELL(0,fun_x_2047_93,2);
  x_2047F6052 = T36;
  FUNINIT(x_2047F6052, 2,FREEREF(0),return_);
  x_2046F6053 = FREEREF(0);
  dF6054 = YPfalse;
  outF6055 = YPfalse;
  bodyF6056 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2046F6053,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2046F6053,LITREF(lit_262),x_2047F6052);
    x_2046F6057 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2046F6057,x_2047F6052);
    x_2046F6058 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2046F6058,x_2047F6052);
    dF6054 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2046F6058);
    x_2046F6059 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2046F6059,x_2047F6052);
    outF6055 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_2046F6059);
    x_2046F6060 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2046F6060,x_2047F6052);
    x_2046F6061 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2046F6061,x_2047F6052);
    T11 = CALL1(1,VARREF(Ytail),x_2046F6060);
    x_2046F6062 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2046F6062,x_2047F6052);
    T17 = CALL1(1,VARREF(Ytail),x_2046F6057);
    x_2046F6063 = T17;
    bodyF6056 = x_2046F6063;
    x_2046F6064 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2046F6064,x_2047F6052);
    x_2046F6065 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2046F6065,x_2047F6052);
    T7 = CALL1(1,VARREF(Ytail),x_2046F6064);
    x_2046F6066 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2046F6066,x_2047F6052);
  } else {
    T19 = CALL2(1,x_2047F6052,LITREF(lit_78),x_2046F6053);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_263));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_255));
  T26 = dF6054;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T28 = outF6055;
  T27 = CALL1(1,VARREF(Ylst),T28);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,LITREF(lit_81));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T29 = bodyF6056;
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_264));
  T34 = outF6055;
  T33 = CALL1(1,VARREF(Ylst),T34);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_265));
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T35,LITREF(lit_81));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T29,T30,LITREF(lit_81));
UNLINK_STACK();
  QRET(T20);
}

LOCCODEDEF(fun_95) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_94,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_2051_96) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_270),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_97) {
  P return_;
  P x_2050F6083;
  P x_2050F6082;
  P x_2050F6081;
  P x_2050F6080;
  P x_2050F6079;
  P x_2050F6078;
  P x_2050F6077;
  P x_2050F6076;
  P x_2050F6075;
  P x_2050F6074;
  P x_2050F6073;
  P bodyF6072;
  P outF6071;
  P dF6070;
  P eF6069;
  P x_2050F6068;
  P x_2051F6067;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(return_, 0);
  T41 = FUNSHELL(0,fun_x_2051_96,2);
  x_2051F6067 = T41;
  FUNINIT(x_2051F6067, 2,FREEREF(0),return_);
  x_2050F6068 = FREEREF(0);
  eF6069 = YPfalse;
  dF6070 = YPfalse;
  outF6071 = YPfalse;
  bodyF6072 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_2050F6068,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T21 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2050F6068,LITREF(lit_270),x_2051F6067);
    x_2050F6073 = T21;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2050F6073,x_2051F6067);
    x_2050F6074 = T19;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2050F6074,x_2051F6067);
    eF6069 = T17;
    T18 = CALL1(1,VARREF(Ytail),x_2050F6074);
    x_2050F6075 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2050F6075,x_2051F6067);
    dF6070 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_2050F6075);
    x_2050F6076 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2050F6076,x_2051F6067);
    outF6071 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2050F6076);
    x_2050F6077 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2050F6077,x_2051F6067);
    x_2050F6078 = T11;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2050F6078,x_2051F6067);
    T12 = CALL1(1,VARREF(Ytail),x_2050F6077);
    x_2050F6079 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2050F6079,x_2051F6067);
    T20 = CALL1(1,VARREF(Ytail),x_2050F6073);
    x_2050F6080 = T20;
    bodyF6072 = x_2050F6080;
    x_2050F6081 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2050F6081,x_2051F6067);
    x_2050F6082 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2050F6082,x_2051F6067);
    T8 = CALL1(1,VARREF(Ytail),x_2050F6081);
    x_2050F6083 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2050F6083,x_2051F6067);
  } else {
    T22 = CALL2(1,x_2051F6067,LITREF(lit_78),x_2050F6068);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_262));
  T28 = dF6070;
  T27 = CALL1(1,VARREF(Ylst),T28);
  T30 = outF6071;
  T29 = CALL1(1,VARREF(Ylst),T30);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T29,LITREF(lit_81));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_251));
  T35 = eF6069;
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = dF6070;
  T36 = CALL1(1,VARREF(Ylst),T37);
  T39 = outF6071;
  T38 = CALL1(1,VARREF(Ylst),T39);
  T32 = CALL5(1,VARREF(YgooSmacrosYcat),T33,T34,T36,T38,LITREF(lit_81));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T40 = bodyF6072;
  T23 = CALL5(1,VARREF(YgooSmacrosYcat),T24,T25,T31,T40,LITREF(lit_81));
UNLINK_STACK();
  QRET(T23);
}

LOCCODEDEF(fun_98) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_97,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_2055_99) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_275),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_100) {
  P return_;
  P x_2054F6100;
  P x_2054F6099;
  P x_2054F6098;
  P x_2054F6097;
  P x_2054F6096;
  P x_2054F6095;
  P x_2054F6094;
  P x_2054F6093;
  P x_2054F6092;
  P x_2054F6091;
  P x_2054F6090;
  P bodyF6089;
  P outF6088;
  P dF6087;
  P eF6086;
  P x_2054F6085;
  P x_2055F6084;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T42 = FUNSHELL(0,fun_x_2055_99,2);
  x_2055F6084 = T42;
  FUNINIT(x_2055F6084, 2,FREEREF(0),return_);
  x_2054F6085 = FREEREF(0);
  eF6086 = YPfalse;
  dF6087 = YPfalse;
  outF6088 = YPfalse;
  bodyF6089 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_2054F6085,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T21 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2054F6085,LITREF(lit_275),x_2055F6084);
    x_2054F6090 = T21;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2054F6090,x_2055F6084);
    x_2054F6091 = T19;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2054F6091,x_2055F6084);
    eF6086 = T17;
    T18 = CALL1(1,VARREF(Ytail),x_2054F6091);
    x_2054F6092 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2054F6092,x_2055F6084);
    dF6087 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_2054F6092);
    x_2054F6093 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2054F6093,x_2055F6084);
    outF6088 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2054F6093);
    x_2054F6094 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2054F6094,x_2055F6084);
    x_2054F6095 = T11;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2054F6095,x_2055F6084);
    T12 = CALL1(1,VARREF(Ytail),x_2054F6094);
    x_2054F6096 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2054F6096,x_2055F6084);
    T20 = CALL1(1,VARREF(Ytail),x_2054F6090);
    x_2054F6097 = T20;
    bodyF6089 = x_2054F6097;
    x_2054F6098 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2054F6098,x_2055F6084);
    x_2054F6099 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2054F6099,x_2055F6084);
    T8 = CALL1(1,VARREF(Ytail),x_2054F6098);
    x_2054F6100 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_2054F6100,x_2055F6084);
  } else {
    T22 = CALL2(1,x_2055F6084,LITREF(lit_78),x_2054F6085);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_276));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_277));
  T29 = eF6086;
  T28 = CALL1(1,VARREF(Ylst),T29);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_81));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_270));
  T36 = eF6086;
  T35 = CALL1(1,VARREF(Ylst),T36);
  T38 = dF6087;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = outF6088;
  T39 = CALL1(1,VARREF(Ylst),T40);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T37,T39,LITREF(lit_81));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T41 = bodyF6089;
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T41,LITREF(lit_81));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T30,LITREF(lit_81));
UNLINK_STACK();
  QRET(T23);
}

LOCCODEDEF(fun_101) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_100,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_forwards_102) {
  P out_,qbT_;
  P x_2058F6103;
  P qbF6102;
  P x_2056F6101;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(out_, 0);
  ARG(qbT_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_280));
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  x_2056F6101 = T8;
  LOOP_292: {
    P a292_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2056F6101);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_2056F6101);
      qbF6102 = T7;
      x_2058F6103 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2058F6103,LITREF(lit_281));
      T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),qbF6102);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2058F6103,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2058F6103,LITREF(lit_282));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2056F6101);
      a292_0 = T6;
      x_2056F6101 = a292_0;
      goto LOOP_292;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotations_103) {
  P out_,qbT_;
  P x_2061F6106;
  P qbF6105;
  P x_2059F6104;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(qbT_, 1);
  T10 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
  x_2059F6104 = T9;
  LOOP_293: {
    P a293_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2059F6104);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2059F6104);
      qbF6105 = T8;
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      x_2061F6106 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2061F6106,LITREF(lit_285));
      T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),qbF6105);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2061F6106,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2061F6106,LITREF(lit_286));
      T5 = CALL1(1,VARREF(YevalSmoduleYbinding_info),qbF6105);
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T5);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2059F6104);
      a293_0 = T7;
      x_2059F6104 = a293_0;
      goto LOOP_293;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOlit) {
  P n_;
  P T0;
LINK_STACK();
  ARG(n_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYTlitsT),n_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_105) {
  P nF6107;
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YgooStypesYlen),VARREF(YevalSg2cYTlitsT));
  nF6107 = T0;
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTlitsT),FREEREF(0));
UNLINK_STACK();
  QRET(nF6107);
}

LOCCODEDEF(fun_ref_lit_106) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = FUNFAB(fun_105,1,x_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYeltX),VARREF(YevalSg2cYTlits_atT),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_107) {
  P out_,x_;
  P x_2062F6108;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2062F6108 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_293));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2062F6108,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2062F6108,LITREF(lit_294));
  T2 = CALL1(1,VARREF(YevalSg2cYref_lit),x_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  CALL2(1,VARREF(YgooSioSportYputs),x_2062F6108,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2062F6108,LITREF(lit_295));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_false_name_108) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_297));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_109) {
  P out_,qb_;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  if (qb_ != YPfalse) {
    T2 = LITREF(lit_299);
  } else {
    T2 = LITREF(lit_300);
  }
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_110) {
  P out_,qb_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_302));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_111) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_112) {
  P out_,qb_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  T1 = FUNFAB(fun_111,1,out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,out_,qb_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_quotation_113) {
  P out_,x_;
  P x_2063F6109;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2063F6109 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_306));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2063F6109,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2063F6109,LITREF(lit_307));
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_2063F6109,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2063F6109,LITREF(lit_308));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_quotation_114) {
  P out_,x_;
  P x_2064F6110;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2064F6110 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_310));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2064F6110,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2064F6110,LITREF(lit_311));
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  CALL2(1,VARREF(YgooSioSportYputs),x_2064F6110,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2064F6110,LITREF(lit_312));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_115) {
  P done_;
  P x_2066F6113;
  P x_2065F6112;
  P iF6111;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(done_, 0);
  T16 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T15 = CALL2(1,VARREF(YgooSmathY_),T16,YPint((P)1));
  iF6111 = T15;
  LOOP_294: {
    P a294_0;
    T2 = CALL1(1,VARREF(YgooSmathYneg),YPint((P)1));
    T1 = CALL2(1,VARREF(YgooSmagYG),iF6111,T2);
    if (T1 != YPfalse) {
      T14 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),iF6111);
      x_2065F6112 = T14;
      x_2066F6113 = VARREF(YgooSmacrosYEE);
      T4 = CALL2(1,x_2066F6113,x_2065F6112,YPchr((P)115));
      if (T4 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF6111);
        T5 = CALL1(0,done_,YPfalse);
        T3 = T5;
      } else {
        T7 = CALL2(1,x_2066F6113,x_2065F6112,YPchr((P)100));
        if (T7 != YPfalse) {
          CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF6111);
          T8 = CALL1(0,done_,YPfalse);
          T6 = T8;
        } else {
          T10 = CALL2(1,x_2066F6113,x_2065F6112,YPchr((P)120));
          if (T10 != YPfalse) {
            CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF6111);
            T11 = CALL1(0,done_,YPfalse);
            T9 = T11;
          } else {
            T13 = CALL2(1,VARREF(YgooSmathY_),iF6111,YPint((P)1));
            a294_0 = T13;
            iF6111 = a294_0;
            goto LOOP_294;
            T9 = T12;
          }
          T6 = T9;
        }
        T3 = T6;
      }
      T0 = T3;
    } else {
      T0 = FREEREF(0);
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_float_to_c_string_116) {
  P o_;
  P sF6114;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF6114 = T2;
  T1 = FUNFAB(fun_115,1,sF6114);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_generate_quotation_117) {
  P out_,x_;
  P x_2067F6115;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2067F6115 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_317));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2067F6115,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2067F6115,LITREF(lit_318));
  T1 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2067F6115,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2067F6115,LITREF(lit_319));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_quotation_118) {
  P out_,x_;
  P x_2068F6116;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2068F6116 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_321));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2068F6116,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2068F6116,LITREF(lit_322));
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2068F6116,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2068F6116,LITREF(lit_323));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_quotation_119) {
  P out_,x_;
  P eF6119;
  P x_2070F6118;
  P x_2069F6117;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2069F6117 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2069F6117,LITREF(lit_325));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_326));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2069F6117,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2069F6117,LITREF(lit_327));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2069F6117,T2);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  x_2070F6118 = T9;
  LOOP_295: {
    P a295_0;
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2070F6118);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2070F6118);
      eF6119 = T8;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_328));
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,eF6119);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2070F6118);
      a295_0 = T7;
      x_2070F6118 = a295_0;
      goto LOOP_295;
      T3 = T6;
    } else {
      T3 = YPfalse;
    }
  }
  T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_329));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_generate_quotation_120) {
  P out_,x_;
  P eF6122;
  P x_2073F6121;
  P x_2072F6120;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2072F6120 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2072F6120,LITREF(lit_331));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_332));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2072F6120,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2072F6120,LITREF(lit_333));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2072F6120,T2);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  x_2073F6121 = T9;
  LOOP_296: {
    P a296_0;
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2073F6121);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2073F6121);
      eF6122 = T8;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_334));
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,eF6122);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2073F6121);
      a296_0 = T7;
      x_2073F6121 = a296_0;
      goto LOOP_296;
      T3 = T6;
    } else {
      T3 = YPfalse;
    }
  }
  T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_335));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_generate_quotation_121) {
  P out_,x_;
  P x_2075F6123;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2075F6123 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_337));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2075F6123,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2075F6123,LITREF(lit_338));
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2075F6123,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2075F6123,LITREF(lit_339));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSg2cYbinding_Gc) {
  P binding_,out_;
  P T0,T1;
LINK_STACK();
  ARG(binding_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_Gc_123) {
  P v_,out_;
  P T0;
LINK_STACK();
  ARG(v_, 0);
  ARG(out_, 1);
  T0 = CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reference_Gc_124) {
  P v_,out_;
  P x_2078F6126;
  P x_2077F6125;
  P x_2076F6124;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(v_, 0);
  ARG(out_, 1);
  T6 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),v_);
  x_2076F6124 = T6;
  x_2077F6125 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_2077F6125,x_2076F6124,LITREF(lit_224));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_346);
  } else {
    T3 = CALL2(1,x_2077F6125,x_2076F6124,LITREF(lit_149));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_347);
    } else {
      T5 = CALL2(1,x_2077F6125,x_2076F6124,LITREF(lit_150));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_348);
      } else {
        T4 = LITREF(lit_349);
      }
      T2 = T4;
    }
    T0 = T2;
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T0);
  x_2078F6126 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2078F6126,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_2078F6126,YPchr((P)41));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_to_c_125) {
  P e_,f_,d_,out_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotations),out_,T0);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),e_);
  CALL4(1,VARREF(YevalSg2cYgenerate_functions),T1,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,out_);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T5 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T5,out_);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
    T3 = T6;
  } else {
    T3 = YPfalse;
  }
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_to_c_126) {
  P e_,f_,d_,out_;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_gen_ref_127) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYreference_Gc),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_ref_128) {
  P e_,out_;
  P x_2080F6128;
  P x_2079F6127;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_357));
  x_2079F6127 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2079F6127,YPchr((P)40));
  x_2080F6128 = out_;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2080F6128,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYput),x_2079F6127,YPchr((P)41));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_gen_ref_129) {
  P e_,out_;
  P x_2081F6130;
  P regF6129;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF6129 = T4;
  if (regF6129 != YPfalse) {
    x_2081F6130 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2081F6130,LITREF(lit_359));
    T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF6129);
    T1 = CALL2(1,VARREF(YgooSioSportYputs),x_2081F6130,T2);
    T0 = T1;
  } else {
    T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_360));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_ref_130) {
  P e_,out_;
  P x_2082F6131;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  x_2082F6131 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2082F6131,LITREF(lit_362));
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2082F6131,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_ref_131) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_ref_132) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYlast),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_ref_133) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_ref_134) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_ref_135) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYloop_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_136) {
  P e_,f_,d_,out_;
  P x_2084F6133;
  P x_2083F6132;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T8 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T7 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),T8);
  x_2083F6132 = T7;
  x_2084F6133 = VARREF(YgooSmacrosYEE);
  T2 = CALL2(1,x_2084F6133,x_2083F6132,LITREF(lit_149));
  if (T2 != YPfalse) {
    T1 = LITREF(lit_369);
  } else {
    T4 = CALL2(1,x_2084F6133,x_2083F6132,LITREF(lit_150));
    if (T4 != YPfalse) {
      T6 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLdynamic_definitionG));
      if (T6 != YPfalse) {
        T5 = LITREF(lit_370);
      } else {
        T5 = LITREF(lit_371);
      }
      T3 = T5;
    } else {
      T3 = LITREF(lit_372);
    }
    T1 = T3;
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  T9 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T9,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_373));
  T10 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_374));
  T11 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_to_c_137) {
  P e_,f_,d_,out_;
  P x_2085F6134;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T2 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T4 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T3 = CALL2(1,VARREF(YisaQ),T4,VARREF(YevalSastYLruntime_referenceG));
    if (T3 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_376));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_377));
    x_2085F6134 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2085F6134,YPchr((P)40));
    T7 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T6 = CALL1(1,VARREF(YevalSastYreference_binding),T7);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T6,out_);
    CALL2(1,VARREF(YgooSioSportYput),x_2085F6134,YPchr((P)44));
    T8 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T8,out_);
    T9 = CALL2(1,VARREF(YgooSioSportYput),x_2085F6134,YPchr((P)41));
    T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
    T1 = T10;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_to_c_138) {
  P e_,f_,d_,out_;
  P x_2086F6136;
  P refF6135;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T7 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  refF6135 = T7;
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T3 = CALL1(1,VARREF(YevalSastYreference_binding),refF6135);
    T2 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),T3);
    if (T2 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_379));
      x_2086F6136 = out_;
      CALL2(1,VARREF(YgooSioSportYput),x_2086F6136,YPchr((P)40));
      CALL2(1,VARREF(YevalSg2cYgen_ref),refF6135,out_);
      T4 = CALL2(1,VARREF(YgooSioSportYput),x_2086F6136,YPchr((P)41));
    } else {
      T5 = CALL2(1,VARREF(YevalSg2cYgen_ref),refF6135,out_);
    }
    T6 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_139) {
  P e_,f_,d_,out_;
  P x_2087F6138;
  P refF6137;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T8 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  refF6137 = T8;
  T0 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),refF6137);
  T1 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_381));
    x_2087F6138 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2087F6138,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
    CALL2(1,VARREF(YgooSioSportYput),x_2087F6138,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),refF6137,out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_2087F6138,YPchr((P)41));
  } else {
    CALL2(1,VARREF(YevalSg2cYgen_ref),refF6137,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_382));
    T6 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
    T5 = CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  }
  T7 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_to_c_140) {
  P e_,f_,d_,out_;
  P x_2088F6140;
  P bindingF6139;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T6 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  T5 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),T6);
  T4 = CALL1(1,VARREF(YevalSastYreference_binding),T5);
  bindingF6139 = T4;
  T1 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),bindingF6139);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF6139,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_384));
    x_2088F6140 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2088F6140,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF6139,out_);
    T2 = CALL2(1,VARREF(YgooSioSportYput),x_2088F6140,YPchr((P)41));
    T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bbQ_141) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_bbQ_142) {
  P x_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL1(1,VARREF(YevalSastYapplication_binding),x_);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_name),T3);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_388));
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
    T4 = CALL1(1,VARREF(YgooSmacrosY1st),T5);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_bbQ_143) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_body),x_);
  T0 = CALL1(1,VARREF(YevalSg2cYbbQ),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_144) {
  P e_,f_,d_,out_;
  P x_2089F6144;
  P tstF6143;
  P tmpF6142;
  P bb_tstF6141;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T22 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  T21 = CALL1(1,VARREF(YevalSg2cYbbQ),T22);
  bb_tstF6141 = T21;
  tmpF6142 = bb_tstF6141;
  if (tmpF6142 != YPfalse) {
    T19 = tmpF6142;
  } else {
    T20 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
    T19 = T20;
  }
  tstF6143 = T19;
  T0 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_391));
  CALL2(1,VARREF(YevalSg2cYgen_ref),tstF6143,out_);
  if (bb_tstF6141 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_392));
  } else {
    x_2089F6144 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2089F6144,LITREF(lit_393));
    T2 = CALL0(1,VARREF(YevalSg2cYfalse_name));
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2089F6144,T2);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2089F6144,LITREF(lit_394));
  }
  T4 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
  T5 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T4,f_,T5,out_);
  T6 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T7,out_);
    T8 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,T8,out_);
    T9 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T9,out_);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_395));
  T11 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
  T12 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T11,f_,T12,out_);
  T13 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T13 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T14,out_);
    T15 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,T15,out_);
    T16 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T16,out_);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  T18 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_396));
UNLINK_STACK();
  QRET(T18);
}

LOCCODEDEF(fun_145) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_146) {
  P e_,f_,d_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = FUNFAB(fun_145,3,f_,d_,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,e_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_147) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_148) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_to_c_149) {
  P e_,f_,d_,out_;
  P x_2097F6158;
  P x_2096F6157;
  P bF6156;
  P iF6155;
  P firstQF6154;
  P tmpF6153;
  P tmpF6152;
  P x_2092F6151;
  P x_2093F6150;
  P x_2094F6149;
  P x_2091F6148;
  P bindingsF6147;
  P x_2090F6146;
  P nF6145;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T38 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTloop_arg_counterT),YPint((P)1));
  T37 = DYNSET(YevalSg2cYTloop_arg_counterT,T38);
  T36 = CALL2(1,VARREF(YevalSastYloop_continue_setter),T37,e_);
  nF6145 = T36;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_2090F6146 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2090F6146,LITREF(lit_400));
  T0 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF6145);
  CALL2(1,VARREF(YgooSioSportYputs),x_2090F6146,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_2090F6146,LITREF(lit_401));
  T35 = CALL1(1,VARREF(YevalSastYloop_bindings),e_);
  bindingsF6147 = T35;
  T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF6147);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T4,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_402));
    x_2091F6148 = out_;
    T26 = fun_147;
    T27 = fun_148;
    T25 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T26,T27);
    T24 = CALL1(1,VARREF(YgooScolsScolYenum),T25);
    x_2094F6149 = T24;
    T29 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
    T28 = CALL1(1,VARREF(YgooScolsScolYenum),T29);
    x_2093F6150 = T28;
    T30 = CALL1(1,VARREF(YgooScolsScolYenum),bindingsF6147);
    x_2092F6151 = T30;
    LOOP_297: {
      P a297_0,a297_1,a297_2;
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2094F6149);
      tmpF6152 = T11;
      if (tmpF6152 != YPfalse) {
        T7 = tmpF6152;
      } else {
        T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2093F6150);
        tmpF6153 = T10;
        if (tmpF6153 != YPfalse) {
          T8 = tmpF6153;
        } else {
          T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2092F6151);
          T8 = T9;
        }
        T7 = T8;
      }
      T6 = CALL1(1,VARREF(Ynot),T7);
      if (T6 != YPfalse) {
        T23 = CALL1(1,VARREF(YgooScolsScolYnow),x_2094F6149);
        firstQF6154 = T23;
        T22 = CALL1(1,VARREF(YgooScolsScolYnow),x_2093F6150);
        iF6155 = T22;
        T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_2092F6151);
        bF6156 = T21;
        T12 = CALL1(1,VARREF(Ynot),firstQF6154);
        if (T12 != YPfalse) {
          T13 = CALL2(1,VARREF(YgooSioSportYput),x_2091F6148,YPchr((P)44));
        } else {
        }
        x_2096F6157 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_2096F6157,LITREF(lit_405));
        T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF6145);
        CALL2(1,VARREF(YgooSioSportYputs),x_2096F6157,T14);
        CALL2(1,VARREF(YgooSioSportYputs),x_2096F6157,LITREF(lit_406));
        T16 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF6155);
        T15 = CALL2(1,VARREF(YgooSioSportYputs),x_2096F6157,T16);
        T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2094F6149);
        T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2093F6150);
        T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2092F6151);
        a297_0 = T18;
        a297_1 = T19;
        a297_2 = T20;
        x_2094F6149 = a297_0;
        x_2093F6150 = a297_1;
        x_2092F6151 = a297_2;
        goto LOOP_297;
        T5 = T17;
      } else {
        T5 = YPfalse;
      }
    }
    T31 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
  } else {
  }
  T32 = CALL1(1,VARREF(YevalSastYloop_body),e_);
  T33 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T32,f_,T33,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_2097F6158 = out_;
  T34 = CALL2(1,VARREF(YgooSioSportYputs),x_2097F6158,LITREF(lit_407));
UNLINK_STACK();
  QRET(T34);
}

LOCCODEDEF(fun_to_c_150) {
  P e_,f_,d_,out_;
  P x_2108F6175;
  P x_2107F6174;
  P bindingF6173;
  P iF6172;
  P tmpF6171;
  P x_2104F6170;
  P x_2105F6169;
  P x_2103F6168;
  P argF6167;
  P iF6166;
  P tmpF6165;
  P x_2100F6164;
  P x_2101F6163;
  P argF6162;
  P x_2098F6161;
  P nF6160;
  P loopF6159;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T46 = CALL1(1,VARREF(YevalSastYapplication_loop),e_);
  loopF6159 = T46;
  T45 = CALL1(1,VARREF(YevalSastYloop_continue),loopF6159);
  nF6160 = T45;
  T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_2098F6161 = T6;
  LOOP_298: {
    P a298_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2098F6161);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2098F6161);
      argF6162 = T5;
      CALL4(1,VARREF(YevalSg2cYto_c),argF6162,f_,d_,out_);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2098F6161);
      a298_0 = T4;
      x_2098F6161 = a298_0;
      goto LOOP_298;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
  T22 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_2101F6163 = T21;
  T24 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_2100F6164 = T23;
  LOOP_299: {
    P a299_0,a299_1;
    T12 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2101F6163);
    tmpF6165 = T12;
    if (tmpF6165 != YPfalse) {
      T10 = tmpF6165;
    } else {
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2100F6164);
      T10 = T11;
    }
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_2101F6163);
      iF6166 = T20;
      T19 = CALL1(1,VARREF(YgooScolsScolYnow),x_2100F6164);
      argF6167 = T19;
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      x_2103F6168 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2103F6168,LITREF(lit_409));
      T13 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF6160);
      CALL2(1,VARREF(YgooSioSportYputs),x_2103F6168,T13);
      CALL2(1,VARREF(YgooSioSportYputs),x_2103F6168,LITREF(lit_410));
      T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF6166);
      CALL2(1,VARREF(YgooSioSportYputs),x_2103F6168,T14);
      T15 = CALL2(1,VARREF(YgooSioSportYputs),x_2103F6168,LITREF(lit_411));
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF6167,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2101F6163);
      T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2100F6164);
      a299_0 = T17;
      a299_1 = T18;
      x_2101F6163 = a299_0;
      x_2100F6164 = a299_1;
      goto LOOP_299;
      T8 = T16;
    } else {
      T8 = YPfalse;
    }
  }
  T39 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T38 = CALL1(1,VARREF(YgooScolsScolYenum),T39);
  x_2105F6169 = T38;
  T41 = CALL1(1,VARREF(YevalSastYloop_bindings),loopF6159);
  T40 = CALL1(1,VARREF(YgooScolsScolYenum),T41);
  x_2104F6170 = T40;
  LOOP_300: {
    P a300_0,a300_1;
    T29 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2105F6169);
    tmpF6171 = T29;
    if (tmpF6171 != YPfalse) {
      T27 = tmpF6171;
    } else {
      T28 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2104F6170);
      T27 = T28;
    }
    T26 = CALL1(1,VARREF(Ynot),T27);
    if (T26 != YPfalse) {
      T37 = CALL1(1,VARREF(YgooScolsScolYnow),x_2105F6169);
      iF6172 = T37;
      T36 = CALL1(1,VARREF(YgooScolsScolYnow),x_2104F6170);
      bindingF6173 = T36;
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF6173,out_);
      x_2107F6174 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2107F6174,LITREF(lit_412));
      T30 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF6160);
      CALL2(1,VARREF(YgooSioSportYputs),x_2107F6174,T30);
      CALL2(1,VARREF(YgooSioSportYputs),x_2107F6174,LITREF(lit_413));
      T32 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF6172);
      T31 = CALL2(1,VARREF(YgooSioSportYputs),x_2107F6174,T32);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T34 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2105F6169);
      T35 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2104F6170);
      a300_0 = T34;
      a300_1 = T35;
      x_2105F6169 = a300_0;
      x_2104F6170 = a300_1;
      goto LOOP_300;
      T25 = T33;
    } else {
      T25 = YPfalse;
    }
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_2108F6175 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2108F6175,LITREF(lit_414));
  T43 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF6160);
  T42 = CALL2(1,VARREF(YgooSioSportYputs),x_2108F6175,T43);
  T44 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T44);
}

LOCCODEDEF(fun_to_c_151) {
  P e_,f_,d_,out_;
  P argF6185;
  P x_2114F6184;
  P x_2113F6183;
  P x_2112F6182;
  P tmpF6181;
  P x_2111F6180;
  P argF6179;
  P x_2109F6178;
  P nF6177;
  P functionF6176;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T33 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  functionF6176 = T33;
  T32 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T31 = CALL1(1,VARREF(YgooStypesYlen),T32);
  nF6177 = T31;
  T0 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T8 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  x_2109F6178 = T7;
  LOOP_301: {
    P a301_0;
    T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2109F6178);
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_2109F6178);
      argF6179 = T6;
      CALL4(1,VARREF(YevalSg2cYto_c),argF6179,f_,d_,out_);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2109F6178);
      a301_0 = T5;
      x_2109F6178 = a301_0;
      goto LOOP_301;
      T1 = T4;
    } else {
      T1 = YPfalse;
    }
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  x_2111F6180 = out_;
  T12 = CALL1(1,VARREF(Ynot),f_);
  tmpF6181 = T12;
  if (tmpF6181 != YPfalse) {
    T10 = tmpF6181;
  } else {
    T11 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    T10 = T11;
  }
  if (T10 != YPfalse) {
    T9 = LITREF(lit_416);
  } else {
    T9 = LITREF(lit_153);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2111F6180,T9);
  CALL2(1,VARREF(YgooSioSportYputs),x_2111F6180,LITREF(lit_417));
  T15 = CALL2(1,VARREF(YgooSmagYG),nF6177,VARREF(YevalSg2cYDnumber_call_templates));
  if (T15 != YPfalse) {
    T14 = LITREF(lit_418);
  } else {
    T14 = nF6177;
  }
  T13 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2111F6180,T14);
  x_2112F6182 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2112F6182,YPchr((P)40));
  T17 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
  if (T17 != YPfalse) {
    T16 = LITREF(lit_419);
  } else {
    T16 = LITREF(lit_420);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T16);
  T18 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T18,out_);
  T19 = CALL2(1,VARREF(YgooSmagYG),nF6177,VARREF(YevalSg2cYDnumber_call_templates));
  if (T19 != YPfalse) {
    x_2113F6183 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2113F6183,LITREF(lit_421));
    T20 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2113F6183,nF6177);
  } else {
  }
  T28 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
  x_2114F6184 = T27;
  LOOP_302: {
    P a302_0;
    T23 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2114F6184);
    T22 = CALL1(1,VARREF(Ynot),T23);
    if (T22 != YPfalse) {
      T26 = CALL1(1,VARREF(YgooScolsScolYnow),x_2114F6184);
      argF6185 = T26;
      CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF6185,out_);
      T25 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2114F6184);
      a302_0 = T25;
      x_2114F6184 = a302_0;
      goto LOOP_302;
      T21 = T24;
    } else {
      T21 = YPfalse;
    }
  }
  T29 = CALL2(1,VARREF(YgooSioSportYput),x_2112F6182,YPchr((P)41));
  T30 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T30);
}

LOCCODEDEF(fun_to_c_152) {
  P e_,f_,d_,out_;
  P next_metsF6187;
  P x_2116F6186;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYapplication_next_methods),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_423));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  x_2116F6186 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2116F6186,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYapplication_next_methods),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  T3 = CALL2(1,VARREF(YgooSioSportYput),x_2116F6186,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
  T8 = (P)YPfun_reg();
  T9 = (P)YPnext_methods();
  T7 = CALLN(1,VARREF(YgooSmacrosYOchecked_next_methods),6,T8,T9,e_,f_,d_,out_);
  next_metsF6187 = T7;
  T5 = CALL1(1,VARREF(Yhead),next_metsF6187);
  T6 = CALL1(1,VARREF(Ytail),next_metsF6187);
  T4 = CALLN(1,VARREF(YgooSmacrosYnapp),7,T5,T6,e_,f_,d_,out_,Ynil);
UNLINK_STACK();
  QRET(T4);
}

LOCCODEDEF(fun_153) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_154) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_to_c_155) {
  P e_,f_,d_,out_;
  P xF6193;
  P firstQF6192;
  P tmpF6191;
  P x_2118F6190;
  P x_2119F6189;
  P x_2117F6188;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  x_2117F6188 = out_;
  T14 = fun_153;
  T15 = fun_154;
  T13 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T14,T15);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  x_2119F6189 = T12;
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  x_2118F6190 = T16;
  LOOP_303: {
    P a303_0,a303_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2119F6189);
    tmpF6191 = T4;
    if (tmpF6191 != YPfalse) {
      T2 = tmpF6191;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2118F6190);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_2119F6189);
      firstQF6192 = T11;
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_2118F6190);
      xF6193 = T10;
      T5 = CALL1(1,VARREF(Ynot),firstQF6192);
      if (T5 != YPfalse) {
        T6 = CALL2(1,VARREF(YgooSioSportYput),x_2117F6188,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_ref),xF6193,out_);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2119F6189);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2118F6190);
      a303_0 = T8;
      a303_1 = T9;
      x_2119F6189 = a303_0;
      x_2118F6190 = a303_1;
      goto LOOP_303;
      T0 = T7;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_156) {
  P e_,f_,d_,out_;
  P x_2125F6204;
  P tmpF6203;
  P bindingF6202;
  P typeF6201;
  P initF6200;
  P tmpF6199;
  P tmpF6198;
  P x_2121F6197;
  P x_2122F6196;
  P x_2123F6195;
  P low_letQF6194;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T27 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLlow_letG));
  low_letQF6194 = T27;
  T20 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  x_2123F6195 = T19;
  T22 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_2122F6196 = T21;
  T24 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_2121F6197 = T23;
  LOOP_304: {
    P a304_0,a304_1,a304_2;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2123F6195);
    tmpF6198 = T6;
    if (tmpF6198 != YPfalse) {
      T2 = tmpF6198;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2122F6196);
      tmpF6199 = T5;
      if (tmpF6199 != YPfalse) {
        T3 = tmpF6199;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2121F6197);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_2123F6195);
      initF6200 = T18;
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_2122F6196);
      typeF6201 = T17;
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_2121F6197);
      bindingF6202 = T16;
      CALL4(1,VARREF(YevalSg2cYto_c),initF6200,f_,d_,out_);
      T9 = CALL1(1,VARREF(YevalSoptimizeYunconstrained_typeQ),typeF6201);
      tmpF6203 = T9;
      if (tmpF6203 != YPfalse) {
        T8 = tmpF6203;
      } else {
        T8 = low_letQF6194;
      }
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        CALL4(1,VARREF(YevalSg2cYto_c),typeF6201,f_,d_,out_);
        CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
        CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_428));
        x_2125F6204 = out_;
        CALL2(1,VARREF(YgooSioSportYput),x_2125F6204,YPchr((P)40));
        CALL2(1,VARREF(YevalSg2cYgen_ref),initF6200,out_);
        CALL2(1,VARREF(YgooSioSportYput),x_2125F6204,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),typeF6201,out_);
        T10 = CALL2(1,VARREF(YgooSioSportYput),x_2125F6204,YPchr((P)41));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF6202,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_429));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF6200,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2123F6195);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2122F6196);
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2121F6197);
      a304_0 = T13;
      a304_1 = T14;
      a304_2 = T15;
      x_2123F6195 = a304_0;
      x_2122F6196 = a304_1;
      x_2121F6197 = a304_2;
      goto LOOP_304;
      T0 = T12;
    } else {
      T0 = YPfalse;
    }
  }
  T26 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T25 = CALL4(1,VARREF(YevalSg2cYto_c),T26,f_,d_,out_);
UNLINK_STACK();
  QRET(T25);
}

LOCCODEDEF(fun_to_c_157) {
  P e_,f_,d_,out_;
  P bindingF6209;
  P initF6208;
  P tmpF6207;
  P x_2126F6206;
  P x_2127F6205;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T11 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  x_2127F6205 = T10;
  T13 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  x_2126F6206 = T12;
  LOOP_305: {
    P a305_0,a305_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2127F6205);
    tmpF6207 = T4;
    if (tmpF6207 != YPfalse) {
      T2 = tmpF6207;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2126F6206);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_2127F6205);
      initF6208 = T9;
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2126F6206);
      bindingF6209 = T8;
      CALL5(1,VARREF(YevalSg2cYfunshell_to_c),bindingF6209,initF6208,YPfalse,d_,out_);
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF6209,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_431));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF6208,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2127F6205);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2126F6206);
      a305_0 = T6;
      a305_1 = T7;
      x_2127F6205 = a305_0;
      x_2126F6206 = a305_1;
      goto LOOP_305;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
  T14 = CALL4(1,VARREF(YgooSfunctionalYrcurry),VARREF(YevalSg2cYfuninit_to_c),f_,d_,out_);
  T15 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T16 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T14,T15,T16);
  T18 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T17 = CALL4(1,VARREF(YevalSg2cYto_c),T18,f_,d_,out_);
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_to_c_158) {
  P e_,f_,d_,out_;
  P x_2129F6210;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_433));
  x_2129F6210 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2129F6210,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_2129F6210,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_to_c_159) {
  P e_,f_,d_,out_;
  P x_2130F6211;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T1,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_435));
  x_2130F6211 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2130F6211,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2130F6211,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_2130F6211,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_to_c_160) {
  P e_,f_,d_,out_;
  P x_2131F6212;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T1,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,out_);
  T3 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T3,f_,d_,out_);
  T4 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T4,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_437));
  x_2131F6212 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2131F6212,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_438));
  CALL2(1,VARREF(YgooSioSportYput),x_2131F6212,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_439));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_2131F6212,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_440));
  CALL2(1,VARREF(YgooSioSportYput),x_2131F6212,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2131F6212,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2131F6212,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2131F6212,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T9,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2131F6212,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_2131F6212,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T12);
}

LOCCODEDEF(fun_161) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_162) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_to_c_163) {
  P e_,f_,d_,out_;
  P argF6223;
  P firstQF6222;
  P tmpF6221;
  P x_2137F6220;
  P x_2138F6219;
  P x_2136F6218;
  P x_2135F6217;
  P x_2134F6216;
  P argF6215;
  P x_2132F6214;
  P bindingF6213;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T31 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bindingF6213 = T31;
  T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_2132F6214 = T6;
  LOOP_306: {
    P a306_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2132F6214);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2132F6214);
      argF6215 = T5;
      CALL4(1,VARREF(YevalSg2cYto_c),argF6215,f_,d_,out_);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2132F6214);
      a306_0 = T4;
      x_2132F6214 = a306_0;
      goto LOOP_306;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  x_2134F6216 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2134F6216,LITREF(lit_442));
  T10 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  T9 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T10);
  T8 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2134F6216,T9);
  x_2135F6217 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2135F6217,YPchr((P)40));
  x_2136F6218 = out_;
  T25 = fun_161;
  T26 = fun_162;
  T24 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T25,T26);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_2138F6219 = T23;
  T28 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
  x_2137F6220 = T27;
  LOOP_307: {
    P a307_0,a307_1;
    T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2138F6219);
    tmpF6221 = T15;
    if (tmpF6221 != YPfalse) {
      T13 = tmpF6221;
    } else {
      T14 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2137F6220);
      T13 = T14;
    }
    T12 = CALL1(1,VARREF(Ynot),T13);
    if (T12 != YPfalse) {
      T22 = CALL1(1,VARREF(YgooScolsScolYnow),x_2138F6219);
      firstQF6222 = T22;
      T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_2137F6220);
      argF6223 = T21;
      T16 = CALL1(1,VARREF(Ynot),firstQF6222);
      if (T16 != YPfalse) {
        T17 = CALL2(1,VARREF(YgooSioSportYput),x_2136F6218,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF6223,out_);
      T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2138F6219);
      T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2137F6220);
      a307_0 = T19;
      a307_1 = T20;
      x_2138F6219 = a307_0;
      x_2137F6220 = a307_1;
      goto LOOP_307;
      T11 = T18;
    } else {
      T11 = YPfalse;
    }
  }
  T29 = CALL2(1,VARREF(YgooSioSportYput),x_2135F6217,YPchr((P)41));
  T30 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T30);
}

LOCCODEDEF(fun_164) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_165) {
  P e_,f_,d_,out_;
  P xF6229;
  P x_2142F6228;
  P x_2141F6227;
  P x_2140F6226;
  P fF6225;
  P nF6224;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T22 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T21 = CALL1(1,VARREF(YgooStypesYlen),T22);
  nF6224 = T21;
  T20 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T20);
  fF6225 = T19;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),nF6224,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T3 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF6225);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T2 = T4;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T5 = FUNFAB(fun_164,3,fF6225,d_,out_);
    T6 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T5,T6);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_447));
    x_2140F6226 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2140F6226,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF6225);
    x_2141F6227 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2141F6227,LITREF(lit_448));
    T8 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF6224);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_2141F6227,T8);
    T16 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
    x_2142F6228 = T15;
    LOOP_308: {
      P a308_0;
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2142F6228);
      T10 = CALL1(1,VARREF(Ynot),T11);
      if (T10 != YPfalse) {
        T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_2142F6228);
        xF6229 = T14;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),xF6229,out_);
        T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2142F6228);
        a308_0 = T13;
        x_2142F6228 = a308_0;
        goto LOOP_308;
        T9 = T12;
      } else {
        T9 = YPfalse;
      }
    }
    T17 = CALL2(1,VARREF(YgooSioSportYput),x_2140F6226,YPchr((P)41));
    T18 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
    T0 = T18;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_funshell_to_c_166) {
  P b_,e_,f_,d_,out_;
  P x_2146F6234;
  P x_2145F6233;
  P x_2144F6232;
  P fF6231;
  P nF6230;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(out_, 4);
  T13 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
  nF6230 = T12;
  T11 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T11);
  fF6231 = T10;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),nF6230,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF6231);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_451));
    x_2144F6232 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2144F6232,YPchr((P)40));
    x_2145F6233 = out_;
    T5 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T5 != YPfalse) {
      T4 = YPint((P)1);
    } else {
      T4 = YPint((P)0);
    }
    T3 = CALL1(1,VARREF(YgooSmathYnum_to_str),T4);
    T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2145F6233,T3);
    CALL2(1,VARREF(YgooSioSportYput),x_2144F6232,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF6231);
    CALL2(1,VARREF(YgooSioSportYput),x_2144F6232,YPchr((P)44));
    x_2146F6234 = out_;
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF6230);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_2146F6234,T7);
    T8 = CALL2(1,VARREF(YgooSioSportYput),x_2144F6232,YPchr((P)41));
  }
  T9 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_167) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_funinit_to_c_168) {
  P b_,e_,f_,d_,out_;
  P xF6239;
  P x_2149F6238;
  P x_2148F6237;
  P x_2147F6236;
  P nF6235;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(out_, 4);
  T17 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T16 = CALL1(1,VARREF(YgooStypesYlen),T17);
  nF6235 = T16;
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),nF6235,YPint((P)0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = FUNFAB(fun_167,3,f_,d_,out_);
    T4 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_455));
    x_2147F6236 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2147F6236,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,out_);
    x_2148F6237 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2148F6237,LITREF(lit_456));
    T5 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2148F6237,nF6235);
    T13 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
    x_2149F6238 = T12;
    LOOP_309: {
      P a309_0;
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2149F6238);
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_2149F6238);
        xF6239 = T11;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),xF6239,out_);
        T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2149F6238);
        a309_0 = T10;
        x_2149F6238 = a309_0;
        goto LOOP_309;
        T6 = T9;
      } else {
        T6 = YPfalse;
      }
    }
    T14 = CALL2(1,VARREF(YgooSioSportYput),x_2147F6236,YPchr((P)41));
    T15 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
    T0 = T15;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_169) {
  P e_,f_,d_,out_;
  P x_2151F6240;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,YPfalse,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_458));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  x_2151F6240 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2151F6240,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_2151F6240,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_2151F6240,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_2151F6240,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_out_list_builder_170) {
  P f_,out_,elts_;
  P eF6244;
  P x_2154F6243;
  P x_2153F6242;
  P x_2152F6241;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(f_, 0);
  ARG(out_, 1);
  ARG(elts_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_461));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_462));
    CALL2(1,VARREF(YgooSioSportYputs),out_,T4);
    x_2152F6241 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2152F6241,YPchr((P)40));
    x_2153F6242 = out_;
    T7 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),T7);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_2153F6242,T6);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    x_2154F6243 = T14;
    LOOP_310: {
      P a310_0;
      T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2154F6243);
      T9 = CALL1(1,VARREF(Ynot),T10);
      if (T9 != YPfalse) {
        T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_2154F6243);
        eF6244 = T13;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL1(0,f_,eF6244);
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2154F6243);
        a310_0 = T12;
        x_2154F6243 = a310_0;
        goto LOOP_310;
        T8 = T11;
      } else {
        T8 = YPfalse;
      }
    }
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_2152F6241,YPchr((P)41));
    T0 = T15;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_171) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gen_fab_list_172) {
  P out_,refs_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(refs_, 1);
  T1 = FUNFAB(fun_171,1,out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_function_specs_173) {
  P out_,sig_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(sig_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreq_sig_specs),sig_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_fab_list),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_174) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_c_175) {
  P e_,f_,d_,out_;
  P x_2156F6245;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = FUNFAB(fun_174,3,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_470));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
  x_2156F6245 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2156F6245,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_2156F6245,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2156F6245,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2156F6245,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2156F6245,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_471));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_2156F6245,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_to_c_176) {
  P e_,f_,d_,out_;
  P x_2157F6246;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_473));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  x_2157F6246 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2157F6246,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2157F6246,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2157F6246,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_names),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2157F6246,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_474));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYput),x_2157F6246,YPchr((P)41));
  T7 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_generate_function_forwards_177) {
  P out_,definitions_;
  P defF6248;
  P x_2158F6247;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(out_, 0);
  ARG(definitions_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_477));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  x_2158F6247 = T6;
  LOOP_311: {
    P a311_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2158F6247);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2158F6247);
      defF6248 = T5;
      CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),out_,defF6248);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2158F6247);
      a311_0 = T4;
      x_2158F6247 = a311_0;
      goto LOOP_311;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_178) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_179) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_generate_function_forward_180) {
  P out_,defn_;
  P iF6255;
  P firstQF6254;
  P tmpF6253;
  P x_2162F6252;
  P x_2163F6251;
  P x_2161F6250;
  P x_2160F6249;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  x_2160F6249 = out_;
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T0 = LITREF(lit_480);
  } else {
    T0 = LITREF(lit_481);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2160F6249,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2160F6249,LITREF(lit_482));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2160F6249,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2160F6249,LITREF(lit_483));
  x_2161F6250 = out_;
  T18 = fun_178;
  T19 = fun_179;
  T17 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T18,T19);
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
  x_2163F6251 = T16;
  T23 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T22 = CALL1(1,VARREF(YgooStypesYlen),T23);
  T21 = CALL1(1,VARREF(YgooScolsSseqYbelow),T22);
  T20 = CALL1(1,VARREF(YgooScolsScolYenum),T21);
  x_2162F6252 = T20;
  LOOP_312: {
    P a312_0,a312_1;
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2163F6251);
    tmpF6253 = T8;
    if (tmpF6253 != YPfalse) {
      T6 = tmpF6253;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2162F6252);
      T6 = T7;
    }
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_2163F6251);
      firstQF6254 = T15;
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_2162F6252);
      iF6255 = T14;
      T9 = CALL1(1,VARREF(Ynot),firstQF6254);
      if (T9 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSioSportYput),x_2161F6250,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_486));
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2163F6251);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2162F6252);
      a312_0 = T12;
      a312_1 = T13;
      x_2163F6251 = a312_0;
      x_2162F6252 = a312_1;
      goto LOOP_312;
      T4 = T11;
    } else {
      T4 = YPfalse;
    }
  }
  T24 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_487));
UNLINK_STACK();
  QRET(T24);
}

LOCCODEDEF(fun_generate_function_binding_181) {
  P out_,defn_;
  P x_2166F6259;
  P nameF6258;
  P x_2165F6257;
  P nameF6256;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  T17 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF6256 = T17;
  T2 = CALL2(1,VARREF(YisaQ),nameF6256,VARREF(YevalSmoduleYLmodule_bindingG));
  if (T2 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),nameF6256);
    T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_490),T4);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_binding),nameF6256);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
    T0 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nameF6256,YPfalse);
    if (T8 != YPfalse) {
      x_2165F6257 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2165F6257,LITREF(lit_491));
      T10 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T9 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2165F6257,T10);
      T7 = T9;
    } else {
      T15 = CALL2(1,VARREF(YisaQ),nameF6256,VARREF(YevalSastYLlocal_bindingG));
      if (T15 != YPfalse) {
        T16 = CALL1(1,VARREF(YevalSmoduleYbinding_name),nameF6256);
        T14 = T16;
      } else {
        T14 = nameF6256;
      }
      nameF6258 = T14;
      x_2166F6259 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2166F6259,LITREF(lit_492));
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF6258);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2166F6259,T11);
      CALL2(1,VARREF(YgooSioSportYputs),x_2166F6259,LITREF(lit_493));
      T13 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T12 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2166F6259,T13);
      T7 = T12;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_function_forward_182) {
  P out_,defn_;
  P boundQF6260;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  T3 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T2 = CALL2(1,VARREF(YisaQ),T3,VARREF(YevalSmoduleYLmodule_bindingG));
  boundQF6260 = T2;
  if (boundQF6260 != YPfalse) {
    T0 = LITREF(lit_495);
  } else {
    T0 = LITREF(lit_496);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T0);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,defn_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_497));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_183) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_function_code),FREEREF(0),def_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_function_bodies_184) {
  P out_,definitions_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(definitions_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_500));
  T1 = FUNFAB(fun_183,1,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_185) {
  P def_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(def_, 0);
  T2 = CALL2(1,VARREF(YisaQ),def_,VARREF(YevalSastYLast_primitiveG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL4(1,VARREF(YevalSg2cYgenerate_closure_structure),def_,FREEREF(0),FREEREF(1),FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_functions_186) {
  P definitions_,f_,d_,out_;
  P T0,T1,T2;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = FUNFAB(fun_185,3,f_,d_,out_);
  T2 = CALL1(1,VARREF(YgooScolsSseqYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_closure_structure_187) {
  P definition_,f_,d_,out_;
  P x_2169F6263;
  P x_2168F6262;
  P x_2167F6261;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(definition_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),definition_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  x_2167F6261 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2167F6261,LITREF(lit_507));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_508));
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2167F6261,T2);
  x_2168F6262 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2168F6262,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_2168F6262,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2168F6262,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2168F6262,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYfunction_names),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2168F6262,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
  if (T6 != YPfalse) {
    x_2169F6263 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2169F6263,LITREF(lit_509));
    T8 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
    CALL2(1,VARREF(YgooSioSportYputs),x_2169F6263,T7);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_2169F6263,LITREF(lit_510));
  } else {
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_511));
    T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,T11);
  }
  CALL2(1,VARREF(YgooSioSportYput),x_2168F6262,YPchr((P)44));
  T12 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T12,out_);
  T13 = CALL2(1,VARREF(YgooSioSportYput),x_2168F6262,YPchr((P)41));
  T14 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T14);
}

LOCCODEDEF(fun_generate_function_body_reference_188) {
  P out_,definition_;
  P T0;
LINK_STACK();
  ARG(out_, 0);
  ARG(definition_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_514));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_515));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_return_189) {
  P defn_,d_,out_;
  P T0,T1;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_518));
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T0,out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_generate_return_190) {
  P defn_,d_,out_;
  P x_2170F6264;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYfunction_value),defn_);
  T0 = CALL1(1,VARREF(YevalSoptimizeYunconstrained_typeQ),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)81));
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_520));
  x_2170F6264 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2170F6264,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_2170F6264,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_primitive_inlinableQ_191) {
  P e_;
  P tmpF6265;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  T4 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),T4,LITREF(lit_523));
  tmpF6265 = T3;
  if (tmpF6265 != YPfalse) {
    T0 = tmpF6265;
  } else {
    T2 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
    T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),T2,LITREF(lit_524));
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_192) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_193) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_generate_function_code_194) {
  P out_,e_;
  P bindingF6273;
  P firstQF6272;
  P tmpF6271;
  P x_2174F6270;
  P x_2175F6269;
  P x_2173F6268;
  P x_2172F6267;
  P x_2171F6266;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(out_, 0);
  ARG(e_, 1);
  x_2171F6266 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2171F6266,LITREF(lit_527));
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T0 = LITREF(lit_528);
  } else {
    T0 = LITREF(lit_153);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2171F6266,T0);
  T2 = CALL1(1,VARREF(YevalSg2cYprimitive_inlinableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_529);
  } else {
    T1 = LITREF(lit_153);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2171F6266,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2171F6266,LITREF(lit_530));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,out_);
  x_2172F6267 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2172F6267,YPchr((P)40));
  x_2173F6268 = out_;
  T19 = fun_192;
  T20 = fun_193;
  T18 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T19,T20);
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_2175F6269 = T17;
  T22 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_2174F6270 = T21;
  LOOP_313: {
    P a313_0,a313_1;
    T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2175F6269);
    tmpF6271 = T9;
    if (tmpF6271 != YPfalse) {
      T7 = tmpF6271;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2174F6270);
      T7 = T8;
    }
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_2175F6269);
      firstQF6272 = T16;
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_2174F6270);
      bindingF6273 = T15;
      T10 = CALL1(1,VARREF(Ynot),firstQF6272);
      if (T10 != YPfalse) {
        T11 = CALL2(1,VARREF(YgooSioSportYput),x_2173F6268,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_533));
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF6273,out_);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2175F6269);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2174F6270);
      a313_0 = T13;
      a313_1 = T14;
      x_2175F6269 = a313_0;
      x_2174F6270 = a313_1;
      goto LOOP_313;
      T5 = T12;
    } else {
      T5 = YPfalse;
    }
  }
  T23 = CALL2(1,VARREF(YgooSioSportYput),x_2172F6267,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_534));
  T24 = CALL1(1,VARREF(YevalSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T24,out_);
  T25 = CALL1(1,VARREF(YevalSastYfunction_registers),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T25,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_535));
  T26 = CALL1(1,VARREF(YevalSastYfunction_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T26,e_,YPint((P)1),out_);
  CALL3(1,VARREF(YevalSg2cYgenerate_return),e_,YPint((P)1),out_);
  T27 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_536));
UNLINK_STACK();
  QRET(T27);
}

LOCCODEDEF(fun_dispatcherQ_195) {
  P definition_;
  P tmpF6276;
  P nameF6275;
  P bindingF6274;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(definition_, 0);
  T11 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF6274 = T11;
  T1 = CALL2(1,VARREF(YisaQ),bindingF6274,VARREF(YevalSmoduleYLmodule_bindingG));
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bindingF6274);
    T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T10);
    nameF6275 = T9;
    T8 = CALL2(1,VARREF(YgooSlogYE),nameF6275,LITREF(lit_539));
    tmpF6276 = T8;
    if (tmpF6276 != YPfalse) {
      T2 = tmpF6276;
    } else {
      T4 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF6275,LITREF(lit_540));
      T6 = CALL1(1,VARREF(YgooStypesYlen),nameF6275);
      T7 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_541));
      T5 = CALL2(1,VARREF(YgooSmathY_),T6,T7);
      T3 = CALL2(1,VARREF(YgooSlogYE),T4,T5);
      T2 = T3;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_196) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_197) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_198) {
  P b_;
  P x_2181F6277;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(b_, 0);
  T1 = CALL2(1,VARREF(YisaQ),b_,VARREF(YevalSmoduleYLbindingG));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    T2 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),b_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_551));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_552));
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,FREEREF(0));
    x_2181F6277 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_2181F6277,LITREF(lit_553));
    T6 = BOXGET(FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_2181F6277,T5);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_2181F6277,LITREF(lit_554));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_265));
    T10 = BOXGET(FREEREF(1));
    T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
    T8 = BOXPUT(T9,FREEREF(1));
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_function_code_199) {
  P out_,definition_;
  P bF6286;
  P firstQF6285;
  P tmpF6284;
  P x_2178F6283;
  P x_2179F6282;
  P x_2177F6281;
  P boundQF6280;
  P bindingsF6279;
  P offsetF6278;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(out_, 0);
  ARG(definition_, 1);
  offsetF6278 = YPint((P)0);
  offsetF6278 = BOXFAB(offsetF6278);
  T33 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF6279 = T33;
  T32 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  T31 = CALL2(1,VARREF(YisaQ),T32,VARREF(YevalSmoduleYLmodule_bindingG));
  boundQF6280 = T31;
  if (boundQF6280 != YPfalse) {
    T1 = LITREF(lit_543);
  } else {
    T1 = LITREF(lit_544);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_545));
  T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF6279);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_546));
    x_2177F6281 = out_;
    T18 = fun_196;
    T19 = fun_197;
    T17 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T18,T19);
    T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
    x_2179F6282 = T16;
    T21 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T20 = CALL1(1,VARREF(YgooScolsScolYenum),T21);
    x_2178F6283 = T20;
    LOOP_314: {
      P a314_0,a314_1;
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2179F6282);
      tmpF6284 = T8;
      if (tmpF6284 != YPfalse) {
        T6 = tmpF6284;
      } else {
        T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2178F6283);
        T6 = T7;
      }
      T5 = CALL1(1,VARREF(Ynot),T6);
      if (T5 != YPfalse) {
        T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_2179F6282);
        firstQF6285 = T15;
        T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_2178F6283);
        bF6286 = T14;
        T9 = CALL1(1,VARREF(Ynot),firstQF6285);
        if (T9 != YPfalse) {
          T10 = CALL2(1,VARREF(YgooSioSportYput),x_2177F6281,YPchr((P)44));
        } else {
        }
        CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF6286,out_);
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2179F6282);
        T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2178F6283);
        a314_0 = T12;
        a314_1 = T13;
        x_2179F6282 = a314_0;
        x_2178F6283 = a314_1;
        goto LOOP_314;
        T4 = T11;
      } else {
        T4 = YPfalse;
      }
    }
    T22 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
  } else {
  }
  T23 = CALL1(1,VARREF(YevalSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T23,out_);
  T24 = CALL1(1,VARREF(YevalSastYfunction_registers),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T24,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_549));
  T25 = FUNFAB(fun_198,2,out_,offsetF6278);
  CALL2(1,VARREF(YgooSmacrosYdo),T25,bindingsF6279);
  T26 = CALL1(1,VARREF(YevalSastYfunction_body),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T26,definition_,YPint((P)1),out_);
  T28 = CALL1(1,VARREF(YevalSg2cYdispatcherQ),definition_);
  T27 = CALL1(1,VARREF(Ynot),T28);
  if (T27 != YPfalse) {
    T29 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_555));
  } else {
  }
  CALL3(1,VARREF(YevalSg2cYgenerate_return),definition_,YPint((P)1),out_);
  T30 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_556));
UNLINK_STACK();
  QRET(T30);
}

LOCCODEDEF(fun_generate_local_temporaries_200) {
  P temps_,out_;
  P tempF6288;
  P x_2182F6287;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(temps_, 0);
  ARG(out_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  x_2182F6287 = T6;
  LOOP_315: {
    P a315_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2182F6287);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2182F6287);
      tempF6288 = T5;
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_559));
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF6288,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2182F6287);
      a315_0 = T4;
      x_2182F6287 = a315_0;
      goto LOOP_315;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_registers_201) {
  P regs_,out_;
  P tmpF6293;
  P iF6292;
  P jF6291;
  P jF6290;
  P nregsF6289;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(regs_, 0);
  ARG(out_, 1);
  T14 = CALL1(1,VARREF(YgooStypesYlen),regs_);
  nregsF6289 = T14;
  jF6290 = YPint((P)0);
  LOOP_316: {
    P a316_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),jF6290,nregsF6289);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_562));
      jF6291 = jF6290;
      iF6292 = YPint((P)0);
      LOOP_317: {
        P a317_0,a317_1;
        T5 = CALL2(1,VARREF(YgooSlogYE),iF6292,VARREF(YevalSg2cYTregisters_per_lineT));
        tmpF6293 = T5;
        if (tmpF6293 != YPfalse) {
          T3 = tmpF6293;
        } else {
          T4 = CALL2(1,VARREF(YgooSlogYE),jF6291,nregsF6289);
          T3 = T4;
        }
        if (T3 != YPfalse) {
          CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_563));
          a316_0 = jF6291;
          jF6290 = a316_0;
          goto LOOP_316;
          T2 = T6;
        } else {
          T8 = CALL2(1,VARREF(YgooSlogYE),iF6292,YPint((P)0));
          T7 = CALL1(1,VARREF(Ynot),T8);
          if (T7 != YPfalse) {
            T9 = CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
          } else {
          }
          T10 = CALL2(1,VARREF(YgooSmacrosYelt),regs_,jF6291);
          CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
          T12 = CALL2(1,VARREF(YgooSmathYA),jF6291,YPint((P)1));
          T13 = CALL2(1,VARREF(YgooSmathYA),iF6292,YPint((P)1));
          a317_0 = T12;
          a317_1 = T13;
          jF6291 = a317_0;
          iF6292 = a317_1;
          goto LOOP_317;
          T2 = T11;
        }
      }
      T0 = T2;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_info_name_202) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_566),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_maybe_declare_203) {
  P modname_;
  P x_2184F6294;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(modname_, 0);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_2184F6294 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_2184F6294,LITREF(lit_571));
    T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2184F6294,T3);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2184F6294,LITREF(lit_572));
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_204) {
  P binding_;
  P home_modF6295;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(binding_, 0);
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),binding_);
  home_modF6295 = T4;
  T2 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(0,FREEREF(1),home_modF6295);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYdeclare_imported_module_infos) {
  P out_,mod_;
  P maybe_declareF6298;
  P envF6297;
  P seenF6296;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF6296 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  envF6297 = T6;
  T5 = FUNSHELL(0,fun_maybe_declare_203,2);
  maybe_declareF6298 = T5;
  FUNINIT(maybe_declareF6298, 2,seenF6296,out_);
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF6297);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYmodule_name),T1);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF6298,T0);
  T3 = FUNFAB(fun_204,2,mod_,maybe_declareF6298);
  T4 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_206) {
  P local_name_,binding_;
  P x_2188F6299;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
  T2 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_2188F6299 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_2188F6299,LITREF(lit_583));
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T4);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2188F6299,T3);
    CALL2(1,VARREF(YgooSioSportYputs),x_2188F6299,LITREF(lit_584));
    T6 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),binding_);
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T6);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2188F6299,T5);
    CALL2(1,VARREF(YgooSioSportYputs),x_2188F6299,LITREF(lit_585));
    T9 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,local_name_);
    if (T8 != YPfalse) {
      T7 = LITREF(lit_586);
    } else {
      T10 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
      T7 = T10;
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2188F6299,T7);
    T11 = CALL2(1,VARREF(YgooSioSportYputs),x_2188F6299,LITREF(lit_587));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_207) {
  P binding_;
  P x_2193F6304;
  P x_2192F6303;
  P x_2191F6302;
  P x_2190F6301;
  P x_2189F6300;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(binding_, 0);
  T1 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    x_2189F6300 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_2189F6300,LITREF(lit_591));
    T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T3);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2189F6300,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2189F6300,LITREF(lit_592));
    T14 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),binding_);
    x_2190F6301 = T14;
    x_2191F6302 = VARREF(YgooSmacrosYEE);
    T6 = CALL2(1,x_2191F6302,x_2190F6301,LITREF(lit_148));
    if (T6 != YPfalse) {
      x_2192F6303 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_2192F6303,LITREF(lit_593));
      T7 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2192F6303,T7);
      T8 = CALL2(1,VARREF(YgooSioSportYputs),x_2192F6303,LITREF(lit_594));
      T5 = T8;
    } else {
      T10 = CALL2(1,x_2191F6302,x_2190F6301,LITREF(lit_150));
      if (T10 != YPfalse) {
        x_2193F6304 = FREEREF(1);
        CALL2(1,VARREF(YgooSioSportYputs),x_2193F6304,LITREF(lit_595));
        T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_2193F6304,T11);
        T12 = CALL2(1,VARREF(YgooSioSportYputs),x_2193F6304,LITREF(lit_596));
        T9 = T12;
      } else {
        T13 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_597));
        T9 = T13;
      }
      T5 = T9;
    }
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYgenerate_module_info) {
  P out_,mod_;
  P x_2199F6320;
  P x_2198F6319;
  P x_2197F6318;
  P x_2196F6317;
  P bindingF6316;
  P exported_asF6315;
  P tup43F6314;
  P x_2194F6313;
  P x_2187F6312;
  P nF6311;
  P x_2185F6310;
  P uses_namesF6309;
  P usesF6308;
  P envF6307;
  P info_nameF6306;
  P nameF6305;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T41 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  nameF6305 = T41;
  T40 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF6305);
  info_nameF6306 = T40;
  T39 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  envF6307 = T39;
  T38 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF6307);
  usesF6308 = T38;
  T37 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYmodule_name),usesF6308);
  uses_namesF6309 = T37;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_576));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_577));
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF6309);
  x_2185F6310 = T8;
  LOOP_318: {
    P a318_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2185F6310);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_2185F6310);
      nF6311 = T7;
      x_2187F6312 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2187F6312,LITREF(lit_578));
      T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF6311);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2187F6312,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2187F6312,LITREF(lit_579));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2185F6310);
      a318_0 = T6;
      x_2185F6310 = a318_0;
      goto LOOP_318;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_580));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_581));
  T9 = FUNFAB(fun_206,2,mod_,out_);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSmoduleYdo_named_static_global_bindings),T9,T10);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_588));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_589));
  T11 = FUNFAB(fun_207,2,mod_,out_);
  T12 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),T11,T12);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_598));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_599));
  T31 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),mod_);
  T30 = CALL1(1,VARREF(YgooScolsScolYenum),T31);
  x_2194F6313 = T30;
  LOOP_319: {
    P a319_0;
    T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2194F6313);
    T14 = CALL1(1,VARREF(Ynot),T15);
    if (T14 != YPfalse) {
      T28 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_2194F6313);
      T29 = CALL1(1,VARREF(YgooScolsScolYnow),x_2194F6313);
      T27 = CALL2(1,VARREF(Ytup),T28,T29);
      tup43F6314 = T27;
      T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup43F6314,YPint((P)0));
      exported_asF6315 = T26;
      T25 = CALL2(1,VARREF(YgooSmacrosYelt),tup43F6314,YPint((P)1));
      bindingF6316 = T25;
      x_2196F6317 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2196F6317,LITREF(lit_600));
      T17 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bindingF6316);
      T16 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T17);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2196F6317,T16);
      CALL2(1,VARREF(YgooSioSportYputs),x_2196F6317,LITREF(lit_601));
      T20 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bindingF6316);
      T19 = CALL2(1,VARREF(YgooSmacrosYEE),T20,exported_asF6315);
      if (T19 != YPfalse) {
        T18 = LITREF(lit_602);
      } else {
        T21 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF6315);
        T18 = T21;
      }
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2196F6317,T18);
      T22 = CALL2(1,VARREF(YgooSioSportYputs),x_2196F6317,LITREF(lit_603));
      T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2194F6313);
      a319_0 = T24;
      x_2194F6313 = a319_0;
      goto LOOP_319;
      T13 = T23;
    } else {
      T13 = YPfalse;
    }
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_604));
  x_2197F6318 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2197F6318,LITREF(lit_605));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2197F6318,info_nameF6306);
  T32 = CALL2(1,VARREF(YgooSioSportYputs),x_2197F6318,LITREF(lit_606));
  x_2198F6319 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2198F6319,LITREF(lit_607));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2198F6319,info_nameF6306);
  T33 = CALL2(1,VARREF(YgooSioSportYputs),x_2198F6319,LITREF(lit_608));
  x_2199F6320 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2199F6320,LITREF(lit_609));
  T34 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF6305);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2199F6320,T34);
  T35 = CALL2(1,VARREF(YgooSioSportYputs),x_2199F6320,LITREF(lit_610));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_611));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_612));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_613));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_614));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_615));
  T36 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_616));
UNLINK_STACK();
  QRET(T36);
}

LOCCODEDEF(fun_module_init_name_209) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_619),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_init_decl_210) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_622),T1,LITREF(lit_623));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_module_init_211) {
  P out_,mod_,form_;
  P x_2207F6333;
  P nF6332;
  P x_2205F6331;
  P x_2204F6330;
  P x_2203F6329;
  P x_2202F6328;
  P nF6327;
  P x_2200F6326;
  P uses_namesF6325;
  P usesF6324;
  P envF6323;
  P init_declF6322;
  P nameF6321;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T28 = LITREF(lit_626);
  } else {
    T29 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T28 = T29;
  }
  nameF6321 = T28;
  T27 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF6321);
  init_declF6322 = T27;
  T26 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  envF6323 = T26;
  T25 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF6323);
  usesF6324 = T25;
  T24 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYmodule_name),usesF6324);
  uses_namesF6325 = T24;
  T0 = CALL1(1,VARREF(Ynot),DYNREF(YevalSmoduleYTdynamic_compilationQT));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_627));
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF6325);
    x_2200F6326 = T9;
    LOOP_320: {
      P a320_0;
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2200F6326);
      T2 = CALL1(1,VARREF(Ynot),T3);
      if (T2 != YPfalse) {
        T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2200F6326);
        nF6327 = T8;
        x_2202F6328 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_2202F6328,LITREF(lit_628));
        T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF6327);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_2202F6328,T4);
        T5 = CALL2(1,VARREF(YgooSioSportYputs),x_2202F6328,LITREF(lit_629));
        T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2200F6326);
        a320_0 = T7;
        x_2200F6326 = a320_0;
        goto LOOP_320;
        T1 = T6;
      } else {
        T1 = YPfalse;
      }
    }
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_630));
  x_2203F6329 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2203F6329,LITREF(lit_631));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2203F6329,init_declF6322);
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_2203F6329,LITREF(lit_632));
  x_2204F6330 = out_;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2204F6330,init_declF6322);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_2204F6330,LITREF(lit_633));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_634));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_635));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_636));
  T12 = CALL1(1,VARREF(Ynot),DYNREF(YevalSmoduleYTdynamic_compilationQT));
  if (T12 != YPfalse) {
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF6325);
    x_2205F6331 = T21;
    LOOP_321: {
      P a321_0;
      T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2205F6331);
      T14 = CALL1(1,VARREF(Ynot),T15);
      if (T14 != YPfalse) {
        T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_2205F6331);
        nF6332 = T20;
        x_2207F6333 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_2207F6333,LITREF(lit_637));
        T16 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF6332);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_2207F6333,T16);
        T17 = CALL2(1,VARREF(YgooSioSportYputs),x_2207F6333,LITREF(lit_638));
        T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2205F6331);
        a321_0 = T19;
        x_2205F6331 = a321_0;
        goto LOOP_321;
        T13 = T18;
      } else {
        T13 = YPfalse;
      }
    }
    T22 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_639));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYto_c),form_,YPfalse,YPint((P)1),out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_640));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_641));
UNLINK_STACK();
  QRET(T23);
}

LOCCODEDEF(fun_generate_main_212) {
  P out_,mod_;
  P x_2212F6340;
  P x_2211F6339;
  P x_2210F6338;
  P x_2209F6337;
  P x_2208F6336;
  P info_nameF6335;
  P nameF6334;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  nameF6334 = T10;
  T9 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF6334);
  info_nameF6335 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_644));
  x_2208F6336 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2208F6336,LITREF(lit_645));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2208F6336,info_nameF6335);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2208F6336,LITREF(lit_646));
  x_2209F6337 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2209F6337,LITREF(lit_647));
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF6334);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2209F6337,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2209F6337,LITREF(lit_648));
  x_2210F6338 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2210F6338,LITREF(lit_649));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2210F6338,info_nameF6335);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2210F6338,LITREF(lit_650));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_651));
  x_2211F6339 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2211F6339,LITREF(lit_652));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_653));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2211F6339,T4);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_2211F6339,LITREF(lit_654));
  x_2212F6340 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2212F6340,LITREF(lit_655));
  T6 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF6334);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2212F6340,T6);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_2212F6340,LITREF(lit_656));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_657));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_658));
UNLINK_STACK();
  QRET(T8);
}

P YevalSg2cY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116;
DEFCREGS();
  DYNDEFSET(YevalSg2cYTdefinitionsT,YPfalse);
  lit_0 = YPPsym((P)"<g2c-module-loader>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSmoduleYLmodule_loaderG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YevalSg2cYLg2c_module_loaderG,T0);
  lit_1 = YPPsym((P)"module-loader-appname");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_0 = YPfab_met(FUNCODEREF(fun_module_loader_appname_0),T2,LITREF(lit_1),LITREF(lit_2),sloc(29),YPsb((P)"(fun ((_x <g2c-module-loader>)) (prop-value _x module-loader-appname))"));
  T4 = VARREF_OR(YevalSg2cYmodule_loader_appname,YPfalse);
  T5 = fun_module_loader_appname_0;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSg2cYmodule_loader_appname,T3);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),YPfalse,VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_3 = YPPsym((P)"module-loader-app-modname");
  lit_4 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_1 = YPfab_met(FUNCODEREF(fun_module_loader_app_modname_1),T6,LITREF(lit_3),LITREF(lit_4),sloc(30),YPsb((P)"(fun ((_x <g2c-module-loader>)) (prop-value _x module-loader-app-modname))"));
  T8 = VARREF_OR(YevalSg2cYmodule_loader_app_modname,YPfalse);
  T9 = fun_module_loader_app_modname_1;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSg2cYmodule_loader_app_modname,T7);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_app_modname),YPfalse,VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"<g2c-module>");
  T11 = XCALL2(1,VARREF(Yfab_pair),VARREF(YevalSmoduleYLmoduleG),Ynil);
  T10 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_5),T11);
  VARSET(YevalSg2cYLg2c_moduleG,T10);
  lit_6 = YPPsym((P)"module-src-file");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_src_file_2 = YPfab_met(FUNCODEREF(fun_module_src_file_2),T12,LITREF(lit_6),LITREF(lit_7),sloc(33),YPsb((P)"(fun ((_x <g2c-module>)) (prop-value _x module-src-file))"));
  T14 = VARREF_OR(YevalSg2cYmodule_src_file,YPfalse);
  T15 = fun_module_src_file_2;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSg2cYmodule_src_file,T13);
  lit_8 = YPPsym((P)"module-src-file-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_src_file_setter_3 = YPfab_met(FUNCODEREF(fun_module_src_file_setter_3),T16,LITREF(lit_8),LITREF(lit_9),sloc(33),YPsb((P)"(fun ((_z <str>) (_x <g2c-module>)) (prop-value-setter _z _x module-src-file))"));
  T18 = VARREF_OR(YevalSg2cYmodule_src_file_setter,YPfalse);
  T19 = fun_module_src_file_setter_3;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSg2cYmodule_src_file_setter,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_src_file),VARREF(YevalSg2cYmodule_src_file_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_10 = YPPsym((P)"module-mtime");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mtime_4 = YPfab_met(FUNCODEREF(fun_module_mtime_4),T20,LITREF(lit_10),LITREF(lit_11),sloc(34),YPsb((P)"(fun ((_x <g2c-module>)) (prop-value _x module-mtime))"));
  T22 = VARREF_OR(YevalSg2cYmodule_mtime,YPfalse);
  T23 = fun_module_mtime_4;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSg2cYmodule_mtime,T21);
  lit_12 = YPPsym((P)"module-mtime-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mtime_setter_5 = YPfab_met(FUNCODEREF(fun_module_mtime_setter_5),T24,LITREF(lit_12),LITREF(lit_13),sloc(34),YPsb((P)"(fun ((_z <flo>) (_x <g2c-module>)) (prop-value-setter _z _x module-mtime))"));
  T26 = VARREF_OR(YevalSg2cYmodule_mtime_setter,YPfalse);
  T27 = fun_module_mtime_setter_5;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSg2cYmodule_mtime_setter,T25);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_mtime),VARREF(YevalSg2cYmodule_mtime_setter),VARREF(YLfloG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"module-loader-module-type");
  lit_15 = YPPlist(1,YPPsym((P)"loader"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_6 = YPfab_met(FUNCODEREF(fun_module_loader_module_type_6),T28,LITREF(lit_14),LITREF(lit_15),sloc(36),YPsb((P)"(fun ((loader <g2c-module-loader>) => <type>) <g2c-module>)"));
  T30 = VARREF_OR(YevalSmoduleYmodule_loader_module_type,YPfalse);
  T31 = fun_module_loader_module_type_6;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSmoduleYmodule_loader_module_type,T29);
  lit_16 = YPPsym((P)"load-module");
  lit_17 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_18 = YPsb((P)"START");
  lit_19 = YPsb((P)"OPTIMIZE");
  lit_20 = Ynil;
  lit_21 = YPPlist(1,YPPsym((P)"name"));
  lit_22 = YPsb((P)"EMIT");
  T37 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_7 = YPfab_met(FUNCODEREF(fun_7),T37,YPfalse,LITREF(lit_20),sloc(60),YPsb((P)"(fun () (seq (set *definitions* (program-definitions prg)) (dlet () (generate-c-module out-port ast prg mod))))"));
  T36 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_8 = YPfab_met(FUNCODEREF(fun_8),T36,YPfalse,LITREF(lit_20),sloc(60),YPsb((P)"(fun () (set *definitions* x-1984))"));
  T35 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T35,YPfalse,LITREF(lit_20),sloc(59),YPsb((P)"(fun () (seq (set out-port (open <file-out-port> out-file)) (dlet ((*definitions* (program-definitions prg))) (generate-c-module out-port ast prg mod))))"));
  T34 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_10 = YPfab_met(FUNCODEREF(fun_10),T34,YPfalse,LITREF(lit_20),sloc(59),YPsb((P)"(fun () (and out-port (close out-port)))"));
  T33 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T33,YPfalse,LITREF(lit_21),sloc(62),YPsb((P)"(fun (name) (def file (module-name-to-relpath name)) (def build-file (add-build-path appname file)) (def src-file (add-src-path file)) (when (or (not (file-exists? build-file)) (>= (file-mtime src-file) (file-mtime build-file))) (file-copy src-file build-file)))"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  fun_load_module_12 = YPfab_met(FUNCODEREF(fun_load_module_12),T32,LITREF(lit_16),LITREF(lit_17),sloc(41),YPsb((P)"(fun ((loader <g2c-module-loader>) (name <sym>) => <module>) (def mod (fab-g2c-module loader name)) (def keepmod? #f) (def env (module-target-environment mod)) (def file (module-name-to-relpath name)) (def src-file (add-src-path (goo-filename file))) (def appname (module-loader-appname loader)) (def out-file (add-build-path appname (c-filename file))) (set (module-src-file mod) src-file) (set (module-mtime mod) (file-mtime src-file)) (%print-cpu-usage (%su START)) (def ast (compute-ast src-file env)) (def prg (compute-program ast env)) (%print-cpu-usage (%su OPTIMIZE)) (probe-directory (parent-directory out-file)) (with-port (out-port (open <file-out-port> out-file)) (dlet ((*definitions* (program-definitions prg))) (generate-c-module out-port ast prg mod))) (do (fun (name) (def file (module-name-to-relpath name)) (def build-file (add-build-path appname file)) (def src-file (add-src-path file)) (when (or (not (file-exists? build-file)) (>= (file-mtime src-file) (file-mtime build-file))) (file-copy src-file build-file))) (module-uses-c-files mod)) (%print-cpu-usage (%su EMIT)) mod)"));
  T39 = VARREF_OR(YevalSmoduleYload_module,YPfalse);
  T40 = fun_load_module_12;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSmoduleYload_module,T38);
  lit_23 = YPPsym((P)"module-up-to-date?");
  lit_24 = YPPlist(1,YPPsym((P)"mod"));
  T41 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSg2cYmodule_up_to_dateQ = YPfab_met(FUNCODEREF(YevalSg2cYmodule_up_to_dateQ),T41,LITREF(lit_23),LITREF(lit_24),sloc(76),YPsb((P)"(fun ((mod <g2c-module>) => <log>) (>= (module-mtime mod) (file-mtime (module-src-file mod))))"));
  T42 = YevalSg2cYmodule_up_to_dateQ;
  VARSET(YevalSg2cYmodule_up_to_dateQ,T42);
  lit_25 = YPPsym((P)"purge-outdated-modules");
  lit_26 = YPPlist(1,YPPsym((P)"loader"));
  lit_27 = YPPlist(1,YPPsym((P)"mod"));
  lit_28 = YPPlist(1,YPPsym((P)"name"));
  lit_29 = YPsb((P)" has changed.\n");
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPfab_met(FUNCODEREF(fun_14),T45,YPfalse,LITREF(lit_27),sloc(84),YPsb((P)"(fun (mod) (when (not (module-up-to-date? mod)) (pushf changed (module-name mod))))"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T44,YPfalse,LITREF(lit_28),sloc(90),YPsb((P)"(fun (name) (msg* out %s has changed.\n name))"));
  T43 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYpurge_outdated_modules = YPfab_met(FUNCODEREF(YevalSg2cYpurge_outdated_modules),T43,LITREF(lit_25),LITREF(lit_26),sloc(79),YPsb((P)"(fun ((loader <module-loader>)) (def changed '()) (do-module-loader-modules (fun (mod) (when (not (module-up-to-date? mod)) (pushf changed (module-name mod)))) loader) (do (fun (name) (msg* out %s has changed.\n name)) changed) (remove-modules-by-name! loader changed))"));
  T46 = YevalSg2cYpurge_outdated_modules;
  VARSET(YevalSg2cYpurge_outdated_modules,T46);
  lit_30 = YPPsym((P)"g2c-def-app");
  lit_31 = YPPlist(2,YPPsym((P)"appname"),YPPsym((P)"modname"));
  T47 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSg2cYLg2c_module_loaderG),Ynil);
  YevalSg2cYg2c_def_app = YPfab_met(FUNCODEREF(YevalSg2cYg2c_def_app),T47,LITREF(lit_30),LITREF(lit_31),sloc(103),YPsb((P)"(fun ((appname <str>) (modname <sym>) => <g2c-module-loader>) (new <g2c-module-loader> module-loader-appname appname module-loader-app-modname modname))"));
  T48 = YevalSg2cYg2c_def_app;
  VARSET(YevalSg2cYg2c_def_app,T48);
  lit_32 = YPPsym((P)"g2c-build-app");
  lit_33 = YPPlist(1,YPPsym((P)"loader"));
  lit_34 = YPsb((P)"Searching for undefined global bindings.\n");
  T51 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T51,YPfalse,LITREF(lit_20),sloc(110),YPsb((P)"(fun () (seq (set *dynamic-compilation?* #f) (dlet () (purge-outdated-modules loader) (def mod (probe-module loader (module-loader-app-modname loader))) (puts out Searching for undefined global bindings.\n) (do-module-loader-modules report-undefined-global-bindings loader) (generate-c-application loader mod) (generate-makefile loader) #f)))"));
  T50 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPfab_met(FUNCODEREF(fun_19),T50,YPfalse,LITREF(lit_20),sloc(110),YPsb((P)"(fun () (set *dynamic-compilation?* x-1986))"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_build_app = YPfab_met(FUNCODEREF(YevalSg2cYg2c_build_app),T49,LITREF(lit_32),LITREF(lit_33),sloc(109),YPsb((P)"(fun ((loader <g2c-module-loader>) => #f) (dlet ((*dynamic-compilation?* #f)) (purge-outdated-modules loader) (def mod (probe-module loader (module-loader-app-modname loader))) (puts out Searching for undefined global bindings.\n) (do-module-loader-modules report-undefined-global-bindings loader) (generate-c-application loader mod) (generate-makefile loader) #f))"));
  T52 = YevalSg2cYg2c_build_app;
  VARSET(YevalSg2cYg2c_build_app,T52);
  lit_35 = YPPsym((P)"g2c-test");
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  lit_37 = YPsb((P)"g2c-");
  lit_38 = YPPsym((P)"eval/main");
  T53 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_test = YPfab_met(FUNCODEREF(YevalSg2cYg2c_test),T53,LITREF(lit_35),LITREF(lit_36),sloc(119),YPsb((P)"(fun (x) (set *g2c-app* (g2c-def-app (cat g2c- (to-str x)) 'eval/main)))"));
  T54 = YevalSg2cYg2c_test;
  VARSET(YevalSg2cYg2c_test,T54);
  DYNDEFSET(YevalSg2cYTtmp_file_counterT,YPint((P)-1));
  lit_39 = YPPsym((P)"g2c-ast");
  lit_40 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  lit_41 = YPsb((P)"exp-%d-%d");
  T61 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPfab_met(FUNCODEREF(fun_22),T61,YPfalse,LITREF(lit_20),sloc(131),YPsb((P)"(fun () (seq (set *definitions* (program-definitions prg)) (dlet () (generate-c-module out-port ast prg mod))))"));
  T60 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPfab_met(FUNCODEREF(fun_23),T60,YPfalse,LITREF(lit_20),sloc(131),YPsb((P)"(fun () (set *definitions* x-1988))"));
  T59 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T59,YPfalse,LITREF(lit_20),sloc(131),YPsb((P)"(fun () (seq (set *dynamic-compilation?* #t) (dlet ((*definitions* (program-definitions prg))) (generate-c-module out-port ast prg mod))))"));
  T58 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPfab_met(FUNCODEREF(fun_25),T58,YPfalse,LITREF(lit_20),sloc(131),YPsb((P)"(fun () (set *dynamic-compilation?* x-1987))"));
  T57 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPfab_met(FUNCODEREF(fun_26),T57,YPfalse,LITREF(lit_20),sloc(130),YPsb((P)"(fun () (seq (set out-port (open <file-out-port> out-file)) (dlet ((*dynamic-compilation?* #t) (*definitions* (program-definitions prg))) (generate-c-module out-port ast prg mod))))"));
  T56 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T56,YPfalse,LITREF(lit_20),sloc(130),YPsb((P)"(fun () (and out-port (close out-port)))"));
  T55 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_ast_28 = YPfab_met(FUNCODEREF(fun_g2c_ast_28),T55,LITREF(lit_39),LITREF(lit_40),sloc(124),YPsb((P)"(fun (ast env) (def mod (environment-module env)) (def name (msg-to-str exp-%d-%d (process-id) (incf *tmp-file-counter*))) (def file (add-tmp-path name)) (def out-file (c-filename file)) (def prg (compute-program ast env)) (with-port (out-port (open <file-out-port> out-file)) (dlet ((*dynamic-compilation?* #t) (*definitions* (program-definitions prg))) (generate-c-module out-port ast prg mod))) file)"));
  T63 = VARREF_OR(YevalSg2cYg2c_ast,YPfalse);
  T64 = fun_g2c_ast_28;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSg2cYg2c_ast,T62);
  lit_42 = YPPsym((P)"g2c-exp");
  lit_43 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T65 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_29 = YPfab_met(FUNCODEREF(fun_g2c_exp_29),T65,LITREF(lit_42),LITREF(lit_43),sloc(136),YPsb((P)"(fun (exp env) (g2c-ast (objectify-with-subtransaction exp env *dynamic-compilation?* #f) env))"));
  T67 = VARREF_OR(YevalSg2cYg2c_exp,YPfalse);
  T68 = fun_g2c_exp_29;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YevalSg2cYg2c_exp,T66);
  lit_44 = YPPsym((P)"compile-load");
  lit_45 = YPPlist(1,YPPsym((P)"name"));
  lit_46 = YPsb((P)".so");
  lit_47 = YPsb((P)".so");
  T69 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_load_30 = YPfab_met(FUNCODEREF(fun_compile_load_30),T69,LITREF(lit_44),LITREF(lit_45),sloc(140),YPsb((P)"(fun (name) (%compile (%su (cat name *c-extension*)) (%su (cat name .so))) (%load (%su (cat name .so))))"));
  T71 = VARREF_OR(YevalSg2cYcompile_load,YPfalse);
  T72 = fun_compile_load_30;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YevalSg2cYcompile_load,T70);
  lit_48 = YPPsym((P)"g2c-eval");
  lit_49 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T73 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_31 = YPfab_met(FUNCODEREF(fun_g2c_eval_31),T73,LITREF(lit_48),LITREF(lit_49),sloc(144),YPsb((P)"(fun (exp env) (def name (g2c-exp exp env)) (compile-load name))"));
  T75 = VARREF_OR(YevalStopYg2c_eval,YPfalse);
  T76 = fun_g2c_eval_31;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalStopYg2c_eval,T74);
  lit_50 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  T77 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_32 = YPfab_met(FUNCODEREF(fun_g2c_eval_32),T77,LITREF(lit_48),LITREF(lit_50),sloc(148),YPsb((P)"(fun ((ast <program>) env) (def name (g2c-ast ast env)) (compile-load name))"));
  T79 = VARREF_OR(YevalStopYg2c_eval,YPfalse);
  T80 = fun_g2c_eval_32;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalStopYg2c_eval,T78);
  lit_51 = YPsb((P)"g2c");
  T81 = XCALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_51),LITREF(lit_38));
  VARSET(YevalSg2cYTg2c_appT,T81);
  lit_52 = YPPsym((P)"g2c-top");
  T82 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_33 = YPfab_met(FUNCODEREF(fun_g2c_top_33),T82,LITREF(lit_52),LITREF(lit_20),sloc(154),YPsb((P)"(fun () (g2c-build-app *g2c-app*))"));
  T84 = VARREF_OR(YevalSg2cYg2c_top,YPfalse);
  T85 = fun_g2c_top_33;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSg2cYg2c_top,T83);
  VARSET(YevalSg2cYg2c_goo,VARREF(YevalSg2cYg2c_top));
  lit_53 = YPPsym((P)"g2c-clean");
  lit_54 = YPsb((P)"g2c");
  T86 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_34 = YPfab_met(FUNCODEREF(fun_g2c_clean_34),T86,LITREF(lit_53),LITREF(lit_20),sloc(156),YPsb((P)"(fun () (set *g2c-app* (g2c-def-app g2c 'eval/main)) #f)"));
  T88 = VARREF_OR(YevalSg2cYg2c_clean,YPfalse);
  T89 = fun_g2c_clean_34;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSg2cYg2c_clean,T87);
  lit_55 = YPPsym((P)"compute-ast");
  lit_56 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  lit_57 = YPsb((P)"READ");
  lit_58 = YPsb((P)"AST");
  T90 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_35 = YPfab_met(FUNCODEREF(fun_compute_ast_35),T90,LITREF(lit_55),LITREF(lit_56),sloc(162),YPsb((P)"(fun (filename ct-env) (def sexpr (read-file filename)) (%print-cpu-usage (%su READ)) (def ast (objectify-with-subtransaction sexpr ct-env *dynamic-compilation?* #f)) (%print-cpu-usage (%su AST)) ast)"));
  T92 = VARREF_OR(YevalSg2cYcompute_ast,YPfalse);
  T93 = fun_compute_ast_35;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSg2cYcompute_ast,T91);
  lit_59 = YPPsym((P)"compute-program");
  lit_60 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_61 = YPsb((P)"ANA");
  lit_62 = YPsb((P)"BOX");
  lit_63 = YPsb((P)"LFT");
  lit_64 = YPsb((P)"EXT");
  lit_65 = YPsb((P)"CLO");
  lit_66 = YPsb((P)"TMP");
  lit_67 = YPsb((P)"REG");
  T94 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_program_36 = YPfab_met(FUNCODEREF(fun_compute_program_36),T94,LITREF(lit_59),LITREF(lit_60),sloc(172),YPsb((P)"(fun (e env) (def ana (analyze-calls e env)) (%print-cpu-usage (%su ANA)) (def box (insert-box! ana)) (%print-cpu-usage (%su BOX)) (def lft (lift! box)) (%print-cpu-usage (%su LFT)) (def prg (extract-things! lft)) (%print-cpu-usage (%su EXT)) (def flt (closurize-main! prg env 50)) (%print-cpu-usage (%su CLO)) (gather-temporaries! flt) (%print-cpu-usage (%su TMP)) (register-allocate! flt #f) (%print-cpu-usage (%su REG)) prg)"));
  T96 = VARREF_OR(YevalSg2cYcompute_program,YPfalse);
  T97 = fun_compute_program_36;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSg2cYcompute_program,T95);
  lit_68 = YPPsym((P)"generate-c-module");
  lit_69 = YPPlist(4,YPPsym((P)"out"),YPPsym((P)"e"),YPPsym((P)"prg"),YPPsym((P)"mod"));
  T98 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_37 = YPfab_met(FUNCODEREF(fun_generate_c_module_37),T98,LITREF(lit_68),LITREF(lit_69),sloc(198),YPsb((P)"(fun (out e prg mod) (generate-header out (module-name mod)) (generate-global-environment out mod) (generate-quotation-forwards out (program-quotations prg)) (generate-function-forwards out (program-definitions prg)) (generate-function-bodies out (program-definitions prg)) (unless *dynamic-compilation?* (generate-module-info out mod)) (generate-module-init out mod (program-form prg)) (generate-trailer out) prg)"));
  T100 = VARREF_OR(YevalSg2cYgenerate_c_module,YPfalse);
  T101 = fun_generate_c_module_37;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSg2cYgenerate_c_module,T99);
  lit_70 = YPPsym((P)"generate-c-application");
  lit_71 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  lit_72 = YPsb((P)"-init");
  T104 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPfab_met(FUNCODEREF(fun_38),T104,YPfalse,LITREF(lit_20),sloc(214),YPsb((P)"(fun () (seq (set out-port (open <file-out-port> out-name)) (generate-header out-port appname) (generate-main out-port mod) (generate-trailer out-port)))"));
  T103 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPfab_met(FUNCODEREF(fun_39),T103,YPfalse,LITREF(lit_20),sloc(214),YPsb((P)"(fun () (and out-port (close out-port)))"));
  T102 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_application_40 = YPfab_met(FUNCODEREF(fun_generate_c_application_40),T102,LITREF(lit_70),LITREF(lit_71),sloc(210),YPsb((P)"(fun ((loader <module-loader>) (mod <module>)) (def appname (module-loader-appname loader)) (def init-name (cat appname -init)) (def out-name (add-build-path appname (c-filename init-name))) (with-port (out-port (open <file-out-port> out-name)) (generate-header out-port appname) (generate-main out-port mod) (generate-trailer out-port)) #f)"));
  T106 = VARREF_OR(YevalSg2cYgenerate_c_application,YPfalse);
  T107 = fun_generate_c_application_40;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSg2cYgenerate_c_application,T105);
  lit_73 = YPPlist(1,YPPsym((P)"exp"));
  lit_74 = YPPlist(1,YPPsym((P)"return"));
  lit_75 = YPPsym((P)"x-1992");
  lit_76 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_77 = YPPsym((P)"for-mods");
  lit_78 = YPsb((P)"Match Pattern Failure");
  lit_79 = YPPsym((P)"do-module-loader-modules");
  lit_80 = YPPsym((P)"fun");
  lit_81 = Ynil;
  T114 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T113 = fun_x_1992_41 = YPfab_met(FUNCODEREF(fun_x_1992_41),T114,LITREF(lit_75),LITREF(lit_76),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'for-mods exp)))"));
  T112 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T111 = fun_42 = YPfab_met(FUNCODEREF(fun_42),T112,YPfalse,LITREF(lit_74),YPfalse,YPsb((P)"(fun (return) (loc ((x-1992 ((msg <str>) (args ...)) (return (macro-error 'for-mods exp)))) (let ((x-1991 exp)) (let ((mod #f) (loader #f) (body #f)) (if (isa? x-1991 <lst>) (let ((x-1991 (match-atom x-1991 'for-mods x-1992))) (let ((x-1991 (seq (let ((x-1991 (match-sublist x-1991 x-1992))) (let ((x-1991 (seq (set mod (match-unquote x-1991 x-1992)) (tail x-1991)))) (let ((x-1991 (seq (set loader (match-unquote x-1991 x-1992)) (tail x-1991)))) (let ((x-1991 (seq (let ((x-1991 (match-sublist x-1991 x-1992))) (match-nul-list x-1991 x-1992)) (tail x-1991)))) (match-nul-list x-1991 x-1992))))) (tail x-1991)))) (let ((x-1991 (seq (set body x-1991) '()))) (let ((x-1991 (seq (let ((x-1991 (match-sublist x-1991 x-1992))) (match-nul-list x-1991 x-1992)) (tail x-1991)))) (match-nul-list x-1991 x-1992))))) (x-1992 Match Pattern Failure x-1991)) (quasiquote (do-module-loader-modules (fun ((unquote mod)) (unquote-splicing body)) (unquote loader)))))))"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T109 = fun_43 = YPfab_met(FUNCODEREF(fun_43),T110,YPfalse,LITREF(lit_73),YPfalse,YPsb((P)"(fun (exp) (mif ((for-mods ((unquote mod) (unquote loader)) (unquote-splicing body)) exp) (quasiquote (do-module-loader-modules (fun ((unquote mod)) (unquote-splicing body)) (unquote loader))) (macro-error 'for-mods exp)))"));
  T116 = fun_43;
  T115 = YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-mods"),T116);
  T108 = T115;
  return T108;
}

P YevalSg2cY___main_1___() {
  P iF6350;
  P x_2025F6349;
  P iF6348;
  P x_2023F6347;
  P mangleF6346;
  P x_2021F6345;
  P iF6344;
  P x_2019F6343;
  P tableF6342;
  P vecF6341;
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
  P T176,T177,T178,T179,T180,T181;
DEFCREGS();
  lit_82 = YPPsym((P)"generate-makefile");
  lit_83 = YPPlist(1,YPPsym((P)"loader"));
  lit_84 = YPsb((P)"-init");
  lit_85 = YPsb((P)"Makefile");
  lit_86 = YPsb((P)"C_OBJS_DD = $(patsubst %,..");
  lit_87 = YPsb((P)"%,$(C_OBJS))\n");
  lit_88 = YPsb((P)": ..");
  lit_89 = YPsb((P)"grt.h\n");
  lit_90 = YPsb((P)"\t$(CC) -I.. ");
  lit_91 = YPPlist(1,YPPsym((P)"mod"));
  lit_92 = YPPlist(1,YPPsym((P)"i"));
  lit_93 = YPsb((P)"-I");
  lit_94 = YPsb((P)" ");
  lit_95 = YPsb((P)"$(CFLAGS) -DDEFAULT_GOO_ROOT=\\\"$(GOO_ROOT)\\\" -c -o $@ $<\n\n");
  lit_96 = YPsb((P)"OBJS = \\\n");
  lit_97 = YPPlist(1,YPPsym((P)"mod"));
  lit_98 = YPPsym((P)"put-obj");
  lit_99 = YPPlist(1,YPPsym((P)"name"));
  lit_100 = YPsb((P)"\t");
  lit_101 = YPsb((P)" \\\n");
  lit_102 = YPPlist(1,YPPsym((P)"name"));
  lit_103 = YPsb((P)".c");
  lit_104 = YPPlist(1,YPPsym((P)"n"));
  lit_105 = YPsb((P)"\t");
  lit_106 = YPsb((P)"\n\n");
  lit_107 = YPsb((P)": $(C_OBJS_DD) $(OBJS)\n");
  lit_108 = YPsb((P)"\t$(CC) $(LDFLAGS) -o ");
  lit_109 = YPsb((P)" $(C_OBJS_DD) $(OBJS) $(LIBS)");
  lit_110 = YPPlist(1,YPPsym((P)"mod"));
  lit_111 = YPPlist(1,YPPsym((P)"l"));
  lit_112 = YPsb((P)" -l");
  lit_113 = YPsb((P)"\n\nclean:\n\trm -f ");
  lit_114 = YPsb((P)" $(OBJS)\n");
  T10 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T10,YPfalse,LITREF(lit_92),sloc(234),YPsb((P)"(fun (i) (msg* out -I%s  i))"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPfab_met(FUNCODEREF(fun_45),T9,YPfalse,LITREF(lit_91),sloc(233),YPsb((P)"(fun (mod) (do (fun (i) (msg* out -I%s  i)) (module-uses-c-includes mod)))"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_put_obj_46 = YPfab_met(FUNCODEREF(fun_put_obj_46),T8,LITREF(lit_98),LITREF(lit_99),sloc(238),YPsb((P)"(fun (name) (msg* out \t%s \\\n (obj-filename (module-name-to-relpath name))))"));
  T7 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPfab_met(FUNCODEREF(fun_47),T7,YPfalse,LITREF(lit_102),sloc(242),YPsb((P)"(fun (name) (when (suffix? name .c) (put-obj (as <sym> (sub name 0 (- (len name) 2))))))"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPfab_met(FUNCODEREF(fun_48),T6,YPfalse,LITREF(lit_104),sloc(243),YPsb((P)"(fun (n) (as <str> n))"));
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPfab_met(FUNCODEREF(fun_49),T5,YPfalse,LITREF(lit_97),sloc(237),YPsb((P)"(fun (mod) (loc ((put-obj (name) (msg* out \t%s \\\n (obj-filename (module-name-to-relpath name))))) (put-obj (module-name mod)) (do (fun (name) (when (suffix? name .c) (put-obj (as <sym> (sub name 0 (- (len name) 2)))))) (map (fun (n) (as <str> n)) (module-uses-c-files mod)))))"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPfab_met(FUNCODEREF(fun_50),T4,YPfalse,LITREF(lit_111),sloc(249),YPsb((P)"(fun (l) (msg* out  -l%s l))"));
  T3 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPfab_met(FUNCODEREF(fun_51),T3,YPfalse,LITREF(lit_110),sloc(248),YPsb((P)"(fun (mod) (do (fun (l) (msg* out  -l%s l)) (module-uses-c-libraries mod)))"));
  T2 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_52 = YPfab_met(FUNCODEREF(fun_52),T2,YPfalse,LITREF(lit_20),sloc(229),YPsb((P)"(fun () (seq (set out (open <file-out-port> out-name)) (msg* out C_OBJS_DD = $(patsubst %%,..%s%%,$(C_OBJS))\n sep) (msg* out %s%s: ..%sgrt.h\n *c-extension* *obj-extension* sep) (msg* out \t$(CC) -I.. ) (for-mods (mod loader) (do (fun (i) (msg* out -I%s  i)) (module-uses-c-includes mod))) (msg* out $(CFLAGS) -DDEFAULT_GOO_ROOT=\\\"$(GOO_ROOT)\\\" -c -o $@ $<\n\n) (msg* out OBJS = \\\n) (for-mods (mod loader) (loc ((put-obj (name) (msg* out \t%s \\\n (obj-filename (module-name-to-relpath name))))) (put-obj (module-name mod)) (do (fun (name) (when (suffix? name .c) (put-obj (as <sym> (sub name 0 (- (len name) 2)))))) (map (fun (n) (as <str> n)) (module-uses-c-files mod))))) (msg* out \t%s\n\n (obj-filename init-name)) (msg* out %s: $(C_OBJS_DD) $(OBJS)\n exe-name) (msg* out \t$(CC) $(LDFLAGS) -o %s $(C_OBJS_DD) $(OBJS) $(LIBS) exe-name sep sep) (for-mods (mod loader) (do (fun (l) (msg* out  -l%s l)) (module-uses-c-libraries mod))) (msg* out \n\nclean:\n\trm -f %s $(OBJS)\n exe-name sep)))"));
  T1 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_53 = YPfab_met(FUNCODEREF(fun_53),T1,YPfalse,LITREF(lit_20),sloc(229),YPsb((P)"(fun () (and out (close out)))"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_makefile_54 = YPfab_met(FUNCODEREF(fun_generate_makefile_54),T0,LITREF(lit_82),LITREF(lit_83),sloc(223),YPsb((P)"(fun ((loader <module-loader>)) (def appname (module-loader-appname loader)) (def init-name (cat appname -init)) (def exe-name (exe-filename appname)) (def sep *path-separator*) (def out-name (add-build-path appname Makefile)) (with-port (out (open <file-out-port> out-name)) (msg* out C_OBJS_DD = $(patsubst %%,..%s%%,$(C_OBJS))\n sep) (msg* out %s%s: ..%sgrt.h\n *c-extension* *obj-extension* sep) (msg* out \t$(CC) -I.. ) (for-mods (mod loader) (do (fun (i) (msg* out -I%s  i)) (module-uses-c-includes mod))) (msg* out $(CFLAGS) -DDEFAULT_GOO_ROOT=\\\"$(GOO_ROOT)\\\" -c -o $@ $<\n\n) (msg* out OBJS = \\\n) (for-mods (mod loader) (loc ((put-obj (name) (msg* out \t%s \\\n (obj-filename (module-name-to-relpath name))))) (put-obj (module-name mod)) (do (fun (name) (when (suffix? name .c) (put-obj (as <sym> (sub name 0 (- (len name) 2)))))) (map (fun (n) (as <str> n)) (module-uses-c-files mod))))) (msg* out \t%s\n\n (obj-filename init-name)) (msg* out %s: $(C_OBJS_DD) $(OBJS)\n exe-name) (msg* out \t$(CC) $(LDFLAGS) -o %s $(C_OBJS_DD) $(OBJS) $(LIBS) exe-name sep sep) (for-mods (mod loader) (do (fun (l) (msg* out  -l%s l)) (module-uses-c-libraries mod))) (msg* out \n\nclean:\n\trm -f %s $(OBJS)\n exe-name sep)))"));
  T12 = VARREF_OR(YevalSg2cYgenerate_makefile,YPfalse);
  T13 = fun_generate_makefile_54;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSg2cYgenerate_makefile,T11);
  lit_115 = YPPsym((P)"pp");
  lit_116 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_55 = YPfab_met(FUNCODEREF(fun_pp_55),T14,LITREF(lit_115),LITREF(lit_116),sloc(258),YPsb((P)"(fun (e out) (write out e))"));
  T16 = VARREF_OR(YevalSg2cYpp,YPfalse);
  T17 = fun_pp_55;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSg2cYpp,T15);
  lit_117 = YPsb((P)"_mod");
  VARSET(YevalSg2cYDnow_mod_var_name,LITREF(lit_117));
  lit_118 = YPPsym((P)"generate-header");
  lit_119 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"modname"));
  lit_120 = YPsb((P)"/* GOO 2 C $REVISION: 0.120 $ \n");
  lit_121 = YPsb((P)"  */\n\n#include \"grt.h\"\n");
  lit_122 = YPsb((P)"#include \"dlgrt.h\"\n");
  lit_123 = YPsb((P)"\nstatic PSTR ");
  lit_124 = YPsb((P)" = PNUL;\n");
  lit_125 = YPsb((P)"\nstatic P sloc (int line) {\n");
  lit_126 = YPsb((P)"  if (");
  lit_127 = YPsb((P)" == PNUL) ");
  lit_128 = YPsb((P)" = ");
  lit_129 = YPsb((P)";\n");
  lit_130 = YPsb((P)"  return ");
  lit_131 = YPsb((P)"%src-loc");
  lit_132 = YPsb((P)"(");
  lit_133 = YPsb((P)"%ib");
  lit_134 = YPsb((P)"((P)line), ");
  lit_135 = YPsb((P)");\n");
  lit_136 = YPsb((P)"}\n");
  T18 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_header_56 = YPfab_met(FUNCODEREF(fun_generate_header_56),T18,LITREF(lit_118),LITREF(lit_119),sloc(264),YPsb((P)"(fun (out modname) (def modvar $now-mod-var-name) (msg* out /* GOO 2 C $REVISION: 0.120 $ \n) (msg* out   */\n\n#include \"grt.h\"\n) (when *dynamic-compilation?* (msg* out #include \"dlgrt.h\"\n)) (msg* out \nstatic PSTR %s = PNUL;\n modvar) (msg* out \nstatic P sloc (int line) {\n) (msg* out   if (%s == PNUL) %s =  modvar modvar) (generate-quotation out modname) (msg* out ;\n) (msg* out   return %s(%s((P)line), %s);\n (mangle-boot-name %src-loc) (mangle-boot-name %ib) modvar) (msg* out }\n))"));
  T20 = VARREF_OR(YevalSg2cYgenerate_header,YPfalse);
  T21 = fun_generate_header_56;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSg2cYgenerate_header,T19);
  lit_137 = YPPsym((P)"generate-trailer");
  lit_138 = YPPlist(1,YPPsym((P)"out"));
  lit_139 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T22 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_57 = YPfab_met(FUNCODEREF(fun_generate_trailer_57),T22,LITREF(lit_137),LITREF(lit_138),sloc(279),YPsb((P)"(fun (out) (msg* out \n/* END OF GENERATED CODE. */\n))"));
  T24 = VARREF_OR(YevalSg2cYgenerate_trailer,YPfalse);
  T25 = fun_generate_trailer_57;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSg2cYgenerate_trailer,T23);
  lit_140 = YPPsym((P)"generate-global-environment");
  lit_141 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_142 = YPsb((P)"\n/* MODULE ENVIRONMENT: ");
  lit_143 = YPsb((P)" */\n\n");
  lit_144 = YPPsym((P)"gen-binding");
  lit_145 = YPPlist(1,YPPsym((P)"b"));
  T27 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gen_binding_58 = YPfab_met(FUNCODEREF(fun_gen_binding_58),T27,LITREF(lit_144),LITREF(lit_145),sloc(291),YPsb((P)"(fun (b) (generate-global-binding out (not (binding-native-to? b mod)) b))"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_59 = YPfab_met(FUNCODEREF(fun_generate_global_environment_59),T26,LITREF(lit_140),LITREF(lit_141),sloc(289),YPsb((P)"(fun (out mod) (msg* out \n/* MODULE ENVIRONMENT: %s */\n\n (module-name mod)) (loc ((gen-binding (b) (generate-global-binding out (not (binding-native-to? b mod)) b))) (if *dynamic-compilation?* (do gen-binding (module-referenced-bindings mod)) (do-static-global-bindings gen-binding (module-target-environment mod)))))"));
  T29 = VARREF_OR(YevalSg2cYgenerate_global_environment,YPfalse);
  T30 = fun_generate_global_environment_59;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YevalSg2cYgenerate_global_environment,T28);
  lit_146 = YPPsym((P)"generate-global-binding");
  lit_147 = YPPlist(3,YPPsym((P)"out"),YPPsym((P)"imported?"),YPPsym((P)"gb"));
  lit_148 = YPPsym((P)"global");
  lit_149 = YPPsym((P)"runtime");
  lit_150 = YPPsym((P)"dynamic");
  lit_151 = YPsb((P)"RTV");
  lit_152 = YPsb((P)"DYN");
  lit_153 = YPsb((P)"");
  lit_154 = YPsb((P)"EXT");
  lit_155 = YPsb((P)"DEF");
  lit_156 = YPsb((P)"(");
  lit_157 = YPsb((P)",");
  lit_158 = YPsb((P)",");
  lit_159 = YPsb((P)");\n");
  T31 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_global_binding_60 = YPfab_met(FUNCODEREF(fun_generate_global_binding_60),T31,LITREF(lit_146),LITREF(lit_147),sloc(298),YPsb((P)"(fun (out imported? gb) (def kind (binding-kind gb)) (when (or (== kind 'global) (== kind 'runtime) (== kind 'dynamic)) (def name (binding-name gb)) (puts out (case kind (('runtime) RTV) (('dynamic) DYN) (#t ))) (msg* out %s(%s,%s,%s);\n (if imported? EXT DEF) (mangle-binding gb) (mangle-string-literal (binding-module-name gb)) (mangle-string-literal name))))"));
  T33 = VARREF_OR(YevalSg2cYgenerate_global_binding,YPfalse);
  T34 = fun_generate_global_binding_60;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YevalSg2cYgenerate_global_binding,T32);
  lit_160 = YPsb((P)"Y");
  VARSET(YevalSg2cYDmodule_separator,LITREF(lit_160));
  lit_161 = YPsb((P)"_");
  VARSET(YevalSg2cYDlocal_suffix,LITREF(lit_161));
  lit_162 = YPsb((P)"F");
  VARSET(YevalSg2cYDhygiene_marker,LITREF(lit_162));
  lit_163 = YPsb((P)"Z");
  VARSET(YevalSg2cYDescape_separator,LITREF(lit_163));
  lit_164 = YPsb((P)"I");
  VARSET(YevalSg2cYDiep_suffix,LITREF(lit_164));
  lit_165 = YPsb((P)"M");
  VARSET(YevalSg2cYDmethod_mangled_marker_string,LITREF(lit_165));
  T35 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmodule_separator),YPint((P)0));
  VARSET(YevalSg2cYDmodule_marker,T35);
  T36 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDlocal_suffix),YPint((P)0));
  VARSET(YevalSg2cYDlocal_marker,T36);
  T37 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDhygiene_marker),YPint((P)0));
  VARSET(YevalSg2cYDhygiene_char,T37);
  T38 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDescape_separator),YPint((P)0));
  VARSET(YevalSg2cYDescape_marker,T38);
  T39 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDiep_suffix),YPint((P)0));
  VARSET(YevalSg2cYDiep_marker,T39);
  T40 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmethod_mangled_marker_string),YPint((P)0));
  VARSET(YevalSg2cYDmethod_mangled_marker,T40);
  VARSET(YevalSg2cYDmin_character_code,YPint((P)0));
  VARSET(YevalSg2cYDmax_character_code,YPint((P)255));
  T41 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
  VARSET(YevalSg2cYTmangle_bufferT,T41);
  lit_166 = XCALLN(1, Ytup, 2, YPchr((P)45), YPchr((P)95));
  lit_167 = XCALLN(1, Ytup, 2, YPchr((P)33), YPchr((P)88));
  lit_168 = XCALLN(1, Ytup, 2, YPchr((P)36), YPchr((P)68));
  lit_169 = XCALLN(1, Ytup, 2, YPchr((P)37), YPchr((P)80));
  lit_170 = XCALLN(1, Ytup, 2, YPchr((P)42), YPchr((P)84));
  lit_171 = XCALLN(1, Ytup, 2, YPchr((P)47), YPchr((P)83));
  lit_172 = XCALLN(1, Ytup, 2, YPchr((P)60), YPchr((P)76));
  lit_173 = XCALLN(1, Ytup, 2, YPchr((P)62), YPchr((P)71));
  lit_174 = XCALLN(1, Ytup, 2, YPchr((P)63), YPchr((P)81));
  lit_175 = XCALLN(1, Ytup, 2, YPchr((P)43), YPchr((P)65));
  lit_176 = XCALLN(1, Ytup, 2, YPchr((P)38), YPchr((P)66));
  lit_177 = XCALLN(1, Ytup, 2, YPchr((P)94), YPchr((P)67));
  lit_178 = XCALLN(1, Ytup, 2, YPchr((P)95), YPchr((P)85));
  lit_179 = XCALLN(1, Ytup, 2, YPchr((P)64), YPchr((P)79));
  lit_180 = XCALLN(1, Ytup, 2, YPchr((P)61), YPchr((P)69));
  lit_181 = XCALLN(1, Ytup, 2, YPchr((P)126), YPchr((P)78));
  lit_182 = XCALLN(1, Ytup, 2, YPchr((P)124), YPchr((P)75));
  lit_183 = XCALLN(1, Ytup, 2, YPchr((P)46), YPchr((P)73));
  T42 = XCALLN(1,VARREF(Ytup),18,LITREF(lit_166),LITREF(lit_167),LITREF(lit_168),LITREF(lit_169),LITREF(lit_170),LITREF(lit_171),LITREF(lit_172),LITREF(lit_173),LITREF(lit_174),LITREF(lit_175),LITREF(lit_176),LITREF(lit_177),LITREF(lit_178),LITREF(lit_179),LITREF(lit_180),LITREF(lit_181),LITREF(lit_182),LITREF(lit_183));
  VARSET(YevalSg2cYDmangles_data,T42);
  lit_184 = YPPsym((P)"char-buffer-as-string");
  lit_185 = YPPlist(1,YPPsym((P)"buffer"));
  T43 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSg2cYchar_buffer_as_string = YPfab_met(FUNCODEREF(YevalSg2cYchar_buffer_as_string),T43,LITREF(lit_184),LITREF(lit_185),sloc(341),YPsb((P)"(fun ((buffer <vec>) => <str>) (def (buffer-size <int>) (len buffer)) (def (string <str>) (fab <str> buffer-size)) (rep loop ((i 0)) (when (< i buffer-size) (set (fab-elt string i) (low-elt buffer i)) (loop (+ i 1)))) string)"));
  T44 = YevalSg2cYchar_buffer_as_string;
  VARSET(YevalSg2cYchar_buffer_as_string,T44);
  lit_186 = YPsb((P)"\\t");
  lit_187 = YPsb((P)"\\f");
  lit_188 = YPsb((P)"\\r");
  lit_189 = YPsb((P)"\\n");
  lit_190 = YPsb((P)"\\\"");
  lit_191 = YPsb((P)"\\\\");
  T53 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T52 = XCALL2(1,VARREF(YgooScolsScolYfill),T53,YPfalse);
  vecF6341 = T52;
  T45 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_186),vecF6341,T45);
  T46 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_187),vecF6341,T46);
  T47 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_188),vecF6341,T47);
  T48 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_189),vecF6341,T48);
  T49 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_190),vecF6341,T49);
  T50 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_191),vecF6341,T50);
  T51 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF6341);
  VARSET(YevalSg2cYDc_escapes,T51);
  lit_192 = YPPsym((P)"mangle-string-literal");
  lit_193 = YPPlist(1,YPPsym((P)"str"));
  T54 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_62 = YPfab_met(FUNCODEREF(fun_mangle_string_literal_62),T54,LITREF(lit_192),LITREF(lit_193),sloc(362),YPsb((P)"(fun ((str <str>) => <str>) (set (len *mangle-buffer*) 0) (def len (len str)) (add! *mangle-buffer* \") (rep loop ((i 0)) (if (= i len) (seq (add! *mangle-buffer* \") (char-buffer-as-string *mangle-buffer*)) (let ((c (elt str i)) (enc (elt $c-escapes (as <int> c)))) (if (= enc #f) (add! *mangle-buffer* c) (cat! *mangle-buffer* enc)) (loop (+ i 1))))))"));
  T56 = VARREF_OR(YevalSg2cYmangle_string_literal,YPfalse);
  T57 = fun_mangle_string_literal_62;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSg2cYmangle_string_literal,T55);
  lit_194 = YPPlist(1,YPPsym((P)"sym"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_63 = YPfab_met(FUNCODEREF(fun_mangle_string_literal_63),T58,LITREF(lit_192),LITREF(lit_194),sloc(377),YPsb((P)"(fun ((sym <sym>) => <str>) (mangle-string-literal (sym-name sym)))"));
  T60 = VARREF_OR(YevalSg2cYmangle_string_literal,YPfalse);
  T61 = fun_mangle_string_literal_63;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalSg2cYmangle_string_literal,T59);
  lit_195 = YPsb((P)"0123456789");
  VARSET(YevalSg2cYDnumber_characters,LITREF(lit_195));
  lit_196 = YPPsym((P)"mangle-integer");
  lit_197 = YPPlist(1,YPPsym((P)"number"));
  lit_198 = YPPsym((P)"process-integer");
  lit_199 = YPPlist(2,YPPsym((P)"number"),YPPsym((P)"index"));
  T63 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_64 = YPfab_met(FUNCODEREF(fun_process_integer_64),T63,LITREF(lit_198),LITREF(lit_199),sloc(384),YPsb((P)"(fun ((number <int>) (index <int>) => #f) (def (tup (quotient <int>) (remainder <int>)) (trunc/ number 10)) (def (digit <chr>) (elt $number-characters remainder)) (if (= quotient 0) (let (((result <vec>) (fab <vec> index))) (set (elt result 0) digit) result) (let (((result <vec>) (process-integer quotient (+ index 1)))) (set (elt result (- (len result) index)) digit) result)))"));
  T62 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_65 = YPfab_met(FUNCODEREF(fun_mangle_integer_65),T62,LITREF(lit_196),LITREF(lit_197),sloc(382),YPsb((P)"(fun ((number <int>) => <str>) (as <str> (rep process-integer (((number <int>) number) ((index <int>) 1)) (def (tup (quotient <int>) (remainder <int>)) (trunc/ number 10)) (def (digit <chr>) (elt $number-characters remainder)) (if (= quotient 0) (let (((result <vec>) (fab <vec> index))) (set (elt result 0) digit) result) (let (((result <vec>) (process-integer quotient (+ index 1)))) (set (elt result (- (len result) index)) digit) result)))))"));
  T65 = VARREF_OR(YevalSg2cYmangle_integer,YPfalse);
  T66 = fun_mangle_integer_65;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSg2cYmangle_integer,T64);
  T110 = XCALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T109 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T110);
  tableF6342 = T109;
  T76 = XCALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T75 = XCALL1(1,VARREF(YgooScolsScolYenum),T76);
  x_2019F6343 = T75;
  LOOP_322: {
    P a322_0;
    T69 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_2019F6343);
    T68 = XCALL1(1,VARREF(Ynot),T69);
    if (T68 != YPfalse) {
      T74 = XCALL1(1,VARREF(YgooScolsScolYnow),x_2019F6343);
      iF6344 = T74;
      T71 = XCALL1(1,VARREF(YevalSg2cYmangle_integer),iF6344);
      T70 = XCALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T71,VARREF(YevalSg2cYDescape_separator));
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T70,tableF6342,iF6344);
      T73 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_2019F6343);
      a322_0 = T73;
      x_2019F6343 = a322_0;
      goto LOOP_322;
      T67 = T72;
    } else {
      T67 = YPfalse;
    }
  }
  T86 = XCALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  x_2021F6345 = T86;
  LOOP_323: {
    P a323_0;
    T79 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_2021F6345);
    T78 = XCALL1(1,VARREF(Ynot),T79);
    if (T78 != YPfalse) {
      T85 = XCALL1(1,VARREF(YgooScolsScolYnow),x_2021F6345);
      mangleF6346 = T85;
      T80 = XCALL2(1,VARREF(YgooSmacrosYelt),mangleF6346,YPint((P)1));
      T82 = XCALL2(1,VARREF(YgooSmacrosYelt),mangleF6346,YPint((P)0));
      T81 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T82);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T80,tableF6342,T81);
      T84 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_2021F6345);
      a323_0 = T84;
      x_2021F6345 = a323_0;
      goto LOOP_323;
      T77 = T83;
    } else {
      T77 = YPfalse;
    }
  }
  T96 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T97 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T95 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T96,VARREF(YgooSmagYLE),T97);
  T94 = XCALL1(1,VARREF(YgooScolsScolYenum),T95);
  x_2023F6347 = T94;
  LOOP_324: {
    P a324_0;
    T89 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_2023F6347);
    T88 = XCALL1(1,VARREF(Ynot),T89);
    if (T88 != YPfalse) {
      T93 = XCALL1(1,VARREF(YgooScolsScolYnow),x_2023F6347);
      iF6348 = T93;
      T90 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF6348);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T90,tableF6342,iF6348);
      T92 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_2023F6347);
      a324_0 = T92;
      x_2023F6347 = a324_0;
      goto LOOP_324;
      T87 = T91;
    } else {
      T87 = YPfalse;
    }
  }
  T107 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T108 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T106 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T107,VARREF(YgooSmagYLE),T108);
  T105 = XCALL1(1,VARREF(YgooScolsScolYenum),T106);
  x_2025F6349 = T105;
  LOOP_325: {
    P a325_0;
    T100 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_2025F6349);
    T99 = XCALL1(1,VARREF(Ynot),T100);
    if (T99 != YPfalse) {
      T104 = XCALL1(1,VARREF(YgooScolsScolYnow),x_2025F6349);
      iF6350 = T104;
      T101 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF6350);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T101,tableF6342,iF6350);
      T103 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_2025F6349);
      a325_0 = T103;
      x_2025F6349 = a325_0;
      goto LOOP_325;
      T98 = T102;
    } else {
      T98 = YPfalse;
    }
  }
  VARSET(YevalSg2cYDname_mangler_table,tableF6342);
  lit_200 = YPPsym((P)"mangler-reset");
  lit_201 = YPPlist(1,YPPsym((P)"buffer"));
  T111 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPfab_met(FUNCODEREF(YevalSg2cYmangler_reset),T111,LITREF(lit_200),LITREF(lit_201),sloc(413),YPsb((P)"(fun ((buffer <vec>)) (set (len buffer) 0))"));
  T112 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T112);
  lit_202 = YPPsym((P)"mangle-name-into");
  lit_203 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  T113 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPfab_met(FUNCODEREF(YevalSg2cYmangle_name_into),T113,LITREF(lit_202),LITREF(lit_203),sloc(416),YPsb((P)"(fun ((buf <vec>) (name <str>)) (for ((c name)) (add! buf (elt $name-mangler-table (as <int> (to-lower c))))) buf)"));
  T114 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T114);
  lit_204 = YPPsym((P)"mangle-raw-name");
  lit_205 = YPPlist(1,YPPsym((P)"name"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_68 = YPfab_met(FUNCODEREF(fun_mangle_raw_name_68),T115,LITREF(lit_204),LITREF(lit_205),sloc(421),YPsb((P)"(fun ((name <str>) => <str>) (mangler-reset *mangle-buffer*) (mangle-name-into *mangle-buffer* name) (char-buffer-as-string *mangle-buffer*))"));
  T117 = VARREF_OR(YevalSg2cYmangle_raw_name,YPfalse);
  T118 = fun_mangle_raw_name_68;
  T116 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T117,T118);
  VARSET(YevalSg2cYmangle_raw_name,T116);
  lit_206 = YPPlist(1,YPPsym((P)"name"));
  T119 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_69 = YPfab_met(FUNCODEREF(fun_mangle_raw_name_69),T119,LITREF(lit_204),LITREF(lit_206),sloc(426),YPsb((P)"(fun ((name <sym>) => <str>) (mangle-raw-name (as <str> name)))"));
  T121 = VARREF_OR(YevalSg2cYmangle_raw_name,YPfalse);
  T122 = fun_mangle_raw_name_69;
  T120 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T121,T122);
  VARSET(YevalSg2cYmangle_raw_name,T120);
  lit_207 = YPPsym((P)"mangle-local-name");
  lit_208 = YPPlist(1,YPPsym((P)"name"));
  T123 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_70 = YPfab_met(FUNCODEREF(fun_mangle_local_name_70),T123,LITREF(lit_207),LITREF(lit_208),sloc(429),YPsb((P)"(fun ((name <str>) => <str>) (mangler-reset *mangle-buffer*) (mangle-name-into *mangle-buffer* name) (add! *mangle-buffer* $local-marker) (char-buffer-as-string *mangle-buffer*))"));
  T125 = VARREF_OR(YevalSg2cYmangle_local_name,YPfalse);
  T126 = fun_mangle_local_name_70;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSg2cYmangle_local_name,T124);
  lit_209 = YPPlist(1,YPPsym((P)"name"));
  T127 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_71 = YPfab_met(FUNCODEREF(fun_mangle_local_name_71),T127,LITREF(lit_207),LITREF(lit_209),sloc(435),YPsb((P)"(fun ((name <sym>) => <str>) (mangle-local-name (as <str> name)))"));
  T129 = VARREF_OR(YevalSg2cYmangle_local_name,YPfalse);
  T130 = fun_mangle_local_name_71;
  T128 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T129,T130);
  VARSET(YevalSg2cYmangle_local_name,T128);
  lit_210 = YPPsym((P)"buf-cat2!");
  lit_211 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  T131 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbuf_cat2X = YPfab_met(FUNCODEREF(YevalSg2cYbuf_cat2X),T131,LITREF(lit_210),LITREF(lit_211),sloc(439),YPsb((P)"(fun ((buf <vec>) (name <str>)) (def len (len name)) (rep loop ((i 0)) (when (< i len) (add! buf (low-elt name i)) (loop (+ i 1)))))"));
  T132 = YevalSg2cYbuf_cat2X;
  VARSET(YevalSg2cYbuf_cat2X,T132);
  lit_212 = YPPsym((P)"mangle-module-into");
  lit_213 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"mod"));
  T133 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_mangle_module_into_73 = YPfab_met(FUNCODEREF(fun_mangle_module_into_73),T133,LITREF(lit_212),LITREF(lit_213),sloc(446),YPsb((P)"(fun ((buf <vec>) (mod <module>)) (let ((name (or/set (module-mangled-name mod) (char-buffer-as-string (mangle-name-into (fab <vec> 0) (as <str> (module-name mod))))))) (buf-cat2! buf name)))"));
  T135 = VARREF_OR(YevalSg2cYmangle_module_into,YPfalse);
  T136 = fun_mangle_module_into_73;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSg2cYmangle_module_into,T134);
  lit_214 = YPPsym((P)"mangle-global-name");
  lit_215 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T137 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_74 = YPfab_met(FUNCODEREF(fun_mangle_global_name_74),T137,LITREF(lit_214),LITREF(lit_215),sloc(453),YPsb((P)"(fun (mod (name <str>) => <str>) (mangler-reset *mangle-buffer*) (unless (or (== mod $goo-boot-module-name) (== (module-name mod) $goo-boot-module-name)) (add! *mangle-buffer* $module-marker) (mangle-module-into *mangle-buffer* mod)) (add! *mangle-buffer* $module-marker) (mangle-name-into *mangle-buffer* name) (char-buffer-as-string *mangle-buffer*))"));
  T139 = VARREF_OR(YevalSg2cYmangle_global_name,YPfalse);
  T140 = fun_mangle_global_name_74;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  VARSET(YevalSg2cYmangle_global_name,T138);
  lit_216 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T141 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_75 = YPfab_met(FUNCODEREF(fun_mangle_global_name_75),T141,LITREF(lit_214),LITREF(lit_216),sloc(464),YPsb((P)"(fun (mod (name <sym>) => <str>) (mangle-global-name mod (as <str> name)))"));
  T143 = VARREF_OR(YevalSg2cYmangle_global_name,YPfalse);
  T144 = fun_mangle_global_name_75;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YevalSg2cYmangle_global_name,T142);
  lit_217 = YPPsym((P)"mangle-boot-name");
  lit_218 = YPPlist(1,YPPsym((P)"name"));
  T145 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_boot_name = YPfab_met(FUNCODEREF(YevalSg2cYmangle_boot_name),T145,LITREF(lit_217),LITREF(lit_218),sloc(469),YPsb((P)"(fun (name) (mangle-global-name $goo-boot-module-name name))"));
  T146 = YevalSg2cYmangle_boot_name;
  VARSET(YevalSg2cYmangle_boot_name,T146);
  lit_219 = YPPsym((P)"mangle-quotation-name");
  lit_220 = YPPlist(1,YPPsym((P)"name"));
  lit_221 = YPsb((P)"lit_");
  T147 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_quotation_name = YPfab_met(FUNCODEREF(YevalSg2cYmangle_quotation_name),T147,LITREF(lit_219),LITREF(lit_220),sloc(472),YPsb((P)"(fun ((name <int>)) (mangler-reset *mangle-buffer*) (buf-cat2! *mangle-buffer* lit_) (buf-cat2! *mangle-buffer* (mangle-integer name)) (char-buffer-as-string *mangle-buffer*))"));
  T148 = YevalSg2cYmangle_quotation_name;
  VARSET(YevalSg2cYmangle_quotation_name,T148);
  lit_222 = YPPsym((P)"mangle-binding");
  lit_223 = YPPlist(1,YPPsym((P)"binding"));
  lit_224 = YPPsym((P)"quotation");
  T149 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_78 = YPfab_met(FUNCODEREF(fun_mangle_binding_78),T149,LITREF(lit_222),LITREF(lit_223),sloc(478),YPsb((P)"(fun ((binding <module-binding>)) (or/set (binding-mangled-name binding) (if (== (binding-kind binding) 'quotation) (mangle-quotation-name (binding-name binding)) (mangle-global-name (binding-module binding) (binding-name binding)))))"));
  T151 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T152 = fun_mangle_binding_78;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YevalSg2cYmangle_binding,T150);
  lit_225 = YPPsym((P)"mangle-local-marked-name");
  lit_226 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"marker"));
  T153 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_local_marked_name = YPfab_met(FUNCODEREF(YevalSg2cYmangle_local_marked_name),T153,LITREF(lit_225),LITREF(lit_226),sloc(485),YPsb((P)"(fun ((name <str>) (marker <int>)) (mangler-reset *mangle-buffer*) (mangle-name-into *mangle-buffer* name) (add! *mangle-buffer* $hygiene-char) (buf-cat2! *mangle-buffer* (mangle-integer marker)) (char-buffer-as-string *mangle-buffer*))"));
  T154 = YevalSg2cYmangle_local_marked_name;
  VARSET(YevalSg2cYmangle_local_marked_name,T154);
  lit_227 = YPPlist(1,YPPsym((P)"binding"));
  T155 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_80 = YPfab_met(FUNCODEREF(fun_mangle_binding_80),T155,LITREF(lit_222),LITREF(lit_227),sloc(492),YPsb((P)"(fun ((binding <local-binding>)) (or/set (binding-mangled-name binding) (mangle-local-name (binding-name binding))))"));
  T157 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T158 = fun_mangle_binding_80;
  T156 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T157,T158);
  VARSET(YevalSg2cYmangle_binding,T156);
  lit_228 = YPPlist(1,YPPsym((P)"binding"));
  T159 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_81 = YPfab_met(FUNCODEREF(fun_mangle_binding_81),T159,LITREF(lit_222),LITREF(lit_228),sloc(496),YPsb((P)"(fun ((binding <renamed-local-binding>)) (or/set (binding-mangled-name binding) (mangle-local-marked-name (as <str> (binding-name binding)) (binding-index binding))))"));
  T161 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T162 = fun_mangle_binding_81;
  T160 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T161,T162);
  VARSET(YevalSg2cYmangle_binding,T160);
  lit_229 = YPPlist(1,YPPsym((P)"exp"));
  lit_230 = YPPlist(1,YPPsym((P)"return"));
  lit_231 = YPPsym((P)"x-2032");
  lit_232 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_233 = YPPsym((P)"for-commas");
  lit_234 = YPPsym((P)"let");
  lit_235 = YPPsym((P)"for");
  lit_236 = YPPsym((P)"first?");
  lit_237 = YPPsym((P)"first-then");
  lit_238 = YPPsym((P)"op");
  lit_239 = YPPsym((P)"unless");
  lit_240 = YPPsym((P)"put");
  T165 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2032_82 = YPfab_met(FUNCODEREF(fun_x_2032_82),T165,LITREF(lit_231),LITREF(lit_232),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'for-commas exp)))"));
  T164 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPfab_met(FUNCODEREF(fun_83),T164,YPfalse,LITREF(lit_230),YPfalse,YPsb((P)"(fun (return) (loc ((x-2032 ((msg <str>) (args ...)) (return (macro-error 'for-commas exp)))) (let ((x-2031 exp)) (let ((out-val #f) (clauses #f) (body #f)) (if (isa? x-2031 <lst>) (let ((x-2031 (match-atom x-2031 'for-commas x-2032))) (let ((x-2031 (seq (set out-val (match-unquote x-2031 x-2032)) (tail x-2031)))) (let ((x-2031 (seq (let ((x-2031 (match-sublist x-2031 x-2032))) (let ((x-2031 (seq (set clauses x-2031) '()))) (let ((x-2031 (seq (let ((x-2031 (match-sublist x-2031 x-2032))) (match-nul-list x-2031 x-2032)) (tail x-2031)))) (match-nul-list x-2031 x-2032)))) (tail x-2031)))) (let ((x-2031 (seq (set body x-2031) '()))) (let ((x-2031 (seq (let ((x-2031 (match-sublist x-2031 x-2032))) (match-nul-list x-2031 x-2032)) (tail x-2031)))) (match-nul-list x-2031 x-2032)))))) (x-2032 Match Pattern Failure x-2031)) (let ((out-var (gensym))) (quasiquote (let (((unquote out-var) (unquote out-val))) (for ((unquote-splicing clauses) (first? (first-then (op #t) (op #f)))) (unless first? (put (unquote out-var) ,)) (unquote-splicing body)))))))))"));
  T163 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPfab_met(FUNCODEREF(fun_84),T163,YPfalse,LITREF(lit_229),YPfalse,YPsb((P)"(fun (exp) (mif ((for-commas (unquote out-val) ((unquote-splicing clauses)) (unquote-splicing body)) exp) (let ((out-var (gensym))) (quasiquote (let (((unquote out-var) (unquote out-val))) (for ((unquote-splicing clauses) (first? (first-then (op #t) (op #f)))) (unless first? (put (unquote out-var) ,)) (unquote-splicing body))))) (macro-error 'for-commas exp)))"));
  T166 = fun_84;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T166);
  lit_241 = YPPlist(1,YPPsym((P)"exp"));
  lit_242 = YPPlist(1,YPPsym((P)"return"));
  lit_243 = YPPsym((P)"x-2036");
  lit_244 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_245 = YPPsym((P)"between-parentheses");
  T169 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2036_85 = YPfab_met(FUNCODEREF(fun_x_2036_85),T169,LITREF(lit_243),LITREF(lit_244),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'between-parentheses exp)))"));
  T168 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPfab_met(FUNCODEREF(fun_86),T168,YPfalse,LITREF(lit_242),YPfalse,YPsb((P)"(fun (return) (loc ((x-2036 ((msg <str>) (args ...)) (return (macro-error 'between-parentheses exp)))) (let ((x-2035 exp)) (let ((out-val #f) (body #f)) (if (isa? x-2035 <lst>) (let ((x-2035 (match-atom x-2035 'between-parentheses x-2036))) (let ((x-2035 (seq (let ((x-2035 (match-sublist x-2035 x-2036))) (let ((x-2035 (seq (set out-val (match-unquote x-2035 x-2036)) (tail x-2035)))) (let ((x-2035 (seq (let ((x-2035 (match-sublist x-2035 x-2036))) (match-nul-list x-2035 x-2036)) (tail x-2035)))) (match-nul-list x-2035 x-2036)))) (tail x-2035)))) (let ((x-2035 (seq (set body x-2035) '()))) (let ((x-2035 (seq (let ((x-2035 (match-sublist x-2035 x-2036))) (match-nul-list x-2035 x-2036)) (tail x-2035)))) (match-nul-list x-2035 x-2036))))) (x-2036 Match Pattern Failure x-2035)) (let ((out-var (gensym))) (quasiquote (let (((unquote out-var) (unquote out-val))) (put (unquote out-var) () (unquote-splicing body) (put (unquote out-var) )))))))))"));
  T167 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPfab_met(FUNCODEREF(fun_87),T167,YPfalse,LITREF(lit_241),YPfalse,YPsb((P)"(fun (exp) (mif ((between-parentheses ((unquote out-val)) (unquote-splicing body)) exp) (let ((out-var (gensym))) (quasiquote (let (((unquote out-var) (unquote out-val))) (put (unquote out-var) () (unquote-splicing body) (put (unquote out-var) ))))) (macro-error 'between-parentheses exp)))"));
  T170 = fun_87;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T170);
  lit_246 = YPPlist(1,YPPsym((P)"exp"));
  lit_247 = YPPlist(1,YPPsym((P)"return"));
  lit_248 = YPPsym((P)"x-2040");
  lit_249 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_250 = YPPsym((P)"between-parentheses-comma-separated");
  T173 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2040_88 = YPfab_met(FUNCODEREF(fun_x_2040_88),T173,LITREF(lit_248),LITREF(lit_249),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'between-parentheses-comma-separated exp)))"));
  T172 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPfab_met(FUNCODEREF(fun_89),T172,YPfalse,LITREF(lit_247),YPfalse,YPsb((P)"(fun (return) (loc ((x-2040 ((msg <str>) (args ...)) (return (macro-error 'between-parentheses-comma-separated exp)))) (let ((x-2039 exp)) (let ((out-val #f) (body #f)) (if (isa? x-2039 <lst>) (let ((x-2039 (match-atom x-2039 'between-parentheses-comma-separated x-2040))) (let ((x-2039 (seq (let ((x-2039 (match-sublist x-2039 x-2040))) (let ((x-2039 (seq (set out-val (match-unquote x-2039 x-2040)) (tail x-2039)))) (let ((x-2039 (seq (let ((x-2039 (match-sublist x-2039 x-2040))) (match-nul-list x-2039 x-2040)) (tail x-2039)))) (match-nul-list x-2039 x-2040)))) (tail x-2039)))) (let ((x-2039 (seq (set body x-2039) '()))) (let ((x-2039 (seq (let ((x-2039 (match-sublist x-2039 x-2040))) (match-nul-list x-2039 x-2040)) (tail x-2039)))) (match-nul-list x-2039 x-2040))))) (x-2040 Match Pattern Failure x-2039)) (let ((out-var (gensym))) (quasiquote (let (((unquote out-var) (unquote out-val))) (put (unquote out-var) () (unquote-splicing (rep loop ((forms '()) (body body) (first? #t)) (if (nul? body) (rev! forms) (loop (pair (head body) (pair (or first? (quasiquote (put (unquote out-var) ,))) forms)) (tail body) #f)))) (put (unquote out-var) )))))))))"));
  T171 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPfab_met(FUNCODEREF(fun_90),T171,YPfalse,LITREF(lit_246),YPfalse,YPsb((P)"(fun (exp) (mif ((between-parentheses-comma-separated ((unquote out-val)) (unquote-splicing body)) exp) (let ((out-var (gensym))) (quasiquote (let (((unquote out-var) (unquote out-val))) (put (unquote out-var) () (unquote-splicing (rep loop ((forms '()) (body body) (first? #t)) (if (nul? body) (rev! forms) (loop (pair (head body) (pair (or first? (quasiquote (put (unquote out-var) ,))) forms)) (tail body) #f)))) (put (unquote out-var) ))))) (macro-error 'between-parentheses-comma-separated exp)))"));
  T174 = fun_90;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T174);
  lit_251 = YPPsym((P)"gen-result");
  lit_252 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_253 = YPsb((P)"T");
  lit_254 = YPsb((P)" = ");
  T177 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T176 = fun_gen_result_91 = YPfab_met(FUNCODEREF(fun_gen_result_91),T177,LITREF(lit_251),LITREF(lit_252),sloc(528),YPsb((P)"(fun ((e <program>) d out => <log>) (def reg (program-register e)) (and reg (msg* out T%d =  reg) #t))"));
  T180 = VARREF_OR(YevalSg2cYgen_result,YPfalse);
  T181 = fun_gen_result_91;
  T179 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T180,T181);
  T178 = VARSET(YevalSg2cYgen_result,T179);
  T175 = T178;
  return T175;
}

P YevalSg2cY___main_2___() {
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188;
DEFCREGS();
  lit_255 = YPPsym((P)"gen-depth");
  lit_256 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"out"));
  lit_257 = YPsb((P)"  ");
  T0 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_92 = YPfab_met(FUNCODEREF(fun_gen_depth_92),T0,LITREF(lit_255),LITREF(lit_256),sloc(532),YPsb((P)"(fun ((d <int>) out) (for ((i (below d))) (puts out   )))"));
  T2 = VARREF_OR(YevalSg2cYgen_depth,YPfalse);
  T3 = fun_gen_depth_92;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSg2cYgen_depth,T1);
  lit_258 = YPPlist(1,YPPsym((P)"exp"));
  lit_259 = YPPlist(1,YPPsym((P)"return"));
  lit_260 = YPPsym((P)"x-2047");
  lit_261 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_262 = YPPsym((P)"with-statement");
  lit_263 = YPPsym((P)"seq");
  lit_264 = YPPsym((P)"puts");
  lit_265 = YPsb((P)";\n");
  T6 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2047_93 = YPfab_met(FUNCODEREF(fun_x_2047_93),T6,LITREF(lit_260),LITREF(lit_261),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'with-statement exp)))"));
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPfab_met(FUNCODEREF(fun_94),T5,YPfalse,LITREF(lit_259),YPfalse,YPsb((P)"(fun (return) (loc ((x-2047 ((msg <str>) (args ...)) (return (macro-error 'with-statement exp)))) (let ((x-2046 exp)) (let ((d #f) (out #f) (body #f)) (if (isa? x-2046 <lst>) (let ((x-2046 (match-atom x-2046 'with-statement x-2047))) (let ((x-2046 (seq (let ((x-2046 (match-sublist x-2046 x-2047))) (let ((x-2046 (seq (set d (match-unquote x-2046 x-2047)) (tail x-2046)))) (let ((x-2046 (seq (set out (match-unquote x-2046 x-2047)) (tail x-2046)))) (let ((x-2046 (seq (let ((x-2046 (match-sublist x-2046 x-2047))) (match-nul-list x-2046 x-2047)) (tail x-2046)))) (match-nul-list x-2046 x-2047))))) (tail x-2046)))) (let ((x-2046 (seq (set body x-2046) '()))) (let ((x-2046 (seq (let ((x-2046 (match-sublist x-2046 x-2047))) (match-nul-list x-2046 x-2047)) (tail x-2046)))) (match-nul-list x-2046 x-2047))))) (x-2047 Match Pattern Failure x-2046)) (quasiquote (seq (gen-depth (unquote d) (unquote out)) (unquote-splicing body) (puts (unquote out) ;\n)))))))"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPfab_met(FUNCODEREF(fun_95),T4,YPfalse,LITREF(lit_258),YPfalse,YPsb((P)"(fun (exp) (mif ((with-statement ((unquote d) (unquote out)) (unquote-splicing body)) exp) (quasiquote (seq (gen-depth (unquote d) (unquote out)) (unquote-splicing body) (puts (unquote out) ;\n))) (macro-error 'with-statement exp)))"));
  T7 = fun_95;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T7);
  lit_266 = YPPlist(1,YPPsym((P)"exp"));
  lit_267 = YPPlist(1,YPPsym((P)"return"));
  lit_268 = YPPsym((P)"x-2051");
  lit_269 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_270 = YPPsym((P)"with-expression");
  T10 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2051_96 = YPfab_met(FUNCODEREF(fun_x_2051_96),T10,LITREF(lit_268),LITREF(lit_269),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'with-expression exp)))"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPfab_met(FUNCODEREF(fun_97),T9,YPfalse,LITREF(lit_267),YPfalse,YPsb((P)"(fun (return) (loc ((x-2051 ((msg <str>) (args ...)) (return (macro-error 'with-expression exp)))) (let ((x-2050 exp)) (let ((e #f) (d #f) (out #f) (body #f)) (if (isa? x-2050 <lst>) (let ((x-2050 (match-atom x-2050 'with-expression x-2051))) (let ((x-2050 (seq (let ((x-2050 (match-sublist x-2050 x-2051))) (let ((x-2050 (seq (set e (match-unquote x-2050 x-2051)) (tail x-2050)))) (let ((x-2050 (seq (set d (match-unquote x-2050 x-2051)) (tail x-2050)))) (let ((x-2050 (seq (set out (match-unquote x-2050 x-2051)) (tail x-2050)))) (let ((x-2050 (seq (let ((x-2050 (match-sublist x-2050 x-2051))) (match-nul-list x-2050 x-2051)) (tail x-2050)))) (match-nul-list x-2050 x-2051)))))) (tail x-2050)))) (let ((x-2050 (seq (set body x-2050) '()))) (let ((x-2050 (seq (let ((x-2050 (match-sublist x-2050 x-2051))) (match-nul-list x-2050 x-2051)) (tail x-2050)))) (match-nul-list x-2050 x-2051))))) (x-2051 Match Pattern Failure x-2050)) (quasiquote (with-statement ((unquote d) (unquote out)) (gen-result (unquote e) (unquote d) (unquote out)) (unquote-splicing body)))))))"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPfab_met(FUNCODEREF(fun_98),T8,YPfalse,LITREF(lit_266),YPfalse,YPsb((P)"(fun (exp) (mif ((with-expression ((unquote e) (unquote d) (unquote out)) (unquote-splicing body)) exp) (quasiquote (with-statement ((unquote d) (unquote out)) (gen-result (unquote e) (unquote d) (unquote out)) (unquote-splicing body))) (macro-error 'with-expression exp)))"));
  T11 = fun_98;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T11);
  lit_271 = YPPlist(1,YPPsym((P)"exp"));
  lit_272 = YPPlist(1,YPPsym((P)"return"));
  lit_273 = YPPsym((P)"x-2055");
  lit_274 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_275 = YPPsym((P)"with-used-expression");
  lit_276 = YPPsym((P)"when");
  lit_277 = YPPsym((P)"program-register");
  T14 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2055_99 = YPfab_met(FUNCODEREF(fun_x_2055_99),T14,LITREF(lit_273),LITREF(lit_274),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'with-used-expression exp)))"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPfab_met(FUNCODEREF(fun_100),T13,YPfalse,LITREF(lit_272),YPfalse,YPsb((P)"(fun (return) (loc ((x-2055 ((msg <str>) (args ...)) (return (macro-error 'with-used-expression exp)))) (let ((x-2054 exp)) (let ((e #f) (d #f) (out #f) (body #f)) (if (isa? x-2054 <lst>) (let ((x-2054 (match-atom x-2054 'with-used-expression x-2055))) (let ((x-2054 (seq (let ((x-2054 (match-sublist x-2054 x-2055))) (let ((x-2054 (seq (set e (match-unquote x-2054 x-2055)) (tail x-2054)))) (let ((x-2054 (seq (set d (match-unquote x-2054 x-2055)) (tail x-2054)))) (let ((x-2054 (seq (set out (match-unquote x-2054 x-2055)) (tail x-2054)))) (let ((x-2054 (seq (let ((x-2054 (match-sublist x-2054 x-2055))) (match-nul-list x-2054 x-2055)) (tail x-2054)))) (match-nul-list x-2054 x-2055)))))) (tail x-2054)))) (let ((x-2054 (seq (set body x-2054) '()))) (let ((x-2054 (seq (let ((x-2054 (match-sublist x-2054 x-2055))) (match-nul-list x-2054 x-2055)) (tail x-2054)))) (match-nul-list x-2054 x-2055))))) (x-2055 Match Pattern Failure x-2054)) (quasiquote (when (program-register (unquote e)) (with-expression ((unquote e) (unquote d) (unquote out)) (unquote-splicing body))))))))"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPfab_met(FUNCODEREF(fun_101),T12,YPfalse,LITREF(lit_271),YPfalse,YPsb((P)"(fun (exp) (mif ((with-used-expression ((unquote e) (unquote d) (unquote out)) (unquote-splicing body)) exp) (quasiquote (when (program-register (unquote e)) (with-expression ((unquote e) (unquote d) (unquote out)) (unquote-splicing body)))) (macro-error 'with-used-expression exp)))"));
  T15 = fun_101;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T15);
  lit_278 = YPPsym((P)"generate-quotation-forwards");
  lit_279 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb*"));
  lit_280 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_281 = YPsb((P)"DEFLIT(lit_");
  lit_282 = YPsb((P)");\n");
  T16 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_102 = YPfab_met(FUNCODEREF(fun_generate_quotation_forwards_102),T16,LITREF(lit_278),LITREF(lit_279),sloc(552),YPsb((P)"(fun (out (qb* <col>)) (puts out \n/* FORWARD QUOTATIONS: */\n\n) (for ((qb qb*)) (msg* out DEFLIT(lit_%s);\n (binding-name qb))))"));
  T18 = VARREF_OR(YevalSg2cYgenerate_quotation_forwards,YPfalse);
  T19 = fun_generate_quotation_forwards_102;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T17);
  lit_283 = YPPsym((P)"generate-quotations");
  lit_284 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb*"));
  lit_285 = YPsb((P)"lit_");
  lit_286 = YPsb((P)" = ");
  T20 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_103 = YPfab_met(FUNCODEREF(fun_generate_quotations_103),T20,LITREF(lit_283),LITREF(lit_284),sloc(557),YPsb((P)"(fun (out (qb* <lst>)) (for ((qb (rev qb*))) (with-statement (1 out) (msg* out lit_%s =  (binding-name qb)) (generate-quotation out (binding-info qb)))))"));
  T22 = VARREF_OR(YevalSg2cYgenerate_quotations,YPfalse);
  T23 = fun_generate_quotations_103;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSg2cYgenerate_quotations,T21);
  T24 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  VARSET(YevalSg2cYTlitsT,T24);
  T25 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  VARSET(YevalSg2cYTlits_atT,T25);
  lit_287 = YPPsym((P)"@lit");
  lit_288 = YPPlist(1,YPPsym((P)"n"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOlit = YPfab_met(FUNCODEREF(YOlit),T26,LITREF(lit_287),LITREF(lit_288),sloc(566),YPsb((P)"(fun (n) (elt *lits* n))"));
  T27 = YOlit;
  VARSET(YOlit,T27);
  lit_289 = YPPsym((P)"ref-lit");
  lit_290 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_105 = YPfab_met(FUNCODEREF(fun_105),T29,YPfalse,LITREF(lit_20),YPfalse,YPsb((P)"(fun () (def n (len *lits*)) (add! *lits* x) n)"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ref_lit_106 = YPfab_met(FUNCODEREF(fun_ref_lit_106),T28,LITREF(lit_289),LITREF(lit_290),sloc(568),YPsb((P)"(fun (x) (elt! *lits-at* x (fun () (def n (len *lits*)) (add! *lits* x) n)))"));
  T31 = VARREF_OR(YevalSg2cYref_lit,YPfalse);
  T32 = fun_ref_lit_106;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YevalSg2cYref_lit,T30);
  lit_291 = YPPsym((P)"generate-quotation");
  lit_292 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_293 = YPsb((P)"%lit");
  lit_294 = YPsb((P)"((P)");
  lit_295 = YPsb((P)")");
  T33 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_107 = YPfab_met(FUNCODEREF(fun_generate_quotation_107),T33,LITREF(lit_291),LITREF(lit_292),sloc(571),YPsb((P)"(fun (out (x <any>)) (msg* out %s((P)%d) (mangle-boot-name %lit) (ref-lit x)))"));
  T35 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T36 = fun_generate_quotation_107;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YevalSg2cYgenerate_quotation,T34);
  lit_296 = YPPsym((P)"false-name");
  lit_297 = YPsb((P)"%false");
  T37 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_108 = YPfab_met(FUNCODEREF(fun_false_name_108),T37,LITREF(lit_296),LITREF(lit_20),sloc(574),YPsb((P)"(fun () (mangle-boot-name %false))"));
  T39 = VARREF_OR(YevalSg2cYfalse_name,YPfalse);
  T40 = fun_false_name_108;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSg2cYfalse_name,T38);
  lit_298 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_299 = YPsb((P)"%true");
  lit_300 = YPsb((P)"%false");
  T41 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_109 = YPfab_met(FUNCODEREF(fun_generate_quotation_109),T41,LITREF(lit_291),LITREF(lit_298),sloc(577),YPsb((P)"(fun (out (qb <log>)) (puts out (mangle-boot-name (if qb %true %false))))"));
  T43 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T44 = fun_generate_quotation_109;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YevalSg2cYgenerate_quotation,T42);
  lit_301 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_302 = YPsb((P)"nil");
  T46 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T45 = YPfab_sig(YPPlist(2,VARREF(YLanyG),T46),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_110 = YPfab_met(FUNCODEREF(fun_generate_quotation_110),T45,LITREF(lit_291),LITREF(lit_301),sloc(580),YPsb((P)"(fun (out (qb (t= '()))) (puts out (mangle-boot-name nil)))"));
  T48 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T49 = fun_generate_quotation_110;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSg2cYgenerate_quotation,T47);
  lit_303 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_304 = YPPlist(1,YPPsym((P)"x"));
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPfab_met(FUNCODEREF(fun_111),T51,YPfalse,LITREF(lit_304),sloc(584),YPsb((P)"(fun (x) (generate-quotation out x))"));
  T50 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_112 = YPfab_met(FUNCODEREF(fun_generate_quotation_112),T50,LITREF(lit_291),LITREF(lit_303),sloc(583),YPsb((P)"(fun (out (qb <lst>)) (out-list-builder (fun (x) (generate-quotation out x)) out qb))"));
  T53 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T54 = fun_generate_quotation_112;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YevalSg2cYgenerate_quotation,T52);
  lit_305 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_306 = YPsb((P)"%int");
  lit_307 = YPsb((P)"((P)");
  lit_308 = YPsb((P)")");
  T55 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_113 = YPfab_met(FUNCODEREF(fun_generate_quotation_113),T55,LITREF(lit_291),LITREF(lit_305),sloc(586),YPsb((P)"(fun (out (x <int>)) (msg* out %s((P)%d) (mangle-boot-name %int) x))"));
  T57 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T58 = fun_generate_quotation_113;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YevalSg2cYgenerate_quotation,T56);
  lit_309 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_310 = YPsb((P)"%chr");
  lit_311 = YPsb((P)"((P)");
  lit_312 = YPsb((P)")");
  T59 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_114 = YPfab_met(FUNCODEREF(fun_generate_quotation_114),T59,LITREF(lit_291),LITREF(lit_309),sloc(589),YPsb((P)"(fun (out (x <chr>)) (msg* out %s((P)%d) (mangle-boot-name %chr) (as <int> x)))"));
  T61 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T62 = fun_generate_quotation_114;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YevalSg2cYgenerate_quotation,T60);
  lit_313 = YPPsym((P)"float-to-c-string");
  lit_314 = YPPlist(1,YPPsym((P)"o"));
  lit_315 = YPPlist(1,YPPsym((P)"done"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPfab_met(FUNCODEREF(fun_115),T64,YPfalse,LITREF(lit_315),sloc(595),YPsb((P)"(fun (done) (rep loop ((i (- (len s) 1))) (if (> i (neg 1)) (case (elt s i) ((s) (set (elt s i) e) (done #f)) ((d) (set (elt s i) e) (done #f)) ((x) (set (elt s i) e) (done #f)) (#t (loop (- i 1)))) s)))"));
  T63 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_116 = YPfab_met(FUNCODEREF(fun_float_to_c_string_116),T63,LITREF(lit_313),LITREF(lit_314),sloc(592),YPsb((P)"(fun ((o <flo>) => <str>) (def s (num-to-str o)) (esc done (rep loop ((i (- (len s) 1))) (if (> i (neg 1)) (case (elt s i) ((s) (set (elt s i) e) (done #f)) ((d) (set (elt s i) e) (done #f)) ((x) (set (elt s i) e) (done #f)) (#t (loop (- i 1)))) s))))"));
  T66 = VARREF_OR(YevalSg2cYfloat_to_c_string,YPfalse);
  T67 = fun_float_to_c_string_116;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSg2cYfloat_to_c_string,T65);
  lit_316 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_317 = YPsb((P)"%flo");
  lit_318 = YPsb((P)"(FLOINT(");
  lit_319 = YPsb((P)"))");
  T68 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_117 = YPfab_met(FUNCODEREF(fun_generate_quotation_117),T68,LITREF(lit_291),LITREF(lit_316),sloc(607),YPsb((P)"(fun (out (x <flo>)) (msg* out %s(FLOINT(%s)) (mangle-boot-name %flo) (float-to-c-string x)))"));
  T70 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T71 = fun_generate_quotation_117;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSg2cYgenerate_quotation,T69);
  lit_320 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_321 = YPsb((P)"%sb");
  lit_322 = YPsb((P)"((P)");
  lit_323 = YPsb((P)")");
  T72 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_118 = YPfab_met(FUNCODEREF(fun_generate_quotation_118),T72,LITREF(lit_291),LITREF(lit_320),sloc(611),YPsb((P)"(fun (out (x <str>)) (msg* out %s((P)%s) (mangle-boot-name %sb) (mangle-string-literal x)))"));
  T74 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T75 = fun_generate_quotation_118;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSg2cYgenerate_quotation,T73);
  lit_324 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_325 = YPsb((P)"XCALLN(1, ");
  lit_326 = YPsb((P)"vec");
  lit_327 = YPsb((P)", ");
  lit_328 = YPsb((P)", ");
  lit_329 = YPsb((P)")");
  T76 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_119 = YPfab_met(FUNCODEREF(fun_generate_quotation_119),T76,LITREF(lit_291),LITREF(lit_324),sloc(615),YPsb((P)"(fun (out (x <vec>)) (msg* out XCALLN(1, %s, %s (mangle-boot-name vec) (len x)) (for ((e x)) (puts out , ) (generate-quotation out e)) (puts out )))"));
  T78 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T79 = fun_generate_quotation_119;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YevalSg2cYgenerate_quotation,T77);
  lit_330 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_331 = YPsb((P)"XCALLN(1, ");
  lit_332 = YPsb((P)"tup");
  lit_333 = YPsb((P)", ");
  lit_334 = YPsb((P)", ");
  lit_335 = YPsb((P)")");
  T80 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_120 = YPfab_met(FUNCODEREF(fun_generate_quotation_120),T80,LITREF(lit_291),LITREF(lit_330),sloc(623),YPsb((P)"(fun (out (x <tup>)) (msg* out XCALLN(1, %s, %s (mangle-boot-name tup) (len x)) (for ((e x)) (puts out , ) (generate-quotation out e)) (puts out )))"));
  T82 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T83 = fun_generate_quotation_120;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSg2cYgenerate_quotation,T81);
  lit_336 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_337 = YPsb((P)"%%sym");
  lit_338 = YPsb((P)"((P)");
  lit_339 = YPsb((P)")");
  T84 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_121 = YPfab_met(FUNCODEREF(fun_generate_quotation_121),T84,LITREF(lit_291),LITREF(lit_336),sloc(631),YPsb((P)"(fun (out (x <sym>)) (msg* out %s((P)%s) (mangle-boot-name %%sym) (mangle-string-literal x)))"));
  T86 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T87 = fun_generate_quotation_121;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSg2cYgenerate_quotation,T85);
  lit_340 = YPPsym((P)"binding->c");
  lit_341 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"out"));
  T88 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbinding_Gc = YPfab_met(FUNCODEREF(YevalSg2cYbinding_Gc),T88,LITREF(lit_340),LITREF(lit_341),sloc(640),YPsb((P)"(fun (binding out) (puts out (mangle-binding binding)))"));
  T89 = YevalSg2cYbinding_Gc;
  VARSET(YevalSg2cYbinding_Gc,T89);
  lit_342 = YPPsym((P)"reference->c");
  lit_343 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  T91 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T90 = YPfab_gen(T91,LITREF(lit_342),LITREF(lit_343),YPfalse);
  VARSET(YevalSg2cYreference_Gc,T90);
  lit_344 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  T92 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_123 = YPfab_met(FUNCODEREF(fun_reference_Gc_123),T92,LITREF(lit_342),LITREF(lit_344),sloc(647),YPsb((P)"(fun ((v <binding>) out) (binding->c v out))"));
  T94 = VARREF_OR(YevalSg2cYreference_Gc,YPfalse);
  T95 = fun_reference_Gc_123;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSg2cYreference_Gc,T93);
  lit_345 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  lit_346 = YPsb((P)"LITREF");
  lit_347 = YPsb((P)"RTVREF");
  lit_348 = YPsb((P)"DYNREF");
  lit_349 = YPsb((P)"VARREF");
  T96 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_124 = YPfab_met(FUNCODEREF(fun_reference_Gc_124),T96,LITREF(lit_342),LITREF(lit_345),sloc(650),YPsb((P)"(fun ((v <module-binding>) out) (puts out (case (binding-kind v) (('quotation) LITREF) (('runtime) RTVREF) (('dynamic) DYNREF) (#t VARREF))) (between-parentheses (out) (binding->c v out)))"));
  T98 = VARREF_OR(YevalSg2cYreference_Gc,YPfalse);
  T99 = fun_reference_Gc_124;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSg2cYreference_Gc,T97);
  lit_350 = YPPsym((P)"to-c");
  lit_351 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T101 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T100 = YPfab_gen(T101,LITREF(lit_350),LITREF(lit_351),YPfalse);
  VARSET(YevalSg2cYto_c,T100);
  lit_352 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T102 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_125 = YPfab_met(FUNCODEREF(fun_to_c_125),T102,LITREF(lit_350),LITREF(lit_352),sloc(662),YPsb((P)"(fun ((e <top-level-form>) f d out) (generate-quotations out (form-quotations e)) (generate-functions (form-definitions e) f d out) (to-c (form-program e) f d out) (with-used-expression (e d out) (gen-ref (form-program e) out)))"));
  T104 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T105 = fun_to_c_125;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSg2cYto_c,T103);
  lit_353 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T106 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_126 = YPfab_met(FUNCODEREF(fun_to_c_126),T106,LITREF(lit_350),LITREF(lit_353),sloc(668),YPsb((P)"(fun ((e <passive-program>) f d out))"));
  T108 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T109 = fun_to_c_126;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSg2cYto_c,T107);
  lit_354 = YPPsym((P)"gen-ref");
  lit_355 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T110 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_127 = YPfab_met(FUNCODEREF(fun_gen_ref_127),T110,LITREF(lit_354),LITREF(lit_355),sloc(670),YPsb((P)"(fun ((e <reference>) out) (reference->c (reference-binding e) out))"));
  T112 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T113 = fun_gen_ref_127;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSg2cYgen_ref,T111);
  lit_356 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_357 = YPsb((P)"FREEREF");
  T114 = YPfab_sig(YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_128 = YPfab_met(FUNCODEREF(fun_gen_ref_128),T114,LITREF(lit_354),LITREF(lit_356),sloc(673),YPsb((P)"(fun ((e <free-reference>) out) (puts out FREEREF) (between-parentheses (out) (msg* out %d (reference-offset e))))"));
  T116 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T117 = fun_gen_ref_128;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSg2cYgen_ref,T115);
  lit_358 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_359 = YPsb((P)"T");
  lit_360 = YPsb((P)"T_1");
  T118 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_129 = YPfab_met(FUNCODEREF(fun_gen_ref_129),T118,LITREF(lit_354),LITREF(lit_358),sloc(678),YPsb((P)"(fun ((e <program>) out) (def reg (program-register e)) (if reg (msg* out T%d reg) (puts out T_1)))"));
  T120 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T121 = fun_gen_ref_129;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSg2cYgen_ref,T119);
  lit_361 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_362 = YPsb((P)"(P)");
  T122 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_130 = YPfab_met(FUNCODEREF(fun_gen_ref_130),T122,LITREF(lit_354),LITREF(lit_361),sloc(682),YPsb((P)"(fun ((e <raw-constant>) out) (msg* out (P)%s (constant-value e)))"));
  T124 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T125 = fun_gen_ref_130;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSg2cYgen_ref,T123);
  lit_363 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T126 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_131 = YPfab_met(FUNCODEREF(fun_gen_ref_131),T126,LITREF(lit_354),LITREF(lit_363),sloc(685),YPsb((P)"(fun ((e <constant>) out) (generate-quotation out (constant-value e)))"));
  T128 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T129 = fun_gen_ref_131;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSg2cYgen_ref,T127);
  lit_364 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T130 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_132 = YPfab_met(FUNCODEREF(fun_gen_ref_132),T130,LITREF(lit_354),LITREF(lit_364),sloc(688),YPsb((P)"(fun ((e <sequential>) out) (gen-ref (last e) out))"));
  T132 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T133 = fun_gen_ref_132;
  T131 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T132,T133);
  VARSET(YevalSg2cYgen_ref,T131);
  lit_365 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T134 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_133 = YPfab_met(FUNCODEREF(fun_gen_ref_133),T134,LITREF(lit_354),LITREF(lit_365),sloc(691),YPsb((P)"(fun ((e <locals>) out) (gen-ref (locals-body e) out))"));
  T136 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T137 = fun_gen_ref_133;
  T135 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T136,T137);
  VARSET(YevalSg2cYgen_ref,T135);
  lit_366 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T138 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_134 = YPfab_met(FUNCODEREF(fun_gen_ref_134),T138,LITREF(lit_354),LITREF(lit_366),sloc(694),YPsb((P)"(fun ((e <fix-let>) out) (gen-ref (fix-let-body e) out))"));
  T140 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T141 = fun_gen_ref_134;
  T139 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T140,T141);
  VARSET(YevalSg2cYgen_ref,T139);
  lit_367 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T142 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_135 = YPfab_met(FUNCODEREF(fun_gen_ref_135),T142,LITREF(lit_354),LITREF(lit_367),sloc(697),YPsb((P)"(fun ((e <loop>) out) (gen-ref (loop-body e) out))"));
  T144 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T145 = fun_gen_ref_135;
  T143 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T144,T145);
  VARSET(YevalSg2cYgen_ref,T143);
  lit_368 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_369 = YPsb((P)"RTVSET(");
  lit_370 = YPsb((P)"DYNDEFSET(");
  lit_371 = YPsb((P)"DYNSET(");
  lit_372 = YPsb((P)"VARSET(");
  lit_373 = YPsb((P)",");
  lit_374 = YPsb((P)")");
  T146 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_136 = YPfab_met(FUNCODEREF(fun_to_c_136),T146,LITREF(lit_350),LITREF(lit_368),sloc(700),YPsb((P)"(fun ((e <global-assignment>) f d out) (to-c (assignment-form e) f d out) (with-expression (e d out) (puts out (case (binding-kind (assignment-binding e)) (('runtime) RTVSET() (('dynamic) (if (isa? e <dynamic-definition>) DYNDEFSET( DYNSET()) (#t VARSET())) (binding->c (assignment-binding e) out) (puts out ,) (gen-ref (assignment-form e) out) (puts out ))))"));
  T148 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T149 = fun_to_c_136;
  T147 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T148,T149);
  VARSET(YevalSg2cYto_c,T147);
  lit_375 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_376 = YPsb((P)"RTV");
  lit_377 = YPsb((P)"VARREF_OR");
  T150 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_137 = YPfab_met(FUNCODEREF(fun_to_c_137),T150,LITREF(lit_350),LITREF(lit_375),sloc(714),YPsb((P)"(fun ((e <bound?>) f d out) (to-c (bound?-default e) f d out) (with-used-expression (e d out) (when (isa? (bound?-reference e) <runtime-reference>) (puts out RTV)) (puts out VARREF_OR) (between-parentheses-comma-separated (out) (binding->c (reference-binding (bound?-reference e)) out) (gen-ref (bound?-default e) out))))"));
  T152 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T153 = fun_to_c_137;
  T151 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T152,T153);
  VARSET(YevalSg2cYto_c,T151);
  lit_378 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_379 = YPsb((P)"BOXGET");
  T154 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_138 = YPfab_met(FUNCODEREF(fun_to_c_138),T154,LITREF(lit_350),LITREF(lit_378),sloc(725),YPsb((P)"(fun ((e <box-read>) f d out) (def ref (box-reference e)) (with-used-expression (e d out) (if (binding-closed-over? (reference-binding ref)) (seq (puts out BOXGET) (between-parentheses (out) (gen-ref ref out))) (gen-ref ref out))))"));
  T156 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T157 = fun_to_c_138;
  T155 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T156,T157);
  VARSET(YevalSg2cYto_c,T155);
  lit_380 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_381 = YPsb((P)"BOXPUT");
  lit_382 = YPsb((P)" = ");
  T158 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_139 = YPfab_met(FUNCODEREF(fun_to_c_139),T158,LITREF(lit_350),LITREF(lit_380),sloc(733),YPsb((P)"(fun ((e <box-write>) f d out) (def ref (box-reference e)) (to-c (box-form e) f d out) (with-expression (e d out) (if (binding-closed-over? (reference-binding ref)) (seq (puts out BOXPUT) (between-parentheses-comma-separated (out) (gen-ref (box-form e) out) (gen-ref ref out))) (seq (gen-ref ref out) (puts out  = ) (gen-ref (box-form e) out)))))"));
  T160 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T161 = fun_to_c_139;
  T159 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T160,T161);
  VARSET(YevalSg2cYto_c,T159);
  lit_383 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_384 = YPsb((P)" = BOXFAB");
  T162 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_140 = YPfab_met(FUNCODEREF(fun_to_c_140),T162,LITREF(lit_350),LITREF(lit_383),sloc(744),YPsb((P)"(fun ((e <box-creation>) f d out) (def binding (reference-binding (box-reference (box-reference e)))) (when (binding-closed-over? binding) (with-expression (e d out) (binding->c binding out) (puts out  = BOXFAB) (between-parentheses (out) (binding->c binding out)))))"));
  T164 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T165 = fun_to_c_140;
  T163 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T164,T165);
  VARSET(YevalSg2cYto_c,T163);
  lit_385 = YPPsym((P)"bb?");
  lit_386 = YPPlist(1,YPPsym((P)"x"));
  T166 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_141 = YPfab_met(FUNCODEREF(fun_bbQ_141),T166,LITREF(lit_385),LITREF(lit_386),sloc(752),YPsb((P)"(fun (x) #f)"));
  T168 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T169 = fun_bbQ_141;
  T167 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T168,T169);
  VARSET(YevalSg2cYbbQ,T167);
  lit_387 = YPPlist(1,YPPsym((P)"x"));
  lit_388 = YPPsym((P)"%bb");
  T170 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_142 = YPfab_met(FUNCODEREF(fun_bbQ_142),T170,LITREF(lit_385),LITREF(lit_387),sloc(754),YPsb((P)"(fun ((x <predefined-application>)) (and (== (binding-name (application-binding x)) '%bb) (1st (application-arguments x))))"));
  T172 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T173 = fun_bbQ_142;
  T171 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T172,T173);
  VARSET(YevalSg2cYbbQ,T171);
  lit_389 = YPPlist(1,YPPsym((P)"x"));
  T174 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_143 = YPfab_met(FUNCODEREF(fun_bbQ_143),T174,LITREF(lit_385),LITREF(lit_389),sloc(758),YPsb((P)"(fun ((x <fix-let>)) (bb? (fix-let-body x)))"));
  T176 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T177 = fun_bbQ_143;
  T175 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T176,T177);
  VARSET(YevalSg2cYbbQ,T175);
  lit_390 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_391 = YPsb((P)"if (");
  lit_392 = YPsb((P)") {\n");
  lit_393 = YPsb((P)" != ");
  lit_394 = YPsb((P)") {\n");
  lit_395 = YPsb((P)"} else {\n");
  lit_396 = YPsb((P)"}\n");
  T178 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_144 = YPfab_met(FUNCODEREF(fun_to_c_144),T178,LITREF(lit_350),LITREF(lit_390),sloc(761),YPsb((P)"(fun ((e <alternative>) f d out) (def bb-tst (bb? (alternative-condition e))) (def tst (or bb-tst (alternative-condition e))) (to-c (alternative-condition e) f d out) (gen-depth d out) (puts out if () (gen-ref tst out) (if bb-tst (puts out ) {\n) (msg* out  != %s) {\n (false-name))) (to-c (alternative-consequent e) f (+ d 1) out) (with-used-expression (e (+ d 1) out) (gen-ref (alternative-consequent e) out)) (gen-depth d out) (puts out } else {\n) (to-c (alternative-alternant e) f (+ d 1) out) (with-used-expression (e (+ d 1) out) (gen-ref (alternative-alternant e) out)) (gen-depth d out) (puts out }\n))"));
  T180 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T181 = fun_to_c_144;
  T179 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T180,T181);
  VARSET(YevalSg2cYto_c,T179);
  lit_397 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_398 = YPPlist(1,YPPsym((P)"x"));
  T183 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_145 = YPfab_met(FUNCODEREF(fun_145),T183,YPfalse,LITREF(lit_398),sloc(780),YPsb((P)"(fun (x) (to-c x f d out))"));
  T182 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_146 = YPfab_met(FUNCODEREF(fun_to_c_146),T182,LITREF(lit_350),LITREF(lit_397),sloc(779),YPsb((P)"(fun ((e <sequential>) f d out) (do (fun (x) (to-c x f d out)) e))"));
  T185 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T186 = fun_to_c_146;
  T184 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T185,T186);
  VARSET(YevalSg2cYto_c,T184);
  T188 = DYNDEFSET(YevalSg2cYTloop_arg_counterT,YPint((P)-1));
  T187 = T188;
  return T187;
}

P YevalSg2cY___main_3___() {
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
DEFCREGS();
  lit_399 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_400 = YPsb((P)"LOOP_");
  lit_401 = YPsb((P)": {\n");
  lit_402 = YPsb((P)"P ");
  lit_403 = YPPlist(1,YPPsym((P)"x"));
  lit_404 = YPPlist(1,YPPsym((P)"x"));
  lit_405 = YPsb((P)"a");
  lit_406 = YPsb((P)"_");
  lit_407 = YPsb((P)"}\n");
  T2 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_147 = YPfab_met(FUNCODEREF(fun_147),T2,YPfalse,LITREF(lit_403),sloc(791),YPsb((P)"(fun ((x ...)) #t)"));
  T1 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_148 = YPfab_met(FUNCODEREF(fun_148),T1,YPfalse,LITREF(lit_404),sloc(791),YPsb((P)"(fun ((x ...)) #f)"));
  T0 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLloopG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_149 = YPfab_met(FUNCODEREF(fun_to_c_149),T0,LITREF(lit_350),LITREF(lit_399),sloc(784),YPsb((P)"(fun ((e <loop>) f d out) (def n (set (loop-continue e) (incf *loop-arg-counter*))) (gen-depth d out) (msg* out LOOP_%d: {\n n) (def bindings (loop-bindings e)) (unless (nul? bindings) (with-statement ((+ d 1) out) (puts out P ) (for-commas out ((b bindings) (i (from 0))) (msg* out a%d_%d n i)))) (to-c (loop-body e) f (+ d 1) out) (gen-depth d out) (msg* out }\n))"));
  T4 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T5 = fun_to_c_149;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSg2cYto_c,T3);
  lit_408 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_409 = YPsb((P)"a");
  lit_410 = YPsb((P)"_");
  lit_411 = YPsb((P)" = ");
  lit_412 = YPsb((P)" = a");
  lit_413 = YPsb((P)"_");
  lit_414 = YPsb((P)"goto LOOP_");
  T6 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLloop_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_150 = YPfab_met(FUNCODEREF(fun_to_c_150),T6,LITREF(lit_350),LITREF(lit_408),sloc(797),YPsb((P)"(fun ((e <loop-application>) f d out) (def loop (application-loop e)) (def n (loop-continue loop)) (for ((arg (application-arguments e))) (to-c arg f d out)) (for ((arg (application-arguments e)) (i (from 0))) (with-statement (d out) (msg* out a%d_%d =  n i) (gen-ref arg out))) (for ((binding (loop-bindings loop)) (i (from 0))) (with-statement (d out) (binding->c binding out) (msg* out  = a%d_%d n i))) (with-statement (d out) (msg* out goto LOOP_%d n)))"));
  T8 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T9 = fun_to_c_150;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSg2cYto_c,T7);
  VARSET(YevalSg2cYDnumber_call_templates,YPint((P)5));
  lit_415 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_416 = YPsb((P)"X");
  lit_417 = YPsb((P)"CALL");
  lit_418 = YPsb((P)"N");
  lit_419 = YPsb((P)"0,");
  lit_420 = YPsb((P)"1,");
  lit_421 = YPsb((P)",");
  T10 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_151 = YPfab_met(FUNCODEREF(fun_to_c_151),T10,LITREF(lit_350),LITREF(lit_415),sloc(815),YPsb((P)"(fun ((e <regular-application>) f d out) (def function (application-function e)) (def n (len (application-arguments e))) (to-c (application-function e) f d out) (for ((arg (application-arguments e))) (to-c arg f d out)) (with-expression (e d out) (msg* out %sCALL%s (if (or (not f) (isa? f <ast-primitive>)) X ) (if (> n $number-call-templates) N n)) (between-parentheses (out) (puts out (if (application-known? e) 0, 1,)) (gen-ref (application-function e) out) (when (> n $number-call-templates) (msg* out ,%s n)) (for ((arg (application-arguments e))) (put out ,) (gen-ref arg out)))))"));
  T12 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T13 = fun_to_c_151;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSg2cYto_c,T11);
  lit_422 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_423 = YPsb((P)"%next-methods-reg-setter");
  T14 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLmethod_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_152 = YPfab_met(FUNCODEREF(fun_to_c_152),T14,LITREF(lit_350),LITREF(lit_422),sloc(832),YPsb((P)"(fun ((e <method-application>) f d out) (to-c (application-next-methods e) f d out) (with-statement (d out) (puts out (mangle-boot-name %next-methods-reg-setter)) (between-parentheses (out) (gen-ref (application-next-methods e) out))) (sup e f d out))"));
  T16 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T17 = fun_to_c_152;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSg2cYto_c,T15);
  lit_424 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_425 = YPPlist(1,YPPsym((P)"x"));
  lit_426 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_153 = YPfab_met(FUNCODEREF(fun_153),T20,YPfalse,LITREF(lit_425),sloc(840),YPsb((P)"(fun ((x ...)) #t)"));
  T19 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_154 = YPfab_met(FUNCODEREF(fun_154),T19,YPfalse,LITREF(lit_426),sloc(840),YPsb((P)"(fun ((x ...)) #f)"));
  T18 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_155 = YPfab_met(FUNCODEREF(fun_to_c_155),T18,LITREF(lit_350),LITREF(lit_424),sloc(839),YPsb((P)"(fun ((e <arguments>) f d out) (for-commas out ((x e)) (gen-ref x out)))"));
  T22 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T23 = fun_to_c_155;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSg2cYto_c,T21);
  lit_427 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_428 = YPsb((P)"check_type");
  lit_429 = YPsb((P)" = ");
  T24 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_156 = YPfab_met(FUNCODEREF(fun_to_c_156),T24,LITREF(lit_350),LITREF(lit_427),sloc(843),YPsb((P)"(fun ((e <fix-let>) f d out) (def low-let? (isa? e <low-let>)) (for ((binding (fix-let-bindings e)) (type (fix-let-types e)) (init (fix-let-arguments e))) (to-c init f d out) (unless (or (unconstrained-type? type) low-let?) (to-c type f d out) (with-statement (d out) (puts out check_type) (between-parentheses-comma-separated (out) (gen-ref init out) (gen-ref type out)))) (with-statement (d out) (binding->c binding out) (puts out  = ) (gen-ref init out))) (to-c (fix-let-body e) f d out))"));
  T26 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T27 = fun_to_c_156;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSg2cYto_c,T25);
  lit_430 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_431 = YPsb((P)" = ");
  T28 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_157 = YPfab_met(FUNCODEREF(fun_to_c_157),T28,LITREF(lit_350),LITREF(lit_430),sloc(860),YPsb((P)"(fun ((e <locals>) f d out) (for ((binding (locals-bindings e)) (init (locals-functions e))) (funshell-to-c binding init #f d out) (with-statement (d out) (binding->c binding out) (puts out  = ) (gen-ref init out))) (do2 (rcurry funinit-to-c f d out) (locals-bindings e) (locals-functions e)) (to-c (locals-body e) f d out))"));
  T30 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T31 = fun_to_c_157;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSg2cYto_c,T29);
  lit_432 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_433 = YPsb((P)"with_exit");
  T32 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_158 = YPfab_met(FUNCODEREF(fun_to_c_158),T32,LITREF(lit_350),LITREF(lit_432),sloc(870),YPsb((P)"(fun ((e <bind-exit>) f d out) (to-c (bind-exit-main-fun e) f d out) (with-expression (e d out) (puts out with_exit) (between-parentheses (out) (gen-ref (bind-exit-main-fun e) out))))"));
  T34 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T35 = fun_to_c_158;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSg2cYto_c,T33);
  lit_434 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_435 = YPsb((P)"with_cleanup");
  T36 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_159 = YPfab_met(FUNCODEREF(fun_to_c_159),T36,LITREF(lit_350),LITREF(lit_434),sloc(876),YPsb((P)"(fun ((e <unwind-protect>) f d out) (to-c (unwind-protect-protected-thunk e) f d out) (to-c (unwind-protect-cleanup-thunk e) f d out) (with-expression (e d out) (puts out with_cleanup) (between-parentheses-comma-separated (out) (gen-ref (unwind-protect-protected-thunk e) out) (gen-ref (unwind-protect-cleanup-thunk e) out))))"));
  T38 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T39 = fun_to_c_159;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSg2cYto_c,T37);
  lit_436 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_437 = YPsb((P)"XCALLN");
  lit_438 = YPsb((P)"1");
  lit_439 = YPsb((P)"%with-monitor");
  lit_440 = YPsb((P)"5");
  T40 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_160 = YPfab_met(FUNCODEREF(fun_to_c_160),T40,LITREF(lit_350),LITREF(lit_436),sloc(885),YPsb((P)"(fun ((e <monitor>) f d out) (to-c (monitor-type e) f d out) (to-c (monitor-info e) f d out) (to-c (monitor-test e) f d out) (to-c (monitor-handler e) f d out) (to-c (monitor-main-thunk e) f d out) (with-expression (e d out) (puts out XCALLN) (between-parentheses-comma-separated (out) (puts out 1) (puts out (mangle-boot-name %with-monitor)) (puts out 5) (gen-ref (monitor-type e) out) (gen-ref (monitor-info e) out) (gen-ref (monitor-test e) out) (gen-ref (monitor-handler e) out) (gen-ref (monitor-main-thunk e) out))))"));
  T42 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T43 = fun_to_c_160;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSg2cYto_c,T41);
  lit_441 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_442 = YPsb((P)"(P)");
  lit_443 = YPPlist(1,YPPsym((P)"x"));
  lit_444 = YPPlist(1,YPPsym((P)"x"));
  T46 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_161 = YPfab_met(FUNCODEREF(fun_161),T46,YPfalse,LITREF(lit_443),sloc(910),YPsb((P)"(fun ((x ...)) #t)"));
  T45 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_162 = YPfab_met(FUNCODEREF(fun_162),T45,YPfalse,LITREF(lit_444),sloc(910),YPsb((P)"(fun ((x ...)) #f)"));
  T44 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_163 = YPfab_met(FUNCODEREF(fun_to_c_163),T44,LITREF(lit_350),LITREF(lit_441),sloc(903),YPsb((P)"(fun ((e <predefined-application>) f d out) (def binding (application-binding e)) (for ((arg (application-arguments e))) (to-c arg f d out)) (with-expression (e d out) (msg* out (P)%s (mangle-binding (application-binding e))) (between-parentheses (out) (for-commas out ((arg (application-arguments e))) (gen-ref arg out)))))"));
  T48 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T49 = fun_to_c_163;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSg2cYto_c,T47);
  lit_445 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_446 = YPPlist(1,YPPsym((P)"x"));
  lit_447 = YPsb((P)"FUNFAB");
  lit_448 = YPsb((P)",");
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_164 = YPfab_met(FUNCODEREF(fun_164),T51,YPfalse,LITREF(lit_446),sloc(919),YPsb((P)"(fun (x) (to-c x f d out))"));
  T50 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_165 = YPfab_met(FUNCODEREF(fun_to_c_165),T50,LITREF(lit_350),LITREF(lit_445),sloc(913),YPsb((P)"(fun ((e <closure-creation>) f d out) (def n (len (closure-creation-free e))) (def f (elt *definitions* (closure-creation-index e))) (if (== n 0) (with-used-expression (e d out) (generate-function-binding out f)) (seq (do (fun (x) (to-c x f d out)) (closure-creation-free e)) (with-expression (e d out) (puts out FUNFAB) (between-parentheses (out) (generate-function-binding out f) (msg* out ,%d n) (for ((x (closure-creation-free e))) (put out ,) (gen-ref x out)))))))"));
  T53 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T54 = fun_to_c_165;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YevalSg2cYto_c,T52);
  lit_449 = YPPsym((P)"funshell-to-c");
  lit_450 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_451 = YPsb((P)"FUNSHELL");
  T55 = YPfab_sig(YPPlist(5,VARREF(YevalSmoduleYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_166 = YPfab_met(FUNCODEREF(fun_funshell_to_c_166),T55,LITREF(lit_449),LITREF(lit_450),sloc(928),YPsb((P)"(fun ((b <binding>) (e <closure-creation>) f d out) (def n (len (closure-creation-free e))) (def f (elt *definitions* (closure-creation-index e))) (with-expression (e d out) (if (== n 0) (generate-function-binding out f) (seq (puts out FUNSHELL) (between-parentheses-comma-separated (out) (msg* out %d (if (binding-dynamic-extent? b) 1 0)) (generate-function-binding out f) (msg* out %d n))))))"));
  T57 = VARREF_OR(YevalSg2cYfunshell_to_c,YPfalse);
  T58 = fun_funshell_to_c_166;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YevalSg2cYfunshell_to_c,T56);
  lit_452 = YPPsym((P)"funinit-to-c");
  lit_453 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_454 = YPPlist(1,YPPsym((P)"x"));
  lit_455 = YPsb((P)"FUNINIT");
  lit_456 = YPsb((P)", ");
  T60 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_167 = YPfab_met(FUNCODEREF(fun_167),T60,YPfalse,LITREF(lit_454),sloc(944),YPsb((P)"(fun (x) (to-c x f d out))"));
  T59 = YPfab_sig(YPPlist(5,VARREF(YevalSmoduleYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_168 = YPfab_met(FUNCODEREF(fun_funinit_to_c_168),T59,LITREF(lit_452),LITREF(lit_453),sloc(941),YPsb((P)"(fun ((b <binding>) (e <closure-creation>) f d out) (def n (len (closure-creation-free e))) (unless (== n 0) (do (fun (x) (to-c x f d out)) (closure-creation-free e)) (with-statement (d out) (puts out FUNINIT) (between-parentheses (out) (binding->c b out) (msg* out , %s n) (for ((x (closure-creation-free e))) (put out ,) (gen-ref x out))))))"));
  T62 = VARREF_OR(YevalSg2cYfuninit_to_c,YPfalse);
  T63 = fun_funinit_to_c_168;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSg2cYfuninit_to_c,T61);
  lit_457 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_458 = YPsb((P)"%macro");
  T64 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_169 = YPfab_met(FUNCODEREF(fun_to_c_169),T64,LITREF(lit_350),LITREF(lit_457),sloc(953),YPsb((P)"(fun ((e <ast-macro-definition>) f d out) (to-c (assignment-form e) #f d out) (with-expression (e d out) (puts out (mangle-boot-name %macro)) (between-parentheses-comma-separated (out) (generate-quotation out (binding-module-name (assignment-binding e))) (generate-quotation out (binding-name (assignment-binding e))) (gen-ref (assignment-form e) out))))"));
  T66 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T67 = fun_to_c_169;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSg2cYto_c,T65);
  lit_459 = YPPsym((P)"out-list-builder");
  lit_460 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"out"),YPPsym((P)"elts"));
  lit_461 = YPsb((P)"nil");
  lit_462 = YPsb((P)"%%list");
  T68 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_170 = YPfab_met(FUNCODEREF(fun_out_list_builder_170),T68,LITREF(lit_459),LITREF(lit_460),sloc(962),YPsb((P)"(fun ((f <fun>) out (elts <lst>)) (if (nul? elts) (puts out (mangle-boot-name nil)) (seq (puts out (mangle-boot-name %%list)) (between-parentheses (out) (msg* out %d (len elts)) (for ((e elts)) (put out ,) (f e))))))"));
  T70 = VARREF_OR(YevalSg2cYout_list_builder,YPfalse);
  T71 = fun_out_list_builder_170;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSg2cYout_list_builder,T69);
  lit_463 = YPPsym((P)"gen-fab-list");
  lit_464 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"refs"));
  lit_465 = YPPlist(1,YPPsym((P)"x"));
  T73 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_171 = YPfab_met(FUNCODEREF(fun_171),T73,YPfalse,LITREF(lit_465),sloc(975),YPsb((P)"(fun (x) (gen-ref x out))"));
  T72 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_172 = YPfab_met(FUNCODEREF(fun_gen_fab_list_172),T72,LITREF(lit_463),LITREF(lit_464),sloc(974),YPsb((P)"(fun (out (refs <fab-list>)) (out-list-builder (fun (x) (gen-ref x out)) out refs))"));
  T75 = VARREF_OR(YevalSg2cYgen_fab_list,YPfalse);
  T76 = fun_gen_fab_list_172;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSg2cYgen_fab_list,T74);
  lit_466 = YPPsym((P)"generate-function-specs");
  lit_467 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"sig"));
  T77 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_173 = YPfab_met(FUNCODEREF(fun_generate_function_specs_173),T77,LITREF(lit_466),LITREF(lit_467),sloc(977),YPsb((P)"(fun (out sig) (gen-fab-list out (req-sig-specs sig)))"));
  T79 = VARREF_OR(YevalSg2cYgenerate_function_specs,YPfalse);
  T80 = fun_generate_function_specs_173;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSg2cYgenerate_function_specs,T78);
  lit_468 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_469 = YPPlist(1,YPPsym((P)"x"));
  lit_470 = YPsb((P)"%fab-sig");
  lit_471 = YPsb((P)"nil");
  T82 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_174 = YPfab_met(FUNCODEREF(fun_174),T82,YPfalse,LITREF(lit_469),sloc(981),YPsb((P)"(fun (x) (to-c x f d out))"));
  T81 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_175 = YPfab_met(FUNCODEREF(fun_to_c_175),T81,LITREF(lit_350),LITREF(lit_468),sloc(980),YPsb((P)"(fun ((e <ast-signature>) f d out) (do (fun (x) (to-c x f d out)) (signature-specs e)) (to-c (signature-value e) f d out) (with-expression (e d out) (puts out (mangle-boot-name %fab-sig)) (between-parentheses-comma-separated (out) (generate-function-specs out e) (gen-ref (signature-nary? e) out) (gen-ref (signature-arity e) out) (gen-ref (signature-value e) out) (puts out (mangle-boot-name nil)))))"));
  T84 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T85 = fun_to_c_175;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSg2cYto_c,T83);
  lit_472 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_473 = YPsb((P)"%fab-gen");
  lit_474 = YPsb((P)"%false");
  T86 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_176 = YPfab_met(FUNCODEREF(fun_to_c_176),T86,LITREF(lit_350),LITREF(lit_472),sloc(992),YPsb((P)"(fun ((e <ast-generic>) f d out) (to-c (function-signature e) f d out) (with-expression (e d out) (puts out (mangle-boot-name %fab-gen)) (between-parentheses-comma-separated (out) (gen-ref (function-signature e) out) (gen-ref (function-debug-name e) out) (gen-ref (function-names e) out) (puts out (mangle-boot-name %false)))))"));
  T88 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T89 = fun_to_c_176;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSg2cYto_c,T87);
  lit_475 = YPPsym((P)"generate-function-forwards");
  lit_476 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_477 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  T90 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_177 = YPfab_met(FUNCODEREF(fun_generate_function_forwards_177),T90,LITREF(lit_475),LITREF(lit_476),sloc(1005),YPsb((P)"(fun (out definitions) (puts out \n/* FUNCTIONS: */\n\n) (for ((def definitions)) (generate-function-forward out def)))"));
  T92 = VARREF_OR(YevalSg2cYgenerate_function_forwards,YPfalse);
  T93 = fun_generate_function_forwards_177;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSg2cYgenerate_function_forwards,T91);
  lit_478 = YPPsym((P)"generate-function-forward");
  lit_479 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_480 = YPsb((P)"static");
  lit_481 = YPsb((P)"extern");
  lit_482 = YPsb((P)" P ");
  lit_483 = YPsb((P)" (");
  lit_484 = YPPlist(1,YPPsym((P)"x"));
  lit_485 = YPPlist(1,YPPsym((P)"x"));
  lit_486 = YPsb((P)"P");
  lit_487 = YPsb((P)");\n");
  T96 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_178 = YPfab_met(FUNCODEREF(fun_178),T96,YPfalse,LITREF(lit_484),sloc(1014),YPsb((P)"(fun ((x ...)) #t)"));
  T95 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_179 = YPfab_met(FUNCODEREF(fun_179),T95,YPfalse,LITREF(lit_485),sloc(1014),YPsb((P)"(fun ((x ...)) #f)"));
  T94 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_180 = YPfab_met(FUNCODEREF(fun_generate_function_forward_180),T94,LITREF(lit_478),LITREF(lit_479),sloc(1010),YPsb((P)"(fun (out (defn <ast-primitive>)) (msg* out %s P %s ( (if *dynamic-compilation?* static extern) (mangle-binding (function-binding defn))) (for-commas out ((i (below (len (function-bindings defn))))) (puts out P)) (puts out );\n))"));
  T98 = VARREF_OR(YevalSg2cYgenerate_function_forward,YPfalse);
  T99 = fun_generate_function_forward_180;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSg2cYgenerate_function_forward,T97);
  lit_488 = YPPsym((P)"generate-function-binding");
  lit_489 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_490 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_491 = YPsb((P)"fun_");
  lit_492 = YPsb((P)"fun_");
  lit_493 = YPsb((P)"_");
  T100 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_181 = YPfab_met(FUNCODEREF(fun_generate_function_binding_181),T100,LITREF(lit_488),LITREF(lit_489),sloc(1018),YPsb((P)"(fun (out defn) (def name (function-binding defn)) (if (and (isa? name <module-binding>) (mem? '(global runtime) (binding-kind name))) (puts out (mangle-binding name)) (if (== name #f) (msg* out fun_%s (function-index defn)) (let ((name (if (isa? name <local-binding>) (binding-name name) name))) (msg* out fun_%s_%s (mangle-raw-name name) (function-index defn))))))"));
  T102 = VARREF_OR(YevalSg2cYgenerate_function_binding,YPfalse);
  T103 = fun_generate_function_binding_181;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSg2cYgenerate_function_binding,T101);
  lit_494 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_495 = YPsb((P)"FUNFOR(");
  lit_496 = YPsb((P)"LOCFOR(");
  lit_497 = YPsb((P)");\n");
  T104 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_182 = YPfab_met(FUNCODEREF(fun_generate_function_forward_182),T104,LITREF(lit_478),LITREF(lit_494),sloc(1031),YPsb((P)"(fun (out defn) (def bound? (isa? (function-binding defn) <module-binding>)) (puts out (if bound? FUNFOR( LOCFOR()) (generate-function-binding out defn) (puts out );\n))"));
  T106 = VARREF_OR(YevalSg2cYgenerate_function_forward,YPfalse);
  T107 = fun_generate_function_forward_182;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSg2cYgenerate_function_forward,T105);
  lit_498 = YPPsym((P)"generate-function-bodies");
  lit_499 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_500 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_501 = YPPlist(1,YPPsym((P)"def"));
  T109 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_183 = YPfab_met(FUNCODEREF(fun_183),T109,YPfalse,LITREF(lit_501),sloc(1039),YPsb((P)"(fun (def) (generate-function-code out def))"));
  T108 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_184 = YPfab_met(FUNCODEREF(fun_generate_function_bodies_184),T108,LITREF(lit_498),LITREF(lit_499),sloc(1037),YPsb((P)"(fun (out definitions) (puts out \n/* FUNCTION CODES: */\n) (do (fun (def) (generate-function-code out def)) definitions))"));
  T111 = VARREF_OR(YevalSg2cYgenerate_function_bodies,YPfalse);
  T112 = fun_generate_function_bodies_184;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YevalSg2cYgenerate_function_bodies,T110);
  lit_502 = YPPsym((P)"generate-functions");
  lit_503 = YPPlist(4,YPPsym((P)"definitions"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_504 = YPPlist(1,YPPsym((P)"def"));
  T114 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_185 = YPfab_met(FUNCODEREF(fun_185),T114,YPfalse,LITREF(lit_504),sloc(1044),YPsb((P)"(fun (def) (unless (isa? def <ast-primitive>) (generate-closure-structure def f d out)))"));
  T113 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_186 = YPfab_met(FUNCODEREF(fun_generate_functions_186),T113,LITREF(lit_502),LITREF(lit_503),sloc(1043),YPsb((P)"(fun (definitions f d out) (do (fun (def) (unless (isa? def <ast-primitive>) (generate-closure-structure def f d out))) (rev definitions)))"));
  T116 = VARREF_OR(YevalSg2cYgenerate_functions,YPfalse);
  T117 = fun_generate_functions_186;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSg2cYgenerate_functions,T115);
  lit_505 = YPPsym((P)"generate-closure-structure");
  lit_506 = YPPlist(4,YPPsym((P)"definition"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_507 = YPsb((P)" = ");
  lit_508 = YPsb((P)"%fab-met");
  lit_509 = YPsb((P)"sloc(");
  lit_510 = YPsb((P)")");
  lit_511 = YPsb((P)"%false");
  T118 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_187 = YPfab_met(FUNCODEREF(fun_generate_closure_structure_187),T118,LITREF(lit_505),LITREF(lit_506),sloc(1049),YPsb((P)"(fun (definition f d out) (to-c (function-signature definition) f d out) (with-expression (definition d out) (generate-function-binding out definition) (msg* out  = %s (mangle-boot-name %fab-met)) (between-parentheses-comma-separated (out) (generate-function-body-reference out definition) (gen-ref (function-signature definition) out) (gen-ref (function-debug-name definition) out) (gen-ref (function-names definition) out) (if (program-line definition) (msg* out sloc(%d) (program-line definition)) (puts out (mangle-boot-name %false))) (gen-ref (function-source definition) out))))"));
  T120 = VARREF_OR(YevalSg2cYgenerate_closure_structure,YPfalse);
  T121 = fun_generate_closure_structure_187;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSg2cYgenerate_closure_structure,T119);
  lit_512 = YPPsym((P)"generate-function-body-reference");
  lit_513 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definition"));
  lit_514 = YPsb((P)"FUNCODEREF(");
  lit_515 = YPsb((P)")");
  T122 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_188 = YPfab_met(FUNCODEREF(fun_generate_function_body_reference_188),T122,LITREF(lit_512),LITREF(lit_513),sloc(1064),YPsb((P)"(fun (out definition) (puts out FUNCODEREF() (generate-function-binding out definition) (puts out )))"));
  T124 = VARREF_OR(YevalSg2cYgenerate_function_body_reference,YPfalse);
  T125 = fun_generate_function_body_reference_188;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSg2cYgenerate_function_body_reference,T123);
  lit_516 = YPPsym((P)"generate-return");
  lit_517 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_518 = YPsb((P)"return ");
  T126 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_189 = YPfab_met(FUNCODEREF(fun_generate_return_189),T126,LITREF(lit_516),LITREF(lit_517),sloc(1073),YPsb((P)"(fun ((defn <ast-primitive>) d out) (with-statement (d out) (puts out return ) (gen-ref (function-body defn) out)))"));
  T128 = VARREF_OR(YevalSg2cYgenerate_return,YPfalse);
  T129 = fun_generate_return_189;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSg2cYgenerate_return,T127);
  lit_519 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_520 = YPsb((P)"RET");
  T130 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_190 = YPfab_met(FUNCODEREF(fun_generate_return_190),T130,LITREF(lit_516),LITREF(lit_519),sloc(1077),YPsb((P)"(fun (defn d out) (with-statement (d out) (when (unconstrained-type? (function-value defn)) (put out Q)) (puts out RET) (between-parentheses (out) (gen-ref (function-body defn) out))))"));
  T132 = VARREF_OR(YevalSg2cYgenerate_return,YPfalse);
  T133 = fun_generate_return_190;
  T131 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T132,T133);
  VARSET(YevalSg2cYgenerate_return,T131);
  lit_521 = YPPsym((P)"primitive-inlinable?");
  lit_522 = YPPlist(1,YPPsym((P)"e"));
  lit_523 = YPPsym((P)"inline");
  lit_524 = YPPsym((P)"inline-c");
  T134 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_primitive_inlinableQ_191 = YPfab_met(FUNCODEREF(fun_primitive_inlinableQ_191),T134,LITREF(lit_521),LITREF(lit_522),sloc(1084),YPsb((P)"(fun ((e <ast-primitive>)) (or (mem? (function-adjectives e) 'inline) (mem? (function-adjectives e) 'inline-c)))"));
  T136 = VARREF_OR(YevalSg2cYprimitive_inlinableQ,YPfalse);
  T137 = fun_primitive_inlinableQ_191;
  T135 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T136,T137);
  VARSET(YevalSg2cYprimitive_inlinableQ,T135);
  lit_525 = YPPsym((P)"generate-function-code");
  lit_526 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"e"));
  lit_527 = YPsb((P)"\n");
  lit_528 = YPsb((P)"static ");
  lit_529 = YPsb((P)"INLINE ");
  lit_530 = YPsb((P)"P ");
  lit_531 = YPPlist(1,YPPsym((P)"x"));
  lit_532 = YPPlist(1,YPPsym((P)"x"));
  lit_533 = YPsb((P)"P ");
  lit_534 = YPsb((P)" {\n");
  lit_535 = YPsb((P)"DEFCREGS();\n");
  lit_536 = YPsb((P)"}\n");
  T140 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_192 = YPfab_met(FUNCODEREF(fun_192),T140,YPfalse,LITREF(lit_531),sloc(1094),YPsb((P)"(fun ((x ...)) #t)"));
  T139 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_193 = YPfab_met(FUNCODEREF(fun_193),T139,YPfalse,LITREF(lit_532),sloc(1094),YPsb((P)"(fun ((x ...)) #f)"));
  T138 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_194 = YPfab_met(FUNCODEREF(fun_generate_function_code_194),T138,LITREF(lit_525),LITREF(lit_526),sloc(1088),YPsb((P)"(fun (out (e <ast-primitive>)) (msg* out \n%s%sP  (if *dynamic-compilation?* static  ) (if (primitive-inlinable? e) INLINE  )) (binding->c (function-binding e) out) (between-parentheses (out) (for-commas out ((binding (function-bindings e))) (puts out P ) (binding->c binding out))) (puts out  {\n) (generate-local-temporaries (function-temporaries e) out) (generate-registers (function-registers e) out) (puts out DEFCREGS();\n) (to-c (function-body e) e 1 out) (generate-return e 1 out) (puts out }\n))"));
  T142 = VARREF_OR(YevalSg2cYgenerate_function_code,YPfalse);
  T143 = fun_generate_function_code_194;
  T141 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T142,T143);
  VARSET(YevalSg2cYgenerate_function_code,T141);
  lit_537 = YPPsym((P)"dispatcher?");
  lit_538 = YPPlist(1,YPPsym((P)"definition"));
  lit_539 = YPsb((P)"%dispatch");
  lit_540 = YPsb((P)"-dispatch");
  lit_541 = YPsb((P)"-dispatch");
  T144 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_195 = YPfab_met(FUNCODEREF(fun_dispatcherQ_195),T144,LITREF(lit_537),LITREF(lit_538),sloc(1104),YPsb((P)"(fun (definition) (def binding (function-binding definition)) (and (isa? binding <module-binding>) (let ((name (as <str> (binding-name binding)))) (or (= name %dispatch) (= (finds name -dispatch) (- (len name) (len -dispatch)))))))"));
  T146 = VARREF_OR(YevalSg2cYdispatcherQ,YPfalse);
  T147 = fun_dispatcherQ_195;
  T145 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T146,T147);
  VARSET(YevalSg2cYdispatcherQ,T145);
  lit_542 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definition"));
  lit_543 = YPsb((P)"\nFUNCODEDEF(");
  lit_544 = YPsb((P)"\nLOCCODEDEF(");
  lit_545 = YPsb((P)") {\n");
  lit_546 = YPsb((P)"P ");
  lit_547 = YPPlist(1,YPPsym((P)"x"));
  lit_548 = YPPlist(1,YPPsym((P)"x"));
  lit_549 = YPsb((P)"LINK_STACK();\n");
  lit_550 = YPPlist(1,YPPsym((P)"b"));
  lit_551 = YPsb((P)"NARGS(");
  lit_552 = YPsb((P)"ARG(");
  lit_553 = YPsb((P)", ");
  lit_554 = YPsb((P)")");
  lit_555 = YPsb((P)"UNLINK_STACK();\n");
  lit_556 = YPsb((P)"}\n");
  T151 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_196 = YPfab_met(FUNCODEREF(fun_196),T151,YPfalse,LITREF(lit_547),sloc(1122),YPsb((P)"(fun ((x ...)) #t)"));
  T150 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_197 = YPfab_met(FUNCODEREF(fun_197),T150,YPfalse,LITREF(lit_548),sloc(1122),YPsb((P)"(fun ((x ...)) #f)"));
  T149 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_198 = YPfab_met(FUNCODEREF(fun_198),T149,YPfalse,LITREF(lit_550),sloc(1128),YPsb((P)"(fun (b) (when (isa? b <binding>) (with-statement (1 out) (if (binding-dotted? b) (puts out NARGS() (puts out ARG()) (binding->c b out) (msg* out , %d) offset)) (set offset (+ offset 1))))"));
  T148 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_199 = YPfab_met(FUNCODEREF(fun_generate_function_code_199),T148,LITREF(lit_525),LITREF(lit_542),sloc(1112),YPsb((P)"(fun (out definition) (def offset 0) (def bindings (function-bindings definition)) (def bound? (isa? (function-binding definition) <module-binding>)) (puts out (if bound? \nFUNCODEDEF( \nLOCCODEDEF()) (generate-function-binding out definition) (puts out ) {\n) (unless (nul? bindings) (with-statement (1 out) (puts out P ) (for-commas out ((b (function-bindings definition))) (binding->c b out)))) (generate-local-temporaries (function-temporaries definition) out) (generate-registers (function-registers definition) out) (puts out LINK_STACK();\n) (do (fun (b) (when (isa? b <binding>) (with-statement (1 out) (if (binding-dotted? b) (puts out NARGS() (puts out ARG()) (binding->c b out) (msg* out , %d) offset)) (set offset (+ offset 1)))) bindings) (to-c (function-body definition) definition 1 out) (unless (dispatcher? definition) (puts out UNLINK_STACK();\n)) (generate-return definition 1 out) (puts out }\n))"));
  T153 = VARREF_OR(YevalSg2cYgenerate_function_code,YPfalse);
  T154 = fun_generate_function_code_199;
  T152 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T153,T154);
  VARSET(YevalSg2cYgenerate_function_code,T152);
  lit_557 = YPPsym((P)"generate-local-temporaries");
  lit_558 = YPPlist(2,YPPsym((P)"temps"),YPPsym((P)"out"));
  lit_559 = YPsb((P)"P ");
  T155 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_200 = YPfab_met(FUNCODEREF(fun_generate_local_temporaries_200),T155,LITREF(lit_557),LITREF(lit_558),sloc(1148),YPsb((P)"(fun (temps out) (for ((temp temps)) (with-statement (1 out) (puts out P ) (binding->c temp out))))"));
  T157 = VARREF_OR(YevalSg2cYgenerate_local_temporaries,YPfalse);
  T158 = fun_generate_local_temporaries_200;
  T156 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T157,T158);
  VARSET(YevalSg2cYgenerate_local_temporaries,T156);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_560 = YPPsym((P)"generate-registers");
  lit_561 = YPPlist(2,YPPsym((P)"regs"),YPPsym((P)"out"));
  lit_562 = YPsb((P)"P ");
  lit_563 = YPsb((P)";\n");
  T159 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_201 = YPfab_met(FUNCODEREF(fun_generate_registers_201),T159,LITREF(lit_560),LITREF(lit_561),sloc(1157),YPsb((P)"(fun ((regs <vec>) out) (def nregs (len regs)) (rep next-line ((j 0)) (when (< j nregs) (gen-depth 1 out) (puts out P ) (rep next-reg ((j j) (i 0)) (if (or (= i *registers-per-line*) (= j nregs)) (seq (puts out ;\n) (next-line j)) (seq (unless (= i 0) (put out ,)) (gen-ref (elt regs j) out) (next-reg (+ j 1) (+ i 1))))))))"));
  T161 = VARREF_OR(YevalSg2cYgenerate_registers,YPfalse);
  T162 = fun_generate_registers_201;
  T160 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T161,T162);
  VARSET(YevalSg2cYgenerate_registers,T160);
  lit_564 = YPPsym((P)"module-info-name");
  lit_565 = YPPlist(1,YPPsym((P)"name"));
  lit_566 = YPsb((P)"module_info_");
  T163 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_202 = YPfab_met(FUNCODEREF(fun_module_info_name_202),T163,LITREF(lit_564),LITREF(lit_565),sloc(1169),YPsb((P)"(fun (name) (cat module_info_ (mangle-raw-name name)))"));
  T165 = VARREF_OR(YevalSg2cYmodule_info_name,YPfalse);
  T166 = fun_module_info_name_202;
  T164 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T165,T166);
  VARSET(YevalSg2cYmodule_info_name,T164);
  lit_567 = YPPsym((P)"declare-imported-module-infos");
  lit_568 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_569 = YPPsym((P)"maybe-declare");
  lit_570 = YPPlist(1,YPPsym((P)"modname"));
  lit_571 = YPsb((P)"extern MODULE_INFO ");
  lit_572 = YPsb((P)";\n");
  lit_573 = YPPlist(1,YPPsym((P)"binding"));
  T169 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_203 = YPfab_met(FUNCODEREF(fun_maybe_declare_203),T169,LITREF(lit_569),LITREF(lit_570),sloc(1178),YPsb((P)"(fun (modname) (unless (elt-or seen modname #f) (set (elt seen modname) #t) (msg* out extern MODULE_INFO %s;\n (module-info-name modname))))"));
  T168 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_204 = YPfab_met(FUNCODEREF(fun_204),T168,YPfalse,LITREF(lit_573),sloc(1185),YPsb((P)"(fun (binding) (def home-mod (binding-module-name binding)) (unless (binding-native-to? binding mod) (maybe-declare home-mod)))"));
  T167 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYdeclare_imported_module_infos = YPfab_met(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),T167,LITREF(lit_567),LITREF(lit_568),sloc(1175),YPsb((P)"(fun (out mod) (def seen (fab <tab> 50)) (def env (module-target-environment mod)) (loc ((maybe-declare (modname) (unless (elt-or seen modname #f) (set (elt seen modname) #t) (msg* out extern MODULE_INFO %s;\n (module-info-name modname))))) (do maybe-declare (map module-name (environment-uses-modules env))) (do-static-global-bindings (fun (binding) (def home-mod (binding-module-name binding)) (unless (binding-native-to? binding mod) (maybe-declare home-mod))) (module-target-environment mod))))"));
  T170 = YevalSg2cYdeclare_imported_module_infos;
  VARSET(YevalSg2cYdeclare_imported_module_infos,T170);
  lit_574 = YPPsym((P)"generate-module-info");
  lit_575 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_576 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_577 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_578 = YPsb((P)"  {&");
  lit_579 = YPsb((P)"},\n");
  lit_580 = YPsb((P)"  {NULL}\n};\n");
  lit_581 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_582 = YPPlist(2,YPPsym((P)"local-name"),YPPsym((P)"binding"));
  lit_583 = YPsb((P)"  {");
  lit_584 = YPsb((P)", &");
  lit_585 = YPsb((P)", ");
  lit_586 = YPsb((P)"NULL");
  lit_587 = YPsb((P)"},\n");
  lit_588 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_589 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_590 = YPPlist(1,YPPsym((P)"binding"));
  lit_591 = YPsb((P)"  {");
  lit_592 = YPsb((P)", ");
  lit_593 = YPsb((P)"CVAR, &");
  lit_594 = YPsb((P)"},\n");
  lit_595 = YPsb((P)"DVAR, &");
  lit_596 = YPsb((P)"},\n");
  lit_597 = YPsb((P)"PVAR, NULL},\n");
  lit_598 = YPsb((P)"  {NULL, NVAR, NULL}\n};\n");
  lit_599 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_600 = YPsb((P)"  {");
  lit_601 = YPsb((P)", ");
  lit_602 = YPsb((P)"NULL");
  lit_603 = YPsb((P)"},\n");
  lit_604 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_605 = YPsb((P)"\nextern MODULE_INFO ");
  lit_606 = YPsb((P)";\n");
  lit_607 = YPsb((P)"MODULE_INFO ");
  lit_608 = YPsb((P)" = {\n");
  lit_609 = YPsb((P)"  ");
  lit_610 = YPsb((P)",\n");
  lit_611 = YPsb((P)"  NULL,\n");
  lit_612 = YPsb((P)"  use_infos,\n");
  lit_613 = YPsb((P)"  import_infos,\n");
  lit_614 = YPsb((P)"  binding_infos,\n");
  lit_615 = YPsb((P)"  export_infos,\n");
  lit_616 = YPsb((P)"};\n");
  T173 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_206 = YPfab_met(FUNCODEREF(fun_206),T173,YPfalse,LITREF(lit_582),sloc(1212),YPsb((P)"(fun (local-name binding) (unless (binding-native-to? binding mod) (msg* out   {%s, &%s, %s},\n (mangle-string-literal (binding-name binding)) (module-info-name (binding-module-name binding)) (if (== (binding-name binding) local-name) NULL (mangle-string-literal local-name)))))"));
  T172 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_207 = YPfab_met(FUNCODEREF(fun_207),T172,YPfalse,LITREF(lit_590),sloc(1226),YPsb((P)"(fun (binding) (when (binding-native-to? binding mod) (msg* out   {%s,  (mangle-string-literal (binding-name binding))) (case (binding-kind binding) (('global) (msg* out CVAR, &%s},\n (mangle-binding binding))) (('dynamic) (msg* out DVAR, &%s},\n (mangle-binding binding))) (#t (puts out PVAR, NULL},\n)))))"));
  T171 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPfab_met(FUNCODEREF(YevalSg2cYgenerate_module_info),T171,LITREF(lit_574),LITREF(lit_575),sloc(1194),YPsb((P)"(fun (out mod) (def name (module-name mod)) (def info-name (module-info-name name)) (def env (module-target-environment mod)) (def uses (environment-uses-modules env)) (def uses-names (map module-name uses)) (puts out \n/* MODULE ENVIRONMENT INFORMATION */\n\n) (declare-imported-module-infos out mod) (puts out \nstatic USE_INFO use_infos[] = {\n) (for ((n uses-names)) (msg* out   {&%s},\n (module-info-name n))) (puts out   {NULL}\n};\n) (puts out \nstatic IMPORT_INFO import_infos[] = {\n) (do-named-static-global-bindings (fun (local-name binding) (unless (binding-native-to? binding mod) (msg* out   {%s, &%s, %s},\n (mangle-string-literal (binding-name binding)) (module-info-name (binding-module-name binding)) (if (== (binding-name binding) local-name) NULL (mangle-string-literal local-name))))) (module-target-environment mod)) (puts out   {NULL,NULL,NULL}\n};\n) (puts out \nstatic BINDING_INFO binding_infos[] = {\n) (do-static-global-bindings (fun (binding) (when (binding-native-to? binding mod) (msg* out   {%s,  (mangle-string-literal (binding-name binding))) (case (binding-kind binding) (('global) (msg* out CVAR, &%s},\n (mangle-binding binding))) (('dynamic) (msg* out DVAR, &%s},\n (mangle-binding binding))) (#t (puts out PVAR, NULL},\n))))) (module-target-environment mod)) (puts out   {NULL, NVAR, NULL}\n};\n) (puts out \nstatic EXPORT_INFO export_infos[] = {\n) (for (((tup exported-as binding) (module-exports mod))) (msg* out   {%s, %s},\n (mangle-string-literal (binding-name binding)) (if (== (binding-name binding) exported-as) NULL (mangle-string-literal exported-as)))) (puts out   {NULL, NULL}\n};\n) (msg* out \nextern MODULE_INFO %s;\n info-name) (msg* out MODULE_INFO %s = {\n info-name) (msg* out   %s,\n (mangle-string-literal name)) (puts out   NULL,\n) (puts out   use_infos,\n) (puts out   import_infos,\n) (puts out   binding_infos,\n) (puts out   export_infos,\n) (puts out };\n))"));
  T174 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T174);
  lit_617 = YPPsym((P)"module-init-name");
  lit_618 = YPPlist(1,YPPsym((P)"name"));
  lit_619 = YPsb((P)"load_module_");
  T175 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_209 = YPfab_met(FUNCODEREF(fun_module_init_name_209),T175,LITREF(lit_617),LITREF(lit_618),sloc(1257),YPsb((P)"(fun (name) (cat load_module_ (mangle-raw-name name)))"));
  T177 = VARREF_OR(YevalSg2cYmodule_init_name,YPfalse);
  T178 = fun_module_init_name_209;
  T176 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T177,T178);
  VARSET(YevalSg2cYmodule_init_name,T176);
  lit_620 = YPPsym((P)"module-init-decl");
  lit_621 = YPPlist(1,YPPsym((P)"name"));
  lit_622 = YPsb((P)"void ");
  lit_623 = YPsb((P)" (void)");
  T179 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_210 = YPfab_met(FUNCODEREF(fun_module_init_decl_210),T179,LITREF(lit_620),LITREF(lit_621),sloc(1260),YPsb((P)"(fun (name) (cat void  (module-init-name name)  (void)))"));
  T181 = VARREF_OR(YevalSg2cYmodule_init_decl,YPfalse);
  T182 = fun_module_init_decl_210;
  T180 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T181,T182);
  VARSET(YevalSg2cYmodule_init_decl,T180);
  lit_624 = YPPsym((P)"generate-module-init");
  lit_625 = YPPlist(3,YPPsym((P)"out"),YPPsym((P)"mod"),YPPsym((P)"form"));
  lit_626 = YPsb((P)"dl");
  lit_627 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_628 = YPsb((P)"extern ");
  lit_629 = YPsb((P)";\n");
  lit_630 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_631 = YPsb((P)"extern ");
  lit_632 = YPsb((P)";\n\n");
  lit_633 = YPsb((P)" {\n");
  lit_634 = YPsb((P)"  static int need_init = 1;\n");
  lit_635 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_636 = YPsb((P)"  need_init = 0;\n");
  lit_637 = YPsb((P)"  ");
  lit_638 = YPsb((P)"();\n");
  lit_639 = YPsb((P)"\n");
  lit_640 = YPsb((P)"\n");
  lit_641 = YPsb((P)"}\n");
  T183 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_211 = YPfab_met(FUNCODEREF(fun_generate_module_init_211),T183,LITREF(lit_624),LITREF(lit_625),sloc(1263),YPsb((P)"(fun (out mod form) (def name (if *dynamic-compilation?* dl (module-name mod))) (def init-decl (module-init-decl name)) (def env (module-target-environment mod)) (def uses (environment-uses-modules env)) (def uses-names (map module-name uses)) (unless *dynamic-compilation?* (puts out \n/* MODULES USED: */\n\n) (for ((n uses-names)) (msg* out extern %s;\n (module-init-decl n)))) (puts out \n/* EXPRESSION: */\n\n) (msg* out extern %s;\n\n init-decl) (msg* out %s {\n init-decl) (puts out   static int need_init = 1;\n) (puts out   if (!need_init) return;\n\n) (puts out   need_init = 0;\n) (unless *dynamic-compilation?* (for ((n uses-names)) (msg* out   %s();\n (module-init-name n))) (puts out \n)) (to-c form #f 1 out) (puts out \n) (puts out }\n))"));
  T185 = VARREF_OR(YevalSg2cYgenerate_module_init,YPfalse);
  T186 = fun_generate_module_init_211;
  T184 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T185,T186);
  VARSET(YevalSg2cYgenerate_module_init,T184);
  lit_642 = YPPsym((P)"generate-main");
  lit_643 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_644 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_645 = YPsb((P)"extern MODULE_INFO ");
  lit_646 = YPsb((P)";\n");
  lit_647 = YPsb((P)"extern ");
  lit_648 = YPsb((P)";\n\n");
  lit_649 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &");
  lit_650 = YPsb((P)";\n\n");
  lit_651 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_652 = YPsb((P)"  ");
  lit_653 = YPsb((P)"%init-world");
  lit_654 = YPsb((P)"(argc, argv);\n");
  lit_655 = YPsb((P)"  ");
  lit_656 = YPsb((P)"();\n");
  lit_657 = YPsb((P)"  return 0;\n");
  lit_658 = YPsb((P)"}\n");
  T187 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_212 = YPfab_met(FUNCODEREF(fun_generate_main_212),T187,LITREF(lit_642),LITREF(lit_643),sloc(1289),YPsb((P)"(fun (out mod) (def name (module-name mod)) (def info-name (module-info-name name)) (puts out \n/* APPLICATION: */\n\n) (msg* out extern MODULE_INFO %s;\n info-name) (msg* out extern %s;\n\n (module-init-decl name)) (msg* out MODULE_INFO *goo_toplevel_module_info = &%s;\n\n info-name) (puts out int main(int argc, char* argv[]) {\n) (msg* out   %s(argc, argv);\n (mangle-boot-name %init-world)) (msg* out   %s();\n (module-init-name name)) (puts out   return 0;\n) (puts out }\n))"));
  T189 = VARREF_OR(YevalSg2cYgenerate_main,YPfalse);
  T190 = fun_generate_main_212;
  T188 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T189,T190);
  VARSET(YevalSg2cYgenerate_main,T188);
  T191 = YPfalse;
  return T191;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_evalSast_linearize;
extern MODULE_INFO module_info_evalStypist;
extern MODULE_INFO module_info_evalSoptimize;
extern MODULE_INFO module_info_evalSmodule;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseqx;
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
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_evalSdependency;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSsystem},
  {&module_info_gooSioSwrite},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSstr},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSast_linearize},
  {&module_info_evalStypist},
  {&module_info_evalSoptimize},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"box-reference", &module_info_evalSast_linearize, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"recurring-write", &module_info_gooSioSwrite, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"extract-things!", &module_info_evalSast_linearize, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"top", &module_info_evalStop, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"<box-creation>", &module_info_evalSast_linearize, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"msg*", &module_info_gooSioSwrite, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"gather-temporaries!", &module_info_evalSast_linearize, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"function-specs", &module_info_evalSast, NULL},
  {"load", &module_info_evalStop, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
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
  {"%class-forward", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"closure-creation-free", &module_info_evalSast_linearize, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"function-names", &module_info_evalSast, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<box-write>", &module_info_evalSast_linearize, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"form-program", &module_info_evalSast_linearize, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"write-type", &module_info_gooSioSwrite, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"closurize-main!", &module_info_evalSast_linearize, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"closure-creation-index", &module_info_evalSast_linearize, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"insert-box!", &module_info_evalSast_linearize, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"potentially-joint?", &module_info_evalSoptimize, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"unconstrained-type?", &module_info_evalSoptimize, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"sorted-applicable-methods-using-types", &module_info_evalSoptimize, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"register-allocate!", &module_info_evalSast_linearize, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"$", &module_info_evalStop, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"form-quotations", &module_info_evalSast_linearize, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"form-definitions", &module_info_evalSast_linearize, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
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
  {"<sig>", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"*register-passive?*", &module_info_evalSast_linearize, NULL},
  {"type-infer", &module_info_evalStypist, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"<closure-creation>", &module_info_evalSast_linearize, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"program-bindings", &module_info_evalSast_linearize, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"type-equiv?", &module_info_evalSoptimize, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"program-definitions", &module_info_evalSast_linearize, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"box-form", &module_info_evalSast_linearize, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"lift!", &module_info_evalSast_linearize, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"<top-level-form>", &module_info_evalSast_linearize, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"reference-self?", &module_info_evalSast_linearize, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"<box-read>", &module_info_evalSast_linearize, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"analyze-calls", &module_info_evalSoptimize, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"flatten-seqs", &module_info_evalSast_linearize, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"vm-evaluate", &module_info_evalStop, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"program-quotations", &module_info_evalSast_linearize, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"reference-offset", &module_info_evalSast_linearize, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"program-form", &module_info_evalSast_linearize, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"<free-reference>", &module_info_evalSast_linearize, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"funinit-to-c", CVAR, &YevalSg2cYfuninit_to_c},
  {"$mangles-data", CVAR, &YevalSg2cYDmangles_data},
  {"mangle-string-literal", CVAR, &YevalSg2cYmangle_string_literal},
  {"generate-trailer", CVAR, &YevalSg2cYgenerate_trailer},
  {"$method-mangled-marker-string", CVAR, &YevalSg2cYDmethod_mangled_marker_string},
  {"generate-closure-structure", CVAR, &YevalSg2cYgenerate_closure_structure},
  {"generate-module-info", CVAR, &YevalSg2cYgenerate_module_info},
  {"$number-call-templates", CVAR, &YevalSg2cYDnumber_call_templates},
  {"<g2c-module>", CVAR, &YevalSg2cYLg2c_moduleG},
  {"mangle-module-into", CVAR, &YevalSg2cYmangle_module_into},
  {"---main-0---", PVAR, NULL},
  {"binding->c", CVAR, &YevalSg2cYbinding_Gc},
  {"<g2c-module-loader>", CVAR, &YevalSg2cYLg2c_module_loaderG},
  {"module-init-name", CVAR, &YevalSg2cYmodule_init_name},
  {"$local-suffix", CVAR, &YevalSg2cYDlocal_suffix},
  {"for-mods", PVAR, NULL},
  {"$module-marker", CVAR, &YevalSg2cYDmodule_marker},
  {"g2c-ast", CVAR, &YevalSg2cYg2c_ast},
  {"module-src-file", CVAR, &YevalSg2cYmodule_src_file},
  {"generate-quotation-forwards", CVAR, &YevalSg2cYgenerate_quotation_forwards},
  {"gen-depth", CVAR, &YevalSg2cYgen_depth},
  {"g2c-clean", CVAR, &YevalSg2cYg2c_clean},
  {"generate-local-temporaries", CVAR, &YevalSg2cYgenerate_local_temporaries},
  {"generate-quotation", CVAR, &YevalSg2cYgenerate_quotation},
  {"$hygiene-marker", CVAR, &YevalSg2cYDhygiene_marker},
  {"for-commas", PVAR, NULL},
  {"mangle-boot-name", CVAR, &YevalSg2cYmangle_boot_name},
  {"buf-cat2!", CVAR, &YevalSg2cYbuf_cat2X},
  {"mangler-reset", CVAR, &YevalSg2cYmangler_reset},
  {"$c-escapes", CVAR, &YevalSg2cYDc_escapes},
  {"compute-ast", CVAR, &YevalSg2cYcompute_ast},
  {"generate-function-bodies", CVAR, &YevalSg2cYgenerate_function_bodies},
  {"---main-1---", PVAR, NULL},
  {"---main-2---", PVAR, NULL},
  {"mangle-raw-name", CVAR, &YevalSg2cYmangle_raw_name},
  {"generate-function-forward", CVAR, &YevalSg2cYgenerate_function_forward},
  {"float-to-c-string", CVAR, &YevalSg2cYfloat_to_c_string},
  {"generate-function-forwards", CVAR, &YevalSg2cYgenerate_function_forwards},
  {"g2c-def-app", CVAR, &YevalSg2cYg2c_def_app},
  {"$min-character-code", CVAR, &YevalSg2cYDmin_character_code},
  {"generate-function-code", CVAR, &YevalSg2cYgenerate_function_code},
  {"g2c-goo", CVAR, &YevalSg2cYg2c_goo},
  {"generate-function-specs", CVAR, &YevalSg2cYgenerate_function_specs},
  {"*tmp-file-counter*", DVAR, &YevalSg2cYTtmp_file_counterT},
  {"*lits-at*", CVAR, &YevalSg2cYTlits_atT},
  {"module-mtime-setter", CVAR, &YevalSg2cYmodule_mtime_setter},
  {"compile-load", CVAR, &YevalSg2cYcompile_load},
  {"generate-global-binding", CVAR, &YevalSg2cYgenerate_global_binding},
  {"*loop-arg-counter*", DVAR, &YevalSg2cYTloop_arg_counterT},
  {"g2c-exp", CVAR, &YevalSg2cYg2c_exp},
  {"generate-c-module", CVAR, &YevalSg2cYgenerate_c_module},
  {"*mangle-buffer*", CVAR, &YevalSg2cYTmangle_bufferT},
  {"ref-lit", CVAR, &YevalSg2cYref_lit},
  {"g2c-test", CVAR, &YevalSg2cYg2c_test},
  {"with-statement", PVAR, NULL},
  {"module-mtime", CVAR, &YevalSg2cYmodule_mtime},
  {"module-loader-appname", CVAR, &YevalSg2cYmodule_loader_appname},
  {"module-loader-app-modname", CVAR, &YevalSg2cYmodule_loader_app_modname},
  {"%print-cpu-usage", PVAR, NULL},
  {"funshell-to-c", CVAR, &YevalSg2cYfunshell_to_c},
  {"generate-registers", CVAR, &YevalSg2cYgenerate_registers},
  {"module-init-decl", CVAR, &YevalSg2cYmodule_init_decl},
  {"generate-main", CVAR, &YevalSg2cYgenerate_main},
  {"mangle-integer", CVAR, &YevalSg2cYmangle_integer},
  {"*definitions*", DVAR, &YevalSg2cYTdefinitionsT},
  {"$escape-marker", CVAR, &YevalSg2cYDescape_marker},
  {"bb?", CVAR, &YevalSg2cYbbQ},
  {"to-c", CVAR, &YevalSg2cYto_c},
  {"out-list-builder", CVAR, &YevalSg2cYout_list_builder},
  {"generate-header", CVAR, &YevalSg2cYgenerate_header},
  {"generate-module-init", CVAR, &YevalSg2cYgenerate_module_init},
  {"*trace-registers?*", CVAR, &YevalSg2cYTtrace_registersQT},
  {"$name-mangler-table", CVAR, &YevalSg2cYDname_mangler_table},
  {"generate-quotations", CVAR, &YevalSg2cYgenerate_quotations},
  {"gen-fab-list", CVAR, &YevalSg2cYgen_fab_list},
  {"purge-outdated-modules", CVAR, &YevalSg2cYpurge_outdated_modules},
  {"gen-result", CVAR, &YevalSg2cYgen_result},
  {"declare-imported-module-infos", CVAR, &YevalSg2cYdeclare_imported_module_infos},
  {"false-name", CVAR, &YevalSg2cYfalse_name},
  {"*lits*", CVAR, &YevalSg2cYTlitsT},
  {"$local-marker", CVAR, &YevalSg2cYDlocal_marker},
  {"gen-ref", CVAR, &YevalSg2cYgen_ref},
  {"char-buffer-as-string", CVAR, &YevalSg2cYchar_buffer_as_string},
  {"with-expression", PVAR, NULL},
  {"$iep-suffix", CVAR, &YevalSg2cYDiep_suffix},
  {"mangle-global-name", CVAR, &YevalSg2cYmangle_global_name},
  {"mangle-local-marked-name", CVAR, &YevalSg2cYmangle_local_marked_name},
  {"reference->c", CVAR, &YevalSg2cYreference_Gc},
  {"with-used-expression", PVAR, NULL},
  {"$hygiene-char", CVAR, &YevalSg2cYDhygiene_char},
  {"generate-global-environment", CVAR, &YevalSg2cYgenerate_global_environment},
  {"generate-c-application", CVAR, &YevalSg2cYgenerate_c_application},
  {"between-parentheses", PVAR, NULL},
  {"mangle-binding", CVAR, &YevalSg2cYmangle_binding},
  {"---main-3---", PVAR, NULL},
  {"generate-function-body-reference", CVAR, &YevalSg2cYgenerate_function_body_reference},
  {"*registers-per-line*", CVAR, &YevalSg2cYTregisters_per_lineT},
  {"module-up-to-date?", CVAR, &YevalSg2cYmodule_up_to_dateQ},
  {"module-src-file-setter", CVAR, &YevalSg2cYmodule_src_file_setter},
  {"generate-return", CVAR, &YevalSg2cYgenerate_return},
  {"$max-character-code", CVAR, &YevalSg2cYDmax_character_code},
  {"$escape-separator", CVAR, &YevalSg2cYDescape_separator},
  {"pp", CVAR, &YevalSg2cYpp},
  {"g2c-top", CVAR, &YevalSg2cYg2c_top},
  {"mangle-name-into", CVAR, &YevalSg2cYmangle_name_into},
  {"generate-makefile", CVAR, &YevalSg2cYgenerate_makefile},
  {"mangle-quotation-name", CVAR, &YevalSg2cYmangle_quotation_name},
  {"*g2c-app*", CVAR, &YevalSg2cYTg2c_appT},
  {"$iep-marker", CVAR, &YevalSg2cYDiep_marker},
  {"dispatcher?", CVAR, &YevalSg2cYdispatcherQ},
  {"$module-separator", CVAR, &YevalSg2cYDmodule_separator},
  {"between-parentheses-comma-separated", PVAR, NULL},
  {"generate-functions", CVAR, &YevalSg2cYgenerate_functions},
  {"compute-program", CVAR, &YevalSg2cYcompute_program},
  {"generate-function-binding", CVAR, &YevalSg2cYgenerate_function_binding},
  {"g2c-build-app", CVAR, &YevalSg2cYg2c_build_app},
  {"mangle-local-name", CVAR, &YevalSg2cYmangle_local_name},
  {"$method-mangled-marker", CVAR, &YevalSg2cYDmethod_mangled_marker},
  {"$number-characters", CVAR, &YevalSg2cYDnumber_characters},
  {"primitive-inlinable?", CVAR, &YevalSg2cYprimitive_inlinableQ},
  {"$now-mod-var-name", CVAR, &YevalSg2cYDnow_mod_var_name},
  {"module-info-name", CVAR, &YevalSg2cYmodule_info_name},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-ast", NULL},
  {"g2c-def-app", NULL},
  {"g2c-test", NULL},
  {"g2c-clean", NULL},
  {"g2c-exp", NULL},
  {"g2c-top", NULL},
  {"g2c-eval", NULL},
  {"g2c-goo", NULL},
  {"g2c-build-app", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSg2c;
MODULE_INFO module_info_evalSg2c = {
  "eval/g2c",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_evalSast (void);
extern void load_module_evalStop (void);
extern void load_module_evalSast_linearize (void);
extern void load_module_evalStypist (void);
extern void load_module_evalSoptimize (void);

/* EXPRESSION: */

extern void load_module_evalSg2c (void);

void load_module_evalSg2c (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSsystem();
  load_module_gooSioSwrite();
  load_module_gooScolsScol();
  load_module_gooScolsSstr();
  load_module_evalSast();
  load_module_evalStop();
  load_module_evalSast_linearize();
  load_module_evalStypist();
  load_module_evalSoptimize();

  (P)YevalSg2cY___main_0___();
  (P)YevalSg2cY___main_1___();
  (P)YevalSg2cY___main_2___();
  (P)YevalSg2cY___main_3___();

}

/* END OF GENERATED CODE. */
