/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/io/write */

EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ynot,"goo/boot","not");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYas,"goo/types","as");
DEF(YgooSioSwriteYwrite_map,"goo/io/write","write-map");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
DEF(YgooSioSwriteYquotationQ,"goo/io/write","quotation?");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YgooSioSwriteYwrite_value_type,"goo/io/write","write-value-type");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
DEF(YgooSioSwriteYpost,"goo/io/write","post");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
DEF(YgooSioSwriteYwrite_string_literal,"goo/io/write","write-string-literal");
DEF(YgooSioSwriteYas_binding_name,"goo/io/write","as-binding-name");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YtT,"goo/boot","t*");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
DEF(YgooSioSwriteYwrite_number,"goo/io/write","write-number");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
DEF(YgooSioSwriteYrecurring_write_type,"goo/io/write","recurring-write-type");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YgooSioSwriteYcharacter_name,"goo/io/write","character-name");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
DYNDEF(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YgooSioSwriteYdo_emit,"goo/io/write","do-emit");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DYNDEF(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YgooSioSwriteYwrite_fun_guts,"goo/io/write","write-fun-guts");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ytail,"goo/boot","tail");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YgooSioSwriteYwrite_list,"goo/io/write","write-list");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YgooSioSwriteYwrite_boolean,"goo/io/write","write-boolean");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSioSportYget,"goo/io/port","get");
DEF(YgooSioSwriteYwrite_params,"goo/io/write","write-params");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YgooSioSwriteYwrite_char_literal,"goo/io/write","write-char-literal");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YgooSioSwriteYwrite_flat,"goo/io/write","write-flat");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
DEF(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYtan,"goo/math","tan");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_165);
DEFLIT(lit_67);
DEFLIT(lit_159);
DEFLIT(lit_64);
DEFLIT(lit_90);
DEFLIT(lit_81);
DEFLIT(lit_18);
DEFLIT(lit_98);
DEFLIT(lit_94);
DEFLIT(lit_63);
DEFLIT(lit_77);
DEFLIT(lit_124);
DEFLIT(lit_144);
DEFLIT(lit_139);
DEFLIT(lit_23);
DEFLIT(lit_34);
DEFLIT(lit_163);
DEFLIT(lit_66);
DEFLIT(lit_153);
DEFLIT(lit_135);
DEFLIT(lit_22);
DEFLIT(lit_128);
DEFLIT(lit_156);
DEFLIT(lit_62);
DEFLIT(lit_5);
DEFLIT(lit_30);
DEFLIT(lit_148);
DEFLIT(lit_55);
DEFLIT(lit_106);
DEFLIT(lit_109);
DEFLIT(lit_33);
DEFLIT(lit_151);
DEFLIT(lit_40);
DEFLIT(lit_162);
DEFLIT(lit_27);
DEFLIT(lit_160);
DEFLIT(lit_60);
DEFLIT(lit_140);
DEFLIT(lit_35);
DEFLIT(lit_0);
DEFLIT(lit_143);
DEFLIT(lit_49);
DEFLIT(lit_53);
DEFLIT(lit_132);
DEFLIT(lit_146);
DEFLIT(lit_47);
DEFLIT(lit_141);
DEFLIT(lit_28);
DEFLIT(lit_4);
DEFLIT(lit_83);
DEFLIT(lit_29);
DEFLIT(lit_103);
DEFLIT(lit_113);
DEFLIT(lit_138);
DEFLIT(lit_96);
DEFLIT(lit_14);
DEFLIT(lit_123);
DEFLIT(lit_172);
DEFLIT(lit_100);
DEFLIT(lit_136);
DEFLIT(lit_121);
DEFLIT(lit_127);
DEFLIT(lit_10);
DEFLIT(lit_93);
DEFLIT(lit_157);
DEFLIT(lit_130);
DEFLIT(lit_68);
DEFLIT(lit_150);
DEFLIT(lit_154);
DEFLIT(lit_9);
DEFLIT(lit_164);
DEFLIT(lit_155);
DEFLIT(lit_20);
DEFLIT(lit_8);
DEFLIT(lit_79);
DEFLIT(lit_85);
DEFLIT(lit_107);
DEFLIT(lit_147);
DEFLIT(lit_174);
DEFLIT(lit_2);
DEFLIT(lit_122);
DEFLIT(lit_69);
DEFLIT(lit_108);
DEFLIT(lit_32);
DEFLIT(lit_26);
DEFLIT(lit_84);
DEFLIT(lit_44);
DEFLIT(lit_41);
DEFLIT(lit_48);
DEFLIT(lit_13);
DEFLIT(lit_105);
DEFLIT(lit_173);
DEFLIT(lit_101);
DEFLIT(lit_95);
DEFLIT(lit_75);
DEFLIT(lit_88);
DEFLIT(lit_61);
DEFLIT(lit_158);
DEFLIT(lit_50);
DEFLIT(lit_80);
DEFLIT(lit_175);
DEFLIT(lit_45);
DEFLIT(lit_117);
DEFLIT(lit_168);
DEFLIT(lit_134);
DEFLIT(lit_176);
DEFLIT(lit_142);
DEFLIT(lit_110);
DEFLIT(lit_161);
DEFLIT(lit_133);
DEFLIT(lit_171);
DEFLIT(lit_74);
DEFLIT(lit_43);
DEFLIT(lit_38);
DEFLIT(lit_57);
DEFLIT(lit_7);
DEFLIT(lit_54);
DEFLIT(lit_116);
DEFLIT(lit_15);
DEFLIT(lit_39);
DEFLIT(lit_51);
DEFLIT(lit_1);
DEFLIT(lit_21);
DEFLIT(lit_114);
DEFLIT(lit_145);
DEFLIT(lit_120);
DEFLIT(lit_119);
DEFLIT(lit_87);
DEFLIT(lit_36);
DEFLIT(lit_42);
DEFLIT(lit_78);
DEFLIT(lit_46);
DEFLIT(lit_17);
DEFLIT(lit_86);
DEFLIT(lit_129);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_37);
DEFLIT(lit_169);
DEFLIT(lit_91);
DEFLIT(lit_82);
DEFLIT(lit_118);
DEFLIT(lit_115);
DEFLIT(lit_166);
DEFLIT(lit_149);
DEFLIT(lit_99);
DEFLIT(lit_6);
DEFLIT(lit_25);
DEFLIT(lit_76);
DEFLIT(lit_59);
DEFLIT(lit_137);
DEFLIT(lit_125);
DEFLIT(lit_152);
DEFLIT(lit_126);
DEFLIT(lit_3);
DEFLIT(lit_58);
DEFLIT(lit_56);
DEFLIT(lit_102);
DEFLIT(lit_65);
DEFLIT(lit_24);
DEFLIT(lit_92);
DEFLIT(lit_19);
DEFLIT(lit_89);
DEFLIT(lit_112);
DEFLIT(lit_73);
DEFLIT(lit_97);
DEFLIT(lit_131);
DEFLIT(lit_111);
DEFLIT(lit_31);
DEFLIT(lit_104);
DEFLIT(lit_170);
DEFLIT(lit_167);
DEFLIT(lit_70);
DEFLIT(lit_52);
DEFLIT(lit_16);
DEFLIT(lit_72);
DEFLIT(lit_71);

/* FUNCTIONS: */

LOCFOR(fun_as_binding_name_0);
LOCFOR(fun_do_emit_1);
LOCFOR(fun_do_emit_2);
LOCFOR(fun_do_emit_3);
LOCFOR(fun_recur_4);
LOCFOR(fun_emit_5);
LOCFOR(fun_6);
LOCFOR(fun_7);
LOCFOR(fun_write_to_string_8);
LOCFOR(fun_recur_9);
LOCFOR(fun_write_10);
LOCFOR(fun_writeln_11);
LOCFOR(fun_recurring_write_12);
LOCFOR(fun_recurring_write_13);
LOCFOR(fun_recurring_write_14);
LOCFOR(fun_recurring_write_15);
LOCFOR(fun_recurring_write_16);
LOCFOR(fun_recurring_write_17);
LOCFOR(fun_recurring_write_18);
LOCFOR(fun_recurring_write_19);
LOCFOR(fun_recurring_write_20);
LOCFOR(fun_recurring_write_21);
LOCFOR(fun_recurring_write_22);
LOCFOR(fun_write_boolean_23);
LOCFOR(fun_write_number_24);
LOCFOR(fun_write_char_literal_25);
LOCFOR(fun_character_name_26);
LOCFOR(fun_loop_27);
LOCFOR(fun_write_string_literal_28);
LOCFOR(fun_loop_29);
LOCFOR(fun_write_list_30);
LOCFOR(fun_quotationQ_31);
LOCFOR(fun_loop_32);
LOCFOR(fun_write_flat_33);
LOCFOR(fun_x_1397_34);
LOCFOR(fun_35);
LOCFOR(fun_write_map_36);
LOCFOR(fun_recurring_write_37);
LOCFOR(fun_recurring_write_38);
LOCFOR(fun_x_1401_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_write_params_42);
LOCFOR(fun_write_fun_guts_43);
LOCFOR(fun_recurring_write_44);
LOCFOR(fun_recurring_write_45);
LOCFOR(fun_recurring_write_46);
LOCFOR(fun_recurring_write_47);
LOCFOR(fun_recurring_write_48);
LOCFOR(fun_49);
LOCFOR(fun_recurring_write_50);
LOCFOR(fun_51);
LOCFOR(fun_recurring_write_52);
LOCFOR(fun_53);
LOCFOR(fun_write_value_type_54);
LOCFOR(fun_write_value_type_55);
LOCFOR(fun_recurring_write_type_56);
LOCFOR(fun_recurring_write_type_57);
LOCFOR(fun_recur_58);
LOCFOR(fun_write_type_59);
LOCFOR(fun_recurring_write_60);
LOCFOR(fun_x_1405_61);
LOCFOR(fun_62);
LOCFOR(fun_63);
LOCFOR(fun_64);
LOCFOR(fun_recurring_write_65);
LOCFOR(fun_recurring_write_66);
LOCFOR(fun_recurring_write_67);
LOCFOR(fun_arg_68);
LOCFOR(fun_69);
LOCFOR(fun_msg_70);
LOCFOR(fun_post_71);
LOCFOR(fun_pe_msg_72);
LOCFOR(fun_maybe_pack_chars_73);
LOCFOR(fun_arg_74);
LOCFOR(fun_75);
LOCFOR(fun_pe_msg_76);
LOCFOR(fun_x_1415_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
FUNFOR(YgooSconditionsYmsg_to_str);
LOCFOR(fun_loop_83);
FUNFOR(YgooSioSwriteYsay);
extern P YgooSioSwriteY___main_0___ ();
extern P YgooSioSwriteY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_binding_name_0) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_emit_1) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_emit_2) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYput),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_emit_3) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recur_4) {
  P x_,d_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYGE),d_,DYNREF(YgooSioSwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_10));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    T3 = CALL4(1,VARREF(YgooSioSwriteYdo_emit),FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_emit_5) {
  P port_,x_;
  P recurF2228;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF2228 = T1;
  FUNINIT(recurF2228, 2,port_,recurF2228);
  T2 = CALL2(0,recurF2228,x_,YPint((P)-1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_14));
  BOXVAL(FREEREF(0)) = T0;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSioSwriteYwrite),T2,FREEREF(1));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_7) {
  P tmpF2229;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2229 = T1;
  if (tmpF2229 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_to_string_8) {
  P x_;
  P portF2230;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  portF2230 = YPfalse;
  portF2230 = BOXFAB(portF2230);
  T3 = FUNFAB(fun_6,2,portF2230,x_);
  T4 = FUNFAB(fun_7,1,portF2230);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_recur_9) {
  P x_,d_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYGE),d_,DYNREF(YgooSioSwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_18));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    T3 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write),FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_10) {
  P port_,x_;
  P recurF2231;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_9,2);
  recurF2231 = T1;
  FUNINIT(recurF2231, 2,port_,recurF2231);
  T2 = CALL2(0,recurF2231,x_,YPint((P)-1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_writeln_11) {
  P port_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSwriteYwrite),port_,x_);
  T0 = CALL1(1,VARREF(YgooSioSportYnewline),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_12) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_23));
    T0 = T2;
  } else {
    T3 = CALL4(1,VARREF(YgooSioSwriteYwrite_list),port_,x_,d_,recur_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_13) {
  P port_,x_,d_,recur_;
  P prefixF2232;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T4 = CALL1(1,VARREF(Yobject_class),x_);
  T3 = CALL1(1,VARREF(Yclass_name),T4);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T3);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_25),T2,LITREF(lit_26));
  prefixF2232 = T1;
  T5 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,prefixF2232,x_,LITREF(lit_27),d_,recur_);
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_14) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,LITREF(lit_29),x_,LITREF(lit_30),d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_15) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,LITREF(lit_32),x_,LITREF(lit_33),d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_16) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_map),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_17) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  if (x_ != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSwriteYwrite_boolean),port_,LITREF(lit_36));
    T0 = T1;
  } else {
    T2 = CALL2(1,VARREF(YgooSioSwriteYwrite_boolean),port_,LITREF(lit_37));
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_18) {
  P port_,x_,d_,recur_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),x_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_19) {
  P port_,x_,d_,recur_;
  P tF2236;
  P xF2235;
  P xF2234;
  P xF2233;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_40));
  xF2233 = x_;
  T4 = (P)YPuntag_into(xF2233);
  T3 = T4;
  xF2234 = T3;
  xF2235 = xF2234;
  tF2236 = (P)1;
  T7 = (P)YPiLL(xF2235,(P)2);
  T6 = (P)YPiv(T7,tF2236);
  T5 = T6;
  T2 = T5;
  T1 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),T2,YPint((P)16));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_20) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YLnumG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSioSwriteYas_binding_name),LITREF(lit_42));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,T3);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSioSwriteYwrite_number),port_,x_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_21) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_string_literal),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_22) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_char_literal),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_boolean_23) {
  P port_,mumble_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(mumble_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)35));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,mumble_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_number_24) {
  P port_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_char_literal_25) {
  P port_,x_;
  P probeF2237;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSwriteYcharacter_name),x_);
  probeF2237 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_51));
  if (probeF2237 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,probeF2237);
    T2 = T3;
  } else {
    T4 = CALL2(1,VARREF(YgooSioSportYput),port_,x_);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_character_name_26) {
  P char_;
  P tmpF2239;
  P assocF2238;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooScolsSlstYassqn),char_,VARREF(YgooSioSreadYDchar_long_names),YPint((P)1));
  assocF2238 = T1;
  tmpF2239 = assocF2238;
  if (tmpF2239 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosY1st),assocF2238);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_27) {
  P i_;
  P tmpF2241;
  P cF2240;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)34));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),i_);
    cF2240 = T4;
    T6 = CALL2(1,VARREF(YgooSmathYE),cF2240,YPchr((P)92));
    tmpF2241 = T6;
    if (tmpF2241 != YPfalse) {
      T7 = tmpF2241;
    } else {
      T8 = CALL2(1,VARREF(YgooSmathYE),cF2240,YPchr((P)34));
      T7 = T8;
    }
    T5 = T7;
    if (T5 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)92));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),cF2240);
    T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T11;
    i_ = a1;
    goto loop;
    T3 = T10;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_string_literal_28) {
  P port_,x_;
  P loopF2243;
  P lenF2242;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  lenF2242 = T1;
  T3 = FUNSHELL(1,fun_loop_27,4);
  loopF2243 = T3;
  FUNINIT(loopF2243, 4,lenF2242,port_,x_,loopF2243);
  T4 = CALL1(0,loopF2243,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_29) {
  P l_,n_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagYGE),n_,DYNREF(YgooSioSwriteYTmax_print_lengthT));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_61));
      T3 = T5;
    } else {
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
      T6 = CALL1(1,VARREF(Yhead),l_);
      CALL2(1,FREEREF(2),T6,FREEREF(1));
      T8 = CALL1(1,VARREF(Ytail),l_);
      T9 = CALL2(1,VARREF(YgooSmathYA),n_,YPint((P)1));
      a1 = T8;
      a2 = T9;
      l_ = a1;
      n_ = a2;
      goto loop;
      T3 = T7;
    }
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_list_30) {
  P port_,x_,d_,recur_;
  P loopF2244;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSioSwriteYquotationQ),x_);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)39));
    T4 = CALL1(1,VARREF(Ytail),x_);
    T3 = CALL1(1,VARREF(Yhead),T4);
    T2 = CALL2(1,recur_,T3,d_);
    T0 = T2;
  } else {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
    T5 = CALL1(1,VARREF(Yhead),x_);
    CALL2(1,recur_,T5,d_);
    T6 = FUNSHELL(1,fun_loop_29,4);
    loopF2244 = T6;
    FUNINIT(loopF2244, 4,port_,d_,recur_,loopF2244);
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(0,loopF2244,T8,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_31) {
  P x_;
  P tmpF2247;
  P tmpF2246;
  P tmpF2245;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF2245 = T1;
  if (tmpF2245 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_64));
    tmpF2246 = T4;
    if (tmpF2246 != YPfalse) {
      T9 = CALL1(1,VARREF(Ytail),x_);
      T8 = CALL2(1,VARREF(YisaQ),T9,VARREF(YLlstG));
      tmpF2247 = T8;
      if (tmpF2247 != YPfalse) {
        T13 = CALL1(1,VARREF(Ytail),x_);
        T12 = CALL1(1,VARREF(Ytail),T13);
        T11 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T12);
        T10 = T11;
      } else {
        T10 = YPfalse;
      }
      T7 = T10;
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T3 = T6;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_32) {
  P i_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYGE),i_,DYNREF(YgooSioSwriteYTmax_print_lengthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_68));
    T0 = T2;
  } else {
    T5 = CALL2(1,VARREF(YgooSmagYGE),i_,FREEREF(1));
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
      T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),i_);
      CALL2(1,FREEREF(4),T6,FREEREF(3));
      T8 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T8;
      i_ = a1;
      goto loop;
      T3 = T7;
    } else {
      T3 = YPfalse;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_flat_33) {
  P port_,prefix_,x_,suffix_,d_,recur_;
  P loopF2249;
  P zF2248;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4,a5,a6;
LINK_STACK();
  ARG(port_, 0);
  ARG(prefix_, 1);
  ARG(x_, 2);
  ARG(suffix_, 3);
  ARG(d_, 4);
  ARG(recur_, 5);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,prefix_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  zF2248 = T1;
  T2 = CALL2(1,VARREF(YgooSmagYG),zF2248,YPint((P)0));
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T3,d_);
    T5 = FUNSHELL(1,fun_loop_32,6);
    loopF2249 = T5;
    FUNINIT(loopF2249, 6,port_,zF2248,x_,d_,recur_,loopF2249);
    T6 = CALL1(0,loopF2249,YPint((P)1));
    T4 = T6;
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSioSportYputs),port_,suffix_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1397_34) {
  P x_1396_,x_1395_;
  P valF2254;
  P keyF2253;
  P tup26F2252;
  P iF2251;
  P tmpF2250;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2;
LINK_STACK();
  ARG(x_1396_, 0);
  ARG(x_1395_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1396_);
  tmpF2250 = T3;
  if (tmpF2250 != YPfalse) {
    T4 = tmpF2250;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1395_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1396_);
    iF2251 = T7;
    T10 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1395_);
    T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_1395_);
    T9 = CALL2(1,VARREF(Ytup),T10,T11);
    tup26F2252 = T9;
    T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2252,YPint((P)0));
    keyF2253 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2252,YPint((P)1));
    valF2254 = T15;
    T16 = CALL2(1,VARREF(YgooSmagYGE),iF2251,DYNREF(YgooSioSwriteYTmax_print_lengthT));
    if (T16 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_75));
      T17 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    CALL2(1,FREEREF(3),keyF2253,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_76));
    CALL2(1,FREEREF(3),valF2254,FREEREF(2));
    T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1396_);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1395_);
    a1 = T19;
    a2 = T20;
    x_1396_ = a1;
    x_1395_ = a2;
    goto loop;
    T14 = T18;
    T12 = T14;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  P blow_;
  P x_1397F2255;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_x_1397_34,5);
  x_1397F2255 = T1;
  FUNINIT(x_1397F2255, 5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),x_1397F2255);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(3));
  T2 = CALL2(0,x_1397F2255,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_map_36) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_71));
  T1 = CALL1(1,VARREF(Yobject_class),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_35,4,port_,d_,recur_,x_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)62));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_37) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_78));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_38) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_80));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1401_39) {
  P x_1400_,x_1399_,x_1398_;
  P iF2260;
  P specF2259;
  P firstQF2258;
  P tmpF2257;
  P tmpF2256;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1400_, 0);
  ARG(x_1399_, 1);
  ARG(x_1398_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1400_);
  tmpF2256 = T3;
  if (tmpF2256 != YPfalse) {
    T4 = tmpF2256;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1399_);
    tmpF2257 = T6;
    if (tmpF2257 != YPfalse) {
      T7 = tmpF2257;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1398_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1400_);
    firstQF2258 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1399_);
    specF2259 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1398_);
    iF2260 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF2258);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    } else {
    }
    T17 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(1));
    if (T17 != YPfalse) {
      T18 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF2259);
    } else {
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),iF2260);
      T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T20);
      CALL3(1,VARREF(YgooSconditionsYmsg),FREEREF(0),LITREF(lit_85),T19);
      CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF2259);
      T21 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)41));
    }
    T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1400_);
    T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1399_);
    T25 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1398_);
    a1 = T23;
    a2 = T24;
    a3 = T25;
    x_1400_ = a1;
    x_1399_ = a2;
    x_1398_ = a3;
    goto loop;
    T13 = T22;
    T11 = T13;
    T9 = T11;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_41) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_write_params_42) {
  P port_,x_,recur_;
  P tmpF2265;
  P valueF2264;
  P x_1401F2263;
  P namesF2262;
  P namesF2261;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
loop:
  T1 = CALL1(1,VARREF(Yfun_names),x_);
  namesF2261 = T1;
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
  T3 = CALL1(1,VARREF(Yfun_names),x_);
  namesF2262 = T3;
  T4 = FUNSHELL(1,fun_x_1401_39,3);
  x_1401F2263 = T4;
  FUNINIT(x_1401F2263, 3,port_,namesF2262,x_1401F2263);
  T8 = fun_40;
  T9 = fun_41;
  T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T11 = CALL1(1,VARREF(Yfun_specs),x_);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T5 = CALL3(0,x_1401F2263,T6,T10,T12);
  T15 = CALL1(1,VARREF(Yfun_val),x_);
  valueF2264 = T15;
  T18 = CALL1(1,VARREF(Ynot),valueF2264);
  tmpF2265 = T18;
  if (tmpF2265 != YPfalse) {
    T19 = tmpF2265;
  } else {
    T20 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2264,VARREF(YLanyG));
    T19 = T20;
  }
  T17 = T19;
  T16 = CALL1(1,VARREF(Ynot),T17);
  if (T16 != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_88));
    T21 = CALL2(1,VARREF(YgooSioSwriteYwrite_value_type),port_,valueF2264);
  } else {
  }
  T22 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
  T14 = T22;
  T2 = T14;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_fun_guts_43) {
  P port_,x_,name_,recur_;
  P tmpF2267;
  P nameF2266;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(name_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_91));
  CALL2(1,VARREF(YgooSioSportYputs),port_,name_);
  T1 = CALL1(1,VARREF(Yfun_name),x_);
  nameF2266 = T1;
  tmpF2267 = nameF2266;
  if (tmpF2267 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF2266);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
  CALL3(1,VARREF(YgooSioSwriteYwrite_params),port_,x_,recur_);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_92));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_44) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_94),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_45) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_96),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_46) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_98));
  T1 = CALL1(1,VARREF(Yclass_name),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
  CALL2(1,VARREF(YgooSioSportYputs),port_,T0);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_99));
  T3 = CALL1(1,VARREF(Yclass_parents),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yclass_name),T3);
  CALL2(1,recur_,T2,d_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_100));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_recurring_write_47) {
  P port_,x_,d_,recur_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_102));
  T0 = CALL1(1,VARREF(Ytype_object),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_103));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_recurring_write_48) {
  P port_,x_,d_,recur_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_105));
  T0 = CALL1(1,VARREF(Ytype_class),x_);
  CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_106));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_49) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_50) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_108));
  T0 = FUNFAB(fun_49,1,port_);
  T1 = CALL1(1,VARREF(Yunion_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_110));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_51) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_52) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_112));
  T0 = FUNFAB(fun_51,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_114));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_53) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_value_type_54) {
  P port_,x_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_117));
  T0 = FUNFAB(fun_53,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_119));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_write_value_type_55) {
  P port_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_type_56) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T2 = CALL1(1,VARREF(Yclass_name),x_);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_type_57) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recur_58) {
  P x_,d_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write_type),FREEREF(0),x_,d_,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_type_59) {
  P port_,x_;
  P recurF2268;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_58,2);
  recurF2268 = T1;
  FUNINIT(recurF2268, 2,port_,recurF2268);
  T2 = CALL2(0,recurF2268,x_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_60) {
  P port_,x_,d_,recur_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_128));
  T0 = CALL1(1,VARREF(Yprop_getter),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_129));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_x_1405_61) {
  P x_1404_,x_1403_;
  P getterF2272;
  P propF2271;
  P iF2270;
  P tmpF2269;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(x_1404_, 0);
  ARG(x_1403_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1404_);
  tmpF2269 = T3;
  if (tmpF2269 != YPfalse) {
    T4 = tmpF2269;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1403_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1404_);
    iF2270 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1403_);
    propF2271 = T9;
    T10 = CALL2(1,VARREF(YgooSmagYGE),iF2270,DYNREF(YgooSioSwriteYTmax_print_lengthT));
    if (T10 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_135));
      T11 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    T13 = CALL1(1,VARREF(Yprop_getter),propF2271);
    getterF2272 = T13;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    T14 = CALL1(1,VARREF(Yfun_name),getterF2272);
    CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(0),T14);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_136));
    T15 = CALL1(1,getterF2272,FREEREF(2));
    CALL2(1,FREEREF(4),T15,FREEREF(3));
    T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1404_);
    T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1403_);
    a1 = T17;
    a2 = T18;
    x_1404_ = a1;
    x_1403_ = a2;
    goto loop;
    T12 = T16;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P x_1405F2273;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  VARSET(YTreport_prop_unbound_errorsQT,YPfalse);
  T1 = FUNSHELL(1,fun_x_1405_61,6);
  x_1405F2273 = T1;
  FUNINIT(x_1405F2273, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),x_1405F2273);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T6 = CALL1(1,VARREF(Yobject_props),FREEREF(2));
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),T6);
  T2 = CALL2(0,x_1405F2273,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YTreport_prop_unbound_errorsQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P blow_;
  P x_1402F2274;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  x_1402F2274 = VARREF(YTreport_prop_unbound_errorsQT);
  T2 = FUNFAB(fun_62,5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_63,1,x_1402F2274);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_65) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_131));
  T1 = CALL1(1,VARREF(Yobject_class),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_64,4,port_,x_,d_,recur_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_137));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_66) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_139));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_67) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_141));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_68) {
  P char_,class_;
  P tmpF2277;
  P argumentF2276;
  P current_indexF2275;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
loop:
  T1 = BOXVAL(FREEREF(0));
  current_indexF2275 = T1;
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(0)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF2275,FREEREF(1));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yassert_error),LITREF(lit_146),FREEREF(2),FREEREF(3));
  } else {
  }
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),current_indexF2275);
  argumentF2276 = T8;
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),class_,VARREF(YLanyG));
  tmpF2277 = T11;
  if (tmpF2277 != YPfalse) {
    T12 = tmpF2277;
  } else {
    T13 = CALL2(1,VARREF(YisaQ),argumentF2276,class_);
    T12 = T13;
  }
  T10 = T12;
  T9 = CALL1(1,VARREF(Ynot),T10);
  if (T9 != YPfalse) {
    T14 = CALL4(1,VARREF(Yassert_error),LITREF(lit_147),char_,class_,argumentF2276);
  } else {
  }
  T7 = argumentF2276;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P c_;
  P x_1407F2279;
  P x_1406F2278;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYto_upper),c_);
    x_1406F2278 = T2;
    x_1407F2279 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1407F2279,x_1406F2278,YPchr((P)68));
    if (T5 != YPfalse) {
      T8 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
      T6 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T7);
      T4 = T6;
    } else {
      T10 = CALL2(1,x_1407F2279,x_1406F2278,YPchr((P)66));
      if (T10 != YPfalse) {
        T13 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T12 = CALL2(1,VARREF(YgooSmathYnum_to_str),T13,YPint((P)2));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T12);
        T9 = T11;
      } else {
        T15 = CALL2(1,x_1407F2279,x_1406F2278,YPchr((P)79));
        if (T15 != YPfalse) {
          T18 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T17 = CALL2(1,VARREF(YgooSmathYnum_to_str),T18,YPint((P)8));
          T16 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T17);
          T14 = T16;
        } else {
          T20 = CALL2(1,x_1407F2279,x_1406F2278,YPchr((P)88));
          if (T20 != YPfalse) {
            T23 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T22 = CALL2(1,VARREF(YgooSmathYnum_to_str),T23,YPint((P)16));
            T21 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T22);
            T19 = T21;
          } else {
            T25 = CALL2(1,x_1407F2279,x_1406F2278,YPchr((P)67));
            if (T25 != YPfalse) {
              T27 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T26 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),T27);
              T24 = T26;
            } else {
              T29 = CALL2(1,x_1407F2279,x_1406F2278,YPchr((P)83));
              if (T29 != YPfalse) {
                T31 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T30 = CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T31);
                T28 = T30;
              } else {
                T33 = CALL2(1,x_1407F2279,x_1406F2278,YPchr((P)61));
                if (T33 != YPfalse) {
                  T35 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T34 = CALL2(1,VARREF(YgooSioSwriteYwrite),FREEREF(1),T35);
                  T32 = T34;
                } else {
                  T37 = CALL2(1,x_1407F2279,x_1406F2278,YPchr((P)37));
                  if (T37 != YPfalse) {
                    T38 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)37));
                    T36 = T38;
                  } else {
                    T39 = CALL3(1,VARREF(Yerror),LITREF(lit_149),c_,FREEREF(3));
                    T36 = T39;
                  }
                  T32 = T36;
                }
                T28 = T32;
              }
              T24 = T28;
            }
            T19 = T24;
          }
          T14 = T19;
        }
        T9 = T14;
      }
      T4 = T9;
    }
    T3 = T4;
    T40 = BOXVAL(FREEREF(0)) = YPfalse;
    T0 = T40;
  } else {
    T42 = CALL2(1,VARREF(YgooSmacrosYEE),c_,YPchr((P)37));
    if (T42 != YPfalse) {
      T43 = BOXVAL(FREEREF(0)) = YPtrue;
      T41 = T43;
    } else {
      T44 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),c_);
      T41 = T44;
    }
    T0 = T41;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_msg_70) {
  P port_,message_,arguments_;
  P argF2283;
  P num_argumentsF2282;
  P argument_indexF2281;
  P found_percentQF2280;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
loop:
  found_percentQF2280 = YPfalse;
  found_percentQF2280 = BOXFAB(found_percentQF2280);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF2281 = YPint((P)0);
  argument_indexF2281 = BOXFAB(argument_indexF2281);
  T5 = CALL1(1,VARREF(YgooStypesYlen),arguments_);
  num_argumentsF2282 = T5;
  T6 = FUNSHELL(1,fun_arg_68,4);
  argF2283 = T6;
  FUNINIT(argF2283, 4,argument_indexF2281,num_argumentsF2282,message_,arguments_);
  T8 = FUNFAB(fun_69,4,found_percentQF2280,port_,argF2283,message_);
  T7 = CALL2(1,VARREF(YgooSmacrosYdo),T8,message_);
  T12 = BOXVAL(found_percentQF2280);
  T11 = CALL1(1,VARREF(Ynot),T12);
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T13 = CALL2(1,VARREF(Yassert_error),LITREF(lit_150),message_);
    T9 = T13;
  } else {
    T9 = YPfalse;
  }
  T4 = T9;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_post_71) {
  P message_,arguments_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
loop:
  T0 = CALL5(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg),YPfalse,VARREF(YgooSioSportYout),message_,arguments_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pe_msg_72) {
  P port_expr_,message_,args_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_142));
  T2 = CALL1(1,VARREF(Ylst),port_expr_);
  T3 = CALL1(1,VARREF(Ylst),message_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,args_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_pack_chars_73) {
  P UF2284;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(1));
    UF2284 = T3;
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
    T8 = CALL1(1,VARREF(Ylst),FREEREF(2));
    T10 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),FREEREF(0));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T9,Ynil);
    T5 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2284,T6);
    T4 = BOXVAL(FREEREF(1)) = T5;
    T11 = CALL1(1,VARREF(YgooScolsScolxYzapX),FREEREF(0));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_74) {
  P char_;
  P current_indexF2285;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  CALL0(0,FREEREF(0));
  T1 = BOXVAL(FREEREF(1));
  current_indexF2285 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(1)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF2285,FREEREF(2));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yassert_error),LITREF(lit_159),FREEREF(3),FREEREF(4));
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(4),current_indexF2285);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P c_;
  P UF2294;
  P UF2293;
  P UF2292;
  P UF2291;
  P UF2290;
  P UF2289;
  P UF2288;
  P x_1411F2287;
  P x_1410F2286;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYto_upper),c_);
    x_1410F2286 = T2;
    x_1411F2287 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1411F2287,x_1410F2286,YPchr((P)68));
    if (T5 != YPfalse) {
      T7 = BOXVAL(FREEREF(1));
      UF2288 = T7;
      T11 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
      T12 = CALL1(1,VARREF(Ylst),FREEREF(2));
      T15 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
      T17 = CALL1(1,FREEREF(3),c_);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
      T13 = CALL1(1,VARREF(Ylst),T14);
      T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
      T9 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2288,T10);
      T8 = BOXVAL(FREEREF(1)) = T9;
      T6 = T8;
      T4 = T6;
    } else {
      T19 = CALL2(1,x_1411F2287,x_1410F2286,YPchr((P)66));
      if (T19 != YPfalse) {
        T21 = BOXVAL(FREEREF(1));
        UF2289 = T21;
        T25 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
        T26 = CALL1(1,VARREF(Ylst),FREEREF(2));
        T29 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
        T31 = CALL1(1,FREEREF(3),c_);
        T30 = CALL1(1,VARREF(Ylst),T31);
        T32 = CALL1(1,VARREF(Ylst),YPint((P)2));
        T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,Ynil);
        T27 = CALL1(1,VARREF(Ylst),T28);
        T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,Ynil);
        T23 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2289,T24);
        T22 = BOXVAL(FREEREF(1)) = T23;
        T20 = T22;
        T18 = T20;
      } else {
        T34 = CALL2(1,x_1411F2287,x_1410F2286,YPchr((P)79));
        if (T34 != YPfalse) {
          T36 = BOXVAL(FREEREF(1));
          UF2290 = T36;
          T40 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
          T41 = CALL1(1,VARREF(Ylst),FREEREF(2));
          T44 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
          T46 = CALL1(1,FREEREF(3),c_);
          T45 = CALL1(1,VARREF(Ylst),T46);
          T47 = CALL1(1,VARREF(Ylst),YPint((P)8));
          T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T47,Ynil);
          T42 = CALL1(1,VARREF(Ylst),T43);
          T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,Ynil);
          T38 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2290,T39);
          T37 = BOXVAL(FREEREF(1)) = T38;
          T35 = T37;
          T33 = T35;
        } else {
          T49 = CALL2(1,x_1411F2287,x_1410F2286,YPchr((P)88));
          if (T49 != YPfalse) {
            T51 = BOXVAL(FREEREF(1));
            UF2291 = T51;
            T55 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
            T56 = CALL1(1,VARREF(Ylst),FREEREF(2));
            T59 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
            T61 = CALL1(1,FREEREF(3),c_);
            T60 = CALL1(1,VARREF(Ylst),T61);
            T62 = CALL1(1,VARREF(Ylst),YPint((P)16));
            T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T60,T62,Ynil);
            T57 = CALL1(1,VARREF(Ylst),T58);
            T54 = CALL4(1,VARREF(YgooSmacrosYcat),T55,T56,T57,Ynil);
            T53 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2291,T54);
            T52 = BOXVAL(FREEREF(1)) = T53;
            T50 = T52;
            T48 = T50;
          } else {
            T64 = CALL2(1,x_1411F2287,x_1410F2286,YPchr((P)67));
            if (T64 != YPfalse) {
              T66 = BOXVAL(FREEREF(1));
              UF2292 = T66;
              T70 = CALL1(1,VARREF(Ylst),LITREF(lit_162));
              T71 = CALL1(1,VARREF(Ylst),FREEREF(2));
              T73 = CALL2(1,FREEREF(3),c_,VARREF(YLchrG));
              T72 = CALL1(1,VARREF(Ylst),T73);
              T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T71,T72,Ynil);
              T68 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2292,T69);
              T67 = BOXVAL(FREEREF(1)) = T68;
              T65 = T67;
              T63 = T65;
            } else {
              T75 = CALL2(1,x_1411F2287,x_1410F2286,YPchr((P)83));
              if (T75 != YPfalse) {
                T77 = BOXVAL(FREEREF(1));
                UF2293 = T77;
                T81 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
                T82 = CALL1(1,VARREF(Ylst),FREEREF(2));
                T84 = CALL1(1,FREEREF(3),c_);
                T83 = CALL1(1,VARREF(Ylst),T84);
                T80 = CALL4(1,VARREF(YgooSmacrosYcat),T81,T82,T83,Ynil);
                T79 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2293,T80);
                T78 = BOXVAL(FREEREF(1)) = T79;
                T76 = T78;
                T74 = T76;
              } else {
                T86 = CALL2(1,x_1411F2287,x_1410F2286,YPchr((P)61));
                if (T86 != YPfalse) {
                  T88 = BOXVAL(FREEREF(1));
                  UF2294 = T88;
                  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
                  T93 = CALL1(1,VARREF(Ylst),FREEREF(2));
                  T95 = CALL1(1,FREEREF(3),c_);
                  T94 = CALL1(1,VARREF(Ylst),T95);
                  T91 = CALL4(1,VARREF(YgooSmacrosYcat),T92,T93,T94,Ynil);
                  T90 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2294,T91);
                  T89 = BOXVAL(FREEREF(1)) = T90;
                  T87 = T89;
                  T85 = T87;
                } else {
                  T97 = CALL2(1,x_1411F2287,x_1410F2286,YPchr((P)37));
                  if (T97 != YPfalse) {
                    T98 = CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(4),YPchr((P)37));
                    T96 = T98;
                  } else {
                    T99 = CALL3(1,VARREF(Yerror),LITREF(lit_163),c_,FREEREF(5));
                    T96 = T99;
                  }
                  T85 = T96;
                }
                T74 = T85;
              }
              T63 = T74;
            }
            T48 = T63;
          }
          T33 = T48;
        }
        T18 = T33;
      }
      T4 = T18;
    }
    T3 = T4;
    T100 = BOXVAL(FREEREF(0)) = YPfalse;
    T0 = T100;
  } else {
    T102 = CALL2(1,VARREF(YgooSmacrosYEE),c_,YPchr((P)37));
    if (T102 != YPfalse) {
      T103 = BOXVAL(FREEREF(0)) = YPtrue;
      T101 = T103;
    } else {
      T104 = CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(4),c_);
      T101 = T104;
    }
    T0 = T101;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pe_msg_76) {
  P port_expr_,message_,args_;
  P exprsF2303;
  P argF2302;
  P maybe_pack_charsF2301;
  P packer_F2300;
  P portF2299;
  P charsF2298;
  P num_argsF2297;
  P arg_indexF2296;
  P found_percentQF2295;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
loop:
  found_percentQF2295 = YPfalse;
  found_percentQF2295 = BOXFAB(found_percentQF2295);
  check_type(YPint((P)0),VARREF(YLintG));
  arg_indexF2296 = YPint((P)0);
  arg_indexF2296 = BOXFAB(arg_indexF2296);
  T5 = CALL1(1,VARREF(YgooStypesYlen),args_);
  num_argsF2297 = T5;
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  charsF2298 = T7;
  T9 = CALL0(1,VARREF(YgooSmacrosYgensym));
  portF2299 = T9;
  T12 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F2300 = T12;
  packer_F2300 = BOXFAB(packer_F2300);
  T14 = FUNSHELL(1,fun_maybe_pack_chars_73,3);
  maybe_pack_charsF2301 = T14;
  T15 = FUNSHELL(1,fun_arg_74,5);
  argF2302 = T15;
  FUNINIT(maybe_pack_charsF2301, 3,charsF2298,packer_F2300,portF2299);
  FUNINIT(argF2302, 5,maybe_pack_charsF2301,arg_indexF2296,num_argsF2297,message_,args_);
  T16 = FUNFAB(fun_75,6,found_percentQF2295,packer_F2300,portF2299,argF2302,charsF2298,message_);
  CALL2(1,VARREF(YgooSmacrosYdo),T16,message_);
  T17 = CALL0(0,maybe_pack_charsF2301);
  T19 = BOXVAL(packer_F2300);
  T18 = CALL1(1,VARREF(YgooSpackerYpacker_res),T19);
  T11 = T18;
  exprsF2303 = T11;
  T22 = BOXVAL(found_percentQF2295);
  T21 = CALL1(1,VARREF(Ynot),T22);
  T20 = CALL1(1,VARREF(Ynot),T21);
  if (T20 != YPfalse) {
    T23 = CALL2(1,VARREF(Yassert_error),LITREF(lit_164),message_);
  } else {
  }
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_165));
  T30 = CALL1(1,VARREF(Ylst),portF2299);
  T31 = CALL1(1,VARREF(Ylst),port_expr_);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,exprsF2303,Ynil);
  T10 = T24;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1415_77) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_170),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  P return_;
  P x_1414F2312;
  P x_1414F2311;
  P x_1414F2310;
  P x_1414F2309;
  P argsF2308;
  P messageF2307;
  P portF2306;
  P x_1414F2305;
  P x_1415F2304;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1415_77,2);
  x_1415F2304 = T1;
  FUNINIT(x_1415F2304, 2,FREEREF(0),return_);
  x_1414F2305 = FREEREF(0);
  portF2306 = YPfalse;
  portF2306 = BOXFAB(portF2306);
  messageF2307 = YPfalse;
  messageF2307 = BOXFAB(messageF2307);
  argsF2308 = YPfalse;
  argsF2308 = BOXFAB(argsF2308);
  T9 = CALL2(1,VARREF(YisaQ),x_1414F2305,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1414F2305,LITREF(lit_170),x_1415F2304);
    x_1414F2309 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1414F2309,x_1415F2304);
    BOXVAL(portF2306) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1414F2309);
    x_1414F2310 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1414F2310,x_1415F2304);
    BOXVAL(messageF2307) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1414F2310);
    x_1414F2311 = T17;
    BOXVAL(argsF2308) = x_1414F2311;
    x_1414F2312 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1414F2312,x_1415F2304);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1415F2304,LITREF(lit_171),x_1414F2305);
  }
  T22 = BOXVAL(portF2306);
  T23 = BOXVAL(messageF2307);
  T24 = BOXVAL(argsF2308);
  T21 = CALL3(1,VARREF(YgooSioSwriteYpe_msg),T22,T23,T24);
  T7 = T21;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_78,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_14));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  CALL5(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg),YPfalse,T1,FREEREF(1),FREEREF(2));
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(YgooSioSportYport_contents),T3);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_81) {
  P tmpF2313;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2313 = T1;
  if (tmpF2313 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYmsg_to_str) {
  P message_,arguments_;
  P portF2314;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
loop:
  portF2314 = YPfalse;
  portF2314 = BOXFAB(portF2314);
  T3 = FUNFAB(fun_80,3,portF2314,message_,arguments_);
  T4 = FUNFAB(fun_81,1,portF2314);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_83) {
  P i_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),i_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooScolsScolYlow_elt),FREEREF(2),i_);
    T3 = CALL1(1,VARREF(YgooSmathYto_str),T4);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T3);
    T6 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T6;
    i_ = a1;
    goto loop;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSwriteYsay) {
  P port_,args_;
  P loopF2316;
  P limF2315;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  limF2315 = T1;
  T3 = FUNSHELL(1,fun_loop_83,4);
  loopF2316 = T3;
  FUNINIT(loopF2316, 4,limF2315,port_,args_,loopF2316);
  T4 = CALL1(0,loopF2316,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YgooSioSwriteY___main_0___() {
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
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269,T270,T271;
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282;
DEFCREGS();
loop:
  DYNDEFSET(YgooSioSwriteYTmax_print_depthT,YPint((P)4));
  DYNDEFSET(YgooSioSwriteYTmax_print_lengthT,YPint((P)12));
  lit_0 = YPPsym((P)"as-binding-name");
  lit_1 = YPPlist(1,YPPsym((P)"name"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_binding_name_0 = YPmet(FUNCODEREF(fun_as_binding_name_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooSioSwriteYas_binding_name);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSioSwriteYas_binding_name);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_as_binding_name_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSioSwriteYas_binding_name,T1);
  lit_2 = YPPsym((P)"do-emit");
  lit_3 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T5 = YPsig(LITREF(lit_3),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_1 = YPmet(FUNCODEREF(fun_do_emit_1),LITREF(lit_2),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YgooSioSwriteYdo_emit);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooSioSwriteYdo_emit);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_do_emit_1;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooSioSwriteYdo_emit,T6);
  lit_4 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T10 = YPsig(LITREF(lit_4),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_2 = YPmet(FUNCODEREF(fun_do_emit_2),LITREF(lit_2),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YgooSioSwriteYdo_emit);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooSioSwriteYdo_emit);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_do_emit_2;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooSioSwriteYdo_emit,T11);
  lit_5 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T15 = YPsig(LITREF(lit_5),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_3 = YPmet(FUNCODEREF(fun_do_emit_3),LITREF(lit_2),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YgooSioSwriteYdo_emit);
  if (T18 != YPfalse) {
    T17 = VARREF(YgooSioSwriteYdo_emit);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_do_emit_3;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YgooSioSwriteYdo_emit,T16);
  lit_6 = YPPsym((P)"emit");
  lit_7 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_8 = YPPsym((P)"recur");
  lit_9 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  lit_10 = YPsb((P)"*");
  T21 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_4 = YPmet(FUNCODEREF(fun_recur_4),LITREF(lit_8),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_emit_5 = YPmet(FUNCODEREF(fun_emit_5),LITREF(lit_6),T20,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YgooSioSwriteYemit);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooSioSwriteYemit);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_emit_5;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooSioSwriteYemit,T22);
  lit_11 = YPPsym((P)"write-to-string");
  lit_12 = YPPlist(1,YPPsym((P)"x"));
  lit_13 = Ynil;
  lit_14 = YPsb((P)"");
  T28 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_write_to_string_8 = YPmet(FUNCODEREF(fun_write_to_string_8),LITREF(lit_11),T26,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooSioSwriteYwrite_to_string);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooSioSwriteYwrite_to_string);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_write_to_string_8;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooSioSwriteYwrite_to_string,T29);
  lit_15 = YPPsym((P)"write");
  lit_16 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  lit_18 = YPsb((P)"*");
  T34 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_9 = YPmet(FUNCODEREF(fun_recur_9),LITREF(lit_8),T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(LITREF(lit_16),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_10 = YPmet(FUNCODEREF(fun_write_10),LITREF(lit_15),T33,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YgooSioSwriteYwrite);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooSioSwriteYwrite);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_write_10;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooSioSwriteYwrite,T35);
  lit_19 = YPPsym((P)"writeln");
  lit_20 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T39 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_writeln_11 = YPmet(FUNCODEREF(fun_writeln_11),LITREF(lit_19),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YgooSioSwriteYwriteln);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooSioSwriteYwriteln);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_writeln_11;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooSioSwriteYwriteln,T40);
  lit_21 = YPPsym((P)"recurring-write");
  lit_22 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_23 = YPsb((P)"()");
  T44 = YPsig(LITREF(lit_22),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_12 = YPmet(FUNCODEREF(fun_recurring_write_12),LITREF(lit_21),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T47 != YPfalse) {
    T46 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_recurring_write_12;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YgooSioSwriteYrecurring_write,T45);
  lit_24 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_25 = YPsb((P)"$$");
  lit_26 = YPsb((P)"(");
  lit_27 = YPsb((P)")");
  T49 = YPsig(LITREF(lit_24),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_13 = YPmet(FUNCODEREF(fun_recurring_write_13),LITREF(lit_21),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T52 != YPfalse) {
    T51 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_recurring_write_13;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YgooSioSwriteYrecurring_write,T50);
  lit_28 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_29 = YPsb((P)"#(");
  lit_30 = YPsb((P)")");
  T54 = YPsig(LITREF(lit_28),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLtupG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_14 = YPmet(FUNCODEREF(fun_recurring_write_14),LITREF(lit_21),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_recurring_write_14;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooSioSwriteYrecurring_write,T55);
  lit_31 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_32 = YPsb((P)"#[");
  lit_33 = YPsb((P)"]");
  T59 = YPsig(LITREF(lit_31),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_15 = YPmet(FUNCODEREF(fun_recurring_write_15),LITREF(lit_21),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_recurring_write_15;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooSioSwriteYrecurring_write,T60);
  lit_34 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T64 = YPsig(LITREF(lit_34),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_16 = YPmet(FUNCODEREF(fun_recurring_write_16),LITREF(lit_21),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_recurring_write_16;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSioSwriteYrecurring_write,T65);
  lit_35 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_36 = YPPsym((P)"t");
  lit_37 = YPPsym((P)"f");
  T69 = YPsig(LITREF(lit_35),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_17 = YPmet(FUNCODEREF(fun_recurring_write_17),LITREF(lit_21),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_recurring_write_17;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSioSwriteYrecurring_write,T70);
  lit_38 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T74 = YPsig(LITREF(lit_38),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsymG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_18 = YPmet(FUNCODEREF(fun_recurring_write_18),LITREF(lit_21),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_recurring_write_18;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSioSwriteYrecurring_write,T75);
  lit_39 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_40 = YPsb((P)"&0x");
  T79 = YPsig(LITREF(lit_39),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlocG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_19 = YPmet(FUNCODEREF(fun_recurring_write_19),LITREF(lit_21),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T82 != YPfalse) {
    T81 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_recurring_write_19;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YgooSioSwriteYrecurring_write,T80);
  lit_41 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_42 = YPsb((P)"<num>");
  T84 = YPsig(LITREF(lit_41),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_20 = YPmet(FUNCODEREF(fun_recurring_write_20),LITREF(lit_21),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T87 != YPfalse) {
    T86 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_recurring_write_20;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YgooSioSwriteYrecurring_write,T85);
  lit_43 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T89 = YPsig(LITREF(lit_43),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_21 = YPmet(FUNCODEREF(fun_recurring_write_21),LITREF(lit_21),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T92 != YPfalse) {
    T91 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_recurring_write_21;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YgooSioSwriteYrecurring_write,T90);
  lit_44 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T94 = YPsig(LITREF(lit_44),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_22 = YPmet(FUNCODEREF(fun_recurring_write_22),LITREF(lit_21),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_recurring_write_22;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooSioSwriteYrecurring_write,T95);
  lit_45 = YPPsym((P)"write-boolean");
  lit_46 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"mumble"));
  T99 = YPsig(LITREF(lit_46),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_boolean_23 = YPmet(FUNCODEREF(fun_write_boolean_23),LITREF(lit_45),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YgooSioSwriteYwrite_boolean);
  if (T102 != YPfalse) {
    T101 = VARREF(YgooSioSwriteYwrite_boolean);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_write_boolean_23;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YgooSioSwriteYwrite_boolean,T100);
  lit_47 = YPPsym((P)"write-number");
  lit_48 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T104 = YPsig(LITREF(lit_48),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_number_24 = YPmet(FUNCODEREF(fun_write_number_24),LITREF(lit_47),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YgooSioSwriteYwrite_number);
  if (T107 != YPfalse) {
    T106 = VARREF(YgooSioSwriteYwrite_number);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_write_number_24;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YgooSioSwriteYwrite_number,T105);
  lit_49 = YPPsym((P)"write-char-literal");
  lit_50 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_51 = YPsb((P)"#\\");
  T109 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_char_literal_25 = YPmet(FUNCODEREF(fun_write_char_literal_25),LITREF(lit_49),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YgooSioSwriteYwrite_char_literal);
  if (T112 != YPfalse) {
    T111 = VARREF(YgooSioSwriteYwrite_char_literal);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_write_char_literal_25;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YgooSioSwriteYwrite_char_literal,T110);
  lit_52 = YPPsym((P)"character-name");
  lit_53 = YPPlist(1,YPPsym((P)"char"));
  T114 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_character_name_26 = YPmet(FUNCODEREF(fun_character_name_26),LITREF(lit_52),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YgooSioSwriteYcharacter_name);
  if (T117 != YPfalse) {
    T116 = VARREF(YgooSioSwriteYcharacter_name);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_character_name_26;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YgooSioSwriteYcharacter_name,T115);
  lit_54 = YPPsym((P)"write-string-literal");
  lit_55 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_56 = YPPsym((P)"loop");
  lit_57 = YPPlist(1,YPPsym((P)"i"));
  T120 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_27 = YPmet(FUNCODEREF(fun_loop_27),LITREF(lit_56),T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_string_literal_28 = YPmet(FUNCODEREF(fun_write_string_literal_28),LITREF(lit_54),T119,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YgooSioSwriteYwrite_string_literal);
  if (T123 != YPfalse) {
    T122 = VARREF(YgooSioSwriteYwrite_string_literal);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_write_string_literal_28;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YgooSioSwriteYwrite_string_literal,T121);
  lit_58 = YPPsym((P)"write-list");
  lit_59 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_60 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  lit_61 = YPsb((P)" ...");
  T126 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_29 = YPmet(FUNCODEREF(fun_loop_29),LITREF(lit_56),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(LITREF(lit_59),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_list_30 = YPmet(FUNCODEREF(fun_write_list_30),LITREF(lit_58),T125,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YgooSioSwriteYwrite_list);
  if (T129 != YPfalse) {
    T128 = VARREF(YgooSioSwriteYwrite_list);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_write_list_30;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YgooSioSwriteYwrite_list,T127);
  lit_62 = YPPsym((P)"quotation?");
  lit_63 = YPPlist(1,YPPsym((P)"x"));
  lit_64 = YPPsym((P)"quote");
  T131 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_quotationQ_31 = YPmet(FUNCODEREF(fun_quotationQ_31),LITREF(lit_62),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YgooSioSwriteYquotationQ);
  if (T134 != YPfalse) {
    T133 = VARREF(YgooSioSwriteYquotationQ);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_quotationQ_31;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YgooSioSwriteYquotationQ,T132);
  lit_65 = YPPsym((P)"write-flat");
  lit_66 = YPPlist(6,YPPsym((P)"port"),YPPsym((P)"prefix"),YPPsym((P)"x"),YPPsym((P)"suffix"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_67 = YPPlist(1,YPPsym((P)"i"));
  lit_68 = YPsb((P)" ...");
  T137 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_32 = YPmet(FUNCODEREF(fun_loop_32),LITREF(lit_56),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(LITREF(lit_66),YPPlist(6,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLflatG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_write_flat_33 = YPmet(FUNCODEREF(fun_write_flat_33),LITREF(lit_65),T136,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YgooSioSwriteYwrite_flat);
  if (T140 != YPfalse) {
    T139 = VARREF(YgooSioSwriteYwrite_flat);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_write_flat_33;
  T138 = XCALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YgooSioSwriteYwrite_flat,T138);
  lit_69 = YPPsym((P)"write-map");
  lit_70 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_71 = YPsb((P)"#<");
  lit_72 = YPPlist(1,YPPsym((P)"blow"));
  lit_73 = YPPsym((P)"x-1397");
  lit_74 = YPPlist(2,YPPsym((P)"x-1396"),YPPsym((P)"x-1395"));
  lit_75 = YPsb((P)" ...");
  lit_76 = YPsb((P)": ");
  T144 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1397_34 = YPmet(FUNCODEREF(fun_x_1397_34),LITREF(lit_73),T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(LITREF(lit_70),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_map_36 = YPmet(FUNCODEREF(fun_write_map_36),LITREF(lit_69),T142,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YgooSioSwriteYwrite_map);
  if (T147 != YPfalse) {
    T146 = VARREF(YgooSioSwriteYwrite_map);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_write_map_36;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YgooSioSwriteYwrite_map,T145);
  lit_77 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_78 = YPsb((P)"#{In-port}");
  T149 = YPsig(LITREF(lit_77),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLin_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_37 = YPmet(FUNCODEREF(fun_recurring_write_37),LITREF(lit_21),T149,ENVNUL,PNUL,YPfalse);
  T152 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T152 != YPfalse) {
    T151 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_recurring_write_37;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YgooSioSwriteYrecurring_write,T150);
  lit_79 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_80 = YPsb((P)"#{Out-port}");
  T154 = YPsig(LITREF(lit_79),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLout_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_38 = YPmet(FUNCODEREF(fun_recurring_write_38),LITREF(lit_21),T154,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T157 != YPfalse) {
    T156 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_recurring_write_38;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YgooSioSwriteYrecurring_write,T155);
  lit_81 = YPPsym((P)"write-params");
  lit_82 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"recur"));
  lit_83 = YPPsym((P)"x-1401");
  lit_84 = YPPlist(3,YPPsym((P)"x-1400"),YPPsym((P)"x-1399"),YPPsym((P)"x-1398"));
  lit_85 = YPsb((P)"(%s ");
  lit_86 = YPPlist(1,YPPsym((P)"x"));
  lit_87 = YPPlist(1,YPPsym((P)"x"));
  lit_88 = YPsb((P)" => ");
  T162 = YPsig(LITREF(lit_84),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1401_39 = YPmet(FUNCODEREF(fun_x_1401_39),LITREF(lit_83),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(LITREF(lit_86),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(LITREF(lit_87),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(LITREF(lit_82),YPPlist(3,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_write_params_42 = YPmet(FUNCODEREF(fun_write_params_42),LITREF(lit_81),T159,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YgooSioSwriteYwrite_params);
  if (T165 != YPfalse) {
    T164 = VARREF(YgooSioSwriteYwrite_params);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_write_params_42;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YgooSioSwriteYwrite_params,T163);
  lit_89 = YPPsym((P)"write-fun-guts");
  lit_90 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"name"),YPPsym((P)"recur"));
  lit_91 = YPsb((P)"#{");
  lit_92 = YPsb((P)"}");
  T167 = YPsig(LITREF(lit_90),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_fun_guts_43 = YPmet(FUNCODEREF(fun_write_fun_guts_43),LITREF(lit_89),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YgooSioSwriteYwrite_fun_guts);
  if (T170 != YPfalse) {
    T169 = VARREF(YgooSioSwriteYwrite_fun_guts);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_write_fun_guts_43;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YgooSioSwriteYwrite_fun_guts,T168);
  lit_93 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_94 = YPsb((P)"Gen");
  T172 = YPsig(LITREF(lit_93),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLgenG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_44 = YPmet(FUNCODEREF(fun_recurring_write_44),LITREF(lit_21),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T175 != YPfalse) {
    T174 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_recurring_write_44;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YgooSioSwriteYrecurring_write,T173);
  lit_95 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_96 = YPsb((P)"Met");
  T177 = YPsig(LITREF(lit_95),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLmetG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_45 = YPmet(FUNCODEREF(fun_recurring_write_45),LITREF(lit_21),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T180 != YPfalse) {
    T179 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_recurring_write_45;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YgooSioSwriteYrecurring_write,T178);
  lit_97 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_98 = YPsb((P)"#{Class ");
  lit_99 = YPsb((P)" ");
  lit_100 = YPsb((P)"}");
  T182 = YPsig(LITREF(lit_97),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_46 = YPmet(FUNCODEREF(fun_recurring_write_46),LITREF(lit_21),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T185 != YPfalse) {
    T184 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_recurring_write_46;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YgooSioSwriteYrecurring_write,T183);
  lit_101 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_102 = YPsb((P)"#{T= ");
  lit_103 = YPsb((P)"}");
  T187 = YPsig(LITREF(lit_101),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsingletonG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_47 = YPmet(FUNCODEREF(fun_recurring_write_47),LITREF(lit_21),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T190 != YPfalse) {
    T189 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_recurring_write_47;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YgooSioSwriteYrecurring_write,T188);
  lit_104 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_105 = YPsb((P)"#{T< ");
  lit_106 = YPsb((P)"}");
  T192 = YPsig(LITREF(lit_104),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsubclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_48 = YPmet(FUNCODEREF(fun_recurring_write_48),LITREF(lit_21),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T195 != YPfalse) {
    T194 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_recurring_write_48;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YgooSioSwriteYrecurring_write,T193);
  lit_107 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_108 = YPsb((P)"#{T+");
  lit_109 = YPPlist(1,YPPsym((P)"t"));
  lit_110 = YPsb((P)"}");
  T198 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T198,ENVNUL,PNUL,YPfalse);
  T197 = YPsig(LITREF(lit_107),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLunionG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_50 = YPmet(FUNCODEREF(fun_recurring_write_50),LITREF(lit_21),T197,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T201 != YPfalse) {
    T200 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_recurring_write_50;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YgooSioSwriteYrecurring_write,T199);
  lit_111 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_112 = YPsb((P)"#{T*");
  lit_113 = YPPlist(1,YPPsym((P)"t"));
  lit_114 = YPsb((P)"}");
  T204 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T204,ENVNUL,PNUL,YPfalse);
  T203 = YPsig(LITREF(lit_111),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_52 = YPmet(FUNCODEREF(fun_recurring_write_52),LITREF(lit_21),T203,ENVNUL,PNUL,YPfalse);
  T207 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T207 != YPfalse) {
    T206 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T206 = YPfalse;
  }
  T208 = fun_recurring_write_52;
  T205 = XCALL2(1,VARREF(YPdefine_method),T206,T208);
  VARSET(YgooSioSwriteYrecurring_write,T205);
  lit_115 = YPPsym((P)"write-value-type");
  lit_116 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_117 = YPsb((P)"(tup");
  lit_118 = YPPlist(1,YPPsym((P)"t"));
  lit_119 = YPsb((P)")");
  T210 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T210,ENVNUL,PNUL,YPfalse);
  T209 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_54 = YPmet(FUNCODEREF(fun_write_value_type_54),LITREF(lit_115),T209,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(YgooSioSwriteYwrite_value_type);
  if (T213 != YPfalse) {
    T212 = VARREF(YgooSioSwriteYwrite_value_type);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_write_value_type_54;
  T211 = XCALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(YgooSioSwriteYwrite_value_type,T211);
  lit_120 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T215 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_55 = YPmet(FUNCODEREF(fun_write_value_type_55),LITREF(lit_115),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(YgooSioSwriteYwrite_value_type);
  if (T218 != YPfalse) {
    T217 = VARREF(YgooSioSwriteYwrite_value_type);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_write_value_type_55;
  T216 = XCALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(YgooSioSwriteYwrite_value_type,T216);
  lit_121 = YPPsym((P)"recurring-write-type");
  lit_122 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T220 = YPsig(LITREF(lit_122),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_56 = YPmet(FUNCODEREF(fun_recurring_write_type_56),LITREF(lit_121),T220,ENVNUL,PNUL,YPfalse);
  T223 = BOUNDP(YgooSioSwriteYrecurring_write_type);
  if (T223 != YPfalse) {
    T222 = VARREF(YgooSioSwriteYrecurring_write_type);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_recurring_write_type_56;
  T221 = XCALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(YgooSioSwriteYrecurring_write_type,T221);
  lit_123 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T225 = YPsig(LITREF(lit_123),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_57 = YPmet(FUNCODEREF(fun_recurring_write_type_57),LITREF(lit_121),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YgooSioSwriteYrecurring_write_type);
  if (T228 != YPfalse) {
    T227 = VARREF(YgooSioSwriteYrecurring_write_type);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_recurring_write_type_57;
  T226 = XCALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YgooSioSwriteYrecurring_write_type,T226);
  lit_124 = YPPsym((P)"write-type");
  lit_125 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_126 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  T231 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_58 = YPmet(FUNCODEREF(fun_recur_58),LITREF(lit_8),T231,ENVNUL,PNUL,YPfalse);
  T230 = YPsig(LITREF(lit_125),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_type_59 = YPmet(FUNCODEREF(fun_write_type_59),LITREF(lit_124),T230,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(YgooSioSwriteYwrite_type);
  if (T234 != YPfalse) {
    T233 = VARREF(YgooSioSwriteYwrite_type);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_write_type_59;
  T232 = XCALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YgooSioSwriteYwrite_type,T232);
  lit_127 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_128 = YPsb((P)"#{Prop ");
  lit_129 = YPsb((P)"}");
  T236 = YPsig(LITREF(lit_127),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLpropG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_60 = YPmet(FUNCODEREF(fun_recurring_write_60),LITREF(lit_21),T236,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T239 != YPfalse) {
    T238 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_recurring_write_60;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YgooSioSwriteYrecurring_write,T237);
  lit_130 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_131 = YPsb((P)"#{");
  lit_132 = YPPlist(1,YPPsym((P)"blow"));
  lit_133 = YPPsym((P)"x-1405");
  lit_134 = YPPlist(2,YPPsym((P)"x-1404"),YPPsym((P)"x-1403"));
  lit_135 = YPsb((P)" ...");
  lit_136 = YPsb((P)": ");
  lit_137 = YPsb((P)"}");
  T245 = YPsig(LITREF(lit_134),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1405_61 = YPmet(FUNCODEREF(fun_x_1405_61),LITREF(lit_133),T245,ENVNUL,PNUL,YPfalse);
  T244 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T244,ENVNUL,PNUL,YPfalse);
  T243 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T243,ENVNUL,PNUL,YPfalse);
  T242 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T242,ENVNUL,PNUL,YPfalse);
  T241 = YPsig(LITREF(lit_130),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_65 = YPmet(FUNCODEREF(fun_recurring_write_65),LITREF(lit_21),T241,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T248 != YPfalse) {
    T247 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_recurring_write_65;
  T246 = XCALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(YgooSioSwriteYrecurring_write,T246);
  lit_138 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_139 = YPsb((P)"#{End-of-file}");
  T252 = XCALL0(1,VARREF(YgooSmathYeof_object));
  T251 = XCALL1(1,VARREF(YgooStypesYtE),T252);
  T250 = YPsig(LITREF(lit_138),YPPlist(4,VARREF(YgooSioSportYLout_portG),T251,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_66 = YPmet(FUNCODEREF(fun_recurring_write_66),LITREF(lit_21),T250,ENVNUL,PNUL,YPfalse);
  T255 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T255 != YPfalse) {
    T254 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T254 = YPfalse;
  }
  T256 = fun_recurring_write_66;
  T253 = XCALL2(1,VARREF(YPdefine_method),T254,T256);
  VARSET(YgooSioSwriteYrecurring_write,T253);
  lit_140 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_141 = YPsb((P)"nul");
  T258 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(Ynul));
  T257 = YPsig(LITREF(lit_140),YPPlist(4,VARREF(YgooSioSportYLout_portG),T258,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_67 = YPmet(FUNCODEREF(fun_recurring_write_67),LITREF(lit_21),T257,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T261 != YPfalse) {
    T260 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_recurring_write_67;
  T259 = XCALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(YgooSioSwriteYrecurring_write,T259);
  lit_142 = YPPsym((P)"msg");
  lit_143 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"arguments"));
  lit_144 = YPPsym((P)"arg");
  lit_145 = YPPlist(2,YPPsym((P)"char"),YPPsym((P)"class"));
  lit_146 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_147 = YPsb((P)"Msg argument for directive '%%%c' not of class %s: %=");
  lit_148 = YPPlist(1,YPPsym((P)"c"));
  lit_149 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_150 = YPsb((P)"Incomplete msg directive in \"%s\"");
  T265 = YPsig(LITREF(lit_145),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_arg_68 = YPmet(FUNCODEREF(fun_arg_68),LITREF(lit_144),T265,ENVNUL,PNUL,YPfalse);
  T264 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T264,ENVNUL,PNUL,YPfalse);
  T263 = YPsig(LITREF(lit_143),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_msg_70 = YPmet(FUNCODEREF(fun_msg_70),LITREF(lit_142),T263,ENVNUL,PNUL,YPfalse);
  T268 = BOUNDP(YgooSconditionsYmsg);
  if (T268 != YPfalse) {
    T267 = VARREF(YgooSconditionsYmsg);
  } else {
    T267 = YPfalse;
  }
  T269 = fun_msg_70;
  T266 = XCALL2(1,VARREF(YPdefine_method),T267,T269);
  VARSET(YgooSconditionsYmsg,T266);
  lit_151 = YPPsym((P)"post");
  lit_152 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T270 = YPsig(LITREF(lit_152),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_post_71 = YPmet(FUNCODEREF(fun_post_71),LITREF(lit_151),T270,ENVNUL,PNUL,YPfalse);
  T273 = BOUNDP(YgooSioSwriteYpost);
  if (T273 != YPfalse) {
    T272 = VARREF(YgooSioSwriteYpost);
  } else {
    T272 = YPfalse;
  }
  T274 = fun_post_71;
  T271 = XCALL2(1,VARREF(YPdefine_method),T272,T274);
  VARSET(YgooSioSwriteYpost,T271);
  lit_153 = YPPsym((P)"pe-msg");
  lit_154 = YPPlist(3,YPPsym((P)"port-expr"),YPPsym((P)"message"),YPPsym((P)"args"));
  T277 = YPsig(LITREF(lit_154),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T276 = fun_pe_msg_72 = YPmet(FUNCODEREF(fun_pe_msg_72),LITREF(lit_153),T277,ENVNUL,PNUL,YPfalse);
  T281 = BOUNDP(YgooSioSwriteYpe_msg);
  if (T281 != YPfalse) {
    T280 = VARREF(YgooSioSwriteYpe_msg);
  } else {
    T280 = YPfalse;
  }
  T282 = fun_pe_msg_72;
  T279 = XCALL2(1,VARREF(YPdefine_method),T280,T282);
  T278 = VARSET(YgooSioSwriteYpe_msg,T279);
  T275 = T278;
  return T275;
}

P YgooSioSwriteY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
DEFCREGS();
loop:
  lit_155 = YPPlist(3,YPPsym((P)"port-expr"),YPPsym((P)"message"),YPPsym((P)"args"));
  lit_156 = YPPsym((P)"maybe-pack-chars");
  lit_157 = YPPsym((P)"puts");
  lit_158 = YPPlist(1,YPPsym((P)"char"));
  lit_159 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_160 = YPPlist(1,YPPsym((P)"c"));
  lit_161 = YPPsym((P)"num-to-str");
  lit_162 = YPPsym((P)"put");
  lit_163 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_164 = YPsb((P)"Incomplete msg directive in \"%s\"");
  lit_165 = YPPsym((P)"let");
  T3 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_maybe_pack_chars_73 = YPmet(FUNCODEREF(fun_maybe_pack_chars_73),LITREF(lit_156),T3,ENVNUL,PNUL,YPfalse);
  T2 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_arg_74 = YPmet(FUNCODEREF(fun_arg_74),LITREF(lit_144),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(LITREF(lit_160),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(LITREF(lit_155),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pe_msg_76 = YPmet(FUNCODEREF(fun_pe_msg_76),LITREF(lit_153),T0,ENVNUL,PNUL,YPfalse);
  T6 = BOUNDP(YgooSioSwriteYpe_msg);
  if (T6 != YPfalse) {
    T5 = VARREF(YgooSioSwriteYpe_msg);
  } else {
    T5 = YPfalse;
  }
  T7 = fun_pe_msg_76;
  T4 = XCALL2(1,VARREF(YPdefine_method),T5,T7);
  VARSET(YgooSioSwriteYpe_msg,T4);
  lit_166 = YPPlist(1,YPPsym((P)"exp"));
  lit_167 = YPPlist(1,YPPsym((P)"return"));
  lit_168 = YPPsym((P)"x-1415");
  lit_169 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_170 = YPPsym((P)"msg*");
  lit_171 = YPsb((P)"Match Pattern Failure");
  T10 = YPsig(LITREF(lit_169),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1415_77 = YPmet(FUNCODEREF(fun_x_1415_77),LITREF(lit_168),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(LITREF(lit_167),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(LITREF(lit_166),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_79;
  YPmacro(YPPsym((P)"goo/io/write"),YPPsym((P)"msg*"),T11);
  lit_172 = YPPsym((P)"msg-to-str");
  lit_173 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T14 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T14,ENVNUL,PNUL,YPfalse);
  T13 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(LITREF(lit_173),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSconditionsYmsg_to_str = YPmet(FUNCODEREF(YgooSconditionsYmsg_to_str),LITREF(lit_172),T12,ENVNUL,PNUL,YPfalse);
  T15 = YgooSconditionsYmsg_to_str;
  VARSET(YgooSconditionsYmsg_to_str,T15);
  lit_174 = YPPsym((P)"say");
  lit_175 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"args"));
  lit_176 = YPPlist(1,YPPsym((P)"i"));
  T17 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_83 = YPmet(FUNCODEREF(fun_loop_83),LITREF(lit_56),T17,ENVNUL,PNUL,YPfalse);
  T16 = YPsig(LITREF(lit_175),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSwriteYsay = YPmet(FUNCODEREF(YgooSioSwriteYsay),LITREF(lit_174),T16,ENVNUL,PNUL,YPfalse);
  T18 = YgooSioSwriteYsay;
  VARSET(YgooSioSwriteYsay,T18);
  T19 = YPfalse;
  return T19;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstep;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSpacker},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooSioSport},
  {&module_info_gooScols},
  {&module_info_gooSruntime},
  {&module_info_gooSconditions},
  {&module_info_gooSioSread},
  {&module_info_gooSpacker},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"not", &module_info_gooSboot, "not"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"set-standard-read-macro!", &module_info_gooSioSread, "set-standard-read-macro!"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"type-error-type", &module_info_gooSconditions, "type-error-type"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"loc", &module_info_gooSboot, "loc"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"<unbound-error>", &module_info_gooSconditions, "<unbound-error>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"<property-error>", &module_info_gooSconditions, "<property-error>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%str", &module_info_gooSboot, "%str"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"as", &module_info_gooStypes, "as"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<simple-condition>", &module_info_gooSconditions, "<simple-condition>"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"col", &module_info_gooScolsScol, "col"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"describe-condition", &module_info_gooSconditions, "describe-condition"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"*current-handlers*", &module_info_gooSconditions, "*current-handlers*"},
  {"port-handle-setter", &module_info_gooSioSport, "port-handle-setter"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"sig", &module_info_gooSconditions, "sig"},
  {"mod", &module_info_gooSmath, "mod"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unbound-variable-error-variable", &module_info_gooSconditions, "unbound-variable-error-variable"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"handler-function", &module_info_gooSconditions, "handler-function"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"len", &module_info_gooStypes, "len"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"atan", &module_info_gooSmath, "atan"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"property-error-owner", &module_info_gooSconditions, "property-error-owner"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"*", &module_info_gooSmath, "*"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"op", &module_info_gooSmacros, "op"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"floor", &module_info_gooSmath, "floor"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"<unbound-variable-error>", &module_info_gooSconditions, "<unbound-variable-error>"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<no-next-methods-error>", &module_info_gooSconditions, "<no-next-methods-error>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"def", &module_info_gooSboot, "def"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"into", &module_info_gooScolsScol, "into"},
  {"$default-handler-info", &module_info_gooSconditions, "$default-handler-info"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<call-error>", &module_info_gooSconditions, "<call-error>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fab-handler", &module_info_gooSconditions, "fab-handler"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"export", &module_info_gooSboot, "export"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"<as-error>", &module_info_gooSconditions, "<as-error>"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"<narity-error>", &module_info_gooSconditions, "<narity-error>"},
  {"put", &module_info_gooSioSport, "put"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"and", &module_info_gooSmacros, "and"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"~==", &module_info_gooSmath, "~=="},
  {"close", &module_info_gooSioSport, "close"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"1-", &module_info_gooSmath, "1-"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"msg-to-str", &module_info_gooSconditions, "msg-to-str"},
  {"set", &module_info_gooSboot, "set"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"if", &module_info_gooSboot, "if"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"default-handler", &module_info_gooSconditions, "default-handler"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"call-error-function", &module_info_gooSconditions, "call-error-function"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"<keyboard-interrupt>", &module_info_gooSconditions, "<keyboard-interrupt>"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"condition-arguments", &module_info_gooSconditions, "condition-arguments"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<ambiguous-method-error>", &module_info_gooSconditions, "<ambiguous-method-error>"},
  {"<macro-error>", &module_info_gooSconditions, "<macro-error>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"port-handle", &module_info_gooSioSport, "port-handle"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"now", &module_info_gooScolsScol, "now"},
  {"ct", &module_info_gooSboot, "ct"},
  {"t<", &module_info_gooStypes, "t<"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"mif", &module_info_gooSboot, "mif"},
  {"==", &module_info_gooSmacros, "=="},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"<io-error>", &module_info_gooSconditions, "<io-error>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"macro-error-arguments", &module_info_gooSconditions, "macro-error-arguments"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"-", &module_info_gooSmath, "-"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"case", &module_info_gooSmacros, "case"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"list-handlers", &module_info_gooSconditions, "list-handlers"},
  {"let", &module_info_gooSboot, "let"},
  {"out", &module_info_gooSioSport, "out"},
  {"property-error-generic", &module_info_gooSconditions, "property-error-generic"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"always", &module_info_gooSruntime, "always"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"abs", &module_info_gooSmath, "abs"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"t=", &module_info_gooStypes, "t="},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"items", &module_info_gooScolsScol, "items"},
  {"max", &module_info_gooSmag, "max"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"~=", &module_info_gooSmath, "~="},
  {"file-opening-error-filename", &module_info_gooSconditions, "file-opening-error-filename"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"logn", &module_info_gooSmath, "logn"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"<range-error>", &module_info_gooSconditions, "<range-error>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"msg", &module_info_gooSconditions, "msg"},
  {"t+", &module_info_gooStypes, "t+"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"<handler-info>", &module_info_gooSconditions, "<handler-info>"},
  {"describe-handler", &module_info_gooSconditions, "describe-handler"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"open", &module_info_gooSioSport, "open"},
  {"when", &module_info_gooSmacros, "when"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"<file-opening-error>", &module_info_gooSconditions, "<file-opening-error>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"<property-not-found-error>", &module_info_gooSconditions, "<property-not-found-error>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"div", &module_info_gooSmath, "div"},
  {"rep", &module_info_gooSboot, "rep"},
  {"build-condition-interactively", &module_info_gooSconditions, "build-condition-interactively"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"min", &module_info_gooSmag, "min"},
  {"condition-message", &module_info_gooSconditions, "condition-message"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"read", &module_info_gooSconditions, "read"},
  {"<error>", &module_info_gooSconditions, "<error>"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"dss", &module_info_gooSboot, "dss"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"<return-type-error>", &module_info_gooSconditions, "<return-type-error>"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"~", &module_info_gooSmath, "~"},
  {"@len", &module_info_gooSboot, "@len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"range-error-collection", &module_info_gooSconditions, "range-error-collection"},
  {"sin", &module_info_gooSmath, "sin"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"<serious-condition>", &module_info_gooSconditions, "<serious-condition>"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"use", &module_info_gooSboot, "use"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"get-standard-read-macro", &module_info_gooSioSread, "get-standard-read-macro"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"macro-error-name", &module_info_gooSconditions, "macro-error-name"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, "build-condition-for-handler-interactively"},
  {"@+", &module_info_gooSboot, "@+"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"<type-error>", &module_info_gooSconditions, "<type-error>"},
  {"in", &module_info_gooSioSport, "in"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"neg", &module_info_gooSmath, "neg"},
  {"read-delimited-list", &module_info_gooSioSread, "read-delimited-list"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"app", &module_info_gooSmacros, "app"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"call-error-arguments", &module_info_gooSconditions, "call-error-arguments"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {">=", &module_info_gooSmag, ">="},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%met", &module_info_gooSboot, "%met"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"1+", &module_info_gooSmath, "1+"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"<argument-type-error>", &module_info_gooSconditions, "<argument-type-error>"},
  {"%time", &module_info_gooSboot, "%time"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"type-error-value", &module_info_gooSconditions, "type-error-value"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"nul", &module_info_gooSboot, "nul"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"seq", &module_info_gooSboot, "seq"},
  {"map", &module_info_gooSmacros, "map"},
  {"do", &module_info_gooSmacros, "do"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"for", &module_info_gooSmacros, "for"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<internal-error>", &module_info_gooSconditions, "<internal-error>"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<stack-overflow>", &module_info_gooSconditions, "<stack-overflow>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"handler-matches?", &module_info_gooSconditions, "handler-matches?"},
  {">", &module_info_gooSmag, ">"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"<arity-error>", &module_info_gooSconditions, "<arity-error>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"range-error-key", &module_info_gooSconditions, "range-error-key"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"error", &module_info_gooSboot, "error"},
  {"+", &module_info_gooSmath, "+"},
  {"asin", &module_info_gooSmath, "asin"},
  {"<condition>", &module_info_gooSconditions, "<condition>"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"<restart>", &module_info_gooSconditions, "<restart>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<", &module_info_gooSmag, "<"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {">>", &module_info_gooSmath, ">>"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%im", &module_info_gooSboot, "%im"},
  {"dm", &module_info_gooSboot, "dm"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"while", &module_info_gooSmacros, "while"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"df", &module_info_gooSboot, "df"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<unknown-function-error>", &module_info_gooSconditions, "<unknown-function-error>"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"=", &module_info_gooSmath, "="},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, "<no-applicable-methods-error>"},
  {"get", &module_info_gooSioSport, "get"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"dg", &module_info_gooSboot, "dg"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"&", &module_info_gooSmath, "&"},
  {"@<", &module_info_gooSboot, "@<"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"invoke-handler-interactively", &module_info_gooSconditions, "invoke-handler-interactively"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<property-type-error>", &module_info_gooSconditions, "<property-type-error>"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"try", &module_info_gooSboot, "try"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%put", &module_info_gooSboot, "%put"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"default-handler-description", &module_info_gooSconditions, "default-handler-description"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"round", &module_info_gooSmath, "round"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"log", &module_info_gooSmath, "log"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"esc", &module_info_gooSboot, "esc"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"/", &module_info_gooSmath, "/"},
  {"pow", &module_info_gooSmath, "pow"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<handler>", &module_info_gooSconditions, "<handler>"},
  {"choose-handler", &module_info_gooSconditions, "choose-handler"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"tan", &module_info_gooSmath, "tan"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-1---", PVAR, NULL},
  {"write-map", CVAR, &YgooSioSwriteYwrite_map},
  {"quotation?", CVAR, &YgooSioSwriteYquotationQ},
  {"write-value-type", CVAR, &YgooSioSwriteYwrite_value_type},
  {"post", CVAR, &YgooSioSwriteYpost},
  {"say", CVAR, &YgooSioSwriteYsay},
  {"write-string-literal", CVAR, &YgooSioSwriteYwrite_string_literal},
  {"as-binding-name", CVAR, &YgooSioSwriteYas_binding_name},
  {"write-number", CVAR, &YgooSioSwriteYwrite_number},
  {"write", CVAR, &YgooSioSwriteYwrite},
  {"recurring-write-type", CVAR, &YgooSioSwriteYrecurring_write_type},
  {"character-name", CVAR, &YgooSioSwriteYcharacter_name},
  {"*max-print-length*", DVAR, &YgooSioSwriteYTmax_print_lengthT},
  {"do-emit", CVAR, &YgooSioSwriteYdo_emit},
  {"write-to-string", CVAR, &YgooSioSwriteYwrite_to_string},
  {"write-type", CVAR, &YgooSioSwriteYwrite_type},
  {"*max-print-depth*", DVAR, &YgooSioSwriteYTmax_print_depthT},
  {"recurring-write", CVAR, &YgooSioSwriteYrecurring_write},
  {"write-fun-guts", CVAR, &YgooSioSwriteYwrite_fun_guts},
  {"pe-msg", CVAR, &YgooSioSwriteYpe_msg},
  {"write-list", CVAR, &YgooSioSwriteYwrite_list},
  {"msg*", PVAR, NULL},
  {"write-boolean", CVAR, &YgooSioSwriteYwrite_boolean},
  {"---main-0---", PVAR, NULL},
  {"write-params", CVAR, &YgooSioSwriteYwrite_params},
  {"write-char-literal", CVAR, &YgooSioSwriteYwrite_char_literal},
  {"write-flat", CVAR, &YgooSioSwriteYwrite_flat},
  {"emit", CVAR, &YgooSioSwriteYemit},
  {"writeln", CVAR, &YgooSioSwriteYwriteln},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"post", "post"},
  {"say", "say"},
  {"write", "write"},
  {"msg-to-str", "msg-to-str"},
  {"*max-print-length*", "*max-print-length*"},
  {"msg", "msg"},
  {"write-to-string", "write-to-string"},
  {"*max-print-depth*", "*max-print-depth*"},
  {"recurring-write", "recurring-write"},
  {"pe-msg", "pe-msg"},
  {"msg*", "msg*"},
  {"emit", "emit"},
  {"writeln", "writeln"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSioSwrite;
MODULE_INFO module_info_gooSioSwrite = {
  "goo/io/write",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSpacker (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSioSport (void);
extern void load_module_gooScols (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooSconditions (void);
extern void load_module_gooSioSread (void);
extern void load_module_gooSpacker (void);

/* EXPRESSION: */

extern void load_module_gooSioSwrite (void);

void load_module_gooSioSwrite (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSpacker();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooSioSport();
  load_module_gooScols();
  load_module_gooSruntime();
  load_module_gooSconditions();
  load_module_gooSioSread();
  load_module_gooSpacker();

  (P)YgooSioSwriteY___main_0___();
  (P)YgooSioSwriteY___main_1___();

}

/* END OF GENERATED CODE. */
