/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/g2c");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/g2c */

DYNEXT(YevalSmoduleYTdynamic_compilationQT,"eval/module","*dynamic-compilation?*");
EXT(YevalSmoduleYenvironment_allows_foreign_namesQ,"eval/module","environment-allows-foreign-names?");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSoptimizeYunconstrained_typeQ,"eval/optimize","unconstrained-type?");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSmoduleYbinding_kind,"eval/module","binding-kind");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
EXT(YevalSmoduleYenvironment_next,"eval/module","environment-next");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YOelt,"goo/boot","@elt");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YevalSmoduleYframe_bindings,"eval/module","frame-bindings");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSmoduleYbinding_prop,"eval/module","binding-prop");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSmoduleYbinding_info_setter,"eval/module","binding-info-setter");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSoptimizeYsorted_applicable_methods_using_types,"eval/optimize","sorted-applicable-methods-using-types");
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YevalSmoduleYenvironment_uses_modules,"eval/module","environment-uses-modules");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
DEF(YevalSg2cYmangle_module_into,"eval/g2c","mangle-module-into");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYfunction_inlineableQ,"eval/ast","function-inlineable?");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSmoduleYfind_syntax_environment,"eval/module","find-syntax-environment");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSmoduleYbinding_mangled_name,"eval/module","binding-mangled-name");
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSmoduleYLstatic_local_environmentG,"eval/module","<static-local-environment>");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(Yerror,"goo/boot","error");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYfunction_names,"eval/ast","function-names");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSg2cYpp,"eval/g2c","pp");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSmoduleYinsert_globalX,"eval/module","insert-global!");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSoptimizeYtype_equivQ,"eval/optimize","type-equiv?");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
DEF(YevalSg2cYref_lit,"eval/g2c","ref-lit");
EXT(YevalSmoduleYload_in,"eval/module","load-in");
EXT(YevalStopYread_file,"eval/top","read-file");
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
DYNEXT(YevalSmoduleYTcurrent_subtransactionT,"eval/module","*current-subtransaction*");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YevalSmoduleYremove_modules_by_nameX,"eval/module","remove-modules-by-name!");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSmoduleYbinding_global_box,"eval/module","binding-global-box");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(YevalSmoduleYLbindingG,"eval/module","<binding>");
EXT(YevalSmoduleYLmodule_bindingG,"eval/module","<module-binding>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YOdo,"goo/boot","@do");
EXT(YevalSmoduleYdo_module_loader_modules,"eval/module","do-module-loader-modules");
EXT(YevalSmoduleYroll_back_transaction,"eval/module","roll-back-transaction");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YevalSmoduleYmodule_uses_c_includes,"eval/module","module-uses-c-includes");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSmoduleYenvironment_bindings,"eval/module","environment-bindings");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSmoduleYbinding_info,"eval/module","binding-info");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalSmoduleYinstall_initial_bindings,"eval/module","install-initial-bindings");
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
EXT(YevalSmoduleYinsert_globalsX,"eval/module","insert-globals!");
DEF(YevalSg2cYbuf_cat2X,"eval/g2c","buf-cat2!");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YLboxG,"goo/boot","<box>");
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
EXT(YevalSmoduleYdo_named_static_global_bindings,"eval/module","do-named-static-global-bindings");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
EXT(YOallQ,"goo/boot","@all?");
EXT(YevalSmoduleYunchecked_runtime_environment,"eval/module","unchecked-runtime-environment");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
EXT(YtT,"goo/boot","t*");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YLcolG,"goo/boot","<col>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSmoduleYmodule_name,"eval/module","module-name");
DEF(YevalSg2cYTlitsT,"eval/g2c","*lits*");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
DEF(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSmoduleYmodule_uses_c_files,"eval/module","module-uses-c-files");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
EXT(YevalSmoduleYreport_undefined_global_bindings,"eval/module","report-undefined-global-bindings");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSmoduleYbinding_freeQ_setter,"eval/module","binding-free?-setter");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSmoduleYbinding_inferred_type_setter,"eval/module","binding-inferred-type-setter");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSmoduleYenv_object_name,"eval/module","env-object-name");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSmoduleYfab_static_global_environment,"eval/module","fab-static-global-environment");
EXT(YevalSmoduleYmodule_referenced_bindings,"eval/module","module-referenced-bindings");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
EXT(YgooSpackerYpacker,"goo/packer","packer");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YevalSmoduleYLstatic_environmentG,"eval/module","<static-environment>");
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
EXT(YevalSmoduleYregister_referenced_binding,"eval/module","register-referenced-binding");
EXT(YgooSmathYA,"goo/math","+");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalStopYvm_evaluate,"eval/top","vm-evaluate");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSoptimizeYanalyze_calls,"eval/optimize","analyze-calls");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YOmap,"goo/boot","@map");
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YOlit,"goo/boot","@lit");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YOnew,"goo/boot","@new");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
EXT(YevalSmoduleYreload_modules,"eval/module","reload-modules");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSmoduleYfab_subset_environment,"eval/module","fab-subset-environment");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
DYNDEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YevalSmoduleYmodule_name_to_relpath,"eval/module","module-name-to-relpath");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
EXT(YevalSmoduleYDgoo_boot_module_name,"eval/module","$goo-boot-module-name");
EXT(YevalSmoduleYruntime_module,"eval/module","runtime-module");
EXT(YLintG,"goo/boot","<int>");
EXT(YevalSmoduleYLstatic_global_environmentG,"eval/module","<static-global-environment>");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSmoduleYLbinding_nameG,"eval/module","<binding-name>");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
EXT(Ynot,"goo/boot","not");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSmoduleYimport_globalX,"eval/module","import-global!");
EXT(YevalSmoduleYimport_and_mangle_globalX,"eval/module","import-and-mangle-global!");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YevalStypistYtype_infer,"eval/typist","type-infer");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YevalSmoduleYprobe_module,"eval/module","probe-module");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DYNDEF(YevalSg2cYTloop_arg_counterT,"eval/g2c","*loop-arg-counter*");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
EXT(YLnumG,"goo/boot","<num>");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YevalSmoduleYmodule_data_processedQ,"eval/module","module-data-processed?");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSmoduleYfind_binding,"eval/module","find-binding");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
EXT(YevalSmoduleYmodule_mangled_string_name_setter,"eval/module","module-mangled-string-name-setter");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(YevalSmoduleYmodule_mangled_string_name,"eval/module","module-mangled-string-name");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSoptimizeYpotentially_jointQ,"eval/optimize","potentially-joint?");
EXT(YevalSmoduleYmodule_target_environment,"eval/module","module-target-environment");
EXT(YevalStopYD,"eval/top","$");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSmoduleYbinding_native_toQ,"eval/module","binding-native-to?");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YevalSmoduleYLnamespace_errorG,"eval/module","<namespace-error>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YevalSmoduleYLmoduleG,"eval/module","<module>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(Ynew,"goo/boot","new");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YevalSmoduleYtransaction_register_dependent,"eval/module","transaction-register-dependent");
EXT(YevalSmoduleYtransaction_register_implemented_binding,"eval/module","transaction-register-implemented-binding");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSmoduleYcall_with_subtransaction,"eval/module","call-with-subtransaction");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YevalSmoduleYwalk_bindings,"eval/module","walk-bindings");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
EXT(YOrev,"goo/boot","@rev");
EXT(YevalSmoduleYmodule_runtime_data_setter,"eval/module","module-runtime-data-setter");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSmoduleYdo_static_global_bindings,"eval/module","do-static-global-bindings");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSmoduleYbinding_freeQ,"eval/module","binding-free?");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSmoduleYglobal_box_value_setter,"eval/module","global-box-value-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSmoduleYregister_moduleX,"eval/module","register-module!");
EXT(YevalSmoduleYbinding_prop_setter,"eval/module","binding-prop-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSmoduleYmodule_loader_stack,"eval/module","module-loader-stack");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
EXT(YevalSmoduleYruntime_environment,"eval/module","runtime-environment");
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YOOEE,"goo/boot","@@==");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSmoduleYmodule_mangled_name_setter,"eval/module","module-mangled-name-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYfunction_arity,"eval/ast","function-arity");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
DEF(YevalSg2cYmangle_binding,"eval/g2c","mangle-binding");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YevalSg2cYmangle_quotation_name,"eval/g2c","mangle-quotation-name");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YevalSmoduleYload_module,"eval/module","load-module");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YevalSmoduleYset_module_environments,"eval/module","set-module-environments");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YevalSmoduleYbinding_module_name,"eval/module","binding-module-name");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSmoduleYbinding_inferred_type,"eval/module","binding-inferred-type");
EXT(YevalSmoduleYLglobal_boxG,"eval/module","<global-box>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSmoduleYfind_static_global_environment,"eval/module","find-static-global-environment");
EXT(YevalSmoduleYbinding_locative_setter,"eval/module","binding-locative-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSmoduleYmodule_transaction,"eval/module","module-transaction");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YevalSmoduleYnamespace_error,"eval/module","namespace-error");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YOlst,"goo/boot","@lst");
DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSclassYclone,"goo/class","clone");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSmoduleYbinding_type_setter,"eval/module","binding-type-setter");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSmoduleYmodule_exports,"eval/module","module-exports");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSmoduleYmodule_syntax_environment,"eval/module","module-syntax-environment");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalSmoduleYbinding_kind_setter,"eval/module","binding-kind-setter");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YevalSmoduleYbinding_locative,"eval/module","binding-locative");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YevalSmoduleYzap_referenced_bindingsX,"eval/module","zap-referenced-bindings!");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSmoduleYexport_bindingX,"eval/module","export-binding!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YevalSmoduleYbinding_handler_setter,"eval/module","binding-handler-setter");
EXT(YevalSmoduleYbinding_name,"eval/module","binding-name");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSmoduleYenvironment_module,"eval/module","environment-module");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YevalSmoduleYmodule_data_processedQ_setter,"eval/module","module-data-processed?-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSmoduleYbinding_module,"eval/module","binding-module");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YevalSmoduleYbinding_handler,"eval/module","binding-handler");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YOfold,"goo/boot","@fold");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yunexec,"goo/boot","unexec");
DEF(YevalSg2cYgenerate_function_forward,"eval/g2c","generate-function-forward");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YevalSastYLmethod_applicationG,"eval/ast","<method-application>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
DEF(YevalSg2cYbbQ,"eval/g2c","bb?");
EXT(YevalSmoduleYLstatic_nul_environmentG,"eval/module","<static-nul-environment>");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
EXT(YevalSmoduleYmodule_runtime_data,"eval/module","module-runtime-data");
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSmoduleYfind_environment_module,"eval/module","find-environment-module");
EXT(YgooSlogYE,"goo/log","=");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YevalSmoduleYbinding_mangled_name_setter,"eval/module","binding-mangled-name-setter");
DYNDEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YevalSmoduleYensure_module_data,"eval/module","ensure-module-data");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSmoduleYruntime_module_loader,"eval/module","runtime-module-loader");
EXT(YevalSmoduleYLmodule_loaderG,"eval/module","<module-loader>");
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YPtrue,"goo/boot","%true");
EXT(YevalSmoduleYglobal_box_value,"eval/module","global-box-value");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
EXT(YevalSmoduleYmodule_loader_module_type,"eval/module","module-loader-module-type");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YevalSmoduleYmodule_mangled_name,"eval/module","module-mangled-name");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalStopYload,"eval/top","load");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
DEF(YevalSg2cYDnow_mod_var_name,"eval/g2c","$now-mod-var-name");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSmoduleYbinding_global_box_setter,"eval/module","binding-global-box-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YevalSastYapplication_next_methods,"eval/ast","application-next-methods");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
DEF(YevalSg2cYTlits_atT,"eval/g2c","*lits-at*");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSmoduleYmodule_uses_c_libraries,"eval/module","module-uses-c-libraries");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSmoduleYenvironment_module_loader,"eval/module","environment-module-loader");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YevalSmoduleYbinding_type,"eval/module","binding-type");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSastYfunction_specs,"eval/ast","function-specs");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_107);
DEFLIT(lit_642);
DEFLIT(lit_638);
DEFLIT(lit_57);
DEFLIT(lit_342);
DEFLIT(lit_451);
DEFLIT(lit_603);
DEFLIT(lit_613);
DEFLIT(lit_610);
DEFLIT(lit_224);
DEFLIT(lit_250);
DEFLIT(lit_136);
DEFLIT(lit_426);
DEFLIT(lit_465);
DEFLIT(lit_446);
DEFLIT(lit_417);
DEFLIT(lit_341);
DEFLIT(lit_602);
DEFLIT(lit_460);
DEFLIT(lit_128);
DEFLIT(lit_566);
DEFLIT(lit_86);
DEFLIT(lit_421);
DEFLIT(lit_265);
DEFLIT(lit_262);
DEFLIT(lit_196);
DEFLIT(lit_633);
DEFLIT(lit_279);
DEFLIT(lit_543);
DEFLIT(lit_647);
DEFLIT(lit_175);
DEFLIT(lit_418);
DEFLIT(lit_430);
DEFLIT(lit_145);
DEFLIT(lit_362);
DEFLIT(lit_231);
DEFLIT(lit_83);
DEFLIT(lit_53);
DEFLIT(lit_248);
DEFLIT(lit_535);
DEFLIT(lit_229);
DEFLIT(lit_155);
DEFLIT(lit_580);
DEFLIT(lit_544);
DEFLIT(lit_646);
DEFLIT(lit_306);
DEFLIT(lit_637);
DEFLIT(lit_413);
DEFLIT(lit_205);
DEFLIT(lit_200);
DEFLIT(lit_335);
DEFLIT(lit_575);
DEFLIT(lit_312);
DEFLIT(lit_624);
DEFLIT(lit_555);
DEFLIT(lit_236);
DEFLIT(lit_123);
DEFLIT(lit_595);
DEFLIT(lit_526);
DEFLIT(lit_459);
DEFLIT(lit_316);
DEFLIT(lit_311);
DEFLIT(lit_567);
DEFLIT(lit_237);
DEFLIT(lit_54);
DEFLIT(lit_428);
DEFLIT(lit_412);
DEFLIT(lit_429);
DEFLIT(lit_151);
DEFLIT(lit_65);
DEFLIT(lit_154);
DEFLIT(lit_187);
DEFLIT(lit_437);
DEFLIT(lit_220);
DEFLIT(lit_493);
DEFLIT(lit_370);
DEFLIT(lit_364);
DEFLIT(lit_365);
DEFLIT(lit_188);
DEFLIT(lit_604);
DEFLIT(lit_33);
DEFLIT(lit_381);
DEFLIT(lit_467);
DEFLIT(lit_168);
DEFLIT(lit_169);
DEFLIT(lit_496);
DEFLIT(lit_217);
DEFLIT(lit_182);
DEFLIT(lit_78);
DEFLIT(lit_134);
DEFLIT(lit_76);
DEFLIT(lit_617);
DEFLIT(lit_191);
DEFLIT(lit_152);
DEFLIT(lit_588);
DEFLIT(lit_427);
DEFLIT(lit_75);
DEFLIT(lit_261);
DEFLIT(lit_450);
DEFLIT(lit_378);
DEFLIT(lit_212);
DEFLIT(lit_419);
DEFLIT(lit_651);
DEFLIT(lit_569);
DEFLIT(lit_495);
DEFLIT(lit_292);
DEFLIT(lit_334);
DEFLIT(lit_130);
DEFLIT(lit_468);
DEFLIT(lit_308);
DEFLIT(lit_226);
DEFLIT(lit_289);
DEFLIT(lit_506);
DEFLIT(lit_639);
DEFLIT(lit_375);
DEFLIT(lit_97);
DEFLIT(lit_48);
DEFLIT(lit_581);
DEFLIT(lit_403);
DEFLIT(lit_307);
DEFLIT(lit_216);
DEFLIT(lit_51);
DEFLIT(lit_127);
DEFLIT(lit_26);
DEFLIT(lit_596);
DEFLIT(lit_582);
DEFLIT(lit_263);
DEFLIT(lit_52);
DEFLIT(lit_629);
DEFLIT(lit_32);
DEFLIT(lit_56);
DEFLIT(lit_621);
DEFLIT(lit_227);
DEFLIT(lit_257);
DEFLIT(lit_124);
DEFLIT(lit_8);
DEFLIT(lit_584);
DEFLIT(lit_238);
DEFLIT(lit_529);
DEFLIT(lit_192);
DEFLIT(lit_174);
DEFLIT(lit_270);
DEFLIT(lit_336);
DEFLIT(lit_444);
DEFLIT(lit_565);
DEFLIT(lit_23);
DEFLIT(lit_153);
DEFLIT(lit_34);
DEFLIT(lit_190);
DEFLIT(lit_518);
DEFLIT(lit_295);
DEFLIT(lit_599);
DEFLIT(lit_549);
DEFLIT(lit_586);
DEFLIT(lit_537);
DEFLIT(lit_284);
DEFLIT(lit_274);
DEFLIT(lit_79);
DEFLIT(lit_171);
DEFLIT(lit_114);
DEFLIT(lit_239);
DEFLIT(lit_294);
DEFLIT(lit_67);
DEFLIT(lit_233);
DEFLIT(lit_377);
DEFLIT(lit_464);
DEFLIT(lit_351);
DEFLIT(lit_592);
DEFLIT(lit_630);
DEFLIT(lit_539);
DEFLIT(lit_533);
DEFLIT(lit_343);
DEFLIT(lit_525);
DEFLIT(lit_357);
DEFLIT(lit_502);
DEFLIT(lit_45);
DEFLIT(lit_500);
DEFLIT(lit_96);
DEFLIT(lit_611);
DEFLIT(lit_243);
DEFLIT(lit_626);
DEFLIT(lit_18);
DEFLIT(lit_290);
DEFLIT(lit_81);
DEFLIT(lit_159);
DEFLIT(lit_589);
DEFLIT(lit_652);
DEFLIT(lit_548);
DEFLIT(lit_622);
DEFLIT(lit_562);
DEFLIT(lit_314);
DEFLIT(lit_28);
DEFLIT(lit_578);
DEFLIT(lit_90);
DEFLIT(lit_367);
DEFLIT(lit_259);
DEFLIT(lit_66);
DEFLIT(lit_194);
DEFLIT(lit_24);
DEFLIT(lit_640);
DEFLIT(lit_102);
DEFLIT(lit_137);
DEFLIT(lit_93);
DEFLIT(lit_572);
DEFLIT(lit_39);
DEFLIT(lit_485);
DEFLIT(lit_376);
DEFLIT(lit_286);
DEFLIT(lit_158);
DEFLIT(lit_373);
DEFLIT(lit_352);
DEFLIT(lit_379);
DEFLIT(lit_87);
DEFLIT(lit_574);
DEFLIT(lit_392);
DEFLIT(lit_521);
DEFLIT(lit_542);
DEFLIT(lit_400);
DEFLIT(lit_513);
DEFLIT(lit_177);
DEFLIT(lit_31);
DEFLIT(lit_285);
DEFLIT(lit_157);
DEFLIT(lit_167);
DEFLIT(lit_210);
DEFLIT(lit_528);
DEFLIT(lit_201);
DEFLIT(lit_564);
DEFLIT(lit_396);
DEFLIT(lit_189);
DEFLIT(lit_320);
DEFLIT(lit_401);
DEFLIT(lit_29);
DEFLIT(lit_119);
DEFLIT(lit_534);
DEFLIT(lit_404);
DEFLIT(lit_409);
DEFLIT(lit_616);
DEFLIT(lit_431);
DEFLIT(lit_150);
DEFLIT(lit_619);
DEFLIT(lit_199);
DEFLIT(lit_382);
DEFLIT(lit_517);
DEFLIT(lit_77);
DEFLIT(lit_69);
DEFLIT(lit_43);
DEFLIT(lit_552);
DEFLIT(lit_126);
DEFLIT(lit_178);
DEFLIT(lit_156);
DEFLIT(lit_82);
DEFLIT(lit_366);
DEFLIT(lit_115);
DEFLIT(lit_504);
DEFLIT(lit_144);
DEFLIT(lit_474);
DEFLIT(lit_368);
DEFLIT(lit_499);
DEFLIT(lit_422);
DEFLIT(lit_448);
DEFLIT(lit_540);
DEFLIT(lit_303);
DEFLIT(lit_37);
DEFLIT(lit_327);
DEFLIT(lit_44);
DEFLIT(lit_223);
DEFLIT(lit_68);
DEFLIT(lit_363);
DEFLIT(lit_249);
DEFLIT(lit_84);
DEFLIT(lit_372);
DEFLIT(lit_515);
DEFLIT(lit_173);
DEFLIT(lit_411);
DEFLIT(lit_278);
DEFLIT(lit_391);
DEFLIT(lit_272);
DEFLIT(lit_522);
DEFLIT(lit_339);
DEFLIT(lit_541);
DEFLIT(lit_117);
DEFLIT(lit_594);
DEFLIT(lit_10);
DEFLIT(lit_410);
DEFLIT(lit_246);
DEFLIT(lit_634);
DEFLIT(lit_439);
DEFLIT(lit_338);
DEFLIT(lit_186);
DEFLIT(lit_330);
DEFLIT(lit_354);
DEFLIT(lit_315);
DEFLIT(lit_350);
DEFLIT(lit_71);
DEFLIT(lit_36);
DEFLIT(lit_94);
DEFLIT(lit_623);
DEFLIT(lit_183);
DEFLIT(lit_607);
DEFLIT(lit_583);
DEFLIT(lit_41);
DEFLIT(lit_628);
DEFLIT(lit_483);
DEFLIT(lit_546);
DEFLIT(lit_371);
DEFLIT(lit_269);
DEFLIT(lit_482);
DEFLIT(lit_0);
DEFLIT(lit_344);
DEFLIT(lit_89);
DEFLIT(lit_138);
DEFLIT(lit_92);
DEFLIT(lit_571);
DEFLIT(lit_197);
DEFLIT(lit_614);
DEFLIT(lit_218);
DEFLIT(lit_258);
DEFLIT(lit_395);
DEFLIT(lit_244);
DEFLIT(lit_198);
DEFLIT(lit_625);
DEFLIT(lit_475);
DEFLIT(lit_85);
DEFLIT(lit_328);
DEFLIT(lit_505);
DEFLIT(lit_301);
DEFLIT(lit_64);
DEFLIT(lit_99);
DEFLIT(lit_384);
DEFLIT(lit_88);
DEFLIT(lit_466);
DEFLIT(lit_1);
DEFLIT(lit_282);
DEFLIT(lit_304);
DEFLIT(lit_47);
DEFLIT(lit_573);
DEFLIT(lit_185);
DEFLIT(lit_601);
DEFLIT(lit_268);
DEFLIT(lit_148);
DEFLIT(lit_302);
DEFLIT(lit_326);
DEFLIT(lit_49);
DEFLIT(lit_20);
DEFLIT(lit_612);
DEFLIT(lit_605);
DEFLIT(lit_369);
DEFLIT(lit_296);
DEFLIT(lit_209);
DEFLIT(lit_514);
DEFLIT(lit_300);
DEFLIT(lit_14);
DEFLIT(lit_397);
DEFLIT(lit_16);
DEFLIT(lit_180);
DEFLIT(lit_349);
DEFLIT(lit_463);
DEFLIT(lit_424);
DEFLIT(lit_523);
DEFLIT(lit_116);
DEFLIT(lit_214);
DEFLIT(lit_299);
DEFLIT(lit_440);
DEFLIT(lit_340);
DEFLIT(lit_476);
DEFLIT(lit_348);
DEFLIT(lit_394);
DEFLIT(lit_579);
DEFLIT(lit_247);
DEFLIT(lit_356);
DEFLIT(lit_473);
DEFLIT(lit_63);
DEFLIT(lit_479);
DEFLIT(lit_146);
DEFLIT(lit_106);
DEFLIT(lit_590);
DEFLIT(lit_347);
DEFLIT(lit_271);
DEFLIT(lit_557);
DEFLIT(lit_110);
DEFLIT(lit_434);
DEFLIT(lit_141);
DEFLIT(lit_143);
DEFLIT(lit_577);
DEFLIT(lit_46);
DEFLIT(lit_5);
DEFLIT(lit_346);
DEFLIT(lit_393);
DEFLIT(lit_333);
DEFLIT(lit_193);
DEFLIT(lit_6);
DEFLIT(lit_287);
DEFLIT(lit_256);
DEFLIT(lit_488);
DEFLIT(lit_390);
DEFLIT(lit_632);
DEFLIT(lit_618);
DEFLIT(lit_627);
DEFLIT(lit_425);
DEFLIT(lit_166);
DEFLIT(lit_383);
DEFLIT(lit_558);
DEFLIT(lit_267);
DEFLIT(lit_105);
DEFLIT(lit_414);
DEFLIT(lit_3);
DEFLIT(lit_435);
DEFLIT(lit_147);
DEFLIT(lit_7);
DEFLIT(lit_461);
DEFLIT(lit_420);
DEFLIT(lit_556);
DEFLIT(lit_550);
DEFLIT(lit_30);
DEFLIT(lit_242);
DEFLIT(lit_309);
DEFLIT(lit_225);
DEFLIT(lit_516);
DEFLIT(lit_98);
DEFLIT(lit_59);
DEFLIT(lit_255);
DEFLIT(lit_245);
DEFLIT(lit_104);
DEFLIT(lit_551);
DEFLIT(lit_204);
DEFLIT(lit_484);
DEFLIT(lit_288);
DEFLIT(lit_254);
DEFLIT(lit_547);
DEFLIT(lit_19);
DEFLIT(lit_545);
DEFLIT(lit_443);
DEFLIT(lit_331);
DEFLIT(lit_118);
DEFLIT(lit_181);
DEFLIT(lit_433);
DEFLIT(lit_253);
DEFLIT(lit_251);
DEFLIT(lit_17);
DEFLIT(lit_122);
DEFLIT(lit_635);
DEFLIT(lit_13);
DEFLIT(lit_62);
DEFLIT(lit_631);
DEFLIT(lit_470);
DEFLIT(lit_359);
DEFLIT(lit_636);
DEFLIT(lit_600);
DEFLIT(lit_103);
DEFLIT(lit_222);
DEFLIT(lit_72);
DEFLIT(lit_325);
DEFLIT(lit_297);
DEFLIT(lit_213);
DEFLIT(lit_112);
DEFLIT(lit_388);
DEFLIT(lit_531);
DEFLIT(lit_149);
DEFLIT(lit_648);
DEFLIT(lit_345);
DEFLIT(lit_598);
DEFLIT(lit_455);
DEFLIT(lit_120);
DEFLIT(lit_415);
DEFLIT(lit_113);
DEFLIT(lit_519);
DEFLIT(lit_423);
DEFLIT(lit_497);
DEFLIT(lit_264);
DEFLIT(lit_318);
DEFLIT(lit_597);
DEFLIT(lit_615);
DEFLIT(lit_176);
DEFLIT(lit_449);
DEFLIT(lit_472);
DEFLIT(lit_654);
DEFLIT(lit_305);
DEFLIT(lit_477);
DEFLIT(lit_487);
DEFLIT(lit_108);
DEFLIT(lit_389);
DEFLIT(lit_452);
DEFLIT(lit_293);
DEFLIT(lit_494);
DEFLIT(lit_441);
DEFLIT(lit_432);
DEFLIT(lit_649);
DEFLIT(lit_313);
DEFLIT(lit_73);
DEFLIT(lit_559);
DEFLIT(lit_321);
DEFLIT(lit_252);
DEFLIT(lit_332);
DEFLIT(lit_40);
DEFLIT(lit_61);
DEFLIT(lit_95);
DEFLIT(lit_442);
DEFLIT(lit_232);
DEFLIT(lit_530);
DEFLIT(lit_608);
DEFLIT(lit_508);
DEFLIT(lit_329);
DEFLIT(lit_454);
DEFLIT(lit_568);
DEFLIT(lit_208);
DEFLIT(lit_458);
DEFLIT(lit_27);
DEFLIT(lit_490);
DEFLIT(lit_21);
DEFLIT(lit_38);
DEFLIT(lit_266);
DEFLIT(lit_438);
DEFLIT(lit_453);
DEFLIT(lit_275);
DEFLIT(lit_653);
DEFLIT(lit_512);
DEFLIT(lit_386);
DEFLIT(lit_486);
DEFLIT(lit_221);
DEFLIT(lit_609);
DEFLIT(lit_489);
DEFLIT(lit_360);
DEFLIT(lit_241);
DEFLIT(lit_277);
DEFLIT(lit_492);
DEFLIT(lit_60);
DEFLIT(lit_527);
DEFLIT(lit_563);
DEFLIT(lit_131);
DEFLIT(lit_399);
DEFLIT(lit_447);
DEFLIT(lit_471);
DEFLIT(lit_142);
DEFLIT(lit_12);
DEFLIT(lit_281);
DEFLIT(lit_353);
DEFLIT(lit_91);
DEFLIT(lit_361);
DEFLIT(lit_416);
DEFLIT(lit_135);
DEFLIT(lit_80);
DEFLIT(lit_203);
DEFLIT(lit_4);
DEFLIT(lit_322);
DEFLIT(lit_524);
DEFLIT(lit_291);
DEFLIT(lit_620);
DEFLIT(lit_132);
DEFLIT(lit_11);
DEFLIT(lit_74);
DEFLIT(lit_165);
DEFLIT(lit_380);
DEFLIT(lit_280);
DEFLIT(lit_139);
DEFLIT(lit_478);
DEFLIT(lit_215);
DEFLIT(lit_228);
DEFLIT(lit_561);
DEFLIT(lit_111);
DEFLIT(lit_195);
DEFLIT(lit_385);
DEFLIT(lit_283);
DEFLIT(lit_436);
DEFLIT(lit_211);
DEFLIT(lit_164);
DEFLIT(lit_481);
DEFLIT(lit_507);
DEFLIT(lit_317);
DEFLIT(lit_560);
DEFLIT(lit_591);
DEFLIT(lit_538);
DEFLIT(lit_456);
DEFLIT(lit_125);
DEFLIT(lit_407);
DEFLIT(lit_234);
DEFLIT(lit_536);
DEFLIT(lit_408);
DEFLIT(lit_576);
DEFLIT(lit_319);
DEFLIT(lit_55);
DEFLIT(lit_553);
DEFLIT(lit_15);
DEFLIT(lit_206);
DEFLIT(lit_402);
DEFLIT(lit_298);
DEFLIT(lit_355);
DEFLIT(lit_163);
DEFLIT(lit_398);
DEFLIT(lit_509);
DEFLIT(lit_570);
DEFLIT(lit_498);
DEFLIT(lit_58);
DEFLIT(lit_462);
DEFLIT(lit_35);
DEFLIT(lit_240);
DEFLIT(lit_230);
DEFLIT(lit_101);
DEFLIT(lit_273);
DEFLIT(lit_50);
DEFLIT(lit_9);
DEFLIT(lit_593);
DEFLIT(lit_650);
DEFLIT(lit_121);
DEFLIT(lit_645);
DEFLIT(lit_179);
DEFLIT(lit_503);
DEFLIT(lit_587);
DEFLIT(lit_202);
DEFLIT(lit_643);
DEFLIT(lit_162);
DEFLIT(lit_170);
DEFLIT(lit_70);
DEFLIT(lit_324);
DEFLIT(lit_511);
DEFLIT(lit_42);
DEFLIT(lit_25);
DEFLIT(lit_22);
DEFLIT(lit_2);
DEFLIT(lit_100);
DEFLIT(lit_457);
DEFLIT(lit_235);
DEFLIT(lit_133);
DEFLIT(lit_480);
DEFLIT(lit_501);
DEFLIT(lit_310);
DEFLIT(lit_129);
DEFLIT(lit_644);
DEFLIT(lit_109);
DEFLIT(lit_358);
DEFLIT(lit_161);
DEFLIT(lit_532);
DEFLIT(lit_387);
DEFLIT(lit_655);
DEFLIT(lit_219);
DEFLIT(lit_260);
DEFLIT(lit_374);
DEFLIT(lit_184);
DEFLIT(lit_207);
DEFLIT(lit_406);
DEFLIT(lit_641);
DEFLIT(lit_337);
DEFLIT(lit_469);
DEFLIT(lit_510);
DEFLIT(lit_276);
DEFLIT(lit_445);
DEFLIT(lit_585);
DEFLIT(lit_323);
DEFLIT(lit_606);
DEFLIT(lit_172);
DEFLIT(lit_140);
DEFLIT(lit_405);
DEFLIT(lit_491);
DEFLIT(lit_160);
DEFLIT(lit_554);
DEFLIT(lit_520);

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
LOCFOR(fun_x_1630_41);
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
LOCFOR(fun_x_1670_82);
LOCFOR(fun_83);
LOCFOR(fun_84);
LOCFOR(fun_x_1674_85);
LOCFOR(fun_86);
LOCFOR(fun_87);
LOCFOR(fun_x_1678_88);
LOCFOR(fun_89);
LOCFOR(fun_90);
LOCFOR(fun_gen_result_91);
LOCFOR(fun_gen_depth_92);
LOCFOR(fun_x_1685_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_x_1689_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_x_1693_99);
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
LOCFOR(fun_191);
LOCFOR(fun_192);
LOCFOR(fun_generate_function_code_193);
LOCFOR(fun_dispatcherQ_194);
LOCFOR(fun_195);
LOCFOR(fun_196);
LOCFOR(fun_197);
LOCFOR(fun_generate_function_code_198);
LOCFOR(fun_generate_local_temporaries_199);
LOCFOR(fun_generate_registers_200);
LOCFOR(fun_module_info_name_201);
LOCFOR(fun_maybe_declare_202);
LOCFOR(fun_203);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_205);
LOCFOR(fun_206);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_208);
LOCFOR(fun_module_init_decl_209);
LOCFOR(fun_generate_module_init_210);
LOCFOR(fun_generate_main_211);
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
  P x_1622F4836;
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  x_1622F4836 = DYNREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_7,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T3 = FUNFAB(fun_8,1,x_1622F4836);
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
  P tmpF4840;
  P src_fileF4839;
  P build_fileF4838;
  P fileF4837;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(name_, 0);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_name_to_relpath),name_);
  fileF4837 = T10;
  T9 = CALL2(1,VARREF(YgooSsystemYadd_build_path),FREEREF(0),fileF4837);
  build_fileF4838 = T9;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),fileF4837);
  src_fileF4839 = T8;
  T6 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),build_fileF4838);
  T5 = CALL1(1,VARREF(Ynot),T6);
  tmpF4840 = T5;
  if (tmpF4840 != YPfalse) {
    T1 = tmpF4840;
  } else {
    T3 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF4839);
    T4 = CALL1(1,VARREF(YgooSsystemYfile_mtime),build_fileF4838);
    T2 = CALL2(1,VARREF(YgooSmagYGE),T3,T4);
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSsystemYfile_copy),src_fileF4839,build_fileF4838);
    T0 = T7;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_load_module_12) {
  P loader_,name_;
  P out_portF4850;
  P prgF4849;
  P astF4848;
  P out_fileF4847;
  P appnameF4846;
  P src_fileF4845;
  P fileF4844;
  P envF4843;
  P keepmodQF4842;
  P modF4841;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T20 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF4841 = T20;
  keepmodQF4842 = YPfalse;
  T19 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),modF4841);
  envF4843 = T19;
  T18 = CALL1(1,VARREF(YevalSmoduleYmodule_name_to_relpath),name_);
  fileF4844 = T18;
  T17 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF4844);
  T16 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T17);
  src_fileF4845 = T16;
  T15 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF4846 = T15;
  T14 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF4844);
  T13 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF4846,T14);
  out_fileF4847 = T13;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF4845,modF4841);
  T0 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF4845);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T0,modF4841);
  T1 = (P)YPsu(LITREF(lit_18));
  (P)YevalSg2cYPprint_cpu_usage(T1);
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF4845,envF4843);
  astF4848 = T12;
  T11 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF4848,envF4843);
  prgF4849 = T11;
  T2 = (P)YPsu(LITREF(lit_19));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T3 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF4847);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T3);
  out_portF4850 = YPfalse;
  out_portF4850 = BOXFAB(out_portF4850);
  T6 = FUNFAB(fun_9,5,out_portF4850,out_fileF4847,prgF4849,astF4848,modF4841);
  T7 = FUNFAB(fun_10,1,out_portF4850);
  T5 = with_cleanup(T6,T7);
  T8 = FUNFAB(fun_11,1,appnameF4846);
  T9 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_files),modF4841);
  CALL2(1,VARREF(YgooSmacrosYdo),T8,T9);
  T10 = (P)YPsu(LITREF(lit_22));
  (P)YevalSg2cYPprint_cpu_usage(T10);
UNLINK_STACK();
  RET(modF4841);
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
  P x_1623F4851;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  x_1623F4851 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1623F4851,name_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1623F4851,LITREF(lit_29));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF4852;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(loader_, 0);
  changedF4852 = Ynil;
  changedF4852 = BOXFAB(changedF4852);
  T1 = FUNFAB(fun_14,1,changedF4852);
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T1,loader_);
  T2 = fun_15;
  T3 = BOXGET(changedF4852);
  CALL2(1,VARREF(YgooSmacrosYdo),T2,T3);
  T5 = BOXGET(changedF4852);
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
  P modF4853;
  P T0,T1;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPfalse);
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),FREEREF(0));
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSmoduleYprobe_module),FREEREF(0),T1);
  modF4853 = T0;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_34));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),VARREF(YevalSmoduleYreport_undefined_global_bindings),FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),FREEREF(0),modF4853);
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
  P x_1624F4854;
  P T0,T1,T2;
LINK_STACK();
  ARG(loader_, 0);
  x_1624F4854 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
  T1 = FUNFAB(fun_18,1,loader_);
  T2 = FUNFAB(fun_19,1,x_1624F4854);
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
  P x_1626F4855;
  P T0,T1,T2;
LINK_STACK();
  DYNSET(YevalSmoduleYTdynamic_compilationQT,YPtrue);
  x_1626F4855 = DYNREF(YevalSg2cYTdefinitionsT);
  T1 = FUNFAB(fun_22,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = FUNFAB(fun_23,1,x_1626F4855);
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
  P x_1625F4856;
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  x_1625F4856 = DYNREF(YevalSmoduleYTdynamic_compilationQT);
  T2 = FUNFAB(fun_24,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T3 = FUNFAB(fun_25,1,x_1625F4856);
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
  P out_portF4862;
  P prgF4861;
  P out_fileF4860;
  P fileF4859;
  P nameF4858;
  P modF4857;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
  T11 = CALL1(1,VARREF(YevalSmoduleYenvironment_module),env_);
  modF4857 = T11;
  T8 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T10 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T9 = DYNSET(YevalSg2cYTtmp_file_counterT,T10);
  T7 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_41),T8,T9);
  nameF4858 = T7;
  T6 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF4858);
  fileF4859 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF4859);
  out_fileF4860 = T5;
  T4 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF4861 = T4;
  out_portF4862 = YPfalse;
  out_portF4862 = BOXFAB(out_portF4862);
  T2 = FUNFAB(fun_26,5,out_portF4862,out_fileF4860,prgF4861,ast_,modF4857);
  T3 = FUNFAB(fun_27,1,out_portF4862);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(fileF4859);
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
  P nameF4863;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF4863 = T1;
  T0 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF4863);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_g2c_eval_32) {
  P ast_,env_;
  P nameF4864;
  P T0,T1;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF4864 = T1;
  T0 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF4864);
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
  P astF4866;
  P sexprF4865;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
  T3 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  sexprF4865 = T3;
  T0 = (P)YPsu(LITREF(lit_57));
  (P)YevalSg2cYPprint_cpu_usage(T0);
  T2 = CALL4(1,VARREF(YevalSastYobjectify_with_subtransaction),sexprF4865,ct_env_,DYNREF(YevalSmoduleYTdynamic_compilationQT),YPfalse);
  astF4866 = T2;
  T1 = (P)YPsu(LITREF(lit_58));
  (P)YevalSg2cYPprint_cpu_usage(T1);
UNLINK_STACK();
  QRET(astF4866);
}

LOCCODEDEF(fun_compute_program_36) {
  P e_,env_;
  P fltF4871;
  P prgF4870;
  P lftF4869;
  P boxF4868;
  P anaF4867;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T11 = CALL2(1,VARREF(YevalSoptimizeYanalyze_calls),e_,env_);
  anaF4867 = T11;
  T0 = (P)YPsu(LITREF(lit_61));
  (P)YevalSg2cYPprint_cpu_usage(T0);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),anaF4867);
  boxF4868 = T10;
  T1 = (P)YPsu(LITREF(lit_62));
  (P)YevalSg2cYPprint_cpu_usage(T1);
  T9 = CALL1(1,VARREF(YevalSast_linearizeYliftX),boxF4868);
  lftF4869 = T9;
  T2 = (P)YPsu(LITREF(lit_63));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T8 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF4869);
  prgF4870 = T8;
  T3 = (P)YPsu(LITREF(lit_64));
  (P)YevalSg2cYPprint_cpu_usage(T3);
  T7 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF4870,env_,YPint((P)50));
  fltF4871 = T7;
  T4 = (P)YPsu(LITREF(lit_65));
  (P)YevalSg2cYPprint_cpu_usage(T4);
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF4871);
  T5 = (P)YPsu(LITREF(lit_66));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF4871,YPfalse);
  T6 = (P)YPsu(LITREF(lit_67));
  (P)YevalSg2cYPprint_cpu_usage(T6);
UNLINK_STACK();
  QRET(prgF4870);
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
  P out_portF4875;
  P out_nameF4874;
  P init_nameF4873;
  P appnameF4872;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
  T7 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF4872 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF4872,LITREF(lit_72));
  init_nameF4873 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF4873);
  T4 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF4872,T5);
  out_nameF4874 = T4;
  out_portF4875 = YPfalse;
  out_portF4875 = BOXFAB(out_portF4875);
  T2 = FUNFAB(fun_38,4,out_portF4875,out_nameF4874,appnameF4872,mod_);
  T3 = FUNFAB(fun_39,1,out_portF4875);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_x_1630_41) {
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
  P x_1629F4890;
  P x_1629F4889;
  P x_1629F4888;
  P x_1629F4887;
  P x_1629F4886;
  P x_1629F4885;
  P x_1629F4884;
  P x_1629F4883;
  P x_1629F4882;
  P x_1629F4881;
  P bodyF4880;
  P loaderF4879;
  P modF4878;
  P x_1629F4877;
  P x_1630F4876;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(return_, 0);
  T32 = FUNSHELL(0,fun_x_1630_41,2);
  x_1630F4876 = T32;
  FUNINIT(x_1630F4876, 2,FREEREF(0),return_);
  x_1629F4877 = FREEREF(0);
  modF4878 = YPfalse;
  loaderF4879 = YPfalse;
  bodyF4880 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1629F4877,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1629F4877,LITREF(lit_77),x_1630F4876);
    x_1629F4881 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1629F4881,x_1630F4876);
    x_1629F4882 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1629F4882,x_1630F4876);
    modF4878 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1629F4882);
    x_1629F4883 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1629F4883,x_1630F4876);
    loaderF4879 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1629F4883);
    x_1629F4884 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1629F4884,x_1630F4876);
    x_1629F4885 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1629F4885,x_1630F4876);
    T11 = CALL1(1,VARREF(Ytail),x_1629F4884);
    x_1629F4886 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1629F4886,x_1630F4876);
    T17 = CALL1(1,VARREF(Ytail),x_1629F4881);
    x_1629F4887 = T17;
    bodyF4880 = x_1629F4887;
    x_1629F4888 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1629F4888,x_1630F4876);
    x_1629F4889 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1629F4889,x_1630F4876);
    T7 = CALL1(1,VARREF(Ytail),x_1629F4888);
    x_1629F4890 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1629F4890,x_1630F4876);
  } else {
    T19 = CALL2(1,x_1630F4876,LITREF(lit_78),x_1629F4877);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T28 = modF4878;
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,LITREF(lit_81));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T29 = bodyF4880;
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T29,LITREF(lit_81));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T31 = loaderF4879;
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
  P x_1634F4891;
  P T0,T1;
LINK_STACK();
  ARG(i_, 0);
  T1 = BOXGET(FREEREF(0));
  x_1634F4891 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1634F4891,LITREF(lit_93));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1634F4891,i_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1634F4891,LITREF(lit_94));
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
  P x_1637F4892;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  T3 = BOXGET(FREEREF(0));
  x_1637F4892 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),x_1637F4892,LITREF(lit_100));
  T1 = CALL1(1,VARREF(YevalSmoduleYmodule_name_to_relpath),name_);
  T0 = CALL1(1,VARREF(YgooSsystemYobj_filename),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1637F4892,T0);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1637F4892,LITREF(lit_101));
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
  P put_objF4893;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  T6 = FUNSHELL(1,fun_put_obj_46,1);
  put_objF4893 = T6;
  FUNINIT(put_objF4893, 1,FREEREF(0));
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  CALL1(0,put_objF4893,T0);
  T2 = FUNFAB(fun_47,1,put_objF4893);
  T4 = fun_48;
  T5 = CALL1(1,VARREF(YevalSmoduleYmodule_uses_c_files),mod_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  T1 = CALL2(1,VARREF(YgooSmacrosYdo),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_50) {
  P l_;
  P x_1641F4894;
  P T0,T1;
LINK_STACK();
  ARG(l_, 0);
  T1 = BOXGET(FREEREF(0));
  x_1641F4894 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1641F4894,LITREF(lit_112));
  T0 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1641F4894,l_);
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
  P x_1642F4903;
  P x_1640F4902;
  P x_1639F4901;
  P x_1638F4900;
  P x_1636F4899;
  P x_1635F4898;
  P x_1633F4897;
  P x_1632F4896;
  P x_1631F4895;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  T2 = BOXGET(FREEREF(0));
  x_1631F4895 = T2;
  CALL2(1,VARREF(YgooSioSportYputs),x_1631F4895,LITREF(lit_86));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1631F4895,FREEREF(2));
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1631F4895,LITREF(lit_87));
  T4 = BOXGET(FREEREF(0));
  x_1632F4896 = T4;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1632F4896,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1632F4896,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_1632F4896,LITREF(lit_88));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1632F4896,FREEREF(2));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1632F4896,LITREF(lit_89));
  T6 = BOXGET(FREEREF(0));
  x_1633F4897 = T6;
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1633F4897,LITREF(lit_90));
  T7 = FUNFAB(fun_45,1,FREEREF(0));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T7,FREEREF(3));
  T9 = BOXGET(FREEREF(0));
  x_1635F4898 = T9;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1635F4898,LITREF(lit_95));
  T11 = BOXGET(FREEREF(0));
  x_1636F4899 = T11;
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1636F4899,LITREF(lit_96));
  T12 = FUNFAB(fun_49,1,FREEREF(0));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T12,FREEREF(3));
  T15 = BOXGET(FREEREF(0));
  x_1638F4900 = T15;
  CALL2(1,VARREF(YgooSioSportYputs),x_1638F4900,LITREF(lit_105));
  T13 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1638F4900,T13);
  T14 = CALL2(1,VARREF(YgooSioSportYputs),x_1638F4900,LITREF(lit_106));
  T17 = BOXGET(FREEREF(0));
  x_1639F4901 = T17;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1639F4901,FREEREF(5));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_1639F4901,LITREF(lit_107));
  T19 = BOXGET(FREEREF(0));
  x_1640F4902 = T19;
  CALL2(1,VARREF(YgooSioSportYputs),x_1640F4902,LITREF(lit_108));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1640F4902,FREEREF(5));
  T18 = CALL2(1,VARREF(YgooSioSportYputs),x_1640F4902,LITREF(lit_109));
  T20 = FUNFAB(fun_51,1,FREEREF(0));
  CALL2(1,VARREF(YevalSmoduleYdo_module_loader_modules),T20,FREEREF(3));
  T22 = BOXGET(FREEREF(0));
  x_1642F4903 = T22;
  CALL2(1,VARREF(YgooSioSportYputs),x_1642F4903,LITREF(lit_113));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1642F4903,FREEREF(5));
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_1642F4903,LITREF(lit_114));
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
  P outF4909;
  P out_nameF4908;
  P sepF4907;
  P exe_nameF4906;
  P init_nameF4905;
  P appnameF4904;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(loader_, 0);
  T7 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF4904 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF4904,LITREF(lit_84));
  init_nameF4905 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF4904);
  exe_nameF4906 = T5;
  sepF4907 = VARREF(YgooSsystemYTpath_separatorT);
  T4 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF4904,LITREF(lit_85));
  out_nameF4908 = T4;
  outF4909 = YPfalse;
  outF4909 = BOXFAB(outF4909);
  T2 = FUNFAB(fun_52,6,outF4909,out_nameF4908,sepF4907,loader_,init_nameF4905,exe_nameF4906);
  T3 = FUNFAB(fun_53,1,outF4909);
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
  P x_1651F4919;
  P x_1650F4918;
  P x_1649F4917;
  P x_1648F4916;
  P x_1647F4915;
  P x_1646F4914;
  P x_1645F4913;
  P x_1644F4912;
  P x_1643F4911;
  P modvarF4910;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(modname_, 1);
  modvarF4910 = VARREF(YevalSg2cYDnow_mod_var_name);
  x_1643F4911 = out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1643F4911,LITREF(lit_120));
  x_1644F4912 = out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1644F4912,LITREF(lit_121));
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    x_1645F4913 = out_;
    T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1645F4913,LITREF(lit_122));
  } else {
  }
  x_1646F4914 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1646F4914,LITREF(lit_123));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1646F4914,modvarF4910);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1646F4914,LITREF(lit_124));
  x_1647F4915 = out_;
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1647F4915,LITREF(lit_125));
  x_1648F4916 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1648F4916,LITREF(lit_126));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1648F4916,modvarF4910);
  CALL2(1,VARREF(YgooSioSportYputs),x_1648F4916,LITREF(lit_127));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1648F4916,modvarF4910);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1648F4916,LITREF(lit_128));
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,modname_);
  x_1649F4917 = out_;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1649F4917,LITREF(lit_129));
  x_1650F4918 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1650F4918,LITREF(lit_130));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_131));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1650F4918,T7);
  CALL2(1,VARREF(YgooSioSportYputs),x_1650F4918,LITREF(lit_132));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_133));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1650F4918,T8);
  CALL2(1,VARREF(YgooSioSportYputs),x_1650F4918,LITREF(lit_134));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1650F4918,modvarF4910);
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1650F4918,LITREF(lit_135));
  x_1651F4919 = out_;
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1651F4919,LITREF(lit_136));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_generate_trailer_57) {
  P out_;
  P x_1652F4920;
  P T0;
LINK_STACK();
  ARG(out_, 0);
  x_1652F4920 = out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1652F4920,LITREF(lit_139));
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
  P gen_bindingF4922;
  P x_1653F4921;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  x_1653F4921 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1653F4921,LITREF(lit_142));
  T0 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1653F4921,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1653F4921,LITREF(lit_143));
  T7 = FUNSHELL(0,fun_gen_binding_58,2);
  gen_bindingF4922 = T7;
  FUNINIT(gen_bindingF4922, 2,out_,mod_);
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSmoduleYmodule_referenced_bindings),mod_);
    T3 = CALL2(1,VARREF(YgooSmacrosYdo),gen_bindingF4922,T4);
    T2 = T3;
  } else {
    T6 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
    T5 = CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),gen_bindingF4922,T6);
    T2 = T5;
  }
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_global_binding_60) {
  P out_,importedQ_,gb_;
  P x_1656F4929;
  P x_1655F4928;
  P x_1654F4927;
  P nameF4926;
  P tmpF4925;
  P tmpF4924;
  P kindF4923;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
  T17 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),gb_);
  kindF4923 = T17;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),kindF4923,LITREF(lit_148));
  tmpF4924 = T5;
  if (tmpF4924 != YPfalse) {
    T1 = tmpF4924;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF4923,LITREF(lit_149));
    tmpF4925 = T4;
    if (tmpF4925 != YPfalse) {
      T2 = tmpF4925;
    } else {
      T3 = CALL2(1,VARREF(YgooSmacrosYEE),kindF4923,LITREF(lit_150));
      T2 = T3;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T16 = CALL1(1,VARREF(YevalSmoduleYbinding_name),gb_);
    nameF4926 = T16;
    x_1654F4927 = kindF4923;
    x_1655F4928 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1655F4928,x_1654F4927,LITREF(lit_149));
    if (T7 != YPfalse) {
      T6 = LITREF(lit_151);
    } else {
      T9 = CALL2(1,x_1655F4928,x_1654F4927,LITREF(lit_150));
      if (T9 != YPfalse) {
        T8 = LITREF(lit_152);
      } else {
        T8 = LITREF(lit_153);
      }
      T6 = T8;
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
    x_1656F4929 = out_;
    if (importedQ_ != YPfalse) {
      T10 = LITREF(lit_154);
    } else {
      T10 = LITREF(lit_155);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1656F4929,T10);
    CALL2(1,VARREF(YgooSioSportYputs),x_1656F4929,LITREF(lit_156));
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1656F4929,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_1656F4929,LITREF(lit_157));
    T13 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),gb_);
    T12 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T13);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1656F4929,T12);
    CALL2(1,VARREF(YgooSioSportYputs),x_1656F4929,LITREF(lit_158));
    T14 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF4926);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1656F4929,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYputs),x_1656F4929,LITREF(lit_159));
    T0 = T15;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYchar_buffer_as_string) {
  P buffer_;
  P iF4932;
  P stringF4931;
  P buffer_sizeF4930;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(buffer_, 0);
  T6 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T6,VARREF(YLintG));
  buffer_sizeF4930 = T6;
  T5 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF4930);
  check_type(T5,VARREF(YLstrG));
  stringF4931 = T5;
  iF4932 = YPint((P)0);
  LOOP_212: {
    P a212_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF4932,buffer_sizeF4930);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),buffer_,iF4932);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T2,stringF4931,iF4932);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF4932,YPint((P)1));
      a212_0 = T4;
      iF4932 = a212_0;
      goto LOOP_212;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  RET(stringF4931);
}

LOCCODEDEF(fun_mangle_string_literal_62) {
  P str_;
  P encF4936;
  P cF4935;
  P iF4934;
  P lenF4933;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(str_, 0);
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T11 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF4933 = T11;
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
  iF4934 = YPint((P)0);
  LOOP_213: {
    P a213_0;
    T1 = CALL2(1,VARREF(YgooSlogYE),iF4934,lenF4933);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
      T2 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
      T0 = T2;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYelt),str_,iF4934);
      cF4935 = T10;
      T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF4935);
      T8 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T9);
      encF4936 = T8;
      T3 = CALL2(1,VARREF(YgooSlogYE),encF4936,YPfalse);
      if (T3 != YPfalse) {
        T4 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF4935);
      } else {
        T5 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF4936);
      }
      T7 = CALL2(1,VARREF(YgooSmathYA),iF4934,YPint((P)1));
      a213_0 = T7;
      iF4934 = a213_0;
      goto LOOP_213;
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
  P resultF4942;
  P resultF4941;
  P digitF4940;
  P remainderF4939;
  P quotientF4938;
  P tup37F4937;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
  T10 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup37F4937 = T10;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup37F4937,YPint((P)0));
  check_type(T9,VARREF(YLintG));
  quotientF4938 = T9;
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup37F4937,YPint((P)1));
  check_type(T8,VARREF(YLintG));
  remainderF4939 = T8;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF4939);
  check_type(T7,VARREF(YLchrG));
  digitF4940 = T7;
  T1 = CALL2(1,VARREF(YgooSlogYE),quotientF4938,YPint((P)0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T2,VARREF(YgooScolsSvecYLvecG));
    resultF4941 = T2;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF4940,resultF4941,YPint((P)0));
    T0 = resultF4941;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T5 = CALL2(1,FREEREF(0),quotientF4938,T6);
    check_type(T5,VARREF(YgooScolsSvecYLvecG));
    resultF4942 = T5;
    T4 = CALL1(1,VARREF(YgooStypesYlen),resultF4942);
    T3 = CALL2(1,VARREF(YgooSmathY_),T4,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF4940,resultF4942,T3);
    T0 = resultF4942;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mangle_integer_65) {
  P number_;
  P process_integerF4943;
  P T0,T1,T2;
LINK_STACK();
  ARG(number_, 0);
  T2 = FUNSHELL(1,fun_process_integer_64,1);
  process_integerF4943 = T2;
  FUNINIT(process_integerF4943, 1,process_integerF4943);
  T1 = CALL2(1,process_integerF4943,number_,YPint((P)1));
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
  P cF4945;
  P x_1665F4944;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  x_1665F4944 = T9;
  LOOP_214: {
    P a214_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1665F4944);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1665F4944);
      cF4945 = T8;
      T5 = CALL1(1,VARREF(YgooSchrYto_lower),cF4945);
      T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T5);
      T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T4);
      CALL2(1,VARREF(YgooScolsScolxYaddX),buf_,T3);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1665F4944);
      a214_0 = T7;
      x_1665F4944 = a214_0;
      goto LOOP_214;
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
  P iF4947;
  P lenF4946;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
  T5 = CALL1(1,VARREF(YgooStypesYlen),name_);
  lenF4946 = T5;
  iF4947 = YPint((P)0);
  LOOP_215: {
    P a215_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF4947,lenF4946);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),name_,iF4947);
      CALL2(1,VARREF(YgooScolsScolxYaddX),buf_,T2);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF4947,YPint((P)1));
      a215_0 = T4;
      iF4947 = a215_0;
      goto LOOP_215;
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
  P nameF4950;
  P tmpF4949;
  P UF4948;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(buf_, 0);
  ARG(mod_, 1);
  T9 = CALL1(1,VARREF(YevalSmoduleYmodule_mangled_name),mod_);
  UF4948 = T9;
  T8 = CALL1(1,VARREF(YevalSmoduleYmodule_mangled_name),mod_);
  tmpF4949 = T8;
  if (tmpF4949 != YPfalse) {
    T1 = tmpF4949;
  } else {
    T5 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
    T7 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    T4 = CALL2(1,VARREF(YevalSg2cYmangle_name_into),T5,T6);
    T3 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),T4);
    T2 = CALL2(1,VARREF(YevalSmoduleYmodule_mangled_name_setter),T3,mod_);
    T1 = T2;
  }
  nameF4950 = T1;
  T0 = CALL2(1,VARREF(YevalSg2cYbuf_cat2X),buf_,nameF4950);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_mangle_global_name_74) {
  P mod_,name_;
  P tmpF4951;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),mod_,VARREF(YevalSmoduleYDgoo_boot_module_name));
  tmpF4951 = T4;
  if (tmpF4951 != YPfalse) {
    T1 = tmpF4951;
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
  P tmpF4953;
  P UF4952;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(binding_, 0);
  T11 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  UF4952 = T11;
  T10 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  tmpF4953 = T10;
  if (tmpF4953 != YPfalse) {
    T0 = tmpF4953;
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
  P tmpF4955;
  P UF4954;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(binding_, 0);
  T5 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  UF4954 = T5;
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  tmpF4955 = T4;
  if (tmpF4955 != YPfalse) {
    T0 = tmpF4955;
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
  P tmpF4957;
  P UF4956;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(binding_, 0);
  T7 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  UF4956 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYbinding_mangled_name),binding_);
  tmpF4957 = T6;
  if (tmpF4957 != YPfalse) {
    T0 = tmpF4957;
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

LOCCODEDEF(fun_x_1670_82) {
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
  P out_varF4973;
  P x_1669F4972;
  P x_1669F4971;
  P x_1669F4970;
  P x_1669F4969;
  P x_1669F4968;
  P x_1669F4967;
  P x_1669F4966;
  P x_1669F4965;
  P x_1669F4964;
  P x_1669F4963;
  P bodyF4962;
  P clausesF4961;
  P out_valF4960;
  P x_1669F4959;
  P x_1670F4958;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
LINK_STACK();
  ARG(return_, 0);
  T58 = FUNSHELL(0,fun_x_1670_82,2);
  x_1670F4958 = T58;
  FUNINIT(x_1670F4958, 2,FREEREF(0),return_);
  x_1669F4959 = FREEREF(0);
  out_valF4960 = YPfalse;
  clausesF4961 = YPfalse;
  bodyF4962 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1669F4959,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1669F4959,LITREF(lit_233),x_1670F4958);
    x_1669F4963 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1669F4963,x_1670F4958);
    out_valF4960 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1669F4963);
    x_1669F4964 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1669F4964,x_1670F4958);
    x_1669F4965 = T12;
    clausesF4961 = x_1669F4965;
    x_1669F4966 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1669F4966,x_1670F4958);
    x_1669F4967 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1669F4967,x_1670F4958);
    T11 = CALL1(1,VARREF(Ytail),x_1669F4966);
    x_1669F4968 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1669F4968,x_1670F4958);
    T13 = CALL1(1,VARREF(Ytail),x_1669F4964);
    x_1669F4969 = T13;
    bodyF4962 = x_1669F4969;
    x_1669F4970 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1669F4970,x_1670F4958);
    x_1669F4971 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1669F4971,x_1670F4958);
    T7 = CALL1(1,VARREF(Ytail),x_1669F4970);
    x_1669F4972 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1669F4972,x_1670F4958);
  } else {
    T17 = CALL2(1,x_1670F4958,LITREF(lit_78),x_1669F4959);
  }
  T57 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF4973 = T57;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_234));
  T24 = CALL1(1,VARREF(Ylst),out_varF4973);
  T26 = out_valF4960;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_81));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T21 = CALL2(1,VARREF(YgooSmacrosYcat),T22,LITREF(lit_81));
  T20 = CALL1(1,VARREF(Ylst),T21);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_235));
  T32 = clausesF4961;
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
  T54 = CALL1(1,VARREF(Ylst),out_varF4973);
  T55 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T55,LITREF(lit_81));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T48 = CALL4(1,VARREF(YgooSmacrosYcat),T49,T50,T51,LITREF(lit_81));
  T47 = CALL1(1,VARREF(Ylst),T48);
  T56 = bodyF4962;
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

LOCCODEDEF(fun_x_1674_85) {
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
  P out_varF4987;
  P x_1673F4986;
  P x_1673F4985;
  P x_1673F4984;
  P x_1673F4983;
  P x_1673F4982;
  P x_1673F4981;
  P x_1673F4980;
  P x_1673F4979;
  P x_1673F4978;
  P bodyF4977;
  P out_valF4976;
  P x_1673F4975;
  P x_1674F4974;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(return_, 0);
  T38 = FUNSHELL(0,fun_x_1674_85,2);
  x_1674F4974 = T38;
  FUNINIT(x_1674F4974, 2,FREEREF(0),return_);
  x_1673F4975 = FREEREF(0);
  out_valF4976 = YPfalse;
  bodyF4977 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1673F4975,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1673F4975,LITREF(lit_245),x_1674F4974);
    x_1673F4978 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1673F4978,x_1674F4974);
    x_1673F4979 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1673F4979,x_1674F4974);
    out_valF4976 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1673F4979);
    x_1673F4980 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1673F4980,x_1674F4974);
    x_1673F4981 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1673F4981,x_1674F4974);
    T10 = CALL1(1,VARREF(Ytail),x_1673F4980);
    x_1673F4982 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1673F4982,x_1674F4974);
    T14 = CALL1(1,VARREF(Ytail),x_1673F4978);
    x_1673F4983 = T14;
    bodyF4977 = x_1673F4983;
    x_1673F4984 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1673F4984,x_1674F4974);
    x_1673F4985 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1673F4985,x_1674F4974);
    T6 = CALL1(1,VARREF(Ytail),x_1673F4984);
    x_1673F4986 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1673F4986,x_1674F4974);
  } else {
    T16 = CALL2(1,x_1674F4974,LITREF(lit_78),x_1673F4975);
  }
  T37 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF4987 = T37;
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_234));
  T23 = CALL1(1,VARREF(Ylst),out_varF4987);
  T25 = out_valF4976;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_81));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,LITREF(lit_81));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T29 = CALL1(1,VARREF(Ylst),out_varF4987);
  T30 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,LITREF(lit_81));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T31 = bodyF4977;
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T35 = CALL1(1,VARREF(Ylst),out_varF4987);
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

LOCCODEDEF(fun_x_1678_88) {
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
  P tmpF5005;
  P firstQF5004;
  P bodyF5003;
  P formsF5002;
  P out_varF5001;
  P x_1677F5000;
  P x_1677F4999;
  P x_1677F4998;
  P x_1677F4997;
  P x_1677F4996;
  P x_1677F4995;
  P x_1677F4994;
  P x_1677F4993;
  P x_1677F4992;
  P bodyF4991;
  P out_valF4990;
  P x_1677F4989;
  P x_1678F4988;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(return_, 0);
  T51 = FUNSHELL(0,fun_x_1678_88,2);
  x_1678F4988 = T51;
  FUNINIT(x_1678F4988, 2,FREEREF(0),return_);
  x_1677F4989 = FREEREF(0);
  out_valF4990 = YPfalse;
  bodyF4991 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1677F4989,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1677F4989,LITREF(lit_250),x_1678F4988);
    x_1677F4992 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1677F4992,x_1678F4988);
    x_1677F4993 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1677F4993,x_1678F4988);
    out_valF4990 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1677F4993);
    x_1677F4994 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1677F4994,x_1678F4988);
    x_1677F4995 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1677F4995,x_1678F4988);
    T10 = CALL1(1,VARREF(Ytail),x_1677F4994);
    x_1677F4996 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1677F4996,x_1678F4988);
    T14 = CALL1(1,VARREF(Ytail),x_1677F4992);
    x_1677F4997 = T14;
    bodyF4991 = x_1677F4997;
    x_1677F4998 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1677F4998,x_1678F4988);
    x_1677F4999 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1677F4999,x_1678F4988);
    T6 = CALL1(1,VARREF(Ytail),x_1677F4998);
    x_1677F5000 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1677F5000,x_1678F4988);
  } else {
    T16 = CALL2(1,x_1678F4988,LITREF(lit_78),x_1677F4989);
  }
  T50 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF5001 = T50;
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_234));
  T23 = CALL1(1,VARREF(Ylst),out_varF5001);
  T25 = out_valF4990;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_81));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,LITREF(lit_81));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T29 = CALL1(1,VARREF(Ylst),out_varF5001);
  T30 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,LITREF(lit_81));
  T26 = CALL1(1,VARREF(Ylst),T27);
  formsF5002 = Ynil;
  T44 = bodyF4991;
  bodyF5003 = T44;
  firstQF5004 = YPtrue;
  LOOP_216: {
    P a216_0,a216_1,a216_2;
    T32 = CALL1(1,VARREF(YgooSmacrosYnulQ),bodyF5003);
    if (T32 != YPfalse) {
      T33 = CALL1(1,VARREF(YgooSmacrosYrevX),formsF5002);
      T31 = T33;
    } else {
      T36 = CALL1(1,VARREF(Yhead),bodyF5003);
      tmpF5005 = firstQF5004;
      if (tmpF5005 != YPfalse) {
        T38 = tmpF5005;
      } else {
        T40 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
        T41 = CALL1(1,VARREF(Ylst),out_varF5001);
        T42 = CALL1(1,VARREF(Ylst),YPchr((P)44));
        T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,LITREF(lit_81));
        T38 = T39;
      }
      T37 = CALL2(1,VARREF(YgooSmacrosYpair),T38,formsF5002);
      T35 = CALL2(1,VARREF(YgooSmacrosYpair),T36,T37);
      T43 = CALL1(1,VARREF(Ytail),bodyF5003);
      a216_0 = T35;
      a216_1 = T43;
      a216_2 = YPfalse;
      formsF5002 = a216_0;
      bodyF5003 = a216_1;
      firstQF5004 = a216_2;
      goto LOOP_216;
      T31 = T34;
    }
  }
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_240));
  T48 = CALL1(1,VARREF(Ylst),out_varF5001);
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
  P x_1679F5007;
  P regF5006;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF5006 = T4;
  if (regF5006 != YPfalse) {
    x_1679F5007 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1679F5007,LITREF(lit_253));
    T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF5006);
    CALL2(1,VARREF(YgooSioSportYputs),x_1679F5007,T2);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1679F5007,LITREF(lit_254));
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
  P iF5009;
  P x_1680F5008;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(d_, 0);
  ARG(out_, 1);
  T7 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1680F5008 = T6;
  LOOP_217: {
    P a217_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1680F5008);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1680F5008);
      iF5009 = T5;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_257));
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1680F5008);
      a217_0 = T4;
      x_1680F5008 = a217_0;
      goto LOOP_217;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1685_93) {
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
  P x_1684F5024;
  P x_1684F5023;
  P x_1684F5022;
  P x_1684F5021;
  P x_1684F5020;
  P x_1684F5019;
  P x_1684F5018;
  P x_1684F5017;
  P x_1684F5016;
  P x_1684F5015;
  P bodyF5014;
  P outF5013;
  P dF5012;
  P x_1684F5011;
  P x_1685F5010;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
LINK_STACK();
  ARG(return_, 0);
  T36 = FUNSHELL(0,fun_x_1685_93,2);
  x_1685F5010 = T36;
  FUNINIT(x_1685F5010, 2,FREEREF(0),return_);
  x_1684F5011 = FREEREF(0);
  dF5012 = YPfalse;
  outF5013 = YPfalse;
  bodyF5014 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1684F5011,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1684F5011,LITREF(lit_262),x_1685F5010);
    x_1684F5015 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1684F5015,x_1685F5010);
    x_1684F5016 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1684F5016,x_1685F5010);
    dF5012 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1684F5016);
    x_1684F5017 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1684F5017,x_1685F5010);
    outF5013 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1684F5017);
    x_1684F5018 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1684F5018,x_1685F5010);
    x_1684F5019 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1684F5019,x_1685F5010);
    T11 = CALL1(1,VARREF(Ytail),x_1684F5018);
    x_1684F5020 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1684F5020,x_1685F5010);
    T17 = CALL1(1,VARREF(Ytail),x_1684F5015);
    x_1684F5021 = T17;
    bodyF5014 = x_1684F5021;
    x_1684F5022 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1684F5022,x_1685F5010);
    x_1684F5023 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1684F5023,x_1685F5010);
    T7 = CALL1(1,VARREF(Ytail),x_1684F5022);
    x_1684F5024 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1684F5024,x_1685F5010);
  } else {
    T19 = CALL2(1,x_1685F5010,LITREF(lit_78),x_1684F5011);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_263));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_255));
  T26 = dF5012;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T28 = outF5013;
  T27 = CALL1(1,VARREF(Ylst),T28);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,LITREF(lit_81));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T29 = bodyF5014;
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_264));
  T34 = outF5013;
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

LOCCODEDEF(fun_x_1689_96) {
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
  P x_1688F5041;
  P x_1688F5040;
  P x_1688F5039;
  P x_1688F5038;
  P x_1688F5037;
  P x_1688F5036;
  P x_1688F5035;
  P x_1688F5034;
  P x_1688F5033;
  P x_1688F5032;
  P x_1688F5031;
  P bodyF5030;
  P outF5029;
  P dF5028;
  P eF5027;
  P x_1688F5026;
  P x_1689F5025;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(return_, 0);
  T41 = FUNSHELL(0,fun_x_1689_96,2);
  x_1689F5025 = T41;
  FUNINIT(x_1689F5025, 2,FREEREF(0),return_);
  x_1688F5026 = FREEREF(0);
  eF5027 = YPfalse;
  dF5028 = YPfalse;
  outF5029 = YPfalse;
  bodyF5030 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_1688F5026,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T21 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1688F5026,LITREF(lit_270),x_1689F5025);
    x_1688F5031 = T21;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1688F5031,x_1689F5025);
    x_1688F5032 = T19;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1688F5032,x_1689F5025);
    eF5027 = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1688F5032);
    x_1688F5033 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1688F5033,x_1689F5025);
    dF5028 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1688F5033);
    x_1688F5034 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1688F5034,x_1689F5025);
    outF5029 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1688F5034);
    x_1688F5035 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1688F5035,x_1689F5025);
    x_1688F5036 = T11;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1688F5036,x_1689F5025);
    T12 = CALL1(1,VARREF(Ytail),x_1688F5035);
    x_1688F5037 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1688F5037,x_1689F5025);
    T20 = CALL1(1,VARREF(Ytail),x_1688F5031);
    x_1688F5038 = T20;
    bodyF5030 = x_1688F5038;
    x_1688F5039 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1688F5039,x_1689F5025);
    x_1688F5040 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1688F5040,x_1689F5025);
    T8 = CALL1(1,VARREF(Ytail),x_1688F5039);
    x_1688F5041 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1688F5041,x_1689F5025);
  } else {
    T22 = CALL2(1,x_1689F5025,LITREF(lit_78),x_1688F5026);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_262));
  T28 = dF5028;
  T27 = CALL1(1,VARREF(Ylst),T28);
  T30 = outF5029;
  T29 = CALL1(1,VARREF(Ylst),T30);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T29,LITREF(lit_81));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_251));
  T35 = eF5027;
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = dF5028;
  T36 = CALL1(1,VARREF(Ylst),T37);
  T39 = outF5029;
  T38 = CALL1(1,VARREF(Ylst),T39);
  T32 = CALL5(1,VARREF(YgooSmacrosYcat),T33,T34,T36,T38,LITREF(lit_81));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T40 = bodyF5030;
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

LOCCODEDEF(fun_x_1693_99) {
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
  P x_1692F5058;
  P x_1692F5057;
  P x_1692F5056;
  P x_1692F5055;
  P x_1692F5054;
  P x_1692F5053;
  P x_1692F5052;
  P x_1692F5051;
  P x_1692F5050;
  P x_1692F5049;
  P x_1692F5048;
  P bodyF5047;
  P outF5046;
  P dF5045;
  P eF5044;
  P x_1692F5043;
  P x_1693F5042;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T42 = FUNSHELL(0,fun_x_1693_99,2);
  x_1693F5042 = T42;
  FUNINIT(x_1693F5042, 2,FREEREF(0),return_);
  x_1692F5043 = FREEREF(0);
  eF5044 = YPfalse;
  dF5045 = YPfalse;
  outF5046 = YPfalse;
  bodyF5047 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_1692F5043,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T21 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1692F5043,LITREF(lit_275),x_1693F5042);
    x_1692F5048 = T21;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1692F5048,x_1693F5042);
    x_1692F5049 = T19;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1692F5049,x_1693F5042);
    eF5044 = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1692F5049);
    x_1692F5050 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1692F5050,x_1693F5042);
    dF5045 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1692F5050);
    x_1692F5051 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1692F5051,x_1693F5042);
    outF5046 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1692F5051);
    x_1692F5052 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1692F5052,x_1693F5042);
    x_1692F5053 = T11;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1692F5053,x_1693F5042);
    T12 = CALL1(1,VARREF(Ytail),x_1692F5052);
    x_1692F5054 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1692F5054,x_1693F5042);
    T20 = CALL1(1,VARREF(Ytail),x_1692F5048);
    x_1692F5055 = T20;
    bodyF5047 = x_1692F5055;
    x_1692F5056 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1692F5056,x_1693F5042);
    x_1692F5057 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1692F5057,x_1693F5042);
    T8 = CALL1(1,VARREF(Ytail),x_1692F5056);
    x_1692F5058 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1692F5058,x_1693F5042);
  } else {
    T22 = CALL2(1,x_1693F5042,LITREF(lit_78),x_1692F5043);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_276));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_277));
  T29 = eF5044;
  T28 = CALL1(1,VARREF(Ylst),T29);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_81));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_270));
  T36 = eF5044;
  T35 = CALL1(1,VARREF(Ylst),T36);
  T38 = dF5045;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = outF5046;
  T39 = CALL1(1,VARREF(Ylst),T40);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T37,T39,LITREF(lit_81));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T41 = bodyF5047;
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
  P x_1696F5061;
  P qbF5060;
  P x_1694F5059;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(out_, 0);
  ARG(qbT_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_280));
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  x_1694F5059 = T8;
  LOOP_218: {
    P a218_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1694F5059);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1694F5059);
      qbF5060 = T7;
      x_1696F5061 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1696F5061,LITREF(lit_281));
      T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),qbF5060);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1696F5061,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1696F5061,LITREF(lit_282));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1694F5059);
      a218_0 = T6;
      x_1694F5059 = a218_0;
      goto LOOP_218;
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
  P x_1699F5064;
  P qbF5063;
  P x_1697F5062;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(qbT_, 1);
  T10 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
  x_1697F5062 = T9;
  LOOP_219: {
    P a219_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1697F5062);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1697F5062);
      qbF5063 = T8;
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      x_1699F5064 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1699F5064,LITREF(lit_285));
      T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),qbF5063);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1699F5064,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1699F5064,LITREF(lit_286));
      T5 = CALL1(1,VARREF(YevalSmoduleYbinding_info),qbF5063);
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T5);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1697F5062);
      a219_0 = T7;
      x_1697F5062 = a219_0;
      goto LOOP_219;
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
  P nF5065;
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YgooStypesYlen),VARREF(YevalSg2cYTlitsT));
  nF5065 = T0;
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTlitsT),FREEREF(0));
UNLINK_STACK();
  QRET(nF5065);
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
  P x_1700F5066;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1700F5066 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_293));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1700F5066,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1700F5066,LITREF(lit_294));
  T2 = CALL1(1,VARREF(YevalSg2cYref_lit),x_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  CALL2(1,VARREF(YgooSioSportYputs),x_1700F5066,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1700F5066,LITREF(lit_295));
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
  P x_1701F5067;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1701F5067 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_306));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1701F5067,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1701F5067,LITREF(lit_307));
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_1701F5067,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1701F5067,LITREF(lit_308));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_quotation_114) {
  P out_,x_;
  P x_1702F5068;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1702F5068 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_310));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1702F5068,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1702F5068,LITREF(lit_311));
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  CALL2(1,VARREF(YgooSioSportYputs),x_1702F5068,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1702F5068,LITREF(lit_312));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_115) {
  P done_;
  P x_1704F5071;
  P x_1703F5070;
  P iF5069;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(done_, 0);
  T16 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T15 = CALL2(1,VARREF(YgooSmathY_),T16,YPint((P)1));
  iF5069 = T15;
  LOOP_220: {
    P a220_0;
    T2 = CALL1(1,VARREF(YgooSmathYneg),YPint((P)1));
    T1 = CALL2(1,VARREF(YgooSmagYG),iF5069,T2);
    if (T1 != YPfalse) {
      T14 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),iF5069);
      x_1703F5070 = T14;
      x_1704F5071 = VARREF(YgooSmacrosYEE);
      T4 = CALL2(1,x_1704F5071,x_1703F5070,YPchr((P)115));
      if (T4 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF5069);
        T5 = CALL1(0,done_,YPfalse);
        T3 = T5;
      } else {
        T7 = CALL2(1,x_1704F5071,x_1703F5070,YPchr((P)100));
        if (T7 != YPfalse) {
          CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF5069);
          T8 = CALL1(0,done_,YPfalse);
          T6 = T8;
        } else {
          T10 = CALL2(1,x_1704F5071,x_1703F5070,YPchr((P)120));
          if (T10 != YPfalse) {
            CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF5069);
            T11 = CALL1(0,done_,YPfalse);
            T9 = T11;
          } else {
            T13 = CALL2(1,VARREF(YgooSmathY_),iF5069,YPint((P)1));
            a220_0 = T13;
            iF5069 = a220_0;
            goto LOOP_220;
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
  P sF5072;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF5072 = T2;
  T1 = FUNFAB(fun_115,1,sF5072);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_generate_quotation_117) {
  P out_,x_;
  P x_1705F5073;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1705F5073 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_317));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1705F5073,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1705F5073,LITREF(lit_318));
  T1 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1705F5073,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1705F5073,LITREF(lit_319));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_quotation_118) {
  P out_,x_;
  P x_1706F5074;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1706F5074 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_321));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1706F5074,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1706F5074,LITREF(lit_322));
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1706F5074,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1706F5074,LITREF(lit_323));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_generate_quotation_119) {
  P out_,x_;
  P eF5077;
  P x_1708F5076;
  P x_1707F5075;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1707F5075 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1707F5075,LITREF(lit_325));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_326));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1707F5075,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1707F5075,LITREF(lit_327));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1707F5075,T2);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  x_1708F5076 = T9;
  LOOP_221: {
    P a221_0;
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1708F5076);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1708F5076);
      eF5077 = T8;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_328));
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,eF5077);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1708F5076);
      a221_0 = T7;
      x_1708F5076 = a221_0;
      goto LOOP_221;
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
  P eF5080;
  P x_1711F5079;
  P x_1710F5078;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1710F5078 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1710F5078,LITREF(lit_331));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_332));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1710F5078,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1710F5078,LITREF(lit_333));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1710F5078,T2);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  x_1711F5079 = T9;
  LOOP_222: {
    P a222_0;
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1711F5079);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1711F5079);
      eF5080 = T8;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_334));
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,eF5080);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1711F5079);
      a222_0 = T7;
      x_1711F5079 = a222_0;
      goto LOOP_222;
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
  P x_1713F5081;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_1713F5081 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_337));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1713F5081,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1713F5081,LITREF(lit_338));
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1713F5081,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1713F5081,LITREF(lit_339));
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
  P x_1716F5084;
  P x_1715F5083;
  P x_1714F5082;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(v_, 0);
  ARG(out_, 1);
  T6 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),v_);
  x_1714F5082 = T6;
  x_1715F5083 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1715F5083,x_1714F5082,LITREF(lit_224));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_346);
  } else {
    T3 = CALL2(1,x_1715F5083,x_1714F5082,LITREF(lit_149));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_347);
    } else {
      T5 = CALL2(1,x_1715F5083,x_1714F5082,LITREF(lit_150));
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
  x_1716F5084 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1716F5084,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_1716F5084,YPchr((P)41));
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
  P x_1718F5086;
  P x_1717F5085;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_357));
  x_1717F5085 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1717F5085,YPchr((P)40));
  x_1718F5086 = out_;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1718F5086,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYput),x_1717F5085,YPchr((P)41));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_gen_ref_129) {
  P e_,out_;
  P x_1719F5088;
  P regF5087;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF5087 = T4;
  if (regF5087 != YPfalse) {
    x_1719F5088 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1719F5088,LITREF(lit_359));
    T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF5087);
    T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1719F5088,T2);
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
  P x_1720F5089;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  x_1720F5089 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1720F5089,LITREF(lit_362));
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1720F5089,T1);
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
  P x_1722F5091;
  P x_1721F5090;
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
  x_1721F5090 = T7;
  x_1722F5091 = VARREF(YgooSmacrosYEE);
  T2 = CALL2(1,x_1722F5091,x_1721F5090,LITREF(lit_149));
  if (T2 != YPfalse) {
    T1 = LITREF(lit_369);
  } else {
    T4 = CALL2(1,x_1722F5091,x_1721F5090,LITREF(lit_150));
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
  P x_1723F5092;
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
    x_1723F5092 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1723F5092,YPchr((P)40));
    T7 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T6 = CALL1(1,VARREF(YevalSastYreference_binding),T7);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T6,out_);
    CALL2(1,VARREF(YgooSioSportYput),x_1723F5092,YPchr((P)44));
    T8 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T8,out_);
    T9 = CALL2(1,VARREF(YgooSioSportYput),x_1723F5092,YPchr((P)41));
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
  P x_1724F5094;
  P refF5093;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T7 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  refF5093 = T7;
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T3 = CALL1(1,VARREF(YevalSastYreference_binding),refF5093);
    T2 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),T3);
    if (T2 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_379));
      x_1724F5094 = out_;
      CALL2(1,VARREF(YgooSioSportYput),x_1724F5094,YPchr((P)40));
      CALL2(1,VARREF(YevalSg2cYgen_ref),refF5093,out_);
      T4 = CALL2(1,VARREF(YgooSioSportYput),x_1724F5094,YPchr((P)41));
    } else {
      T5 = CALL2(1,VARREF(YevalSg2cYgen_ref),refF5093,out_);
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
  P x_1725F5096;
  P refF5095;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T8 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  refF5095 = T8;
  T0 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),refF5095);
  T1 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_381));
    x_1725F5096 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1725F5096,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
    CALL2(1,VARREF(YgooSioSportYput),x_1725F5096,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),refF5095,out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1725F5096,YPchr((P)41));
  } else {
    CALL2(1,VARREF(YevalSg2cYgen_ref),refF5095,out_);
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
  P x_1726F5098;
  P bindingF5097;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T6 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  T5 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),T6);
  T4 = CALL1(1,VARREF(YevalSastYreference_binding),T5);
  bindingF5097 = T4;
  T1 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),bindingF5097);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF5097,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_384));
    x_1726F5098 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1726F5098,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF5097,out_);
    T2 = CALL2(1,VARREF(YgooSioSportYput),x_1726F5098,YPchr((P)41));
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
  P x_1727F5102;
  P tstF5101;
  P tmpF5100;
  P bb_tstF5099;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T22 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  T21 = CALL1(1,VARREF(YevalSg2cYbbQ),T22);
  bb_tstF5099 = T21;
  tmpF5100 = bb_tstF5099;
  if (tmpF5100 != YPfalse) {
    T19 = tmpF5100;
  } else {
    T20 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
    T19 = T20;
  }
  tstF5101 = T19;
  T0 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_391));
  CALL2(1,VARREF(YevalSg2cYgen_ref),tstF5101,out_);
  if (bb_tstF5099 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_392));
  } else {
    x_1727F5102 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1727F5102,LITREF(lit_393));
    T2 = CALL0(1,VARREF(YevalSg2cYfalse_name));
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1727F5102,T2);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1727F5102,LITREF(lit_394));
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
  P x_1735F5116;
  P x_1734F5115;
  P bF5114;
  P iF5113;
  P firstQF5112;
  P tmpF5111;
  P tmpF5110;
  P x_1730F5109;
  P x_1731F5108;
  P x_1732F5107;
  P x_1729F5106;
  P bindingsF5105;
  P x_1728F5104;
  P nF5103;
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
  nF5103 = T36;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_1728F5104 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1728F5104,LITREF(lit_400));
  T0 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5103);
  CALL2(1,VARREF(YgooSioSportYputs),x_1728F5104,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1728F5104,LITREF(lit_401));
  T35 = CALL1(1,VARREF(YevalSastYloop_bindings),e_);
  bindingsF5105 = T35;
  T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF5105);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T4,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_402));
    x_1729F5106 = out_;
    T26 = fun_147;
    T27 = fun_148;
    T25 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T26,T27);
    T24 = CALL1(1,VARREF(YgooScolsScolYenum),T25);
    x_1732F5107 = T24;
    T29 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
    T28 = CALL1(1,VARREF(YgooScolsScolYenum),T29);
    x_1731F5108 = T28;
    T30 = CALL1(1,VARREF(YgooScolsScolYenum),bindingsF5105);
    x_1730F5109 = T30;
    LOOP_223: {
      P a223_0,a223_1,a223_2;
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1732F5107);
      tmpF5110 = T11;
      if (tmpF5110 != YPfalse) {
        T7 = tmpF5110;
      } else {
        T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1731F5108);
        tmpF5111 = T10;
        if (tmpF5111 != YPfalse) {
          T8 = tmpF5111;
        } else {
          T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1730F5109);
          T8 = T9;
        }
        T7 = T8;
      }
      T6 = CALL1(1,VARREF(Ynot),T7);
      if (T6 != YPfalse) {
        T23 = CALL1(1,VARREF(YgooScolsScolYnow),x_1732F5107);
        firstQF5112 = T23;
        T22 = CALL1(1,VARREF(YgooScolsScolYnow),x_1731F5108);
        iF5113 = T22;
        T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_1730F5109);
        bF5114 = T21;
        T12 = CALL1(1,VARREF(Ynot),firstQF5112);
        if (T12 != YPfalse) {
          T13 = CALL2(1,VARREF(YgooSioSportYput),x_1729F5106,YPchr((P)44));
        } else {
        }
        x_1734F5115 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_1734F5115,LITREF(lit_405));
        T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5103);
        CALL2(1,VARREF(YgooSioSportYputs),x_1734F5115,T14);
        CALL2(1,VARREF(YgooSioSportYputs),x_1734F5115,LITREF(lit_406));
        T16 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF5113);
        T15 = CALL2(1,VARREF(YgooSioSportYputs),x_1734F5115,T16);
        T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1732F5107);
        T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1731F5108);
        T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1730F5109);
        a223_0 = T18;
        a223_1 = T19;
        a223_2 = T20;
        x_1732F5107 = a223_0;
        x_1731F5108 = a223_1;
        x_1730F5109 = a223_2;
        goto LOOP_223;
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
  x_1735F5116 = out_;
  T34 = CALL2(1,VARREF(YgooSioSportYputs),x_1735F5116,LITREF(lit_407));
UNLINK_STACK();
  QRET(T34);
}

LOCCODEDEF(fun_to_c_150) {
  P e_,f_,d_,out_;
  P x_1746F5133;
  P x_1745F5132;
  P bindingF5131;
  P iF5130;
  P tmpF5129;
  P x_1742F5128;
  P x_1743F5127;
  P x_1741F5126;
  P argF5125;
  P iF5124;
  P tmpF5123;
  P x_1738F5122;
  P x_1739F5121;
  P argF5120;
  P x_1736F5119;
  P nF5118;
  P loopF5117;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T46 = CALL1(1,VARREF(YevalSastYapplication_loop),e_);
  loopF5117 = T46;
  T45 = CALL1(1,VARREF(YevalSastYloop_continue),loopF5117);
  nF5118 = T45;
  T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1736F5119 = T6;
  LOOP_224: {
    P a224_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1736F5119);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1736F5119);
      argF5120 = T5;
      CALL4(1,VARREF(YevalSg2cYto_c),argF5120,f_,d_,out_);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1736F5119);
      a224_0 = T4;
      x_1736F5119 = a224_0;
      goto LOOP_224;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
  T22 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_1739F5121 = T21;
  T24 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_1738F5122 = T23;
  LOOP_225: {
    P a225_0,a225_1;
    T12 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1739F5121);
    tmpF5123 = T12;
    if (tmpF5123 != YPfalse) {
      T10 = tmpF5123;
    } else {
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1738F5122);
      T10 = T11;
    }
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_1739F5121);
      iF5124 = T20;
      T19 = CALL1(1,VARREF(YgooScolsScolYnow),x_1738F5122);
      argF5125 = T19;
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      x_1741F5126 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1741F5126,LITREF(lit_409));
      T13 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5118);
      CALL2(1,VARREF(YgooSioSportYputs),x_1741F5126,T13);
      CALL2(1,VARREF(YgooSioSportYputs),x_1741F5126,LITREF(lit_410));
      T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF5124);
      CALL2(1,VARREF(YgooSioSportYputs),x_1741F5126,T14);
      T15 = CALL2(1,VARREF(YgooSioSportYputs),x_1741F5126,LITREF(lit_411));
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF5125,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1739F5121);
      T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1738F5122);
      a225_0 = T17;
      a225_1 = T18;
      x_1739F5121 = a225_0;
      x_1738F5122 = a225_1;
      goto LOOP_225;
      T8 = T16;
    } else {
      T8 = YPfalse;
    }
  }
  T39 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T38 = CALL1(1,VARREF(YgooScolsScolYenum),T39);
  x_1743F5127 = T38;
  T41 = CALL1(1,VARREF(YevalSastYloop_bindings),loopF5117);
  T40 = CALL1(1,VARREF(YgooScolsScolYenum),T41);
  x_1742F5128 = T40;
  LOOP_226: {
    P a226_0,a226_1;
    T29 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1743F5127);
    tmpF5129 = T29;
    if (tmpF5129 != YPfalse) {
      T27 = tmpF5129;
    } else {
      T28 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1742F5128);
      T27 = T28;
    }
    T26 = CALL1(1,VARREF(Ynot),T27);
    if (T26 != YPfalse) {
      T37 = CALL1(1,VARREF(YgooScolsScolYnow),x_1743F5127);
      iF5130 = T37;
      T36 = CALL1(1,VARREF(YgooScolsScolYnow),x_1742F5128);
      bindingF5131 = T36;
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF5131,out_);
      x_1745F5132 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1745F5132,LITREF(lit_412));
      T30 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5118);
      CALL2(1,VARREF(YgooSioSportYputs),x_1745F5132,T30);
      CALL2(1,VARREF(YgooSioSportYputs),x_1745F5132,LITREF(lit_413));
      T32 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF5130);
      T31 = CALL2(1,VARREF(YgooSioSportYputs),x_1745F5132,T32);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T34 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1743F5127);
      T35 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1742F5128);
      a226_0 = T34;
      a226_1 = T35;
      x_1743F5127 = a226_0;
      x_1742F5128 = a226_1;
      goto LOOP_226;
      T25 = T33;
    } else {
      T25 = YPfalse;
    }
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_1746F5133 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1746F5133,LITREF(lit_414));
  T43 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5118);
  T42 = CALL2(1,VARREF(YgooSioSportYputs),x_1746F5133,T43);
  T44 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T44);
}

LOCCODEDEF(fun_to_c_151) {
  P e_,f_,d_,out_;
  P argF5143;
  P x_1752F5142;
  P x_1751F5141;
  P x_1750F5140;
  P tmpF5139;
  P x_1749F5138;
  P argF5137;
  P x_1747F5136;
  P nF5135;
  P functionF5134;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T33 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  functionF5134 = T33;
  T32 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T31 = CALL1(1,VARREF(YgooStypesYlen),T32);
  nF5135 = T31;
  T0 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T8 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  x_1747F5136 = T7;
  LOOP_227: {
    P a227_0;
    T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1747F5136);
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_1747F5136);
      argF5137 = T6;
      CALL4(1,VARREF(YevalSg2cYto_c),argF5137,f_,d_,out_);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1747F5136);
      a227_0 = T5;
      x_1747F5136 = a227_0;
      goto LOOP_227;
      T1 = T4;
    } else {
      T1 = YPfalse;
    }
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  x_1749F5138 = out_;
  T12 = CALL1(1,VARREF(Ynot),f_);
  tmpF5139 = T12;
  if (tmpF5139 != YPfalse) {
    T10 = tmpF5139;
  } else {
    T11 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    T10 = T11;
  }
  if (T10 != YPfalse) {
    T9 = LITREF(lit_416);
  } else {
    T9 = LITREF(lit_153);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1749F5138,T9);
  CALL2(1,VARREF(YgooSioSportYputs),x_1749F5138,LITREF(lit_417));
  T15 = CALL2(1,VARREF(YgooSmagYG),nF5135,VARREF(YevalSg2cYDnumber_call_templates));
  if (T15 != YPfalse) {
    T14 = LITREF(lit_418);
  } else {
    T14 = nF5135;
  }
  T13 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1749F5138,T14);
  x_1750F5140 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1750F5140,YPchr((P)40));
  T17 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
  if (T17 != YPfalse) {
    T16 = LITREF(lit_419);
  } else {
    T16 = LITREF(lit_420);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T16);
  T18 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T18,out_);
  T19 = CALL2(1,VARREF(YgooSmagYG),nF5135,VARREF(YevalSg2cYDnumber_call_templates));
  if (T19 != YPfalse) {
    x_1751F5141 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1751F5141,LITREF(lit_421));
    T20 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1751F5141,nF5135);
  } else {
  }
  T28 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
  x_1752F5142 = T27;
  LOOP_228: {
    P a228_0;
    T23 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1752F5142);
    T22 = CALL1(1,VARREF(Ynot),T23);
    if (T22 != YPfalse) {
      T26 = CALL1(1,VARREF(YgooScolsScolYnow),x_1752F5142);
      argF5143 = T26;
      CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF5143,out_);
      T25 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1752F5142);
      a228_0 = T25;
      x_1752F5142 = a228_0;
      goto LOOP_228;
      T21 = T24;
    } else {
      T21 = YPfalse;
    }
  }
  T29 = CALL2(1,VARREF(YgooSioSportYput),x_1750F5140,YPchr((P)41));
  T30 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T30);
}

LOCCODEDEF(fun_to_c_152) {
  P e_,f_,d_,out_;
  P next_metsF5145;
  P x_1754F5144;
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
  x_1754F5144 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1754F5144,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYapplication_next_methods),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  T3 = CALL2(1,VARREF(YgooSioSportYput),x_1754F5144,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
  T8 = (P)YPfun_reg();
  T9 = (P)YPnext_methods();
  T7 = CALLN(1,VARREF(YgooSmacrosYOchecked_next_methods),6,T8,T9,e_,f_,d_,out_);
  next_metsF5145 = T7;
  T5 = CALL1(1,VARREF(Yhead),next_metsF5145);
  T6 = CALL1(1,VARREF(Ytail),next_metsF5145);
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
  P xF5151;
  P firstQF5150;
  P tmpF5149;
  P x_1756F5148;
  P x_1757F5147;
  P x_1755F5146;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  x_1755F5146 = out_;
  T14 = fun_153;
  T15 = fun_154;
  T13 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T14,T15);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  x_1757F5147 = T12;
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  x_1756F5148 = T16;
  LOOP_229: {
    P a229_0,a229_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1757F5147);
    tmpF5149 = T4;
    if (tmpF5149 != YPfalse) {
      T2 = tmpF5149;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1756F5148);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_1757F5147);
      firstQF5150 = T11;
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1756F5148);
      xF5151 = T10;
      T5 = CALL1(1,VARREF(Ynot),firstQF5150);
      if (T5 != YPfalse) {
        T6 = CALL2(1,VARREF(YgooSioSportYput),x_1755F5146,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_ref),xF5151,out_);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1757F5147);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1756F5148);
      a229_0 = T8;
      a229_1 = T9;
      x_1757F5147 = a229_0;
      x_1756F5148 = a229_1;
      goto LOOP_229;
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
  P x_1763F5162;
  P tmpF5161;
  P bindingF5160;
  P typeF5159;
  P initF5158;
  P tmpF5157;
  P tmpF5156;
  P x_1759F5155;
  P x_1760F5154;
  P x_1761F5153;
  P low_letQF5152;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T27 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLlow_letG));
  low_letQF5152 = T27;
  T20 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  x_1761F5153 = T19;
  T22 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_1760F5154 = T21;
  T24 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_1759F5155 = T23;
  LOOP_230: {
    P a230_0,a230_1,a230_2;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1761F5153);
    tmpF5156 = T6;
    if (tmpF5156 != YPfalse) {
      T2 = tmpF5156;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1760F5154);
      tmpF5157 = T5;
      if (tmpF5157 != YPfalse) {
        T3 = tmpF5157;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1759F5155);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_1761F5153);
      initF5158 = T18;
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_1760F5154);
      typeF5159 = T17;
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1759F5155);
      bindingF5160 = T16;
      CALL4(1,VARREF(YevalSg2cYto_c),initF5158,f_,d_,out_);
      T9 = CALL1(1,VARREF(YevalSoptimizeYunconstrained_typeQ),typeF5159);
      tmpF5161 = T9;
      if (tmpF5161 != YPfalse) {
        T8 = tmpF5161;
      } else {
        T8 = low_letQF5152;
      }
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        CALL4(1,VARREF(YevalSg2cYto_c),typeF5159,f_,d_,out_);
        CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
        CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_428));
        x_1763F5162 = out_;
        CALL2(1,VARREF(YgooSioSportYput),x_1763F5162,YPchr((P)40));
        CALL2(1,VARREF(YevalSg2cYgen_ref),initF5158,out_);
        CALL2(1,VARREF(YgooSioSportYput),x_1763F5162,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),typeF5159,out_);
        T10 = CALL2(1,VARREF(YgooSioSportYput),x_1763F5162,YPchr((P)41));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF5160,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_429));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF5158,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1761F5153);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1760F5154);
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1759F5155);
      a230_0 = T13;
      a230_1 = T14;
      a230_2 = T15;
      x_1761F5153 = a230_0;
      x_1760F5154 = a230_1;
      x_1759F5155 = a230_2;
      goto LOOP_230;
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
  P bindingF5167;
  P initF5166;
  P tmpF5165;
  P x_1764F5164;
  P x_1765F5163;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T11 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  x_1765F5163 = T10;
  T13 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  x_1764F5164 = T12;
  LOOP_231: {
    P a231_0,a231_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1765F5163);
    tmpF5165 = T4;
    if (tmpF5165 != YPfalse) {
      T2 = tmpF5165;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1764F5164);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1765F5163);
      initF5166 = T9;
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1764F5164);
      bindingF5167 = T8;
      CALL5(1,VARREF(YevalSg2cYfunshell_to_c),bindingF5167,initF5166,YPfalse,d_,out_);
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF5167,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_431));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF5166,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1765F5163);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1764F5164);
      a231_0 = T6;
      a231_1 = T7;
      x_1765F5163 = a231_0;
      x_1764F5164 = a231_1;
      goto LOOP_231;
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
  P x_1767F5168;
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
  x_1767F5168 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1767F5168,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1767F5168,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_to_c_159) {
  P e_,f_,d_,out_;
  P x_1768F5169;
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
  x_1768F5169 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1768F5169,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1768F5169,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1768F5169,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_to_c_160) {
  P e_,f_,d_,out_;
  P x_1769F5170;
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
  x_1769F5170 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1769F5170,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_438));
  CALL2(1,VARREF(YgooSioSportYput),x_1769F5170,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_439));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1769F5170,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_440));
  CALL2(1,VARREF(YgooSioSportYput),x_1769F5170,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1769F5170,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1769F5170,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1769F5170,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T9,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1769F5170,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_1769F5170,YPchr((P)41));
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
  P argF5181;
  P firstQF5180;
  P tmpF5179;
  P x_1775F5178;
  P x_1776F5177;
  P x_1774F5176;
  P x_1773F5175;
  P x_1772F5174;
  P argF5173;
  P x_1770F5172;
  P bindingF5171;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T31 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bindingF5171 = T31;
  T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1770F5172 = T6;
  LOOP_232: {
    P a232_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1770F5172);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1770F5172);
      argF5173 = T5;
      CALL4(1,VARREF(YevalSg2cYto_c),argF5173,f_,d_,out_);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1770F5172);
      a232_0 = T4;
      x_1770F5172 = a232_0;
      goto LOOP_232;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  x_1772F5174 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1772F5174,LITREF(lit_442));
  T10 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  T9 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T10);
  T8 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1772F5174,T9);
  x_1773F5175 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1773F5175,YPchr((P)40));
  x_1774F5176 = out_;
  T25 = fun_161;
  T26 = fun_162;
  T24 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T25,T26);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_1776F5177 = T23;
  T28 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
  x_1775F5178 = T27;
  LOOP_233: {
    P a233_0,a233_1;
    T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1776F5177);
    tmpF5179 = T15;
    if (tmpF5179 != YPfalse) {
      T13 = tmpF5179;
    } else {
      T14 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1775F5178);
      T13 = T14;
    }
    T12 = CALL1(1,VARREF(Ynot),T13);
    if (T12 != YPfalse) {
      T22 = CALL1(1,VARREF(YgooScolsScolYnow),x_1776F5177);
      firstQF5180 = T22;
      T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_1775F5178);
      argF5181 = T21;
      T16 = CALL1(1,VARREF(Ynot),firstQF5180);
      if (T16 != YPfalse) {
        T17 = CALL2(1,VARREF(YgooSioSportYput),x_1774F5176,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF5181,out_);
      T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1776F5177);
      T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1775F5178);
      a233_0 = T19;
      a233_1 = T20;
      x_1776F5177 = a233_0;
      x_1775F5178 = a233_1;
      goto LOOP_233;
      T11 = T18;
    } else {
      T11 = YPfalse;
    }
  }
  T29 = CALL2(1,VARREF(YgooSioSportYput),x_1773F5175,YPchr((P)41));
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
  P xF5187;
  P x_1780F5186;
  P x_1779F5185;
  P x_1778F5184;
  P fF5183;
  P nF5182;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T22 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T21 = CALL1(1,VARREF(YgooStypesYlen),T22);
  nF5182 = T21;
  T20 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T20);
  fF5183 = T19;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),nF5182,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T3 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF5183);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T2 = T4;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T5 = FUNFAB(fun_164,3,fF5183,d_,out_);
    T6 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T5,T6);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_447));
    x_1778F5184 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1778F5184,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF5183);
    x_1779F5185 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1779F5185,LITREF(lit_448));
    T8 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5182);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1779F5185,T8);
    T16 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
    x_1780F5186 = T15;
    LOOP_234: {
      P a234_0;
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1780F5186);
      T10 = CALL1(1,VARREF(Ynot),T11);
      if (T10 != YPfalse) {
        T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1780F5186);
        xF5187 = T14;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),xF5187,out_);
        T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1780F5186);
        a234_0 = T13;
        x_1780F5186 = a234_0;
        goto LOOP_234;
        T9 = T12;
      } else {
        T9 = YPfalse;
      }
    }
    T17 = CALL2(1,VARREF(YgooSioSportYput),x_1778F5184,YPchr((P)41));
    T18 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
    T0 = T18;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_funshell_to_c_166) {
  P b_,e_,f_,d_,out_;
  P x_1784F5192;
  P x_1783F5191;
  P x_1782F5190;
  P fF5189;
  P nF5188;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(out_, 4);
  T13 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
  nF5188 = T12;
  T11 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T11);
  fF5189 = T10;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),nF5188,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF5189);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_451));
    x_1782F5190 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1782F5190,YPchr((P)40));
    x_1783F5191 = out_;
    T5 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T5 != YPfalse) {
      T4 = YPint((P)1);
    } else {
      T4 = YPint((P)0);
    }
    T3 = CALL1(1,VARREF(YgooSmathYnum_to_str),T4);
    T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1783F5191,T3);
    CALL2(1,VARREF(YgooSioSportYput),x_1782F5190,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF5189);
    CALL2(1,VARREF(YgooSioSportYput),x_1782F5190,YPchr((P)44));
    x_1784F5192 = out_;
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF5188);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1784F5192,T7);
    T8 = CALL2(1,VARREF(YgooSioSportYput),x_1782F5190,YPchr((P)41));
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
  P xF5197;
  P x_1787F5196;
  P x_1786F5195;
  P x_1785F5194;
  P nF5193;
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
  nF5193 = T16;
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),nF5193,YPint((P)0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = FUNFAB(fun_167,3,f_,d_,out_);
    T4 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_455));
    x_1785F5194 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1785F5194,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,out_);
    x_1786F5195 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1786F5195,LITREF(lit_456));
    T5 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1786F5195,nF5193);
    T13 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
    x_1787F5196 = T12;
    LOOP_235: {
      P a235_0;
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1787F5196);
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_1787F5196);
        xF5197 = T11;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),xF5197,out_);
        T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1787F5196);
        a235_0 = T10;
        x_1787F5196 = a235_0;
        goto LOOP_235;
        T6 = T9;
      } else {
        T6 = YPfalse;
      }
    }
    T14 = CALL2(1,VARREF(YgooSioSportYput),x_1785F5194,YPchr((P)41));
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
  P x_1789F5198;
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
  x_1789F5198 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1789F5198,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_1789F5198,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1789F5198,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_1789F5198,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_out_list_builder_170) {
  P f_,out_,elts_;
  P eF5202;
  P x_1792F5201;
  P x_1791F5200;
  P x_1790F5199;
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
    x_1790F5199 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1790F5199,YPchr((P)40));
    x_1791F5200 = out_;
    T7 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),T7);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1791F5200,T6);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    x_1792F5201 = T14;
    LOOP_236: {
      P a236_0;
      T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1792F5201);
      T9 = CALL1(1,VARREF(Ynot),T10);
      if (T9 != YPfalse) {
        T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1792F5201);
        eF5202 = T13;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL1(0,f_,eF5202);
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1792F5201);
        a236_0 = T12;
        x_1792F5201 = a236_0;
        goto LOOP_236;
        T8 = T11;
      } else {
        T8 = YPfalse;
      }
    }
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_1790F5199,YPchr((P)41));
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
  P x_1794F5203;
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
  x_1794F5203 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1794F5203,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_1794F5203,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1794F5203,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1794F5203,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1794F5203,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_471));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_1794F5203,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_to_c_176) {
  P e_,f_,d_,out_;
  P x_1795F5204;
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
  x_1795F5204 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1795F5204,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1795F5204,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1795F5204,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_names),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1795F5204,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_474));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYput),x_1795F5204,YPchr((P)41));
  T7 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_generate_function_forwards_177) {
  P out_,definitions_;
  P defF5206;
  P x_1796F5205;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(out_, 0);
  ARG(definitions_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_477));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  x_1796F5205 = T6;
  LOOP_237: {
    P a237_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1796F5205);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1796F5205);
      defF5206 = T5;
      CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),out_,defF5206);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1796F5205);
      a237_0 = T4;
      x_1796F5205 = a237_0;
      goto LOOP_237;
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
  P iF5213;
  P firstQF5212;
  P tmpF5211;
  P x_1800F5210;
  P x_1801F5209;
  P x_1799F5208;
  P x_1798F5207;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  x_1798F5207 = out_;
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T0 = LITREF(lit_480);
  } else {
    T0 = LITREF(lit_481);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1798F5207,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1798F5207,LITREF(lit_482));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1798F5207,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1798F5207,LITREF(lit_483));
  x_1799F5208 = out_;
  T18 = fun_178;
  T19 = fun_179;
  T17 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T18,T19);
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
  x_1801F5209 = T16;
  T23 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T22 = CALL1(1,VARREF(YgooStypesYlen),T23);
  T21 = CALL1(1,VARREF(YgooScolsSseqYbelow),T22);
  T20 = CALL1(1,VARREF(YgooScolsScolYenum),T21);
  x_1800F5210 = T20;
  LOOP_238: {
    P a238_0,a238_1;
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1801F5209);
    tmpF5211 = T8;
    if (tmpF5211 != YPfalse) {
      T6 = tmpF5211;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1800F5210);
      T6 = T7;
    }
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1801F5209);
      firstQF5212 = T15;
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1800F5210);
      iF5213 = T14;
      T9 = CALL1(1,VARREF(Ynot),firstQF5212);
      if (T9 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSioSportYput),x_1799F5208,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_486));
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1801F5209);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1800F5210);
      a238_0 = T12;
      a238_1 = T13;
      x_1801F5209 = a238_0;
      x_1800F5210 = a238_1;
      goto LOOP_238;
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
  P x_1804F5217;
  P nameF5216;
  P x_1803F5215;
  P nameF5214;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  T17 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF5214 = T17;
  T2 = CALL2(1,VARREF(YisaQ),nameF5214,VARREF(YevalSmoduleYLmodule_bindingG));
  if (T2 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),nameF5214);
    T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_490),T4);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_binding),nameF5214);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
    T0 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nameF5214,YPfalse);
    if (T8 != YPfalse) {
      x_1803F5215 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1803F5215,LITREF(lit_491));
      T10 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T9 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1803F5215,T10);
      T7 = T9;
    } else {
      T15 = CALL2(1,VARREF(YisaQ),nameF5214,VARREF(YevalSastYLlocal_bindingG));
      if (T15 != YPfalse) {
        T16 = CALL1(1,VARREF(YevalSmoduleYbinding_name),nameF5214);
        T14 = T16;
      } else {
        T14 = nameF5214;
      }
      nameF5216 = T14;
      x_1804F5217 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1804F5217,LITREF(lit_492));
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF5216);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1804F5217,T11);
      CALL2(1,VARREF(YgooSioSportYputs),x_1804F5217,LITREF(lit_493));
      T13 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T12 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1804F5217,T13);
      T7 = T12;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_function_forward_182) {
  P out_,defn_;
  P boundQF5218;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  T3 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T2 = CALL2(1,VARREF(YisaQ),T3,VARREF(YevalSmoduleYLmodule_bindingG));
  boundQF5218 = T2;
  if (boundQF5218 != YPfalse) {
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
  P x_1807F5221;
  P x_1806F5220;
  P x_1805F5219;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
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
  x_1805F5219 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1805F5219,LITREF(lit_507));
  T3 = CALL1(1,VARREF(YevalSastYfunction_inlineableQ),definition_);
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_508));
    T2 = T4;
  } else {
    T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_509));
    T2 = T5;
  }
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1805F5219,T2);
  x_1806F5220 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1806F5220,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_1806F5220,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1806F5220,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1806F5220,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYfunction_names),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1806F5220,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
  if (T9 != YPfalse) {
    x_1807F5221 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1807F5221,LITREF(lit_510));
    T11 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_1807F5221,T10);
    T12 = CALL2(1,VARREF(YgooSioSportYputs),x_1807F5221,LITREF(lit_511));
  } else {
    T14 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_512));
    T13 = CALL2(1,VARREF(YgooSioSportYputs),out_,T14);
  }
  CALL2(1,VARREF(YgooSioSportYput),x_1806F5220,YPchr((P)44));
  T15 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T15,out_);
  T16 = CALL2(1,VARREF(YgooSioSportYput),x_1806F5220,YPchr((P)41));
  T17 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_generate_function_body_reference_188) {
  P out_,definition_;
  P T0;
LINK_STACK();
  ARG(out_, 0);
  ARG(definition_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_515));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_516));
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
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_519));
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T0,out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_generate_return_190) {
  P defn_,d_,out_;
  P x_1808F5222;
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
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_521));
  x_1808F5222 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1808F5222,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1808F5222,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_191) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_192) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_generate_function_code_193) {
  P out_,e_;
  P bindingF5230;
  P firstQF5229;
  P tmpF5228;
  P x_1812F5227;
  P x_1813F5226;
  P x_1811F5225;
  P x_1810F5224;
  P x_1809F5223;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(out_, 0);
  ARG(e_, 1);
  x_1809F5223 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1809F5223,LITREF(lit_524));
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T0 = LITREF(lit_525);
  } else {
    T0 = LITREF(lit_153);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1809F5223,T0);
  T2 = CALL1(1,VARREF(YevalSastYfunction_inlineableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_526);
  } else {
    T1 = LITREF(lit_153);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1809F5223,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1809F5223,LITREF(lit_527));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,out_);
  x_1810F5224 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1810F5224,YPchr((P)40));
  x_1811F5225 = out_;
  T19 = fun_191;
  T20 = fun_192;
  T18 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T19,T20);
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_1813F5226 = T17;
  T22 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_1812F5227 = T21;
  LOOP_239: {
    P a239_0,a239_1;
    T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1813F5226);
    tmpF5228 = T9;
    if (tmpF5228 != YPfalse) {
      T7 = tmpF5228;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1812F5227);
      T7 = T8;
    }
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_1813F5226);
      firstQF5229 = T16;
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1812F5227);
      bindingF5230 = T15;
      T10 = CALL1(1,VARREF(Ynot),firstQF5229);
      if (T10 != YPfalse) {
        T11 = CALL2(1,VARREF(YgooSioSportYput),x_1811F5225,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_530));
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF5230,out_);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1813F5226);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1812F5227);
      a239_0 = T13;
      a239_1 = T14;
      x_1813F5226 = a239_0;
      x_1812F5227 = a239_1;
      goto LOOP_239;
      T5 = T12;
    } else {
      T5 = YPfalse;
    }
  }
  T23 = CALL2(1,VARREF(YgooSioSportYput),x_1810F5224,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_531));
  T24 = CALL1(1,VARREF(YevalSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T24,out_);
  T25 = CALL1(1,VARREF(YevalSastYfunction_registers),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T25,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_532));
  T26 = CALL1(1,VARREF(YevalSastYfunction_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T26,e_,YPint((P)1),out_);
  CALL3(1,VARREF(YevalSg2cYgenerate_return),e_,YPint((P)1),out_);
  T27 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_533));
UNLINK_STACK();
  QRET(T27);
}

LOCCODEDEF(fun_dispatcherQ_194) {
  P definition_;
  P tmpF5233;
  P nameF5232;
  P bindingF5231;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(definition_, 0);
  T11 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF5231 = T11;
  T1 = CALL2(1,VARREF(YisaQ),bindingF5231,VARREF(YevalSmoduleYLmodule_bindingG));
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bindingF5231);
    T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T10);
    nameF5232 = T9;
    T8 = CALL2(1,VARREF(YgooSlogYE),nameF5232,LITREF(lit_536));
    tmpF5233 = T8;
    if (tmpF5233 != YPfalse) {
      T2 = tmpF5233;
    } else {
      T4 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF5232,LITREF(lit_537));
      T6 = CALL1(1,VARREF(YgooStypesYlen),nameF5232);
      T7 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_538));
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

LOCCODEDEF(fun_195) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_196) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_197) {
  P b_;
  P x_1819F5234;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(b_, 0);
  T1 = CALL2(1,VARREF(YisaQ),b_,VARREF(YevalSmoduleYLbindingG));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    T2 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),b_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_548));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_549));
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,FREEREF(0));
    x_1819F5234 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1819F5234,LITREF(lit_550));
    T6 = BOXGET(FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1819F5234,T5);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1819F5234,LITREF(lit_551));
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

LOCCODEDEF(fun_generate_function_code_198) {
  P out_,definition_;
  P bF5243;
  P firstQF5242;
  P tmpF5241;
  P x_1816F5240;
  P x_1817F5239;
  P x_1815F5238;
  P boundQF5237;
  P bindingsF5236;
  P offsetF5235;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(out_, 0);
  ARG(definition_, 1);
  offsetF5235 = YPint((P)0);
  offsetF5235 = BOXFAB(offsetF5235);
  T33 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF5236 = T33;
  T32 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  T31 = CALL2(1,VARREF(YisaQ),T32,VARREF(YevalSmoduleYLmodule_bindingG));
  boundQF5237 = T31;
  if (boundQF5237 != YPfalse) {
    T1 = LITREF(lit_540);
  } else {
    T1 = LITREF(lit_541);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_542));
  T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),bindingsF5236);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_543));
    x_1815F5238 = out_;
    T18 = fun_195;
    T19 = fun_196;
    T17 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T18,T19);
    T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
    x_1817F5239 = T16;
    T21 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T20 = CALL1(1,VARREF(YgooScolsScolYenum),T21);
    x_1816F5240 = T20;
    LOOP_240: {
      P a240_0,a240_1;
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1817F5239);
      tmpF5241 = T8;
      if (tmpF5241 != YPfalse) {
        T6 = tmpF5241;
      } else {
        T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1816F5240);
        T6 = T7;
      }
      T5 = CALL1(1,VARREF(Ynot),T6);
      if (T5 != YPfalse) {
        T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1817F5239);
        firstQF5242 = T15;
        T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1816F5240);
        bF5243 = T14;
        T9 = CALL1(1,VARREF(Ynot),firstQF5242);
        if (T9 != YPfalse) {
          T10 = CALL2(1,VARREF(YgooSioSportYput),x_1815F5238,YPchr((P)44));
        } else {
        }
        CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF5243,out_);
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1817F5239);
        T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1816F5240);
        a240_0 = T12;
        a240_1 = T13;
        x_1817F5239 = a240_0;
        x_1816F5240 = a240_1;
        goto LOOP_240;
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
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_546));
  T25 = FUNFAB(fun_197,2,out_,offsetF5235);
  CALL2(1,VARREF(YgooSmacrosYdo),T25,bindingsF5236);
  T26 = CALL1(1,VARREF(YevalSastYfunction_body),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T26,definition_,YPint((P)1),out_);
  T28 = CALL1(1,VARREF(YevalSg2cYdispatcherQ),definition_);
  T27 = CALL1(1,VARREF(Ynot),T28);
  if (T27 != YPfalse) {
    T29 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_552));
  } else {
  }
  CALL3(1,VARREF(YevalSg2cYgenerate_return),definition_,YPint((P)1),out_);
  T30 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_553));
UNLINK_STACK();
  QRET(T30);
}

LOCCODEDEF(fun_generate_local_temporaries_199) {
  P temps_,out_;
  P tempF5245;
  P x_1820F5244;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(temps_, 0);
  ARG(out_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  x_1820F5244 = T6;
  LOOP_241: {
    P a241_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1820F5244);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1820F5244);
      tempF5245 = T5;
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_556));
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF5245,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_265));
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1820F5244);
      a241_0 = T4;
      x_1820F5244 = a241_0;
      goto LOOP_241;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_registers_200) {
  P regs_,out_;
  P tmpF5250;
  P iF5249;
  P jF5248;
  P jF5247;
  P nregsF5246;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(regs_, 0);
  ARG(out_, 1);
  T14 = CALL1(1,VARREF(YgooStypesYlen),regs_);
  nregsF5246 = T14;
  jF5247 = YPint((P)0);
  LOOP_242: {
    P a242_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),jF5247,nregsF5246);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_559));
      jF5248 = jF5247;
      iF5249 = YPint((P)0);
      LOOP_243: {
        P a243_0,a243_1;
        T5 = CALL2(1,VARREF(YgooSlogYE),iF5249,VARREF(YevalSg2cYTregisters_per_lineT));
        tmpF5250 = T5;
        if (tmpF5250 != YPfalse) {
          T3 = tmpF5250;
        } else {
          T4 = CALL2(1,VARREF(YgooSlogYE),jF5248,nregsF5246);
          T3 = T4;
        }
        if (T3 != YPfalse) {
          CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_560));
          a242_0 = jF5248;
          jF5247 = a242_0;
          goto LOOP_242;
          T2 = T6;
        } else {
          T8 = CALL2(1,VARREF(YgooSlogYE),iF5249,YPint((P)0));
          T7 = CALL1(1,VARREF(Ynot),T8);
          if (T7 != YPfalse) {
            T9 = CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
          } else {
          }
          T10 = CALL2(1,VARREF(YgooSmacrosYelt),regs_,jF5248);
          CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
          T12 = CALL2(1,VARREF(YgooSmathYA),jF5248,YPint((P)1));
          T13 = CALL2(1,VARREF(YgooSmathYA),iF5249,YPint((P)1));
          a243_0 = T12;
          a243_1 = T13;
          jF5248 = a243_0;
          iF5249 = a243_1;
          goto LOOP_243;
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

LOCCODEDEF(fun_module_info_name_201) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_563),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_maybe_declare_202) {
  P modname_;
  P x_1822F5251;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(modname_, 0);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_1822F5251 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1822F5251,LITREF(lit_568));
    T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1822F5251,T3);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1822F5251,LITREF(lit_569));
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_203) {
  P binding_;
  P home_modF5252;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(binding_, 0);
  T4 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),binding_);
  home_modF5252 = T4;
  T2 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(0,FREEREF(1),home_modF5252);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYdeclare_imported_module_infos) {
  P out_,mod_;
  P maybe_declareF5255;
  P envF5254;
  P seenF5253;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF5253 = T7;
  T6 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  envF5254 = T6;
  T5 = FUNSHELL(0,fun_maybe_declare_202,2);
  maybe_declareF5255 = T5;
  FUNINIT(maybe_declareF5255, 2,seenF5253,out_);
  T1 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF5254);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYmodule_name),T1);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF5255,T0);
  T3 = FUNFAB(fun_203,2,mod_,maybe_declareF5255);
  T4 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_205) {
  P local_name_,binding_;
  P x_1826F5256;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
  T2 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_1826F5256 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1826F5256,LITREF(lit_580));
    T4 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T4);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1826F5256,T3);
    CALL2(1,VARREF(YgooSioSportYputs),x_1826F5256,LITREF(lit_581));
    T6 = CALL1(1,VARREF(YevalSmoduleYbinding_module_name),binding_);
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T6);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1826F5256,T5);
    CALL2(1,VARREF(YgooSioSportYputs),x_1826F5256,LITREF(lit_582));
    T9 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,local_name_);
    if (T8 != YPfalse) {
      T7 = LITREF(lit_583);
    } else {
      T10 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
      T7 = T10;
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1826F5256,T7);
    T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1826F5256,LITREF(lit_584));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_206) {
  P binding_;
  P x_1831F5261;
  P x_1830F5260;
  P x_1829F5259;
  P x_1828F5258;
  P x_1827F5257;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(binding_, 0);
  T1 = CALL2(1,VARREF(YevalSmoduleYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    x_1827F5257 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1827F5257,LITREF(lit_588));
    T3 = CALL1(1,VARREF(YevalSmoduleYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T3);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1827F5257,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1827F5257,LITREF(lit_589));
    T14 = CALL1(1,VARREF(YevalSmoduleYbinding_kind),binding_);
    x_1828F5258 = T14;
    x_1829F5259 = VARREF(YgooSmacrosYEE);
    T6 = CALL2(1,x_1829F5259,x_1828F5258,LITREF(lit_148));
    if (T6 != YPfalse) {
      x_1830F5260 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_1830F5260,LITREF(lit_590));
      T7 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1830F5260,T7);
      T8 = CALL2(1,VARREF(YgooSioSportYputs),x_1830F5260,LITREF(lit_591));
      T5 = T8;
    } else {
      T10 = CALL2(1,x_1829F5259,x_1828F5258,LITREF(lit_150));
      if (T10 != YPfalse) {
        x_1831F5261 = FREEREF(1);
        CALL2(1,VARREF(YgooSioSportYputs),x_1831F5261,LITREF(lit_592));
        T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1831F5261,T11);
        T12 = CALL2(1,VARREF(YgooSioSportYputs),x_1831F5261,LITREF(lit_593));
        T9 = T12;
      } else {
        T13 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_594));
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
  P x_1837F5277;
  P x_1836F5276;
  P x_1835F5275;
  P x_1834F5274;
  P bindingF5273;
  P exported_asF5272;
  P tup38F5271;
  P x_1832F5270;
  P x_1825F5269;
  P nF5268;
  P x_1823F5267;
  P uses_namesF5266;
  P usesF5265;
  P envF5264;
  P info_nameF5263;
  P nameF5262;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T41 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  nameF5262 = T41;
  T40 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF5262);
  info_nameF5263 = T40;
  T39 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  envF5264 = T39;
  T38 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF5264);
  usesF5265 = T38;
  T37 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYmodule_name),usesF5265);
  uses_namesF5266 = T37;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_573));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_574));
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF5266);
  x_1823F5267 = T8;
  LOOP_244: {
    P a244_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1823F5267);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1823F5267);
      nF5268 = T7;
      x_1825F5269 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1825F5269,LITREF(lit_575));
      T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF5268);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1825F5269,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1825F5269,LITREF(lit_576));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1823F5267);
      a244_0 = T6;
      x_1823F5267 = a244_0;
      goto LOOP_244;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_577));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_578));
  T9 = FUNFAB(fun_205,2,mod_,out_);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSmoduleYdo_named_static_global_bindings),T9,T10);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_585));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_586));
  T11 = FUNFAB(fun_206,2,mod_,out_);
  T12 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSmoduleYdo_static_global_bindings),T11,T12);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_595));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_596));
  T31 = CALL1(1,VARREF(YevalSmoduleYmodule_exports),mod_);
  T30 = CALL1(1,VARREF(YgooScolsScolYenum),T31);
  x_1832F5270 = T30;
  LOOP_245: {
    P a245_0;
    T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1832F5270);
    T14 = CALL1(1,VARREF(Ynot),T15);
    if (T14 != YPfalse) {
      T28 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1832F5270);
      T29 = CALL1(1,VARREF(YgooScolsScolYnow),x_1832F5270);
      T27 = CALL2(1,VARREF(Ytup),T28,T29);
      tup38F5271 = T27;
      T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F5271,YPint((P)0));
      exported_asF5272 = T26;
      T25 = CALL2(1,VARREF(YgooSmacrosYelt),tup38F5271,YPint((P)1));
      bindingF5273 = T25;
      x_1834F5274 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1834F5274,LITREF(lit_597));
      T17 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bindingF5273);
      T16 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T17);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1834F5274,T16);
      CALL2(1,VARREF(YgooSioSportYputs),x_1834F5274,LITREF(lit_598));
      T20 = CALL1(1,VARREF(YevalSmoduleYbinding_name),bindingF5273);
      T19 = CALL2(1,VARREF(YgooSmacrosYEE),T20,exported_asF5272);
      if (T19 != YPfalse) {
        T18 = LITREF(lit_599);
      } else {
        T21 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF5272);
        T18 = T21;
      }
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1834F5274,T18);
      T22 = CALL2(1,VARREF(YgooSioSportYputs),x_1834F5274,LITREF(lit_600));
      T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1832F5270);
      a245_0 = T24;
      x_1832F5270 = a245_0;
      goto LOOP_245;
      T13 = T23;
    } else {
      T13 = YPfalse;
    }
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_601));
  x_1835F5275 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1835F5275,LITREF(lit_602));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1835F5275,info_nameF5263);
  T32 = CALL2(1,VARREF(YgooSioSportYputs),x_1835F5275,LITREF(lit_603));
  x_1836F5276 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1836F5276,LITREF(lit_604));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1836F5276,info_nameF5263);
  T33 = CALL2(1,VARREF(YgooSioSportYputs),x_1836F5276,LITREF(lit_605));
  x_1837F5277 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1837F5277,LITREF(lit_606));
  T34 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF5262);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1837F5277,T34);
  T35 = CALL2(1,VARREF(YgooSioSportYputs),x_1837F5277,LITREF(lit_607));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_608));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_609));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_610));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_611));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_612));
  T36 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_613));
UNLINK_STACK();
  QRET(T36);
}

LOCCODEDEF(fun_module_init_name_208) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_616),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_module_init_decl_209) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_619),T1,LITREF(lit_620));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_generate_module_init_210) {
  P out_,mod_,form_;
  P x_1845F5290;
  P nF5289;
  P x_1843F5288;
  P x_1842F5287;
  P x_1841F5286;
  P x_1840F5285;
  P nF5284;
  P x_1838F5283;
  P uses_namesF5282;
  P usesF5281;
  P envF5280;
  P init_declF5279;
  P nameF5278;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
  if (DYNREF(YevalSmoduleYTdynamic_compilationQT) != YPfalse) {
    T28 = LITREF(lit_623);
  } else {
    T29 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
    T28 = T29;
  }
  nameF5278 = T28;
  T27 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF5278);
  init_declF5279 = T27;
  T26 = CALL1(1,VARREF(YevalSmoduleYmodule_target_environment),mod_);
  envF5280 = T26;
  T25 = CALL1(1,VARREF(YevalSmoduleYenvironment_uses_modules),envF5280);
  usesF5281 = T25;
  T24 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSmoduleYmodule_name),usesF5281);
  uses_namesF5282 = T24;
  T0 = CALL1(1,VARREF(Ynot),DYNREF(YevalSmoduleYTdynamic_compilationQT));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_624));
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF5282);
    x_1838F5283 = T9;
    LOOP_246: {
      P a246_0;
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1838F5283);
      T2 = CALL1(1,VARREF(Ynot),T3);
      if (T2 != YPfalse) {
        T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1838F5283);
        nF5284 = T8;
        x_1840F5285 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_1840F5285,LITREF(lit_625));
        T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF5284);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1840F5285,T4);
        T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1840F5285,LITREF(lit_626));
        T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1838F5283);
        a246_0 = T7;
        x_1838F5283 = a246_0;
        goto LOOP_246;
        T1 = T6;
      } else {
        T1 = YPfalse;
      }
    }
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_627));
  x_1841F5286 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1841F5286,LITREF(lit_628));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1841F5286,init_declF5279);
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1841F5286,LITREF(lit_629));
  x_1842F5287 = out_;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1842F5287,init_declF5279);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1842F5287,LITREF(lit_630));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_631));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_632));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_633));
  T12 = CALL1(1,VARREF(Ynot),DYNREF(YevalSmoduleYTdynamic_compilationQT));
  if (T12 != YPfalse) {
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF5282);
    x_1843F5288 = T21;
    LOOP_247: {
      P a247_0;
      T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1843F5288);
      T14 = CALL1(1,VARREF(Ynot),T15);
      if (T14 != YPfalse) {
        T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_1843F5288);
        nF5289 = T20;
        x_1845F5290 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_1845F5290,LITREF(lit_634));
        T16 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF5289);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1845F5290,T16);
        T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1845F5290,LITREF(lit_635));
        T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1843F5288);
        a247_0 = T19;
        x_1843F5288 = a247_0;
        goto LOOP_247;
        T13 = T18;
      } else {
        T13 = YPfalse;
      }
    }
    T22 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_636));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYto_c),form_,YPfalse,YPint((P)1),out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_637));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_638));
UNLINK_STACK();
  QRET(T23);
}

LOCCODEDEF(fun_generate_main_211) {
  P out_,mod_;
  P x_1850F5297;
  P x_1849F5296;
  P x_1848F5295;
  P x_1847F5294;
  P x_1846F5293;
  P info_nameF5292;
  P nameF5291;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T10 = CALL1(1,VARREF(YevalSmoduleYmodule_name),mod_);
  nameF5291 = T10;
  T9 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF5291);
  info_nameF5292 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_641));
  x_1846F5293 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1846F5293,LITREF(lit_642));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1846F5293,info_nameF5292);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1846F5293,LITREF(lit_643));
  x_1847F5294 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1847F5294,LITREF(lit_644));
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF5291);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1847F5294,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1847F5294,LITREF(lit_645));
  x_1848F5295 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1848F5295,LITREF(lit_646));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1848F5295,info_nameF5292);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1848F5295,LITREF(lit_647));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_648));
  x_1849F5296 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1849F5296,LITREF(lit_649));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_650));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1849F5296,T4);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1849F5296,LITREF(lit_651));
  x_1850F5297 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1850F5297,LITREF(lit_652));
  T6 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF5291);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1850F5297,T6);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1850F5297,LITREF(lit_653));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_654));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_655));
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
  fun_module_loader_appname_0 = YPfab_met(FUNCODEREF(fun_module_loader_appname_0),T2,LITREF(lit_1),LITREF(lit_2),sloc(29),YPfalse);
  T4 = VARREF_OR(YevalSg2cYmodule_loader_appname,YPfalse);
  T5 = fun_module_loader_appname_0;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSg2cYmodule_loader_appname,T3);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),YPfalse,VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_3 = YPPsym((P)"module-loader-app-modname");
  lit_4 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_1 = YPfab_met(FUNCODEREF(fun_module_loader_app_modname_1),T6,LITREF(lit_3),LITREF(lit_4),sloc(30),YPfalse);
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
  fun_module_src_file_2 = YPfab_met(FUNCODEREF(fun_module_src_file_2),T12,LITREF(lit_6),LITREF(lit_7),sloc(33),YPfalse);
  T14 = VARREF_OR(YevalSg2cYmodule_src_file,YPfalse);
  T15 = fun_module_src_file_2;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSg2cYmodule_src_file,T13);
  lit_8 = YPPsym((P)"module-src-file-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_src_file_setter_3 = YPfab_met(FUNCODEREF(fun_module_src_file_setter_3),T16,LITREF(lit_8),LITREF(lit_9),sloc(33),YPfalse);
  T18 = VARREF_OR(YevalSg2cYmodule_src_file_setter,YPfalse);
  T19 = fun_module_src_file_setter_3;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSg2cYmodule_src_file_setter,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_src_file),VARREF(YevalSg2cYmodule_src_file_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_10 = YPPsym((P)"module-mtime");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mtime_4 = YPfab_met(FUNCODEREF(fun_module_mtime_4),T20,LITREF(lit_10),LITREF(lit_11),sloc(34),YPfalse);
  T22 = VARREF_OR(YevalSg2cYmodule_mtime,YPfalse);
  T23 = fun_module_mtime_4;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSg2cYmodule_mtime,T21);
  lit_12 = YPPsym((P)"module-mtime-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mtime_setter_5 = YPfab_met(FUNCODEREF(fun_module_mtime_setter_5),T24,LITREF(lit_12),LITREF(lit_13),sloc(34),YPfalse);
  T26 = VARREF_OR(YevalSg2cYmodule_mtime_setter,YPfalse);
  T27 = fun_module_mtime_setter_5;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSg2cYmodule_mtime_setter,T25);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_mtime),VARREF(YevalSg2cYmodule_mtime_setter),VARREF(YLfloG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"module-loader-module-type");
  lit_15 = YPPlist(1,YPPsym((P)"loader"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_6 = YPfab_met(FUNCODEREF(fun_module_loader_module_type_6),T28,LITREF(lit_14),LITREF(lit_15),sloc(36),YPfalse);
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
  fun_7 = YPfab_met(FUNCODEREF(fun_7),T37,YPfalse,LITREF(lit_20),sloc(60),YPfalse);
  T36 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_8 = YPfab_met(FUNCODEREF(fun_8),T36,YPfalse,LITREF(lit_20),sloc(60),YPfalse);
  T35 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T35,YPfalse,LITREF(lit_20),sloc(59),YPfalse);
  T34 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_10 = YPfab_met(FUNCODEREF(fun_10),T34,YPfalse,LITREF(lit_20),sloc(59),YPfalse);
  T33 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T33,YPfalse,LITREF(lit_21),sloc(62),YPfalse);
  T32 = YPfab_sig(YPPlist(2,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSmoduleYLmoduleG),Ynil);
  fun_load_module_12 = YPfab_met(FUNCODEREF(fun_load_module_12),T32,LITREF(lit_16),LITREF(lit_17),sloc(41),YPfalse);
  T39 = VARREF_OR(YevalSmoduleYload_module,YPfalse);
  T40 = fun_load_module_12;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSmoduleYload_module,T38);
  lit_23 = YPPsym((P)"module-up-to-date?");
  lit_24 = YPPlist(1,YPPsym((P)"mod"));
  T41 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSg2cYmodule_up_to_dateQ = YPfab_met(FUNCODEREF(YevalSg2cYmodule_up_to_dateQ),T41,LITREF(lit_23),LITREF(lit_24),sloc(76),YPfalse);
  T42 = YevalSg2cYmodule_up_to_dateQ;
  VARSET(YevalSg2cYmodule_up_to_dateQ,T42);
  lit_25 = YPPsym((P)"purge-outdated-modules");
  lit_26 = YPPlist(1,YPPsym((P)"loader"));
  lit_27 = YPPlist(1,YPPsym((P)"mod"));
  lit_28 = YPPlist(1,YPPsym((P)"name"));
  lit_29 = YPsb((P)" has changed.\n");
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPfab_met(FUNCODEREF(fun_14),T45,YPfalse,LITREF(lit_27),sloc(84),YPfalse);
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T44,YPfalse,LITREF(lit_28),sloc(90),YPfalse);
  T43 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYpurge_outdated_modules = YPfab_met(FUNCODEREF(YevalSg2cYpurge_outdated_modules),T43,LITREF(lit_25),LITREF(lit_26),sloc(79),YPfalse);
  T46 = YevalSg2cYpurge_outdated_modules;
  VARSET(YevalSg2cYpurge_outdated_modules,T46);
  lit_30 = YPPsym((P)"g2c-def-app");
  lit_31 = YPPlist(2,YPPsym((P)"appname"),YPPsym((P)"modname"));
  T47 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSg2cYLg2c_module_loaderG),Ynil);
  YevalSg2cYg2c_def_app = YPfab_met(FUNCODEREF(YevalSg2cYg2c_def_app),T47,LITREF(lit_30),LITREF(lit_31),sloc(103),YPfalse);
  T48 = YevalSg2cYg2c_def_app;
  VARSET(YevalSg2cYg2c_def_app,T48);
  lit_32 = YPPsym((P)"g2c-build-app");
  lit_33 = YPPlist(1,YPPsym((P)"loader"));
  lit_34 = YPsb((P)"Searching for undefined global bindings.\n");
  T51 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T51,YPfalse,LITREF(lit_20),sloc(110),YPfalse);
  T50 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPfab_met(FUNCODEREF(fun_19),T50,YPfalse,LITREF(lit_20),sloc(110),YPfalse);
  T49 = YPfab_sig(YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_build_app = YPfab_met(FUNCODEREF(YevalSg2cYg2c_build_app),T49,LITREF(lit_32),LITREF(lit_33),sloc(109),YPfalse);
  T52 = YevalSg2cYg2c_build_app;
  VARSET(YevalSg2cYg2c_build_app,T52);
  lit_35 = YPPsym((P)"g2c-test");
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  lit_37 = YPsb((P)"g2c-");
  lit_38 = YPPsym((P)"eval/main");
  T53 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_test = YPfab_met(FUNCODEREF(YevalSg2cYg2c_test),T53,LITREF(lit_35),LITREF(lit_36),sloc(119),YPfalse);
  T54 = YevalSg2cYg2c_test;
  VARSET(YevalSg2cYg2c_test,T54);
  DYNDEFSET(YevalSg2cYTtmp_file_counterT,YPint((P)-1));
  lit_39 = YPPsym((P)"g2c-ast");
  lit_40 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  lit_41 = YPsb((P)"exp-%d-%d");
  T61 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPfab_met(FUNCODEREF(fun_22),T61,YPfalse,LITREF(lit_20),sloc(131),YPfalse);
  T60 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPfab_met(FUNCODEREF(fun_23),T60,YPfalse,LITREF(lit_20),sloc(131),YPfalse);
  T59 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T59,YPfalse,LITREF(lit_20),sloc(131),YPfalse);
  T58 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPfab_met(FUNCODEREF(fun_25),T58,YPfalse,LITREF(lit_20),sloc(131),YPfalse);
  T57 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPfab_met(FUNCODEREF(fun_26),T57,YPfalse,LITREF(lit_20),sloc(130),YPfalse);
  T56 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T56,YPfalse,LITREF(lit_20),sloc(130),YPfalse);
  T55 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_ast_28 = YPfab_met(FUNCODEREF(fun_g2c_ast_28),T55,LITREF(lit_39),LITREF(lit_40),sloc(124),YPfalse);
  T63 = VARREF_OR(YevalSg2cYg2c_ast,YPfalse);
  T64 = fun_g2c_ast_28;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSg2cYg2c_ast,T62);
  lit_42 = YPPsym((P)"g2c-exp");
  lit_43 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T65 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_29 = YPfab_met(FUNCODEREF(fun_g2c_exp_29),T65,LITREF(lit_42),LITREF(lit_43),sloc(136),YPfalse);
  T67 = VARREF_OR(YevalSg2cYg2c_exp,YPfalse);
  T68 = fun_g2c_exp_29;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YevalSg2cYg2c_exp,T66);
  lit_44 = YPPsym((P)"compile-load");
  lit_45 = YPPlist(1,YPPsym((P)"name"));
  lit_46 = YPsb((P)".so");
  lit_47 = YPsb((P)".so");
  T69 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_load_30 = YPfab_met(FUNCODEREF(fun_compile_load_30),T69,LITREF(lit_44),LITREF(lit_45),sloc(140),YPfalse);
  T71 = VARREF_OR(YevalSg2cYcompile_load,YPfalse);
  T72 = fun_compile_load_30;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YevalSg2cYcompile_load,T70);
  lit_48 = YPPsym((P)"g2c-eval");
  lit_49 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T73 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_31 = YPfab_met(FUNCODEREF(fun_g2c_eval_31),T73,LITREF(lit_48),LITREF(lit_49),sloc(144),YPfalse);
  T75 = VARREF_OR(YevalStopYg2c_eval,YPfalse);
  T76 = fun_g2c_eval_31;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalStopYg2c_eval,T74);
  lit_50 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  T77 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_32 = YPfab_met(FUNCODEREF(fun_g2c_eval_32),T77,LITREF(lit_48),LITREF(lit_50),sloc(148),YPfalse);
  T79 = VARREF_OR(YevalStopYg2c_eval,YPfalse);
  T80 = fun_g2c_eval_32;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalStopYg2c_eval,T78);
  lit_51 = YPsb((P)"g2c");
  T81 = XCALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_51),LITREF(lit_38));
  VARSET(YevalSg2cYTg2c_appT,T81);
  lit_52 = YPPsym((P)"g2c-top");
  T82 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_33 = YPfab_met(FUNCODEREF(fun_g2c_top_33),T82,LITREF(lit_52),LITREF(lit_20),sloc(154),YPfalse);
  T84 = VARREF_OR(YevalSg2cYg2c_top,YPfalse);
  T85 = fun_g2c_top_33;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSg2cYg2c_top,T83);
  VARSET(YevalSg2cYg2c_goo,VARREF(YevalSg2cYg2c_top));
  lit_53 = YPPsym((P)"g2c-clean");
  lit_54 = YPsb((P)"g2c");
  T86 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_34 = YPfab_met(FUNCODEREF(fun_g2c_clean_34),T86,LITREF(lit_53),LITREF(lit_20),sloc(156),YPfalse);
  T88 = VARREF_OR(YevalSg2cYg2c_clean,YPfalse);
  T89 = fun_g2c_clean_34;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSg2cYg2c_clean,T87);
  lit_55 = YPPsym((P)"compute-ast");
  lit_56 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  lit_57 = YPsb((P)"READ");
  lit_58 = YPsb((P)"AST");
  T90 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_35 = YPfab_met(FUNCODEREF(fun_compute_ast_35),T90,LITREF(lit_55),LITREF(lit_56),sloc(162),YPfalse);
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
  fun_compute_program_36 = YPfab_met(FUNCODEREF(fun_compute_program_36),T94,LITREF(lit_59),LITREF(lit_60),sloc(172),YPfalse);
  T96 = VARREF_OR(YevalSg2cYcompute_program,YPfalse);
  T97 = fun_compute_program_36;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSg2cYcompute_program,T95);
  lit_68 = YPPsym((P)"generate-c-module");
  lit_69 = YPPlist(4,YPPsym((P)"out"),YPPsym((P)"e"),YPPsym((P)"prg"),YPPsym((P)"mod"));
  T98 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_37 = YPfab_met(FUNCODEREF(fun_generate_c_module_37),T98,LITREF(lit_68),LITREF(lit_69),sloc(198),YPfalse);
  T100 = VARREF_OR(YevalSg2cYgenerate_c_module,YPfalse);
  T101 = fun_generate_c_module_37;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSg2cYgenerate_c_module,T99);
  lit_70 = YPPsym((P)"generate-c-application");
  lit_71 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  lit_72 = YPsb((P)"-init");
  T104 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPfab_met(FUNCODEREF(fun_38),T104,YPfalse,LITREF(lit_20),sloc(214),YPfalse);
  T103 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPfab_met(FUNCODEREF(fun_39),T103,YPfalse,LITREF(lit_20),sloc(214),YPfalse);
  T102 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLmodule_loaderG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_application_40 = YPfab_met(FUNCODEREF(fun_generate_c_application_40),T102,LITREF(lit_70),LITREF(lit_71),sloc(210),YPfalse);
  T106 = VARREF_OR(YevalSg2cYgenerate_c_application,YPfalse);
  T107 = fun_generate_c_application_40;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSg2cYgenerate_c_application,T105);
  lit_73 = YPPlist(1,YPPsym((P)"exp"));
  lit_74 = YPPlist(1,YPPsym((P)"return"));
  lit_75 = YPPsym((P)"x-1630");
  lit_76 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_77 = YPPsym((P)"for-mods");
  lit_78 = YPsb((P)"Match Pattern Failure");
  lit_79 = YPPsym((P)"do-module-loader-modules");
  lit_80 = YPPsym((P)"fun");
  lit_81 = Ynil;
  T114 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T113 = fun_x_1630_41 = YPfab_met(FUNCODEREF(fun_x_1630_41),T114,LITREF(lit_75),LITREF(lit_76),YPfalse,YPfalse);
  T112 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T111 = fun_42 = YPfab_met(FUNCODEREF(fun_42),T112,YPfalse,LITREF(lit_74),YPfalse,YPfalse);
  T110 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T109 = fun_43 = YPfab_met(FUNCODEREF(fun_43),T110,YPfalse,LITREF(lit_73),YPfalse,YPfalse);
  T116 = fun_43;
  T115 = YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-mods"),T116);
  T108 = T115;
  return T108;
}

P YevalSg2cY___main_1___() {
  P iF5307;
  P x_1663F5306;
  P iF5305;
  P x_1661F5304;
  P mangleF5303;
  P x_1659F5302;
  P iF5301;
  P x_1657F5300;
  P tableF5299;
  P vecF5298;
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
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T10,YPfalse,LITREF(lit_92),sloc(234),YPfalse);
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPfab_met(FUNCODEREF(fun_45),T9,YPfalse,LITREF(lit_91),sloc(233),YPfalse);
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_put_obj_46 = YPfab_met(FUNCODEREF(fun_put_obj_46),T8,LITREF(lit_98),LITREF(lit_99),sloc(238),YPfalse);
  T7 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPfab_met(FUNCODEREF(fun_47),T7,YPfalse,LITREF(lit_102),sloc(242),YPfalse);
  T6 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPfab_met(FUNCODEREF(fun_48),T6,YPfalse,LITREF(lit_104),sloc(243),YPfalse);
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPfab_met(FUNCODEREF(fun_49),T5,YPfalse,LITREF(lit_97),sloc(237),YPfalse);
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPfab_met(FUNCODEREF(fun_50),T4,YPfalse,LITREF(lit_111),sloc(249),YPfalse);
  T3 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPfab_met(FUNCODEREF(fun_51),T3,YPfalse,LITREF(lit_110),sloc(248),YPfalse);
  T2 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_52 = YPfab_met(FUNCODEREF(fun_52),T2,YPfalse,LITREF(lit_20),sloc(229),YPfalse);
  T1 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_53 = YPfab_met(FUNCODEREF(fun_53),T1,YPfalse,LITREF(lit_20),sloc(229),YPfalse);
  T0 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_makefile_54 = YPfab_met(FUNCODEREF(fun_generate_makefile_54),T0,LITREF(lit_82),LITREF(lit_83),sloc(223),YPfalse);
  T12 = VARREF_OR(YevalSg2cYgenerate_makefile,YPfalse);
  T13 = fun_generate_makefile_54;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSg2cYgenerate_makefile,T11);
  lit_115 = YPPsym((P)"pp");
  lit_116 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_55 = YPfab_met(FUNCODEREF(fun_pp_55),T14,LITREF(lit_115),LITREF(lit_116),sloc(258),YPfalse);
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
  fun_generate_header_56 = YPfab_met(FUNCODEREF(fun_generate_header_56),T18,LITREF(lit_118),LITREF(lit_119),sloc(264),YPfalse);
  T20 = VARREF_OR(YevalSg2cYgenerate_header,YPfalse);
  T21 = fun_generate_header_56;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSg2cYgenerate_header,T19);
  lit_137 = YPPsym((P)"generate-trailer");
  lit_138 = YPPlist(1,YPPsym((P)"out"));
  lit_139 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T22 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_57 = YPfab_met(FUNCODEREF(fun_generate_trailer_57),T22,LITREF(lit_137),LITREF(lit_138),sloc(279),YPfalse);
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
  fun_gen_binding_58 = YPfab_met(FUNCODEREF(fun_gen_binding_58),T27,LITREF(lit_144),LITREF(lit_145),sloc(291),YPfalse);
  T26 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_59 = YPfab_met(FUNCODEREF(fun_generate_global_environment_59),T26,LITREF(lit_140),LITREF(lit_141),sloc(289),YPfalse);
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
  fun_generate_global_binding_60 = YPfab_met(FUNCODEREF(fun_generate_global_binding_60),T31,LITREF(lit_146),LITREF(lit_147),sloc(298),YPfalse);
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
  YevalSg2cYchar_buffer_as_string = YPfab_met(FUNCODEREF(YevalSg2cYchar_buffer_as_string),T43,LITREF(lit_184),LITREF(lit_185),sloc(341),YPfalse);
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
  vecF5298 = T52;
  T45 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_186),vecF5298,T45);
  T46 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_187),vecF5298,T46);
  T47 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_188),vecF5298,T47);
  T48 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_189),vecF5298,T48);
  T49 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_190),vecF5298,T49);
  T50 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_191),vecF5298,T50);
  T51 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF5298);
  VARSET(YevalSg2cYDc_escapes,T51);
  lit_192 = YPPsym((P)"mangle-string-literal");
  lit_193 = YPPlist(1,YPPsym((P)"str"));
  T54 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_62 = YPfab_met(FUNCODEREF(fun_mangle_string_literal_62),T54,LITREF(lit_192),LITREF(lit_193),sloc(362),YPfalse);
  T56 = VARREF_OR(YevalSg2cYmangle_string_literal,YPfalse);
  T57 = fun_mangle_string_literal_62;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSg2cYmangle_string_literal,T55);
  lit_194 = YPPlist(1,YPPsym((P)"sym"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_63 = YPfab_met(FUNCODEREF(fun_mangle_string_literal_63),T58,LITREF(lit_192),LITREF(lit_194),sloc(377),YPfalse);
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
  fun_process_integer_64 = YPfab_met(FUNCODEREF(fun_process_integer_64),T63,LITREF(lit_198),LITREF(lit_199),sloc(384),YPfalse);
  T62 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_65 = YPfab_met(FUNCODEREF(fun_mangle_integer_65),T62,LITREF(lit_196),LITREF(lit_197),sloc(382),YPfalse);
  T65 = VARREF_OR(YevalSg2cYmangle_integer,YPfalse);
  T66 = fun_mangle_integer_65;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSg2cYmangle_integer,T64);
  T110 = XCALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T109 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T110);
  tableF5299 = T109;
  T76 = XCALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T75 = XCALL1(1,VARREF(YgooScolsScolYenum),T76);
  x_1657F5300 = T75;
  LOOP_248: {
    P a248_0;
    T69 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1657F5300);
    T68 = XCALL1(1,VARREF(Ynot),T69);
    if (T68 != YPfalse) {
      T74 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1657F5300);
      iF5301 = T74;
      T71 = XCALL1(1,VARREF(YevalSg2cYmangle_integer),iF5301);
      T70 = XCALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T71,VARREF(YevalSg2cYDescape_separator));
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T70,tableF5299,iF5301);
      T73 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1657F5300);
      a248_0 = T73;
      x_1657F5300 = a248_0;
      goto LOOP_248;
      T67 = T72;
    } else {
      T67 = YPfalse;
    }
  }
  T86 = XCALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  x_1659F5302 = T86;
  LOOP_249: {
    P a249_0;
    T79 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1659F5302);
    T78 = XCALL1(1,VARREF(Ynot),T79);
    if (T78 != YPfalse) {
      T85 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1659F5302);
      mangleF5303 = T85;
      T80 = XCALL2(1,VARREF(YgooSmacrosYelt),mangleF5303,YPint((P)1));
      T82 = XCALL2(1,VARREF(YgooSmacrosYelt),mangleF5303,YPint((P)0));
      T81 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T82);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T80,tableF5299,T81);
      T84 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1659F5302);
      a249_0 = T84;
      x_1659F5302 = a249_0;
      goto LOOP_249;
      T77 = T83;
    } else {
      T77 = YPfalse;
    }
  }
  T96 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T97 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T95 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T96,VARREF(YgooSmagYLE),T97);
  T94 = XCALL1(1,VARREF(YgooScolsScolYenum),T95);
  x_1661F5304 = T94;
  LOOP_250: {
    P a250_0;
    T89 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1661F5304);
    T88 = XCALL1(1,VARREF(Ynot),T89);
    if (T88 != YPfalse) {
      T93 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1661F5304);
      iF5305 = T93;
      T90 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF5305);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T90,tableF5299,iF5305);
      T92 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1661F5304);
      a250_0 = T92;
      x_1661F5304 = a250_0;
      goto LOOP_250;
      T87 = T91;
    } else {
      T87 = YPfalse;
    }
  }
  T107 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T108 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T106 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T107,VARREF(YgooSmagYLE),T108);
  T105 = XCALL1(1,VARREF(YgooScolsScolYenum),T106);
  x_1663F5306 = T105;
  LOOP_251: {
    P a251_0;
    T100 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_1663F5306);
    T99 = XCALL1(1,VARREF(Ynot),T100);
    if (T99 != YPfalse) {
      T104 = XCALL1(1,VARREF(YgooScolsScolYnow),x_1663F5306);
      iF5307 = T104;
      T101 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF5307);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T101,tableF5299,iF5307);
      T103 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_1663F5306);
      a251_0 = T103;
      x_1663F5306 = a251_0;
      goto LOOP_251;
      T98 = T102;
    } else {
      T98 = YPfalse;
    }
  }
  VARSET(YevalSg2cYDname_mangler_table,tableF5299);
  lit_200 = YPPsym((P)"mangler-reset");
  lit_201 = YPPlist(1,YPPsym((P)"buffer"));
  T111 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPfab_met(FUNCODEREF(YevalSg2cYmangler_reset),T111,LITREF(lit_200),LITREF(lit_201),sloc(413),YPfalse);
  T112 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T112);
  lit_202 = YPPsym((P)"mangle-name-into");
  lit_203 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  T113 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPfab_met(FUNCODEREF(YevalSg2cYmangle_name_into),T113,LITREF(lit_202),LITREF(lit_203),sloc(416),YPfalse);
  T114 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T114);
  lit_204 = YPPsym((P)"mangle-raw-name");
  lit_205 = YPPlist(1,YPPsym((P)"name"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_68 = YPfab_met(FUNCODEREF(fun_mangle_raw_name_68),T115,LITREF(lit_204),LITREF(lit_205),sloc(421),YPfalse);
  T117 = VARREF_OR(YevalSg2cYmangle_raw_name,YPfalse);
  T118 = fun_mangle_raw_name_68;
  T116 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T117,T118);
  VARSET(YevalSg2cYmangle_raw_name,T116);
  lit_206 = YPPlist(1,YPPsym((P)"name"));
  T119 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_69 = YPfab_met(FUNCODEREF(fun_mangle_raw_name_69),T119,LITREF(lit_204),LITREF(lit_206),sloc(426),YPfalse);
  T121 = VARREF_OR(YevalSg2cYmangle_raw_name,YPfalse);
  T122 = fun_mangle_raw_name_69;
  T120 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T121,T122);
  VARSET(YevalSg2cYmangle_raw_name,T120);
  lit_207 = YPPsym((P)"mangle-local-name");
  lit_208 = YPPlist(1,YPPsym((P)"name"));
  T123 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_70 = YPfab_met(FUNCODEREF(fun_mangle_local_name_70),T123,LITREF(lit_207),LITREF(lit_208),sloc(429),YPfalse);
  T125 = VARREF_OR(YevalSg2cYmangle_local_name,YPfalse);
  T126 = fun_mangle_local_name_70;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSg2cYmangle_local_name,T124);
  lit_209 = YPPlist(1,YPPsym((P)"name"));
  T127 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_71 = YPfab_met(FUNCODEREF(fun_mangle_local_name_71),T127,LITREF(lit_207),LITREF(lit_209),sloc(435),YPfalse);
  T129 = VARREF_OR(YevalSg2cYmangle_local_name,YPfalse);
  T130 = fun_mangle_local_name_71;
  T128 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T129,T130);
  VARSET(YevalSg2cYmangle_local_name,T128);
  lit_210 = YPPsym((P)"buf-cat2!");
  lit_211 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  T131 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbuf_cat2X = YPfab_met(FUNCODEREF(YevalSg2cYbuf_cat2X),T131,LITREF(lit_210),LITREF(lit_211),sloc(439),YPfalse);
  T132 = YevalSg2cYbuf_cat2X;
  VARSET(YevalSg2cYbuf_cat2X,T132);
  lit_212 = YPPsym((P)"mangle-module-into");
  lit_213 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"mod"));
  T133 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSmoduleYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_mangle_module_into_73 = YPfab_met(FUNCODEREF(fun_mangle_module_into_73),T133,LITREF(lit_212),LITREF(lit_213),sloc(446),YPfalse);
  T135 = VARREF_OR(YevalSg2cYmangle_module_into,YPfalse);
  T136 = fun_mangle_module_into_73;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSg2cYmangle_module_into,T134);
  lit_214 = YPPsym((P)"mangle-global-name");
  lit_215 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T137 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_74 = YPfab_met(FUNCODEREF(fun_mangle_global_name_74),T137,LITREF(lit_214),LITREF(lit_215),sloc(453),YPfalse);
  T139 = VARREF_OR(YevalSg2cYmangle_global_name,YPfalse);
  T140 = fun_mangle_global_name_74;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  VARSET(YevalSg2cYmangle_global_name,T138);
  lit_216 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T141 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_75 = YPfab_met(FUNCODEREF(fun_mangle_global_name_75),T141,LITREF(lit_214),LITREF(lit_216),sloc(464),YPfalse);
  T143 = VARREF_OR(YevalSg2cYmangle_global_name,YPfalse);
  T144 = fun_mangle_global_name_75;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YevalSg2cYmangle_global_name,T142);
  lit_217 = YPPsym((P)"mangle-boot-name");
  lit_218 = YPPlist(1,YPPsym((P)"name"));
  T145 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_boot_name = YPfab_met(FUNCODEREF(YevalSg2cYmangle_boot_name),T145,LITREF(lit_217),LITREF(lit_218),sloc(469),YPfalse);
  T146 = YevalSg2cYmangle_boot_name;
  VARSET(YevalSg2cYmangle_boot_name,T146);
  lit_219 = YPPsym((P)"mangle-quotation-name");
  lit_220 = YPPlist(1,YPPsym((P)"name"));
  lit_221 = YPsb((P)"lit_");
  T147 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_quotation_name = YPfab_met(FUNCODEREF(YevalSg2cYmangle_quotation_name),T147,LITREF(lit_219),LITREF(lit_220),sloc(472),YPfalse);
  T148 = YevalSg2cYmangle_quotation_name;
  VARSET(YevalSg2cYmangle_quotation_name,T148);
  lit_222 = YPPsym((P)"mangle-binding");
  lit_223 = YPPlist(1,YPPsym((P)"binding"));
  lit_224 = YPPsym((P)"quotation");
  T149 = YPfab_sig(YPPlist(1,VARREF(YevalSmoduleYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_78 = YPfab_met(FUNCODEREF(fun_mangle_binding_78),T149,LITREF(lit_222),LITREF(lit_223),sloc(478),YPfalse);
  T151 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T152 = fun_mangle_binding_78;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YevalSg2cYmangle_binding,T150);
  lit_225 = YPPsym((P)"mangle-local-marked-name");
  lit_226 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"marker"));
  T153 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_local_marked_name = YPfab_met(FUNCODEREF(YevalSg2cYmangle_local_marked_name),T153,LITREF(lit_225),LITREF(lit_226),sloc(485),YPfalse);
  T154 = YevalSg2cYmangle_local_marked_name;
  VARSET(YevalSg2cYmangle_local_marked_name,T154);
  lit_227 = YPPlist(1,YPPsym((P)"binding"));
  T155 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_80 = YPfab_met(FUNCODEREF(fun_mangle_binding_80),T155,LITREF(lit_222),LITREF(lit_227),sloc(492),YPfalse);
  T157 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T158 = fun_mangle_binding_80;
  T156 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T157,T158);
  VARSET(YevalSg2cYmangle_binding,T156);
  lit_228 = YPPlist(1,YPPsym((P)"binding"));
  T159 = YPfab_sig(YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_81 = YPfab_met(FUNCODEREF(fun_mangle_binding_81),T159,LITREF(lit_222),LITREF(lit_228),sloc(496),YPfalse);
  T161 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T162 = fun_mangle_binding_81;
  T160 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T161,T162);
  VARSET(YevalSg2cYmangle_binding,T160);
  lit_229 = YPPlist(1,YPPsym((P)"exp"));
  lit_230 = YPPlist(1,YPPsym((P)"return"));
  lit_231 = YPPsym((P)"x-1670");
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
  fun_x_1670_82 = YPfab_met(FUNCODEREF(fun_x_1670_82),T165,LITREF(lit_231),LITREF(lit_232),YPfalse,YPfalse);
  T164 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPfab_met(FUNCODEREF(fun_83),T164,YPfalse,LITREF(lit_230),YPfalse,YPfalse);
  T163 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPfab_met(FUNCODEREF(fun_84),T163,YPfalse,LITREF(lit_229),YPfalse,YPfalse);
  T166 = fun_84;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T166);
  lit_241 = YPPlist(1,YPPsym((P)"exp"));
  lit_242 = YPPlist(1,YPPsym((P)"return"));
  lit_243 = YPPsym((P)"x-1674");
  lit_244 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_245 = YPPsym((P)"between-parentheses");
  T169 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1674_85 = YPfab_met(FUNCODEREF(fun_x_1674_85),T169,LITREF(lit_243),LITREF(lit_244),YPfalse,YPfalse);
  T168 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPfab_met(FUNCODEREF(fun_86),T168,YPfalse,LITREF(lit_242),YPfalse,YPfalse);
  T167 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPfab_met(FUNCODEREF(fun_87),T167,YPfalse,LITREF(lit_241),YPfalse,YPfalse);
  T170 = fun_87;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T170);
  lit_246 = YPPlist(1,YPPsym((P)"exp"));
  lit_247 = YPPlist(1,YPPsym((P)"return"));
  lit_248 = YPPsym((P)"x-1678");
  lit_249 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_250 = YPPsym((P)"between-parentheses-comma-separated");
  T173 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1678_88 = YPfab_met(FUNCODEREF(fun_x_1678_88),T173,LITREF(lit_248),LITREF(lit_249),YPfalse,YPfalse);
  T172 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPfab_met(FUNCODEREF(fun_89),T172,YPfalse,LITREF(lit_247),YPfalse,YPfalse);
  T171 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPfab_met(FUNCODEREF(fun_90),T171,YPfalse,LITREF(lit_246),YPfalse,YPfalse);
  T174 = fun_90;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T174);
  lit_251 = YPPsym((P)"gen-result");
  lit_252 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_253 = YPsb((P)"T");
  lit_254 = YPsb((P)" = ");
  T177 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T176 = fun_gen_result_91 = YPfab_met(FUNCODEREF(fun_gen_result_91),T177,LITREF(lit_251),LITREF(lit_252),sloc(528),YPfalse);
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
  fun_gen_depth_92 = YPfab_met(FUNCODEREF(fun_gen_depth_92),T0,LITREF(lit_255),LITREF(lit_256),sloc(532),YPfalse);
  T2 = VARREF_OR(YevalSg2cYgen_depth,YPfalse);
  T3 = fun_gen_depth_92;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSg2cYgen_depth,T1);
  lit_258 = YPPlist(1,YPPsym((P)"exp"));
  lit_259 = YPPlist(1,YPPsym((P)"return"));
  lit_260 = YPPsym((P)"x-1685");
  lit_261 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_262 = YPPsym((P)"with-statement");
  lit_263 = YPPsym((P)"seq");
  lit_264 = YPPsym((P)"puts");
  lit_265 = YPsb((P)";\n");
  T6 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1685_93 = YPfab_met(FUNCODEREF(fun_x_1685_93),T6,LITREF(lit_260),LITREF(lit_261),YPfalse,YPfalse);
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPfab_met(FUNCODEREF(fun_94),T5,YPfalse,LITREF(lit_259),YPfalse,YPfalse);
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPfab_met(FUNCODEREF(fun_95),T4,YPfalse,LITREF(lit_258),YPfalse,YPfalse);
  T7 = fun_95;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T7);
  lit_266 = YPPlist(1,YPPsym((P)"exp"));
  lit_267 = YPPlist(1,YPPsym((P)"return"));
  lit_268 = YPPsym((P)"x-1689");
  lit_269 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_270 = YPPsym((P)"with-expression");
  T10 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1689_96 = YPfab_met(FUNCODEREF(fun_x_1689_96),T10,LITREF(lit_268),LITREF(lit_269),YPfalse,YPfalse);
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPfab_met(FUNCODEREF(fun_97),T9,YPfalse,LITREF(lit_267),YPfalse,YPfalse);
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPfab_met(FUNCODEREF(fun_98),T8,YPfalse,LITREF(lit_266),YPfalse,YPfalse);
  T11 = fun_98;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T11);
  lit_271 = YPPlist(1,YPPsym((P)"exp"));
  lit_272 = YPPlist(1,YPPsym((P)"return"));
  lit_273 = YPPsym((P)"x-1693");
  lit_274 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_275 = YPPsym((P)"with-used-expression");
  lit_276 = YPPsym((P)"when");
  lit_277 = YPPsym((P)"program-register");
  T14 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1693_99 = YPfab_met(FUNCODEREF(fun_x_1693_99),T14,LITREF(lit_273),LITREF(lit_274),YPfalse,YPfalse);
  T13 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPfab_met(FUNCODEREF(fun_100),T13,YPfalse,LITREF(lit_272),YPfalse,YPfalse);
  T12 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPfab_met(FUNCODEREF(fun_101),T12,YPfalse,LITREF(lit_271),YPfalse,YPfalse);
  T15 = fun_101;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T15);
  lit_278 = YPPsym((P)"generate-quotation-forwards");
  lit_279 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb*"));
  lit_280 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_281 = YPsb((P)"DEFLIT(lit_");
  lit_282 = YPsb((P)");\n");
  T16 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_102 = YPfab_met(FUNCODEREF(fun_generate_quotation_forwards_102),T16,LITREF(lit_278),LITREF(lit_279),sloc(552),YPfalse);
  T18 = VARREF_OR(YevalSg2cYgenerate_quotation_forwards,YPfalse);
  T19 = fun_generate_quotation_forwards_102;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T17);
  lit_283 = YPPsym((P)"generate-quotations");
  lit_284 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb*"));
  lit_285 = YPsb((P)"lit_");
  lit_286 = YPsb((P)" = ");
  T20 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_103 = YPfab_met(FUNCODEREF(fun_generate_quotations_103),T20,LITREF(lit_283),LITREF(lit_284),sloc(557),YPfalse);
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
  YOlit = YPfab_met(FUNCODEREF(YOlit),T26,LITREF(lit_287),LITREF(lit_288),sloc(566),YPfalse);
  T27 = YOlit;
  VARSET(YOlit,T27);
  lit_289 = YPPsym((P)"ref-lit");
  lit_290 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_105 = YPfab_met(FUNCODEREF(fun_105),T29,YPfalse,LITREF(lit_20),YPfalse,YPfalse);
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ref_lit_106 = YPfab_met(FUNCODEREF(fun_ref_lit_106),T28,LITREF(lit_289),LITREF(lit_290),sloc(568),YPfalse);
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
  fun_generate_quotation_107 = YPfab_met(FUNCODEREF(fun_generate_quotation_107),T33,LITREF(lit_291),LITREF(lit_292),sloc(571),YPfalse);
  T35 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T36 = fun_generate_quotation_107;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YevalSg2cYgenerate_quotation,T34);
  lit_296 = YPPsym((P)"false-name");
  lit_297 = YPsb((P)"%false");
  T37 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_108 = YPfab_met(FUNCODEREF(fun_false_name_108),T37,LITREF(lit_296),LITREF(lit_20),sloc(574),YPfalse);
  T39 = VARREF_OR(YevalSg2cYfalse_name,YPfalse);
  T40 = fun_false_name_108;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSg2cYfalse_name,T38);
  lit_298 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_299 = YPsb((P)"%true");
  lit_300 = YPsb((P)"%false");
  T41 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_109 = YPfab_met(FUNCODEREF(fun_generate_quotation_109),T41,LITREF(lit_291),LITREF(lit_298),sloc(577),YPfalse);
  T43 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T44 = fun_generate_quotation_109;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YevalSg2cYgenerate_quotation,T42);
  lit_301 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_302 = YPsb((P)"nil");
  T46 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T45 = YPfab_sig(YPPlist(2,VARREF(YLanyG),T46),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_110 = YPfab_met(FUNCODEREF(fun_generate_quotation_110),T45,LITREF(lit_291),LITREF(lit_301),sloc(580),YPfalse);
  T48 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T49 = fun_generate_quotation_110;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSg2cYgenerate_quotation,T47);
  lit_303 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_304 = YPPlist(1,YPPsym((P)"x"));
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPfab_met(FUNCODEREF(fun_111),T51,YPfalse,LITREF(lit_304),sloc(584),YPfalse);
  T50 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_112 = YPfab_met(FUNCODEREF(fun_generate_quotation_112),T50,LITREF(lit_291),LITREF(lit_303),sloc(583),YPfalse);
  T53 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T54 = fun_generate_quotation_112;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YevalSg2cYgenerate_quotation,T52);
  lit_305 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_306 = YPsb((P)"%int");
  lit_307 = YPsb((P)"((P)");
  lit_308 = YPsb((P)")");
  T55 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_113 = YPfab_met(FUNCODEREF(fun_generate_quotation_113),T55,LITREF(lit_291),LITREF(lit_305),sloc(586),YPfalse);
  T57 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T58 = fun_generate_quotation_113;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YevalSg2cYgenerate_quotation,T56);
  lit_309 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_310 = YPsb((P)"%chr");
  lit_311 = YPsb((P)"((P)");
  lit_312 = YPsb((P)")");
  T59 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_114 = YPfab_met(FUNCODEREF(fun_generate_quotation_114),T59,LITREF(lit_291),LITREF(lit_309),sloc(589),YPfalse);
  T61 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T62 = fun_generate_quotation_114;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YevalSg2cYgenerate_quotation,T60);
  lit_313 = YPPsym((P)"float-to-c-string");
  lit_314 = YPPlist(1,YPPsym((P)"o"));
  lit_315 = YPPlist(1,YPPsym((P)"done"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPfab_met(FUNCODEREF(fun_115),T64,YPfalse,LITREF(lit_315),sloc(595),YPfalse);
  T63 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_116 = YPfab_met(FUNCODEREF(fun_float_to_c_string_116),T63,LITREF(lit_313),LITREF(lit_314),sloc(592),YPfalse);
  T66 = VARREF_OR(YevalSg2cYfloat_to_c_string,YPfalse);
  T67 = fun_float_to_c_string_116;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSg2cYfloat_to_c_string,T65);
  lit_316 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_317 = YPsb((P)"%flo");
  lit_318 = YPsb((P)"(FLOINT(");
  lit_319 = YPsb((P)"))");
  T68 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_117 = YPfab_met(FUNCODEREF(fun_generate_quotation_117),T68,LITREF(lit_291),LITREF(lit_316),sloc(607),YPfalse);
  T70 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T71 = fun_generate_quotation_117;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSg2cYgenerate_quotation,T69);
  lit_320 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_321 = YPsb((P)"%sb");
  lit_322 = YPsb((P)"((P)");
  lit_323 = YPsb((P)")");
  T72 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_118 = YPfab_met(FUNCODEREF(fun_generate_quotation_118),T72,LITREF(lit_291),LITREF(lit_320),sloc(611),YPfalse);
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
  fun_generate_quotation_119 = YPfab_met(FUNCODEREF(fun_generate_quotation_119),T76,LITREF(lit_291),LITREF(lit_324),sloc(615),YPfalse);
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
  fun_generate_quotation_120 = YPfab_met(FUNCODEREF(fun_generate_quotation_120),T80,LITREF(lit_291),LITREF(lit_330),sloc(623),YPfalse);
  T82 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T83 = fun_generate_quotation_120;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSg2cYgenerate_quotation,T81);
  lit_336 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_337 = YPsb((P)"%%sym");
  lit_338 = YPsb((P)"((P)");
  lit_339 = YPsb((P)")");
  T84 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_121 = YPfab_met(FUNCODEREF(fun_generate_quotation_121),T84,LITREF(lit_291),LITREF(lit_336),sloc(631),YPfalse);
  T86 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T87 = fun_generate_quotation_121;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSg2cYgenerate_quotation,T85);
  lit_340 = YPPsym((P)"binding->c");
  lit_341 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"out"));
  T88 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbinding_Gc = YPfab_met(FUNCODEREF(YevalSg2cYbinding_Gc),T88,LITREF(lit_340),LITREF(lit_341),sloc(640),YPfalse);
  T89 = YevalSg2cYbinding_Gc;
  VARSET(YevalSg2cYbinding_Gc,T89);
  lit_342 = YPPsym((P)"reference->c");
  lit_343 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  T91 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T90 = YPfab_gen(T91,LITREF(lit_342),LITREF(lit_343),YPfalse);
  VARSET(YevalSg2cYreference_Gc,T90);
  lit_344 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  T92 = YPfab_sig(YPPlist(2,VARREF(YevalSmoduleYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_123 = YPfab_met(FUNCODEREF(fun_reference_Gc_123),T92,LITREF(lit_342),LITREF(lit_344),sloc(647),YPfalse);
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
  fun_reference_Gc_124 = YPfab_met(FUNCODEREF(fun_reference_Gc_124),T96,LITREF(lit_342),LITREF(lit_345),sloc(650),YPfalse);
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
  fun_to_c_125 = YPfab_met(FUNCODEREF(fun_to_c_125),T102,LITREF(lit_350),LITREF(lit_352),sloc(662),YPfalse);
  T104 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T105 = fun_to_c_125;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSg2cYto_c,T103);
  lit_353 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T106 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_126 = YPfab_met(FUNCODEREF(fun_to_c_126),T106,LITREF(lit_350),LITREF(lit_353),sloc(668),YPfalse);
  T108 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T109 = fun_to_c_126;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSg2cYto_c,T107);
  lit_354 = YPPsym((P)"gen-ref");
  lit_355 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T110 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_127 = YPfab_met(FUNCODEREF(fun_gen_ref_127),T110,LITREF(lit_354),LITREF(lit_355),sloc(670),YPfalse);
  T112 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T113 = fun_gen_ref_127;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSg2cYgen_ref,T111);
  lit_356 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_357 = YPsb((P)"FREEREF");
  T114 = YPfab_sig(YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_128 = YPfab_met(FUNCODEREF(fun_gen_ref_128),T114,LITREF(lit_354),LITREF(lit_356),sloc(673),YPfalse);
  T116 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T117 = fun_gen_ref_128;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSg2cYgen_ref,T115);
  lit_358 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_359 = YPsb((P)"T");
  lit_360 = YPsb((P)"T_1");
  T118 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_129 = YPfab_met(FUNCODEREF(fun_gen_ref_129),T118,LITREF(lit_354),LITREF(lit_358),sloc(678),YPfalse);
  T120 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T121 = fun_gen_ref_129;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSg2cYgen_ref,T119);
  lit_361 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_362 = YPsb((P)"(P)");
  T122 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_130 = YPfab_met(FUNCODEREF(fun_gen_ref_130),T122,LITREF(lit_354),LITREF(lit_361),sloc(682),YPfalse);
  T124 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T125 = fun_gen_ref_130;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSg2cYgen_ref,T123);
  lit_363 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T126 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_131 = YPfab_met(FUNCODEREF(fun_gen_ref_131),T126,LITREF(lit_354),LITREF(lit_363),sloc(685),YPfalse);
  T128 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T129 = fun_gen_ref_131;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSg2cYgen_ref,T127);
  lit_364 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T130 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_132 = YPfab_met(FUNCODEREF(fun_gen_ref_132),T130,LITREF(lit_354),LITREF(lit_364),sloc(688),YPfalse);
  T132 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T133 = fun_gen_ref_132;
  T131 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T132,T133);
  VARSET(YevalSg2cYgen_ref,T131);
  lit_365 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T134 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_133 = YPfab_met(FUNCODEREF(fun_gen_ref_133),T134,LITREF(lit_354),LITREF(lit_365),sloc(691),YPfalse);
  T136 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T137 = fun_gen_ref_133;
  T135 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T136,T137);
  VARSET(YevalSg2cYgen_ref,T135);
  lit_366 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T138 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_134 = YPfab_met(FUNCODEREF(fun_gen_ref_134),T138,LITREF(lit_354),LITREF(lit_366),sloc(694),YPfalse);
  T140 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T141 = fun_gen_ref_134;
  T139 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T140,T141);
  VARSET(YevalSg2cYgen_ref,T139);
  lit_367 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T142 = YPfab_sig(YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_135 = YPfab_met(FUNCODEREF(fun_gen_ref_135),T142,LITREF(lit_354),LITREF(lit_367),sloc(697),YPfalse);
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
  fun_to_c_136 = YPfab_met(FUNCODEREF(fun_to_c_136),T146,LITREF(lit_350),LITREF(lit_368),sloc(700),YPfalse);
  T148 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T149 = fun_to_c_136;
  T147 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T148,T149);
  VARSET(YevalSg2cYto_c,T147);
  lit_375 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_376 = YPsb((P)"RTV");
  lit_377 = YPsb((P)"VARREF_OR");
  T150 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_137 = YPfab_met(FUNCODEREF(fun_to_c_137),T150,LITREF(lit_350),LITREF(lit_375),sloc(714),YPfalse);
  T152 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T153 = fun_to_c_137;
  T151 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T152,T153);
  VARSET(YevalSg2cYto_c,T151);
  lit_378 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_379 = YPsb((P)"BOXGET");
  T154 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_138 = YPfab_met(FUNCODEREF(fun_to_c_138),T154,LITREF(lit_350),LITREF(lit_378),sloc(725),YPfalse);
  T156 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T157 = fun_to_c_138;
  T155 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T156,T157);
  VARSET(YevalSg2cYto_c,T155);
  lit_380 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_381 = YPsb((P)"BOXPUT");
  lit_382 = YPsb((P)" = ");
  T158 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_139 = YPfab_met(FUNCODEREF(fun_to_c_139),T158,LITREF(lit_350),LITREF(lit_380),sloc(733),YPfalse);
  T160 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T161 = fun_to_c_139;
  T159 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T160,T161);
  VARSET(YevalSg2cYto_c,T159);
  lit_383 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_384 = YPsb((P)" = BOXFAB");
  T162 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_140 = YPfab_met(FUNCODEREF(fun_to_c_140),T162,LITREF(lit_350),LITREF(lit_383),sloc(744),YPfalse);
  T164 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T165 = fun_to_c_140;
  T163 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T164,T165);
  VARSET(YevalSg2cYto_c,T163);
  lit_385 = YPPsym((P)"bb?");
  lit_386 = YPPlist(1,YPPsym((P)"x"));
  T166 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_141 = YPfab_met(FUNCODEREF(fun_bbQ_141),T166,LITREF(lit_385),LITREF(lit_386),sloc(752),YPfalse);
  T168 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T169 = fun_bbQ_141;
  T167 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T168,T169);
  VARSET(YevalSg2cYbbQ,T167);
  lit_387 = YPPlist(1,YPPsym((P)"x"));
  lit_388 = YPPsym((P)"%bb");
  T170 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_142 = YPfab_met(FUNCODEREF(fun_bbQ_142),T170,LITREF(lit_385),LITREF(lit_387),sloc(754),YPfalse);
  T172 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T173 = fun_bbQ_142;
  T171 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T172,T173);
  VARSET(YevalSg2cYbbQ,T171);
  lit_389 = YPPlist(1,YPPsym((P)"x"));
  T174 = YPfab_sig(YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_143 = YPfab_met(FUNCODEREF(fun_bbQ_143),T174,LITREF(lit_385),LITREF(lit_389),sloc(758),YPfalse);
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
  fun_to_c_144 = YPfab_met(FUNCODEREF(fun_to_c_144),T178,LITREF(lit_350),LITREF(lit_390),sloc(761),YPfalse);
  T180 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T181 = fun_to_c_144;
  T179 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T180,T181);
  VARSET(YevalSg2cYto_c,T179);
  lit_397 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_398 = YPPlist(1,YPPsym((P)"x"));
  T183 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_145 = YPfab_met(FUNCODEREF(fun_145),T183,YPfalse,LITREF(lit_398),sloc(780),YPfalse);
  T182 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_146 = YPfab_met(FUNCODEREF(fun_to_c_146),T182,LITREF(lit_350),LITREF(lit_397),sloc(779),YPfalse);
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187;
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
  fun_147 = YPfab_met(FUNCODEREF(fun_147),T2,YPfalse,LITREF(lit_403),sloc(791),YPfalse);
  T1 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_148 = YPfab_met(FUNCODEREF(fun_148),T1,YPfalse,LITREF(lit_404),sloc(791),YPfalse);
  T0 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLloopG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_149 = YPfab_met(FUNCODEREF(fun_to_c_149),T0,LITREF(lit_350),LITREF(lit_399),sloc(784),YPfalse);
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
  fun_to_c_150 = YPfab_met(FUNCODEREF(fun_to_c_150),T6,LITREF(lit_350),LITREF(lit_408),sloc(797),YPfalse);
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
  fun_to_c_151 = YPfab_met(FUNCODEREF(fun_to_c_151),T10,LITREF(lit_350),LITREF(lit_415),sloc(815),YPfalse);
  T12 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T13 = fun_to_c_151;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSg2cYto_c,T11);
  lit_422 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_423 = YPsb((P)"%next-methods-reg-setter");
  T14 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLmethod_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_152 = YPfab_met(FUNCODEREF(fun_to_c_152),T14,LITREF(lit_350),LITREF(lit_422),sloc(832),YPfalse);
  T16 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T17 = fun_to_c_152;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSg2cYto_c,T15);
  lit_424 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_425 = YPPlist(1,YPPsym((P)"x"));
  lit_426 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_153 = YPfab_met(FUNCODEREF(fun_153),T20,YPfalse,LITREF(lit_425),sloc(840),YPfalse);
  T19 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_154 = YPfab_met(FUNCODEREF(fun_154),T19,YPfalse,LITREF(lit_426),sloc(840),YPfalse);
  T18 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_155 = YPfab_met(FUNCODEREF(fun_to_c_155),T18,LITREF(lit_350),LITREF(lit_424),sloc(839),YPfalse);
  T22 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T23 = fun_to_c_155;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSg2cYto_c,T21);
  lit_427 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_428 = YPsb((P)"check_type");
  lit_429 = YPsb((P)" = ");
  T24 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_156 = YPfab_met(FUNCODEREF(fun_to_c_156),T24,LITREF(lit_350),LITREF(lit_427),sloc(843),YPfalse);
  T26 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T27 = fun_to_c_156;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSg2cYto_c,T25);
  lit_430 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_431 = YPsb((P)" = ");
  T28 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_157 = YPfab_met(FUNCODEREF(fun_to_c_157),T28,LITREF(lit_350),LITREF(lit_430),sloc(860),YPfalse);
  T30 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T31 = fun_to_c_157;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSg2cYto_c,T29);
  lit_432 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_433 = YPsb((P)"with_exit");
  T32 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_158 = YPfab_met(FUNCODEREF(fun_to_c_158),T32,LITREF(lit_350),LITREF(lit_432),sloc(870),YPfalse);
  T34 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T35 = fun_to_c_158;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSg2cYto_c,T33);
  lit_434 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_435 = YPsb((P)"with_cleanup");
  T36 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_159 = YPfab_met(FUNCODEREF(fun_to_c_159),T36,LITREF(lit_350),LITREF(lit_434),sloc(876),YPfalse);
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
  fun_to_c_160 = YPfab_met(FUNCODEREF(fun_to_c_160),T40,LITREF(lit_350),LITREF(lit_436),sloc(885),YPfalse);
  T42 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T43 = fun_to_c_160;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSg2cYto_c,T41);
  lit_441 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_442 = YPsb((P)"(P)");
  lit_443 = YPPlist(1,YPPsym((P)"x"));
  lit_444 = YPPlist(1,YPPsym((P)"x"));
  T46 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_161 = YPfab_met(FUNCODEREF(fun_161),T46,YPfalse,LITREF(lit_443),sloc(910),YPfalse);
  T45 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_162 = YPfab_met(FUNCODEREF(fun_162),T45,YPfalse,LITREF(lit_444),sloc(910),YPfalse);
  T44 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_163 = YPfab_met(FUNCODEREF(fun_to_c_163),T44,LITREF(lit_350),LITREF(lit_441),sloc(903),YPfalse);
  T48 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T49 = fun_to_c_163;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSg2cYto_c,T47);
  lit_445 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_446 = YPPlist(1,YPPsym((P)"x"));
  lit_447 = YPsb((P)"FUNFAB");
  lit_448 = YPsb((P)",");
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_164 = YPfab_met(FUNCODEREF(fun_164),T51,YPfalse,LITREF(lit_446),sloc(919),YPfalse);
  T50 = YPfab_sig(YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_165 = YPfab_met(FUNCODEREF(fun_to_c_165),T50,LITREF(lit_350),LITREF(lit_445),sloc(913),YPfalse);
  T53 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T54 = fun_to_c_165;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YevalSg2cYto_c,T52);
  lit_449 = YPPsym((P)"funshell-to-c");
  lit_450 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_451 = YPsb((P)"FUNSHELL");
  T55 = YPfab_sig(YPPlist(5,VARREF(YevalSmoduleYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_166 = YPfab_met(FUNCODEREF(fun_funshell_to_c_166),T55,LITREF(lit_449),LITREF(lit_450),sloc(928),YPfalse);
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
  fun_167 = YPfab_met(FUNCODEREF(fun_167),T60,YPfalse,LITREF(lit_454),sloc(944),YPfalse);
  T59 = YPfab_sig(YPPlist(5,VARREF(YevalSmoduleYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_168 = YPfab_met(FUNCODEREF(fun_funinit_to_c_168),T59,LITREF(lit_452),LITREF(lit_453),sloc(941),YPfalse);
  T62 = VARREF_OR(YevalSg2cYfuninit_to_c,YPfalse);
  T63 = fun_funinit_to_c_168;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSg2cYfuninit_to_c,T61);
  lit_457 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_458 = YPsb((P)"%macro");
  T64 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_169 = YPfab_met(FUNCODEREF(fun_to_c_169),T64,LITREF(lit_350),LITREF(lit_457),sloc(953),YPfalse);
  T66 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T67 = fun_to_c_169;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSg2cYto_c,T65);
  lit_459 = YPPsym((P)"out-list-builder");
  lit_460 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"out"),YPPsym((P)"elts"));
  lit_461 = YPsb((P)"nil");
  lit_462 = YPsb((P)"%%list");
  T68 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_170 = YPfab_met(FUNCODEREF(fun_out_list_builder_170),T68,LITREF(lit_459),LITREF(lit_460),sloc(962),YPfalse);
  T70 = VARREF_OR(YevalSg2cYout_list_builder,YPfalse);
  T71 = fun_out_list_builder_170;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSg2cYout_list_builder,T69);
  lit_463 = YPPsym((P)"gen-fab-list");
  lit_464 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"refs"));
  lit_465 = YPPlist(1,YPPsym((P)"x"));
  T73 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_171 = YPfab_met(FUNCODEREF(fun_171),T73,YPfalse,LITREF(lit_465),sloc(975),YPfalse);
  T72 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_172 = YPfab_met(FUNCODEREF(fun_gen_fab_list_172),T72,LITREF(lit_463),LITREF(lit_464),sloc(974),YPfalse);
  T75 = VARREF_OR(YevalSg2cYgen_fab_list,YPfalse);
  T76 = fun_gen_fab_list_172;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSg2cYgen_fab_list,T74);
  lit_466 = YPPsym((P)"generate-function-specs");
  lit_467 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"sig"));
  T77 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_173 = YPfab_met(FUNCODEREF(fun_generate_function_specs_173),T77,LITREF(lit_466),LITREF(lit_467),sloc(977),YPfalse);
  T79 = VARREF_OR(YevalSg2cYgenerate_function_specs,YPfalse);
  T80 = fun_generate_function_specs_173;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSg2cYgenerate_function_specs,T78);
  lit_468 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_469 = YPPlist(1,YPPsym((P)"x"));
  lit_470 = YPsb((P)"%fab-sig");
  lit_471 = YPsb((P)"nil");
  T82 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_174 = YPfab_met(FUNCODEREF(fun_174),T82,YPfalse,LITREF(lit_469),sloc(981),YPfalse);
  T81 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_175 = YPfab_met(FUNCODEREF(fun_to_c_175),T81,LITREF(lit_350),LITREF(lit_468),sloc(980),YPfalse);
  T84 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T85 = fun_to_c_175;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSg2cYto_c,T83);
  lit_472 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_473 = YPsb((P)"%fab-gen");
  lit_474 = YPsb((P)"%false");
  T86 = YPfab_sig(YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_176 = YPfab_met(FUNCODEREF(fun_to_c_176),T86,LITREF(lit_350),LITREF(lit_472),sloc(992),YPfalse);
  T88 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T89 = fun_to_c_176;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSg2cYto_c,T87);
  lit_475 = YPPsym((P)"generate-function-forwards");
  lit_476 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_477 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  T90 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_177 = YPfab_met(FUNCODEREF(fun_generate_function_forwards_177),T90,LITREF(lit_475),LITREF(lit_476),sloc(1005),YPfalse);
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
  fun_178 = YPfab_met(FUNCODEREF(fun_178),T96,YPfalse,LITREF(lit_484),sloc(1014),YPfalse);
  T95 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_179 = YPfab_met(FUNCODEREF(fun_179),T95,YPfalse,LITREF(lit_485),sloc(1014),YPfalse);
  T94 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_180 = YPfab_met(FUNCODEREF(fun_generate_function_forward_180),T94,LITREF(lit_478),LITREF(lit_479),sloc(1010),YPfalse);
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
  fun_generate_function_binding_181 = YPfab_met(FUNCODEREF(fun_generate_function_binding_181),T100,LITREF(lit_488),LITREF(lit_489),sloc(1018),YPfalse);
  T102 = VARREF_OR(YevalSg2cYgenerate_function_binding,YPfalse);
  T103 = fun_generate_function_binding_181;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSg2cYgenerate_function_binding,T101);
  lit_494 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_495 = YPsb((P)"FUNFOR(");
  lit_496 = YPsb((P)"LOCFOR(");
  lit_497 = YPsb((P)");\n");
  T104 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_182 = YPfab_met(FUNCODEREF(fun_generate_function_forward_182),T104,LITREF(lit_478),LITREF(lit_494),sloc(1031),YPfalse);
  T106 = VARREF_OR(YevalSg2cYgenerate_function_forward,YPfalse);
  T107 = fun_generate_function_forward_182;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSg2cYgenerate_function_forward,T105);
  lit_498 = YPPsym((P)"generate-function-bodies");
  lit_499 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_500 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_501 = YPPlist(1,YPPsym((P)"def"));
  T109 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_183 = YPfab_met(FUNCODEREF(fun_183),T109,YPfalse,LITREF(lit_501),sloc(1039),YPfalse);
  T108 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_184 = YPfab_met(FUNCODEREF(fun_generate_function_bodies_184),T108,LITREF(lit_498),LITREF(lit_499),sloc(1037),YPfalse);
  T111 = VARREF_OR(YevalSg2cYgenerate_function_bodies,YPfalse);
  T112 = fun_generate_function_bodies_184;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YevalSg2cYgenerate_function_bodies,T110);
  lit_502 = YPPsym((P)"generate-functions");
  lit_503 = YPPlist(4,YPPsym((P)"definitions"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_504 = YPPlist(1,YPPsym((P)"def"));
  T114 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_185 = YPfab_met(FUNCODEREF(fun_185),T114,YPfalse,LITREF(lit_504),sloc(1044),YPfalse);
  T113 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_186 = YPfab_met(FUNCODEREF(fun_generate_functions_186),T113,LITREF(lit_502),LITREF(lit_503),sloc(1043),YPfalse);
  T116 = VARREF_OR(YevalSg2cYgenerate_functions,YPfalse);
  T117 = fun_generate_functions_186;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSg2cYgenerate_functions,T115);
  lit_505 = YPPsym((P)"generate-closure-structure");
  lit_506 = YPPlist(4,YPPsym((P)"definition"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_507 = YPsb((P)" = ");
  lit_508 = YPsb((P)"%fab-met-inlineable");
  lit_509 = YPsb((P)"%fab-met");
  lit_510 = YPsb((P)"sloc(");
  lit_511 = YPsb((P)")");
  lit_512 = YPsb((P)"%false");
  T118 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_187 = YPfab_met(FUNCODEREF(fun_generate_closure_structure_187),T118,LITREF(lit_505),LITREF(lit_506),sloc(1049),YPfalse);
  T120 = VARREF_OR(YevalSg2cYgenerate_closure_structure,YPfalse);
  T121 = fun_generate_closure_structure_187;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSg2cYgenerate_closure_structure,T119);
  lit_513 = YPPsym((P)"generate-function-body-reference");
  lit_514 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definition"));
  lit_515 = YPsb((P)"FUNCODEREF(");
  lit_516 = YPsb((P)")");
  T122 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_188 = YPfab_met(FUNCODEREF(fun_generate_function_body_reference_188),T122,LITREF(lit_513),LITREF(lit_514),sloc(1067),YPfalse);
  T124 = VARREF_OR(YevalSg2cYgenerate_function_body_reference,YPfalse);
  T125 = fun_generate_function_body_reference_188;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSg2cYgenerate_function_body_reference,T123);
  lit_517 = YPPsym((P)"generate-return");
  lit_518 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_519 = YPsb((P)"return ");
  T126 = YPfab_sig(YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_189 = YPfab_met(FUNCODEREF(fun_generate_return_189),T126,LITREF(lit_517),LITREF(lit_518),sloc(1076),YPfalse);
  T128 = VARREF_OR(YevalSg2cYgenerate_return,YPfalse);
  T129 = fun_generate_return_189;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSg2cYgenerate_return,T127);
  lit_520 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_521 = YPsb((P)"RET");
  T130 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_190 = YPfab_met(FUNCODEREF(fun_generate_return_190),T130,LITREF(lit_517),LITREF(lit_520),sloc(1080),YPfalse);
  T132 = VARREF_OR(YevalSg2cYgenerate_return,YPfalse);
  T133 = fun_generate_return_190;
  T131 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T132,T133);
  VARSET(YevalSg2cYgenerate_return,T131);
  lit_522 = YPPsym((P)"generate-function-code");
  lit_523 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"e"));
  lit_524 = YPsb((P)"\n");
  lit_525 = YPsb((P)"static ");
  lit_526 = YPsb((P)"INLINE ");
  lit_527 = YPsb((P)"P ");
  lit_528 = YPPlist(1,YPPsym((P)"x"));
  lit_529 = YPPlist(1,YPPsym((P)"x"));
  lit_530 = YPsb((P)"P ");
  lit_531 = YPsb((P)" {\n");
  lit_532 = YPsb((P)"DEFCREGS();\n");
  lit_533 = YPsb((P)"}\n");
  T136 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_191 = YPfab_met(FUNCODEREF(fun_191),T136,YPfalse,LITREF(lit_528),sloc(1093),YPfalse);
  T135 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_192 = YPfab_met(FUNCODEREF(fun_192),T135,YPfalse,LITREF(lit_529),sloc(1093),YPfalse);
  T134 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_193 = YPfab_met(FUNCODEREF(fun_generate_function_code_193),T134,LITREF(lit_522),LITREF(lit_523),sloc(1087),YPfalse);
  T138 = VARREF_OR(YevalSg2cYgenerate_function_code,YPfalse);
  T139 = fun_generate_function_code_193;
  T137 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T138,T139);
  VARSET(YevalSg2cYgenerate_function_code,T137);
  lit_534 = YPPsym((P)"dispatcher?");
  lit_535 = YPPlist(1,YPPsym((P)"definition"));
  lit_536 = YPsb((P)"%dispatch");
  lit_537 = YPsb((P)"-dispatch");
  lit_538 = YPsb((P)"-dispatch");
  T140 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_194 = YPfab_met(FUNCODEREF(fun_dispatcherQ_194),T140,LITREF(lit_534),LITREF(lit_535),sloc(1103),YPfalse);
  T142 = VARREF_OR(YevalSg2cYdispatcherQ,YPfalse);
  T143 = fun_dispatcherQ_194;
  T141 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T142,T143);
  VARSET(YevalSg2cYdispatcherQ,T141);
  lit_539 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definition"));
  lit_540 = YPsb((P)"\nFUNCODEDEF(");
  lit_541 = YPsb((P)"\nLOCCODEDEF(");
  lit_542 = YPsb((P)") {\n");
  lit_543 = YPsb((P)"P ");
  lit_544 = YPPlist(1,YPPsym((P)"x"));
  lit_545 = YPPlist(1,YPPsym((P)"x"));
  lit_546 = YPsb((P)"LINK_STACK();\n");
  lit_547 = YPPlist(1,YPPsym((P)"b"));
  lit_548 = YPsb((P)"NARGS(");
  lit_549 = YPsb((P)"ARG(");
  lit_550 = YPsb((P)", ");
  lit_551 = YPsb((P)")");
  lit_552 = YPsb((P)"UNLINK_STACK();\n");
  lit_553 = YPsb((P)"}\n");
  T147 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_195 = YPfab_met(FUNCODEREF(fun_195),T147,YPfalse,LITREF(lit_544),sloc(1121),YPfalse);
  T146 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_196 = YPfab_met(FUNCODEREF(fun_196),T146,YPfalse,LITREF(lit_545),sloc(1121),YPfalse);
  T145 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_197 = YPfab_met(FUNCODEREF(fun_197),T145,YPfalse,LITREF(lit_547),sloc(1127),YPfalse);
  T144 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_198 = YPfab_met(FUNCODEREF(fun_generate_function_code_198),T144,LITREF(lit_522),LITREF(lit_539),sloc(1111),YPfalse);
  T149 = VARREF_OR(YevalSg2cYgenerate_function_code,YPfalse);
  T150 = fun_generate_function_code_198;
  T148 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T149,T150);
  VARSET(YevalSg2cYgenerate_function_code,T148);
  lit_554 = YPPsym((P)"generate-local-temporaries");
  lit_555 = YPPlist(2,YPPsym((P)"temps"),YPPsym((P)"out"));
  lit_556 = YPsb((P)"P ");
  T151 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_199 = YPfab_met(FUNCODEREF(fun_generate_local_temporaries_199),T151,LITREF(lit_554),LITREF(lit_555),sloc(1147),YPfalse);
  T153 = VARREF_OR(YevalSg2cYgenerate_local_temporaries,YPfalse);
  T154 = fun_generate_local_temporaries_199;
  T152 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T153,T154);
  VARSET(YevalSg2cYgenerate_local_temporaries,T152);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_557 = YPPsym((P)"generate-registers");
  lit_558 = YPPlist(2,YPPsym((P)"regs"),YPPsym((P)"out"));
  lit_559 = YPsb((P)"P ");
  lit_560 = YPsb((P)";\n");
  T155 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_200 = YPfab_met(FUNCODEREF(fun_generate_registers_200),T155,LITREF(lit_557),LITREF(lit_558),sloc(1156),YPfalse);
  T157 = VARREF_OR(YevalSg2cYgenerate_registers,YPfalse);
  T158 = fun_generate_registers_200;
  T156 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T157,T158);
  VARSET(YevalSg2cYgenerate_registers,T156);
  lit_561 = YPPsym((P)"module-info-name");
  lit_562 = YPPlist(1,YPPsym((P)"name"));
  lit_563 = YPsb((P)"module_info_");
  T159 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_201 = YPfab_met(FUNCODEREF(fun_module_info_name_201),T159,LITREF(lit_561),LITREF(lit_562),sloc(1168),YPfalse);
  T161 = VARREF_OR(YevalSg2cYmodule_info_name,YPfalse);
  T162 = fun_module_info_name_201;
  T160 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T161,T162);
  VARSET(YevalSg2cYmodule_info_name,T160);
  lit_564 = YPPsym((P)"declare-imported-module-infos");
  lit_565 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_566 = YPPsym((P)"maybe-declare");
  lit_567 = YPPlist(1,YPPsym((P)"modname"));
  lit_568 = YPsb((P)"extern MODULE_INFO ");
  lit_569 = YPsb((P)";\n");
  lit_570 = YPPlist(1,YPPsym((P)"binding"));
  T165 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_202 = YPfab_met(FUNCODEREF(fun_maybe_declare_202),T165,LITREF(lit_566),LITREF(lit_567),sloc(1177),YPfalse);
  T164 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_203 = YPfab_met(FUNCODEREF(fun_203),T164,YPfalse,LITREF(lit_570),sloc(1184),YPfalse);
  T163 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYdeclare_imported_module_infos = YPfab_met(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),T163,LITREF(lit_564),LITREF(lit_565),sloc(1174),YPfalse);
  T166 = YevalSg2cYdeclare_imported_module_infos;
  VARSET(YevalSg2cYdeclare_imported_module_infos,T166);
  lit_571 = YPPsym((P)"generate-module-info");
  lit_572 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_573 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_574 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_575 = YPsb((P)"  {&");
  lit_576 = YPsb((P)"},\n");
  lit_577 = YPsb((P)"  {NULL}\n};\n");
  lit_578 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_579 = YPPlist(2,YPPsym((P)"local-name"),YPPsym((P)"binding"));
  lit_580 = YPsb((P)"  {");
  lit_581 = YPsb((P)", &");
  lit_582 = YPsb((P)", ");
  lit_583 = YPsb((P)"NULL");
  lit_584 = YPsb((P)"},\n");
  lit_585 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_586 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_587 = YPPlist(1,YPPsym((P)"binding"));
  lit_588 = YPsb((P)"  {");
  lit_589 = YPsb((P)", ");
  lit_590 = YPsb((P)"CVAR, &");
  lit_591 = YPsb((P)"},\n");
  lit_592 = YPsb((P)"DVAR, &");
  lit_593 = YPsb((P)"},\n");
  lit_594 = YPsb((P)"PVAR, NULL},\n");
  lit_595 = YPsb((P)"  {NULL, NVAR, NULL}\n};\n");
  lit_596 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_597 = YPsb((P)"  {");
  lit_598 = YPsb((P)", ");
  lit_599 = YPsb((P)"NULL");
  lit_600 = YPsb((P)"},\n");
  lit_601 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_602 = YPsb((P)"\nextern MODULE_INFO ");
  lit_603 = YPsb((P)";\n");
  lit_604 = YPsb((P)"MODULE_INFO ");
  lit_605 = YPsb((P)" = {\n");
  lit_606 = YPsb((P)"  ");
  lit_607 = YPsb((P)",\n");
  lit_608 = YPsb((P)"  NULL,\n");
  lit_609 = YPsb((P)"  use_infos,\n");
  lit_610 = YPsb((P)"  import_infos,\n");
  lit_611 = YPsb((P)"  binding_infos,\n");
  lit_612 = YPsb((P)"  export_infos,\n");
  lit_613 = YPsb((P)"};\n");
  T169 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_205 = YPfab_met(FUNCODEREF(fun_205),T169,YPfalse,LITREF(lit_579),sloc(1211),YPfalse);
  T168 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_206 = YPfab_met(FUNCODEREF(fun_206),T168,YPfalse,LITREF(lit_587),sloc(1225),YPfalse);
  T167 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPfab_met(FUNCODEREF(YevalSg2cYgenerate_module_info),T167,LITREF(lit_571),LITREF(lit_572),sloc(1193),YPfalse);
  T170 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T170);
  lit_614 = YPPsym((P)"module-init-name");
  lit_615 = YPPlist(1,YPPsym((P)"name"));
  lit_616 = YPsb((P)"load_module_");
  T171 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_208 = YPfab_met(FUNCODEREF(fun_module_init_name_208),T171,LITREF(lit_614),LITREF(lit_615),sloc(1256),YPfalse);
  T173 = VARREF_OR(YevalSg2cYmodule_init_name,YPfalse);
  T174 = fun_module_init_name_208;
  T172 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T173,T174);
  VARSET(YevalSg2cYmodule_init_name,T172);
  lit_617 = YPPsym((P)"module-init-decl");
  lit_618 = YPPlist(1,YPPsym((P)"name"));
  lit_619 = YPsb((P)"void ");
  lit_620 = YPsb((P)" (void)");
  T175 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_209 = YPfab_met(FUNCODEREF(fun_module_init_decl_209),T175,LITREF(lit_617),LITREF(lit_618),sloc(1259),YPfalse);
  T177 = VARREF_OR(YevalSg2cYmodule_init_decl,YPfalse);
  T178 = fun_module_init_decl_209;
  T176 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T177,T178);
  VARSET(YevalSg2cYmodule_init_decl,T176);
  lit_621 = YPPsym((P)"generate-module-init");
  lit_622 = YPPlist(3,YPPsym((P)"out"),YPPsym((P)"mod"),YPPsym((P)"form"));
  lit_623 = YPsb((P)"dl");
  lit_624 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_625 = YPsb((P)"extern ");
  lit_626 = YPsb((P)";\n");
  lit_627 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_628 = YPsb((P)"extern ");
  lit_629 = YPsb((P)";\n\n");
  lit_630 = YPsb((P)" {\n");
  lit_631 = YPsb((P)"  static int need_init = 1;\n");
  lit_632 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_633 = YPsb((P)"  need_init = 0;\n");
  lit_634 = YPsb((P)"  ");
  lit_635 = YPsb((P)"();\n");
  lit_636 = YPsb((P)"\n");
  lit_637 = YPsb((P)"\n");
  lit_638 = YPsb((P)"}\n");
  T179 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_210 = YPfab_met(FUNCODEREF(fun_generate_module_init_210),T179,LITREF(lit_621),LITREF(lit_622),sloc(1262),YPfalse);
  T181 = VARREF_OR(YevalSg2cYgenerate_module_init,YPfalse);
  T182 = fun_generate_module_init_210;
  T180 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T181,T182);
  VARSET(YevalSg2cYgenerate_module_init,T180);
  lit_639 = YPPsym((P)"generate-main");
  lit_640 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_641 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_642 = YPsb((P)"extern MODULE_INFO ");
  lit_643 = YPsb((P)";\n");
  lit_644 = YPsb((P)"extern ");
  lit_645 = YPsb((P)";\n\n");
  lit_646 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &");
  lit_647 = YPsb((P)";\n\n");
  lit_648 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_649 = YPsb((P)"  ");
  lit_650 = YPsb((P)"%init-world");
  lit_651 = YPsb((P)"(argc, argv);\n");
  lit_652 = YPsb((P)"  ");
  lit_653 = YPsb((P)"();\n");
  lit_654 = YPsb((P)"  return 0;\n");
  lit_655 = YPsb((P)"}\n");
  T183 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_211 = YPfab_met(FUNCODEREF(fun_generate_main_211),T183,LITREF(lit_639),LITREF(lit_640),sloc(1288),YPfalse);
  T185 = VARREF_OR(YevalSg2cYgenerate_main,YPfalse);
  T186 = fun_generate_main_211;
  T184 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T185,T186);
  VARSET(YevalSg2cYgenerate_main,T184);
  T187 = YPfalse;
  return T187;
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
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_evalSsyntax;

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
  {"*dynamic-compilation?*", &module_info_evalSmodule, NULL},
  {"environment-allows-foreign-names?", &module_info_evalSmodule, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"unconstrained-type?", &module_info_evalSoptimize, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"binding-kind", &module_info_evalSmodule, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"environment-next", &module_info_evalSmodule, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"form-quotations", &module_info_evalSast_linearize, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"frame-bindings", &module_info_evalSmodule, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"binding-prop", &module_info_evalSmodule, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"binding-info-setter", &module_info_evalSmodule, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"<box-read>", &module_info_evalSast_linearize, NULL},
  {"form-definitions", &module_info_evalSast_linearize, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"sorted-applicable-methods-using-types", &module_info_evalSoptimize, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"environment-uses-modules", &module_info_evalSmodule, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"with-subtransaction", &module_info_evalSmodule, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"top", &module_info_evalStop, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"function-inlineable?", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"find-syntax-environment", &module_info_evalSmodule, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSmodule, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"<static-local-environment>", &module_info_evalSmodule, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"function-names", &module_info_evalSast, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"insert-global!", &module_info_evalSmodule, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"type-equiv?", &module_info_evalSoptimize, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"load-in", &module_info_evalSmodule, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"*current-subtransaction*", &module_info_evalSmodule, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"box-form", &module_info_evalSast_linearize, NULL},
  {"remove-modules-by-name!", &module_info_evalSmodule, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"write-type", &module_info_gooSioSwrite, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"binding-global-box", &module_info_evalSmodule, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"<binding>", &module_info_evalSmodule, NULL},
  {"<module-binding>", &module_info_evalSmodule, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"do-module-loader-modules", &module_info_evalSmodule, NULL},
  {"roll-back-transaction", &module_info_evalSmodule, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"program-quotations", &module_info_evalSast_linearize, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"module-uses-c-includes", &module_info_evalSmodule, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"environment-bindings", &module_info_evalSmodule, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"binding-info", &module_info_evalSmodule, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"install-initial-bindings", &module_info_evalSmodule, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"insert-globals!", &module_info_evalSmodule, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"closurize-main!", &module_info_evalSast_linearize, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"do-named-static-global-bindings", &module_info_evalSmodule, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"unchecked-runtime-environment", &module_info_evalSmodule, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSmodule, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"<closure-creation>", &module_info_evalSast_linearize, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"<free-reference>", &module_info_evalSast_linearize, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"module-uses-c-files", &module_info_evalSmodule, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"report-undefined-global-bindings", &module_info_evalSmodule, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"binding-free?-setter", &module_info_evalSmodule, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"insert-box!", &module_info_evalSast_linearize, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"binding-inferred-type-setter", &module_info_evalSmodule, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"<box-write>", &module_info_evalSast_linearize, NULL},
  {"env-object-name", &module_info_evalSmodule, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"fab-static-global-environment", &module_info_evalSmodule, NULL},
  {"module-referenced-bindings", &module_info_evalSmodule, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"<static-environment>", &module_info_evalSmodule, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"register-referenced-binding", &module_info_evalSmodule, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"msg*", &module_info_gooSioSwrite, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"vm-evaluate", &module_info_evalStop, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"analyze-calls", &module_info_evalSoptimize, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"reload-modules", &module_info_evalSmodule, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"fab-subset-environment", &module_info_evalSmodule, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"<box-creation>", &module_info_evalSast_linearize, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"module-name-to-relpath", &module_info_evalSmodule, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"$goo-boot-module-name", &module_info_evalSmodule, NULL},
  {"runtime-module", &module_info_evalSmodule, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<static-global-environment>", &module_info_evalSmodule, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"<binding-name>", &module_info_evalSmodule, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"import-global!", &module_info_evalSmodule, NULL},
  {"import-and-mangle-global!", &module_info_evalSmodule, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"type-infer", &module_info_evalStypist, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"probe-module", &module_info_evalSmodule, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"module-data-processed?", &module_info_evalSmodule, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"find-binding", &module_info_evalSmodule, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSmodule, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"module-mangled-string-name", &module_info_evalSmodule, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"potentially-joint?", &module_info_evalSoptimize, NULL},
  {"module-target-environment", &module_info_evalSmodule, NULL},
  {"$", &module_info_evalStop, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"binding-native-to?", &module_info_evalSmodule, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"<namespace-error>", &module_info_evalSmodule, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"<module>", &module_info_evalSmodule, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"register-allocate!", &module_info_evalSast_linearize, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"gather-temporaries!", &module_info_evalSast_linearize, NULL},
  {"transaction-register-dependent", &module_info_evalSmodule, NULL},
  {"transaction-register-implemented-binding", &module_info_evalSmodule, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"call-with-subtransaction", &module_info_evalSmodule, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"walk-bindings", &module_info_evalSmodule, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"module-runtime-data-setter", &module_info_evalSmodule, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"do-static-global-bindings", &module_info_evalSmodule, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"binding-free?", &module_info_evalSmodule, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"global-box-value-setter", &module_info_evalSmodule, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"register-module!", &module_info_evalSmodule, NULL},
  {"binding-prop-setter", &module_info_evalSmodule, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"module-loader-stack", &module_info_evalSmodule, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"runtime-environment", &module_info_evalSmodule, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"lift!", &module_info_evalSast_linearize, NULL},
  {"program-bindings", &module_info_evalSast_linearize, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"module-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"function-arity", &module_info_evalSast, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"closure-creation-index", &module_info_evalSast_linearize, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"*register-passive?*", &module_info_evalSast_linearize, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"box-reference", &module_info_evalSast_linearize, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSmodule, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"set-module-environments", &module_info_evalSmodule, NULL},
  {"form-program", &module_info_evalSast_linearize, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"binding-module-name", &module_info_evalSmodule, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"binding-inferred-type", &module_info_evalSmodule, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"<global-box>", &module_info_evalSmodule, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"find-static-global-environment", &module_info_evalSmodule, NULL},
  {"binding-locative-setter", &module_info_evalSmodule, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"module-transaction", &module_info_evalSmodule, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"program-form", &module_info_evalSast_linearize, NULL},
  {"namespace-error", &module_info_evalSmodule, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"binding-type-setter", &module_info_evalSmodule, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"module-exports", &module_info_evalSmodule, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"module-syntax-environment", &module_info_evalSmodule, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"binding-kind-setter", &module_info_evalSmodule, NULL},
  {"program-definitions", &module_info_evalSast_linearize, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"binding-locative", &module_info_evalSmodule, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"zap-referenced-bindings!", &module_info_evalSmodule, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"export-binding!", &module_info_evalSmodule, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"flatten-seqs", &module_info_evalSast_linearize, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"binding-handler-setter", &module_info_evalSmodule, NULL},
  {"binding-name", &module_info_evalSmodule, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSmodule, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"module-data-processed?-setter", &module_info_evalSmodule, NULL},
  {"use", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"binding-module", &module_info_evalSmodule, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"binding-handler", &module_info_evalSmodule, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"extract-things!", &module_info_evalSast_linearize, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"recurring-write", &module_info_gooSioSwrite, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"<method-application>", &module_info_evalSast, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"<static-nul-environment>", &module_info_evalSmodule, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"reference-offset", &module_info_evalSast_linearize, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"module-runtime-data", &module_info_evalSmodule, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"find-environment-module", &module_info_evalSmodule, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"binding-mangled-name-setter", &module_info_evalSmodule, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"ensure-module-data", &module_info_evalSmodule, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"reference-self?", &module_info_evalSast_linearize, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"runtime-module-loader", &module_info_evalSmodule, NULL},
  {"<module-loader>", &module_info_evalSmodule, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"global-box-value", &module_info_evalSmodule, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"module-loader-module-type", &module_info_evalSmodule, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"module-mangled-name", &module_info_evalSmodule, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"load", &module_info_evalStop, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"binding-global-box-setter", &module_info_evalSmodule, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"application-next-methods", &module_info_evalSast, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"<top-level-form>", &module_info_evalSast_linearize, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"module-uses-c-libraries", &module_info_evalSmodule, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"environment-module-loader", &module_info_evalSmodule, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"closure-creation-free", &module_info_evalSast_linearize, NULL},
  {"binding-type", &module_info_evalSmodule, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"function-specs", &module_info_evalSast, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"g2c-def-app", CVAR, &YevalSg2cYg2c_def_app},
  {"reference->c", CVAR, &YevalSg2cYreference_Gc},
  {"between-parentheses-comma-separated", PVAR, NULL},
  {"with-statement", PVAR, NULL},
  {"mangle-integer", CVAR, &YevalSg2cYmangle_integer},
  {"mangle-local-marked-name", CVAR, &YevalSg2cYmangle_local_marked_name},
  {"mangler-reset", CVAR, &YevalSg2cYmangler_reset},
  {"*mangle-buffer*", CVAR, &YevalSg2cYTmangle_bufferT},
  {"mangle-module-into", CVAR, &YevalSg2cYmangle_module_into},
  {"generate-closure-structure", CVAR, &YevalSg2cYgenerate_closure_structure},
  {"mangle-boot-name", CVAR, &YevalSg2cYmangle_boot_name},
  {"generate-module-info", CVAR, &YevalSg2cYgenerate_module_info},
  {"pp", CVAR, &YevalSg2cYpp},
  {"$mangles-data", CVAR, &YevalSg2cYDmangles_data},
  {"$hygiene-marker", CVAR, &YevalSg2cYDhygiene_marker},
  {"ref-lit", CVAR, &YevalSg2cYref_lit},
  {"g2c-ast", CVAR, &YevalSg2cYg2c_ast},
  {"generate-main", CVAR, &YevalSg2cYgenerate_main},
  {"module-mtime", CVAR, &YevalSg2cYmodule_mtime},
  {"g2c-top", CVAR, &YevalSg2cYg2c_top},
  {"module-src-file-setter", CVAR, &YevalSg2cYmodule_src_file_setter},
  {"mangle-string-literal", CVAR, &YevalSg2cYmangle_string_literal},
  {"module-up-to-date?", CVAR, &YevalSg2cYmodule_up_to_dateQ},
  {"for-commas", PVAR, NULL},
  {"$name-mangler-table", CVAR, &YevalSg2cYDname_mangler_table},
  {"$local-marker", CVAR, &YevalSg2cYDlocal_marker},
  {"$max-character-code", CVAR, &YevalSg2cYDmax_character_code},
  {"---main-0---", PVAR, NULL},
  {"gen-fab-list", CVAR, &YevalSg2cYgen_fab_list},
  {"buf-cat2!", CVAR, &YevalSg2cYbuf_cat2X},
  {"*trace-registers?*", CVAR, &YevalSg2cYTtrace_registersQT},
  {"*g2c-app*", CVAR, &YevalSg2cYTg2c_appT},
  {"dispatcher?", CVAR, &YevalSg2cYdispatcherQ},
  {"$local-suffix", CVAR, &YevalSg2cYDlocal_suffix},
  {"generate-function-binding", CVAR, &YevalSg2cYgenerate_function_binding},
  {"gen-depth", CVAR, &YevalSg2cYgen_depth},
  {"*lits*", CVAR, &YevalSg2cYTlitsT},
  {"generate-return", CVAR, &YevalSg2cYgenerate_return},
  {"g2c-goo", CVAR, &YevalSg2cYg2c_goo},
  {"for-mods", PVAR, NULL},
  {"generate-makefile", CVAR, &YevalSg2cYgenerate_makefile},
  {"generate-header", CVAR, &YevalSg2cYgenerate_header},
  {"$module-separator", CVAR, &YevalSg2cYDmodule_separator},
  {"$number-characters", CVAR, &YevalSg2cYDnumber_characters},
  {"g2c-build-app", CVAR, &YevalSg2cYg2c_build_app},
  {"$method-mangled-marker-string", CVAR, &YevalSg2cYDmethod_mangled_marker_string},
  {"generate-c-module", CVAR, &YevalSg2cYgenerate_c_module},
  {"%print-cpu-usage", PVAR, NULL},
  {"generate-function-forwards", CVAR, &YevalSg2cYgenerate_function_forwards},
  {"generate-quotation-forwards", CVAR, &YevalSg2cYgenerate_quotation_forwards},
  {"purge-outdated-modules", CVAR, &YevalSg2cYpurge_outdated_modules},
  {"module-mtime-setter", CVAR, &YevalSg2cYmodule_mtime_setter},
  {"---main-3---", PVAR, NULL},
  {"gen-ref", CVAR, &YevalSg2cYgen_ref},
  {"to-c", CVAR, &YevalSg2cYto_c},
  {"<g2c-module-loader>", CVAR, &YevalSg2cYLg2c_module_loaderG},
  {"module-loader-app-modname", CVAR, &YevalSg2cYmodule_loader_app_modname},
  {"$number-call-templates", CVAR, &YevalSg2cYDnumber_call_templates},
  {"$method-mangled-marker", CVAR, &YevalSg2cYDmethod_mangled_marker},
  {"generate-trailer", CVAR, &YevalSg2cYgenerate_trailer},
  {"float-to-c-string", CVAR, &YevalSg2cYfloat_to_c_string},
  {"with-used-expression", PVAR, NULL},
  {"$c-escapes", CVAR, &YevalSg2cYDc_escapes},
  {"generate-function-body-reference", CVAR, &YevalSg2cYgenerate_function_body_reference},
  {"mangle-raw-name", CVAR, &YevalSg2cYmangle_raw_name},
  {"out-list-builder", CVAR, &YevalSg2cYout_list_builder},
  {"module-loader-appname", CVAR, &YevalSg2cYmodule_loader_appname},
  {"*tmp-file-counter*", DVAR, &YevalSg2cYTtmp_file_counterT},
  {"funshell-to-c", CVAR, &YevalSg2cYfunshell_to_c},
  {"generate-module-init", CVAR, &YevalSg2cYgenerate_module_init},
  {"false-name", CVAR, &YevalSg2cYfalse_name},
  {"*loop-arg-counter*", DVAR, &YevalSg2cYTloop_arg_counterT},
  {"binding->c", CVAR, &YevalSg2cYbinding_Gc},
  {"generate-global-binding", CVAR, &YevalSg2cYgenerate_global_binding},
  {"$min-character-code", CVAR, &YevalSg2cYDmin_character_code},
  {"generate-registers", CVAR, &YevalSg2cYgenerate_registers},
  {"generate-functions", CVAR, &YevalSg2cYgenerate_functions},
  {"<g2c-module>", CVAR, &YevalSg2cYLg2c_moduleG},
  {"module-src-file", CVAR, &YevalSg2cYmodule_src_file},
  {"$escape-marker", CVAR, &YevalSg2cYDescape_marker},
  {"---main-2---", PVAR, NULL},
  {"with-expression", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"generate-function-specs", CVAR, &YevalSg2cYgenerate_function_specs},
  {"compute-program", CVAR, &YevalSg2cYcompute_program},
  {"between-parentheses", PVAR, NULL},
  {"gen-result", CVAR, &YevalSg2cYgen_result},
  {"compile-load", CVAR, &YevalSg2cYcompile_load},
  {"mangle-binding", CVAR, &YevalSg2cYmangle_binding},
  {"mangle-quotation-name", CVAR, &YevalSg2cYmangle_quotation_name},
  {"declare-imported-module-infos", CVAR, &YevalSg2cYdeclare_imported_module_infos},
  {"$iep-suffix", CVAR, &YevalSg2cYDiep_suffix},
  {"$hygiene-char", CVAR, &YevalSg2cYDhygiene_char},
  {"funinit-to-c", CVAR, &YevalSg2cYfuninit_to_c},
  {"module-init-decl", CVAR, &YevalSg2cYmodule_init_decl},
  {"g2c-clean", CVAR, &YevalSg2cYg2c_clean},
  {"mangle-global-name", CVAR, &YevalSg2cYmangle_global_name},
  {"generate-quotation", CVAR, &YevalSg2cYgenerate_quotation},
  {"generate-function-code", CVAR, &YevalSg2cYgenerate_function_code},
  {"generate-function-forward", CVAR, &YevalSg2cYgenerate_function_forward},
  {"module-info-name", CVAR, &YevalSg2cYmodule_info_name},
  {"g2c-exp", CVAR, &YevalSg2cYg2c_exp},
  {"bb?", CVAR, &YevalSg2cYbbQ},
  {"generate-quotations", CVAR, &YevalSg2cYgenerate_quotations},
  {"*registers-per-line*", CVAR, &YevalSg2cYTregisters_per_lineT},
  {"$iep-marker", CVAR, &YevalSg2cYDiep_marker},
  {"g2c-test", CVAR, &YevalSg2cYg2c_test},
  {"*definitions*", DVAR, &YevalSg2cYTdefinitionsT},
  {"generate-function-bodies", CVAR, &YevalSg2cYgenerate_function_bodies},
  {"compute-ast", CVAR, &YevalSg2cYcompute_ast},
  {"$escape-separator", CVAR, &YevalSg2cYDescape_separator},
  {"generate-local-temporaries", CVAR, &YevalSg2cYgenerate_local_temporaries},
  {"mangle-name-into", CVAR, &YevalSg2cYmangle_name_into},
  {"generate-c-application", CVAR, &YevalSg2cYgenerate_c_application},
  {"$now-mod-var-name", CVAR, &YevalSg2cYDnow_mod_var_name},
  {"$module-marker", CVAR, &YevalSg2cYDmodule_marker},
  {"*lits-at*", CVAR, &YevalSg2cYTlits_atT},
  {"module-init-name", CVAR, &YevalSg2cYmodule_init_name},
  {"char-buffer-as-string", CVAR, &YevalSg2cYchar_buffer_as_string},
  {"mangle-local-name", CVAR, &YevalSg2cYmangle_local_name},
  {"generate-global-environment", CVAR, &YevalSg2cYgenerate_global_environment},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-clean", NULL},
  {"g2c-eval", NULL},
  {"g2c-top", NULL},
  {"g2c-build-app", NULL},
  {"g2c-ast", NULL},
  {"g2c-goo", NULL},
  {"g2c-def-app", NULL},
  {"g2c-test", NULL},
  {"g2c-exp", NULL},
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
