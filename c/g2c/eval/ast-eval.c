/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/ast-eval */

DEF(YevalSast_evalYenv_function,"eval/ast-eval","env-function");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
DEF(YevalSast_evalYenv_parent,"eval/ast-eval","env-parent");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Yerror,"goo/boot","error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(Ytup,"goo/boot","tup");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
DEF(YevalSast_evalYenv_dynamic_value_setter,"eval/ast-eval","env-dynamic-value-setter");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
DEF(YevalSast_evalYenv_local_reference_value,"eval/ast-eval","env-local-reference-value");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
DEF(YevalSast_evalYenv_binding_value,"eval/ast-eval","env-binding-value");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
DEF(YevalSast_evalYenv_global_binding_value,"eval/ast-eval","env-global-binding-value");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DEF(YevalSast_evalYast_eval,"eval/ast-eval","ast-eval");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YevalSast_evalYenv_frameX,"eval/ast-eval","env-frame!");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
DEF(YevalSast_evalYenv_define_bindingX,"eval/ast-eval","env-define-binding!");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YevalSast_evalYenv_runtime_value,"eval/ast-eval","env-runtime-value");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
DEF(YevalSast_evalYenv_global_binding_value_setter,"eval/ast-eval","env-global-binding-value-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(YevalSast_evalYenv_values_setter,"eval/ast-eval","env-values-setter");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
DEF(YevalSast_evalYexport_goo_method,"eval/ast-eval","export-goo-method");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
DEF(YevalSast_evalYenv_dynamic_value,"eval/ast-eval","env-dynamic-value");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(Yhead,"goo/boot","head");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYA,"goo/math","+");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalSast_evalYenv_names_setter,"eval/ast-eval","env-names-setter");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSast_evalYenv_local_value,"eval/ast-eval","env-local-value");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
DEF(YevalSast_evalYenv_parent_setter,"eval/ast-eval","env-parent-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
DEF(YevalSast_evalYenv_values,"eval/ast-eval","env-values");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSportYgets,"goo/io/port","gets");
DEF(YevalSast_evalYenv_function_setter,"eval/ast-eval","env-function-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
DEF(YevalSast_evalYLloc_envG,"eval/ast-eval","<loc-env>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YevalSast_evalYast_eval_specs,"eval/ast-eval","ast-eval-specs");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
DEF(YevalSast_evalYenv_local_reference_value_setter,"eval/ast-eval","env-local-reference-value-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
DEF(YevalSast_evalYast_eval_boundQ,"eval/ast-eval","ast-eval-bound?");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(Ynot,"goo/boot","not");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YevalSast_evalYenv_global_binding_boundQ,"eval/ast-eval","env-global-binding-bound?");
DEF(YevalSast_evalYas_fun_name,"eval/ast-eval","as-fun-name");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
DEF(YevalSast_evalYenv_runtime_value_setter,"eval/ast-eval","env-runtime-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YevalSast_evalYarrange_arguments,"eval/ast-eval","arrange-arguments");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YevalSast_evalYenv_names,"eval/ast-eval","env-names");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
DEF(YevalSast_evalYDnul_loc_env,"eval/ast-eval","$nul-loc-env");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
DEF(YevalSast_evalYenv_binding_value_setter,"eval/ast-eval","env-binding-value-setter");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
DEF(YevalSast_evalYenv_local_value_setter,"eval/ast-eval","env-local-value-setter");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ynew,"goo/boot","new");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_39);
DEFLIT(lit_77);
DEFLIT(lit_26);
DEFLIT(lit_32);
DEFLIT(lit_33);
DEFLIT(lit_55);
DEFLIT(lit_30);
DEFLIT(lit_3);
DEFLIT(lit_0);
DEFLIT(lit_24);
DEFLIT(lit_49);
DEFLIT(lit_61);
DEFLIT(lit_36);
DEFLIT(lit_28);
DEFLIT(lit_27);
DEFLIT(lit_60);
DEFLIT(lit_25);
DEFLIT(lit_29);
DEFLIT(lit_22);
DEFLIT(lit_2);
DEFLIT(lit_82);
DEFLIT(lit_10);
DEFLIT(lit_69);
DEFLIT(lit_8);
DEFLIT(lit_45);
DEFLIT(lit_50);
DEFLIT(lit_44);
DEFLIT(lit_34);
DEFLIT(lit_46);
DEFLIT(lit_83);
DEFLIT(lit_35);
DEFLIT(lit_75);
DEFLIT(lit_73);
DEFLIT(lit_19);
DEFLIT(lit_63);
DEFLIT(lit_66);
DEFLIT(lit_17);
DEFLIT(lit_15);
DEFLIT(lit_40);
DEFLIT(lit_21);
DEFLIT(lit_78);
DEFLIT(lit_53);
DEFLIT(lit_81);
DEFLIT(lit_5);
DEFLIT(lit_70);
DEFLIT(lit_54);
DEFLIT(lit_68);
DEFLIT(lit_6);
DEFLIT(lit_48);
DEFLIT(lit_74);
DEFLIT(lit_11);
DEFLIT(lit_57);
DEFLIT(lit_58);
DEFLIT(lit_43);
DEFLIT(lit_62);
DEFLIT(lit_56);
DEFLIT(lit_14);
DEFLIT(lit_52);
DEFLIT(lit_51);
DEFLIT(lit_47);
DEFLIT(lit_79);
DEFLIT(lit_4);
DEFLIT(lit_71);
DEFLIT(lit_16);
DEFLIT(lit_23);
DEFLIT(lit_59);
DEFLIT(lit_76);
DEFLIT(lit_64);
DEFLIT(lit_1);
DEFLIT(lit_31);
DEFLIT(lit_67);
DEFLIT(lit_42);
DEFLIT(lit_20);
DEFLIT(lit_18);
DEFLIT(lit_41);
DEFLIT(lit_72);
DEFLIT(lit_65);
DEFLIT(lit_80);
DEFLIT(lit_13);
DEFLIT(lit_12);
DEFLIT(lit_37);
DEFLIT(lit_9);
DEFLIT(lit_84);
DEFLIT(lit_38);
DEFLIT(lit_7);

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
LOCFOR(fun_x_1459_32);
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
  P boxF1986;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF1986 = T1;
  if (boxF1986 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYglobal_box_value),boxF1986);
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
  P boxF1987;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF1987 = T1;
  boxF1987 = BOXFAB(boxF1987);
  T4 = BOXVAL(boxF1987);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLglobal_boxG));
    T6 = CALL2(1,VARREF(YevalSastYbinding_global_box_setter),T7,b_);
    T5 = BOXVAL(boxF1987) = T6;
  } else {
  }
  T9 = BOXVAL(boxF1987);
  T8 = CALL2(1,VARREF(YevalSastYglobal_box_value_setter),value_,T9);
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF1988;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF1988 = T1;
  if (boxF1988 != YPfalse) {
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
  P valuesF1989;
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
  valuesF1989 = T1;
  T4 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),env_,VARREF(YevalSast_evalYenv_function),function_,VARREF(YevalSast_evalYenv_values),valuesF1989,VARREF(YevalSast_evalYenv_names),names_);
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
  P loopF1990;
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
    loopF1990 = T3;
    FUNINIT(loopF1990, 3,env_,name_,loopF1990);
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
    T4 = CALL2(0,loopF1990,T5,YPint((P)0));
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
  P loopF1991;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_23,4);
  loopF1991 = T1;
  FUNINIT(loopF1991, 4,v_,env_,name_,loopF1991);
  T3 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
  T2 = CALL2(0,loopF1991,T3,YPint((P)0));
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
  P typeF1993;
  P specF1992;
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
    specF1992 = T4;
    if (specF1992 != YPfalse) {
      T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),specF1992,FREEREF(1));
      T6 = T7;
    } else {
      T6 = VARREF(YLanyG);
    }
    typeF1993 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYpair),typeF1993,res_);
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
  P loopF1995;
  P nreqF1994;
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
  nreqF1994 = T1;
  T6 = FUNSHELL(1,fun_loop_29,3);
  loopF1995 = T6;
  FUNINIT(loopF1995, 3,nreqF1994,env_,loopF1995);
  T7 = CALL3(0,loopF1995,Ynil,specs_,YPint((P)0));
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF1996;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  countF1996 = T1;
  if (naryQ_ != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagYL),countF1996,arity_);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
      T5 = CALL4(1,VARREF(Yerror),LITREF(lit_47),T6,args_,arity_);
      T3 = T5;
    } else {
      T8 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,YPint((P)0),arity_);
      T10 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,arity_,countF1996);
      T9 = CALL1(1,VARREF(Ylst),T10);
      T7 = CALL2(1,VARREF(YgooScolsSseqYcat2),T8,T9);
      T3 = T7;
    }
    T2 = T3;
  } else {
    T12 = CALL2(1,VARREF(YgooSmathYNEE),countF1996,arity_);
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

FUNCODEDEF(fun_x_1459_32) {
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

FUNCODEDEF(fun_33) {
  P return_;
  P x_1458F2011;
  P x_1458F2010;
  P x_1458F2009;
  P x_1458F2008;
  P x_1458F2007;
  P x_1458F2006;
  P x_1458F2005;
  P bodyF2004;
  P namesF2003;
  P arityF2002;
  P naryQF2001;
  P fF2000;
  P envF1999;
  P x_1458F1998;
  P x_1459F1997;
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
  T1 = FUNSHELL(0,fun_x_1459_32,1);
  x_1459F1997 = T1;
  FUNINIT(x_1459F1997, 1,return_);
  x_1458F1998 = FREEREF(0);
  envF1999 = YPfalse;
  envF1999 = BOXFAB(envF1999);
  fF2000 = YPfalse;
  fF2000 = BOXFAB(fF2000);
  naryQF2001 = YPfalse;
  naryQF2001 = BOXFAB(naryQF2001);
  arityF2002 = YPfalse;
  arityF2002 = BOXFAB(arityF2002);
  namesF2003 = YPfalse;
  namesF2003 = BOXFAB(namesF2003);
  bodyF2004 = YPfalse;
  bodyF2004 = BOXFAB(bodyF2004);
  T15 = CALL2(1,VARREF(YisaQ),x_1458F1998,VARREF(YLlstG));
  if (T15 != YPfalse) {
    T17 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1458F1998,LITREF(lit_53),x_1459F1997);
    x_1458F2005 = T17;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1458F2005,x_1459F1997);
    BOXVAL(envF1999) = T19;
    T20 = CALL1(1,VARREF(Ytail),x_1458F2005);
    x_1458F2006 = T20;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1458F2006,x_1459F1997);
    BOXVAL(fF2000) = T22;
    T23 = CALL1(1,VARREF(Ytail),x_1458F2006);
    x_1458F2007 = T23;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1458F2007,x_1459F1997);
    BOXVAL(naryQF2001) = T25;
    T26 = CALL1(1,VARREF(Ytail),x_1458F2007);
    x_1458F2008 = T26;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1458F2008,x_1459F1997);
    BOXVAL(arityF2002) = T28;
    T29 = CALL1(1,VARREF(Ytail),x_1458F2008);
    x_1458F2009 = T29;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1458F2009,x_1459F1997);
    BOXVAL(namesF2003) = T31;
    T32 = CALL1(1,VARREF(Ytail),x_1458F2009);
    x_1458F2010 = T32;
    T34 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1458F2010,x_1459F1997);
    BOXVAL(bodyF2004) = T34;
    T35 = CALL1(1,VARREF(Ytail),x_1458F2010);
    x_1458F2011 = T35;
    T36 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1458F2011,x_1459F1997);
    T33 = T36;
    T30 = T33;
    T27 = T30;
    T24 = T27;
    T21 = T24;
    T18 = T21;
    T16 = T18;
  } else {
    T37 = CALL2(1,x_1459F1997,LITREF(lit_54),x_1458F1998);
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
  T76 = BOXVAL(envF1999);
  T75 = CALL1(1,VARREF(Ylst),T76);
  T78 = BOXVAL(fF2000);
  T77 = CALL1(1,VARREF(Ylst),T78);
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T83 = BOXVAL(namesF2003);
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
  T102 = BOXVAL(bodyF2004);
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
  P frameF2014;
  P nmsF2013;
  P argsF2012;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  NARGS(arg_vector_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),arg_vector_);
  T1 = CALL4(1,VARREF(YevalSast_evalYarrange_arguments),FREEREF(0),FREEREF(1),FREEREF(2),T2);
  argsF2012 = T1;
  T4 = (P)YPnext_methods();
  nmsF2013 = T4;
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T7 = CALL2(1,VARREF(YgooScolsSseqYcat2),FREEREF(4),T8);
  T10 = CALL1(1,VARREF(Ylst),nmsF2013);
  T9 = CALL2(1,VARREF(YgooScolsSseqYcat2),argsF2012,T10);
  T6 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),FREEREF(3),FREEREF(0),T7,T9);
  frameF2014 = T6;
  T11 = CALL1(1,FREEREF(5),frameF2014);
  T5 = T11;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_export_goo_method_42) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF2016;
  P arityF2015;
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
  arityF2015 = T1;
  T6 = FUNFAB(fun_41,6,f_,naryQ_,arityF2015,env_,names_,body_);
  efunF2016 = T6;
  T7 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
  CALL2(1,VARREF(Yfun_name_setter),T7,efunF2016);
  T9 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (value_ != YPfalse) {
    T11 = CALL2(1,VARREF(YevalSast_evalYast_eval),value_,env_);
    T10 = T11;
  } else {
    T10 = VARREF(YLanyG);
  }
  T8 = CALLN(1,VARREF(Ynew),13,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),T9,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),arityF2015,VARREF(Ysig_val),T10,VARREF(Ysig_unification_vars),Ynil);
  CALL2(1,VARREF(Yfun_sig_setter),T8,efunF2016);
  T5 = efunF2016;
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
  P evalF2018;
  P paramsF2017;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF2017 = T1;
  T3 = FUNFAB(fun_43,1,e_);
  evalF2018 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF2017);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF2017);
  T7 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  T8 = CALL1(1,VARREF(YevalSastYfunction_value),e_);
  T4 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,e_,T5,T6,T7,T8,evalF2018,env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_45) {
  P e_,env_;
  P specsF2022;
  P namesF2021;
  P naryQF2020;
  P paramsF2019;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF2019 = T1;
  T3 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  naryQF2020 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF2019);
  namesF2021 = T5;
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF2019);
  T7 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),T8,naryQF2020,env_);
  specsF2022 = T7;
  T10 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),e_);
  T9 = CALLN(1,VARREF(Yfab_gen),6,T10,namesF2021,specsF2022,naryQF2020,VARREF(YLanyG),Ynil);
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
  P x_1461F2024;
  P x_1460F2023;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_1460F2023 = T1;
  x_1461F2024 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1461F2024,x_1460F2023,LITREF(lit_76));
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
  P valueF2025;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2025 = T1;
  T4 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),valueF2025,T4);
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
  P valueF2026;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2026 = T1;
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),valueF2026,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_59) {
  P e_,env_;
  P valueF2027;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2027 = T1;
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_locative),T5);
  T3 = CALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),valueF2027,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_60) {
  P e_,env_;
  P valueF2028;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2028 = T1;
  T4 = CALL1(1,VARREF(YevalSastYassignment_reference),e_);
  T3 = CALL3(1,VARREF(YevalSast_evalYenv_local_reference_value_setter),valueF2028,env_,T4);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_61) {
  P b_,v_;
  P x_1463F2030;
  P x_1462F2029;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_1462F2029 = T1;
  x_1463F2030 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1463F2030,x_1462F2029,LITREF(lit_78));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYbinding_locative),b_);
    T5 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),v_,T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,x_1463F2030,x_1462F2029,LITREF(lit_76));
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),v_,b_);
      T7 = T9;
    } else {
      T11 = CALL2(1,x_1463F2030,x_1462F2029,LITREF(lit_79));
      if (T11 != YPfalse) {
        T13 = (P)YPfab_dyn_var();
        T12 = (P)YPlb(T13);
        CALL2(1,VARREF(YevalSastYbinding_locative_setter),T12,b_);
        T15 = CALL1(1,VARREF(YevalSastYbinding_locative),b_);
        T14 = CALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),v_,T15);
        T10 = T14;
      } else {
        T17 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
        T16 = CALL2(1,VARREF(Yerror),LITREF(lit_80),T17);
        T10 = T16;
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
  P valueF2031;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF2031 = T1;
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSast_evalYenv_define_bindingX),T3,valueF2031);
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
  P valF2033;
  P nxtF2032;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),e_);
  nxtF2032 = T1;
  T4 = CALL1(1,VARREF(Yhead),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,FREEREF(0));
  valF2033 = T3;
  T6 = CALL1(1,VARREF(YgooSmacrosYemptyQ),nxtF2032);
  if (T6 != YPfalse) {
    T5 = valF2033;
  } else {
    a1 = nxtF2032;
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
  P evalF2034;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_64,2);
  evalF2034 = T1;
  FUNINIT(evalF2034, 2,env_,evalF2034);
  T2 = CALL1(0,evalF2034,e_);
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
  P evalF2035;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = FUNSHELL(1,fun_eval_66,2);
  evalF2035 = T1;
  FUNINIT(evalF2035, 2,env_,evalF2035);
  T2 = CALL2(0,evalF2035,Ynil,e_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_68) {
  P e_,env_;
  P argsF2037;
  P fF2036;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  fF2036 = T1;
  T5 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T4 = CALL2(1,VARREF(YevalSast_evalYast_eval),T5,env_);
  argsF2037 = T4;
  T6 = CALL3(1,VARREF(YgooSmacrosYnapp),fF2036,YPfalse,argsF2037);
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_69) {
  P e_,env_;
  P argsF2041;
  P fF2040;
  P nmsF2039;
  P bF2038;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bF2038 = T1;
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),bF2038);
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_62));
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_62));
    nmsF2039 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nmsF2039,VARREF(Ynul));
    if (T8 != YPfalse) {
      T7 = YPfalse;
    } else {
      T7 = nmsF2039;
    }
    T5 = T7;
    T2 = T5;
  } else {
    T10 = CALL1(1,VARREF(YevalSastYbinding_info),bF2038);
    fF2040 = T10;
    T13 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T12 = CALL2(1,VARREF(YevalSast_evalYast_eval),T13,env_);
    argsF2041 = T12;
    T14 = CALL3(1,VARREF(YgooSmacrosYnapp),fF2040,YPfalse,argsF2041);
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
  P nenvF2043;
  P argsF2042;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  argsF2042 = T1;
  T6 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),T6);
  T4 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T5,argsF2042);
  nenvF2043 = T4;
  T8 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,nenvF2043);
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
  P new_envF2045;
  P bindingsF2044;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  bindingsF2044 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF2044);
  T6 = CALL1(1,VARREF(YgooSruntimeYalways),VARREF(Ynul));
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,bindingsF2044);
  T3 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T4,T5);
  new_envF2045 = T3;
  T7 = FUNFAB(fun_71,1,new_envF2045);
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF2044);
  T10 = CALL2(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSast_evalYast_eval),new_envF2045);
  T11 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),T10,T11);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T7,T8,T9);
  T13 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T12 = CALL2(1,VARREF(YevalSast_evalYast_eval),T13,new_envF2045);
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
  P exitF2047;
  P rprocF2046;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNFAB(fun_73,1,return_);
  rprocF2046 = T1;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,rprocF2046,T4,T5,YPfalse,YPfalse,rprocF2046,FREEREF(0));
  exitF2047 = T3;
  T8 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),FREEREF(1));
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,FREEREF(0));
  T6 = CALL1(1,T7,exitF2047);
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
  P bF2048;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(env_, 0);
loop:
  CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_62),YPfalse,LITREF(lit_83));
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_84),YPfalse,LITREF(lit_76));
  bF2048 = T1;
  T2 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),VARREF(YgooSmacrosYpair),bF2048);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YevalSast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF2049;
  P T0,T1,T2,T3,T4;
  P a1,a2;
DEFCREGS();
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = XCALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T2);
  eF2049 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = XCALL4(1,VARREF(YevalSastYast_define_binding),eF2049,T4,YPfalse,LITREF(lit_76));
  T0 = T3;
  return T0;
}

P YevalSast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF2050;
  P T0,T1,T2,T3,T4;
  P a1,a2;
DEFCREGS();
loop:
  T2 = (P)YPPsym(raw_mod_);
  T1 = XCALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T2);
  eF2050 = T1;
  T4 = (P)YPPsym(raw_nam_);
  T3 = XCALL2(1,VARREF(YevalSastYfind_binding),T4,eF2050);
  T0 = T3;
  return T0;
}

P YevalSast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF2051;
  P T0,T1,T2,T3;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YevalSast_evalYPlookup_binding(raw_mod_,raw_nam_);
  tmpF2051 = T1;
  if (tmpF2051 != YPfalse) {
    T2 = tmpF2051;
  } else {
    T3 = (P)YevalSast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T2 = T3;
  }
  T0 = T2;
  return T0;
}

P YevalSast_evalYPdlvar_binding(P dlvar_) {
  P bF2052;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YevalSast_evalYPdlvar(dlvar_);
  bF2052 = T1;
  T4 = (P)YPiu(YPint((P)0));
  T3 = (P)YOEE(bF2052,T4);
  if (T3 != YPfalse) {
    T7 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
    T8 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
    T6 = (P)YevalSast_evalYPensure_binding(T7,T8);
    T5 = (P)YevalSast_evalYPdlvar_setter(T6,dlvar_);
    T2 = T5;
  } else {
    T2 = bF2052;
  }
  T0 = T2;
  return T0;
}

P YevalSast_evalYPbinding_boundQ(P dlvar_) {
  P tmpF2054;
  P bF2053;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
DEFCREGS();
loop:
  T2 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
  T3 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
  T1 = (P)YevalSast_evalYPlookup_binding(T2,T3);
  bF2053 = T1;
  tmpF2054 = bF2053;
  if (tmpF2054 != YPfalse) {
    T6 = XCALL1(1,VARREF(YevalSastYbinding_info),bF2053);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  T0 = T4;
  return T0;
}

P YevalSast_evalYPbinding_value(P dlvar_) {
  P x_1465F2057;
  P x_1464F2056;
  P bindingF2055;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  bindingF2055 = T1;
  T3 = XCALL1(1,VARREF(YevalSastYbinding_kind),bindingF2055);
  x_1464F2056 = T3;
  x_1465F2057 = VARREF(YgooSmacrosYEE);
  T6 = XCALL2(1,x_1465F2057,x_1464F2056,LITREF(lit_78));
  if (T6 != YPfalse) {
    T8 = XCALL1(1,VARREF(YevalSastYbinding_locative),bindingF2055);
    T7 = XCALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T8);
    T5 = T7;
  } else {
    T10 = XCALL2(1,x_1465F2057,x_1464F2056,LITREF(lit_79));
    if (T10 != YPfalse) {
      T12 = XCALL1(1,VARREF(YevalSastYbinding_locative),bindingF2055);
      T11 = XCALL1(1,VARREF(YevalSast_evalYenv_dynamic_value),T12);
      T9 = T11;
    } else {
      T13 = XCALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),bindingF2055);
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
  P x_1467F2060;
  P x_1466F2059;
  P bindingF2058;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  bindingF2058 = T1;
  T3 = XCALL1(1,VARREF(YevalSastYbinding_kind),bindingF2058);
  x_1466F2059 = T3;
  x_1467F2060 = VARREF(YgooSmacrosYEE);
  T6 = XCALL2(1,x_1467F2060,x_1466F2059,LITREF(lit_78));
  if (T6 != YPfalse) {
    T8 = XCALL1(1,VARREF(YevalSastYbinding_locative),bindingF2058);
    T7 = XCALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),val_,T8);
    T5 = T7;
  } else {
    T10 = XCALL2(1,x_1467F2060,x_1466F2059,LITREF(lit_79));
    if (T10 != YPfalse) {
      T12 = XCALL1(1,VARREF(YevalSastYbinding_locative),bindingF2058);
      T11 = XCALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),val_,T12);
      T9 = T11;
    } else {
      T13 = XCALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),val_,bindingF2058);
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
  lit_51 = YPPsym((P)"x-1459");
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
  fun_x_1459_32 = YPmet(FUNCODEREF(fun_x_1459_32),LITREF(lit_51),T143,ENVNUL,PNUL,YPfalse);
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
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;

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
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"$e", &module_info_gooSmath, "$e"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"until", &module_info_gooSmacros, "until"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%str", &module_info_gooSboot, "%str"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"close", &module_info_gooSioSport, "close"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"error", &module_info_gooSboot, "error"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"out", &module_info_gooSioSport, "out"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"min", &module_info_gooSmag, "min"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"when", &module_info_gooSmacros, "when"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"dv", &module_info_gooSboot, "dv"},
  {"atan", &module_info_gooSmath, "atan"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"set", &module_info_gooSboot, "set"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"col", &module_info_gooScolsScol, "col"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"1-", &module_info_gooSmath, "1-"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"mif", &module_info_gooSboot, "mif"},
  {"as", &module_info_gooStypes, "as"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {">=", &module_info_gooSmag, ">="},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"def", &module_info_gooSboot, "def"},
  {"len", &module_info_gooStypes, "len"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"if", &module_info_gooSboot, "if"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%su", &module_info_gooSboot, "%su"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"logn", &module_info_gooSmath, "logn"},
  {"always", &module_info_gooSruntime, "always"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"open", &module_info_gooSioSport, "open"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"range", &module_info_gooScolsSrange, "range"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"match", &module_info_gooSmacros, "match"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%im", &module_info_gooSboot, "%im"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"and", &module_info_gooSmacros, "and"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<=", &module_info_gooSmag, "<="},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"op", &module_info_gooSmacros, "op"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"~", &module_info_gooSmath, "~"},
  {"tan", &module_info_gooSmath, "tan"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"let", &module_info_gooSboot, "let"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"add", &module_info_gooScolsScol, "add"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"while", &module_info_gooSmacros, "while"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"|", &module_info_gooSmath, "|"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"seq", &module_info_gooSboot, "seq"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"~=", &module_info_gooSmath, "~="},
  {"find", &module_info_gooScolsScol, "find"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%put", &module_info_gooSboot, "%put"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"into", &module_info_gooScolsScol, "into"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"read", &module_info_gooSruntime, "read"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"acos", &module_info_gooSmath, "acos"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"for", &module_info_gooSmacros, "for"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"-", &module_info_gooSmath, "-"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"or", &module_info_gooSmacros, "or"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"head", &module_info_gooSboot, "head"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"dss", &module_info_gooSboot, "dss"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"+", &module_info_gooSmath, "+"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"export", &module_info_gooSboot, "export"},
  {"map", &module_info_gooSmacros, "map"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"try", &module_info_gooSboot, "try"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"app", &module_info_gooSmacros, "app"},
  {"1+", &module_info_gooSmath, "1+"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"items", &module_info_gooScolsScol, "items"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"sin", &module_info_gooSmath, "sin"},
  {"div", &module_info_gooSmath, "div"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"@<", &module_info_gooSboot, "@<"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"loc", &module_info_gooSboot, "loc"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {">>", &module_info_gooSmath, ">>"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"&", &module_info_gooSmath, "&"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"t?", &module_info_gooStypes, "t?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"in", &module_info_gooSioSport, "in"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"==", &module_info_gooSmacros, "=="},
  {"peek", &module_info_gooSioSport, "peek"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"round", &module_info_gooSmath, "round"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"fin", &module_info_gooSboot, "fin"},
  {"any?", &module_info_gooStypes, "any?"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<", &module_info_gooSmag, "<"},
  {"case", &module_info_gooSmacros, "case"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {">", &module_info_gooSmag, ">"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"t<", &module_info_gooStypes, "t<"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"=", &module_info_gooSmath, "="},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"@len", &module_info_gooSboot, "@len"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@==", &module_info_gooSboot, "@=="},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"/", &module_info_gooSmath, "/"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"asin", &module_info_gooSmath, "asin"},
  {"neg", &module_info_gooSmath, "neg"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"not", &module_info_gooSboot, "not"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"t=", &module_info_gooStypes, "t="},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"%get", &module_info_gooSboot, "%get"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"get", &module_info_gooSioSport, "get"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"log", &module_info_gooSmath, "log"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"rem", &module_info_gooSmath, "rem"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"df", &module_info_gooSboot, "df"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"t+", &module_info_gooStypes, "t+"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%time", &module_info_gooSboot, "%time"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"put", &module_info_gooSioSport, "put"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"dg", &module_info_gooSboot, "dg"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"dc", &module_info_gooSboot, "dc"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"floor", &module_info_gooSmath, "floor"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"new", &module_info_gooSboot, "new"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"@+", &module_info_gooSboot, "@+"},
  {"max", &module_info_gooSmag, "max"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"*", &module_info_gooSmath, "*"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"nul", &module_info_gooSboot, "nul"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"env-function", CVAR, &YevalSast_evalYenv_function},
  {"env-parent", CVAR, &YevalSast_evalYenv_parent},
  {"ifun", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"env-dynamic-value-setter", CVAR, &YevalSast_evalYenv_dynamic_value_setter},
  {"env-local-reference-value", CVAR, &YevalSast_evalYenv_local_reference_value},
  {"%dlvar-mod", PVAR, NULL},
  {"env-binding-value", CVAR, &YevalSast_evalYenv_binding_value},
  {"env-global-binding-value", CVAR, &YevalSast_evalYenv_global_binding_value},
  {"ast-eval", CVAR, &YevalSast_evalYast_eval},
  {"env-frame!", CVAR, &YevalSast_evalYenv_frameX},
  {"%ensure-binding", PVAR, NULL},
  {"env-define-binding!", CVAR, &YevalSast_evalYenv_define_bindingX},
  {"env-runtime-value", CVAR, &YevalSast_evalYenv_runtime_value},
  {"env-global-binding-value-setter", CVAR, &YevalSast_evalYenv_global_binding_value_setter},
  {"%dlvar", PVAR, NULL},
  {"env-values-setter", CVAR, &YevalSast_evalYenv_values_setter},
  {"export-goo-method", CVAR, &YevalSast_evalYexport_goo_method},
  {"env-dynamic-value", CVAR, &YevalSast_evalYenv_dynamic_value},
  {"%dlvar-nam", PVAR, NULL},
  {"%dlvar-binding", PVAR, NULL},
  {"%lookup-binding", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"env-names-setter", CVAR, &YevalSast_evalYenv_names_setter},
  {"env-local-value", CVAR, &YevalSast_evalYenv_local_value},
  {"env-parent-setter", CVAR, &YevalSast_evalYenv_parent_setter},
  {"env-values", CVAR, &YevalSast_evalYenv_values},
  {"env-function-setter", CVAR, &YevalSast_evalYenv_function_setter},
  {"%dlvar-setter", PVAR, NULL},
  {"<loc-env>", CVAR, &YevalSast_evalYLloc_envG},
  {"%define-binding", PVAR, NULL},
  {"%binding-value-setter", PVAR, NULL},
  {"ast-eval-specs", CVAR, &YevalSast_evalYast_eval_specs},
  {"env-local-reference-value-setter", CVAR, &YevalSast_evalYenv_local_reference_value_setter},
  {"ast-eval-bound?", CVAR, &YevalSast_evalYast_eval_boundQ},
  {"env-global-binding-bound?", CVAR, &YevalSast_evalYenv_global_binding_boundQ},
  {"as-fun-name", CVAR, &YevalSast_evalYas_fun_name},
  {"env-runtime-value-setter", CVAR, &YevalSast_evalYenv_runtime_value_setter},
  {"arrange-arguments", CVAR, &YevalSast_evalYarrange_arguments},
  {"env-names", CVAR, &YevalSast_evalYenv_names},
  {"$nul-loc-env", CVAR, &YevalSast_evalYDnul_loc_env},
  {"%binding-bound?", PVAR, NULL},
  {"%binding-value", PVAR, NULL},
  {"env-binding-value-setter", CVAR, &YevalSast_evalYenv_binding_value_setter},
  {"env-local-value-setter", CVAR, &YevalSast_evalYenv_local_value_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"init-environment-for-eval", "init-environment-for-eval"},
  {"%binding-value-setter", "%binding-value-setter"},
  {"ast-evaluate", "ast-evaluate"},
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
