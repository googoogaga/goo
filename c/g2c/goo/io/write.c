/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/write");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/write */

EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Ytup,"goo/boot","tup");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSmathYS,"goo/math","/");
DEF(YgooSioSwriteYwrite_list,"goo/io/write","write-list");
DYNDEF(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
DEF(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yerror,"goo/boot","error");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
DEF(YgooSioSwriteYwrite_number,"goo/io/write","write-number");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
DEF(YgooSioSwriteYwrite_params,"goo/io/write","write-params");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
DEF(YgooSioSwriteYwrite_string_literal,"goo/io/write","write-string-literal");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
DEF(YgooSioSwriteYwrite_map,"goo/io/write","write-map");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
DEF(YgooSioSwriteYdo_emit,"goo/io/write","do-emit");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YgooSioSwriteYas_binding_name,"goo/io/write","as-binding-name");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YgooSioSwriteYemit,"goo/io/write","emit");
DEF(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSlate_macrosYTgensym_counterT,"goo/late-macros","*gensym-counter*");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(Yopts_location,"goo/boot","opts-location");
DEF(YgooSioSwriteYwrite_flat,"goo/io/write","write-flat");
EXT(YOallQ,"goo/boot","@all?");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YtT,"goo/boot","t*");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOpick,"goo/boot","@pick");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
DEF(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooStypesYDbot,"goo/types","$bot");
DEF(YgooSioSwriteYwrite_value_type,"goo/io/write","write-value-type");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YOnew,"goo/boot","@new");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(Ynot,"goo/boot","not");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YOtup,"goo/boot","@tup");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YgooSioSwriteYquotationQ,"goo/io/write","quotation?");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
DEF(YgooSioSwriteYcharacter_name,"goo/io/write","character-name");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ynew,"goo/boot","new");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooStypesYas,"goo/types","as");
DEF(YgooSioSwriteYwrite_boolean,"goo/io/write","write-boolean");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YLunionG,"goo/boot","<union>");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DYNDEF(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YgooSioSwriteYwrite_fun_guts,"goo/io/write","write-fun-guts");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
DEF(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YgooSioSwriteYwrite_char_literal,"goo/io/write","write-char-literal");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooSioSwriteYrecurring_write_type,"goo/io/write","recurring-write-type");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YPtrue,"goo/boot","%true");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_36);
DEFLIT(lit_107);
DEFLIT(lit_47);
DEFLIT(lit_114);
DEFLIT(lit_21);
DEFLIT(lit_15);
DEFLIT(lit_4);
DEFLIT(lit_78);
DEFLIT(lit_69);
DEFLIT(lit_94);
DEFLIT(lit_160);
DEFLIT(lit_92);
DEFLIT(lit_121);
DEFLIT(lit_161);
DEFLIT(lit_74);
DEFLIT(lit_96);
DEFLIT(lit_54);
DEFLIT(lit_147);
DEFLIT(lit_0);
DEFLIT(lit_26);
DEFLIT(lit_37);
DEFLIT(lit_162);
DEFLIT(lit_57);
DEFLIT(lit_110);
DEFLIT(lit_95);
DEFLIT(lit_41);
DEFLIT(lit_12);
DEFLIT(lit_40);
DEFLIT(lit_105);
DEFLIT(lit_116);
DEFLIT(lit_123);
DEFLIT(lit_83);
DEFLIT(lit_52);
DEFLIT(lit_43);
DEFLIT(lit_99);
DEFLIT(lit_38);
DEFLIT(lit_133);
DEFLIT(lit_81);
DEFLIT(lit_3);
DEFLIT(lit_118);
DEFLIT(lit_5);
DEFLIT(lit_34);
DEFLIT(lit_137);
DEFLIT(lit_109);
DEFLIT(lit_82);
DEFLIT(lit_8);
DEFLIT(lit_80);
DEFLIT(lit_142);
DEFLIT(lit_28);
DEFLIT(lit_112);
DEFLIT(lit_66);
DEFLIT(lit_164);
DEFLIT(lit_46);
DEFLIT(lit_93);
DEFLIT(lit_111);
DEFLIT(lit_1);
DEFLIT(lit_70);
DEFLIT(lit_84);
DEFLIT(lit_169);
DEFLIT(lit_152);
DEFLIT(lit_128);
DEFLIT(lit_67);
DEFLIT(lit_13);
DEFLIT(lit_103);
DEFLIT(lit_130);
DEFLIT(lit_25);
DEFLIT(lit_18);
DEFLIT(lit_77);
DEFLIT(lit_143);
DEFLIT(lit_159);
DEFLIT(lit_119);
DEFLIT(lit_101);
DEFLIT(lit_140);
DEFLIT(lit_106);
DEFLIT(lit_16);
DEFLIT(lit_131);
DEFLIT(lit_64);
DEFLIT(lit_76);
DEFLIT(lit_17);
DEFLIT(lit_136);
DEFLIT(lit_72);
DEFLIT(lit_20);
DEFLIT(lit_168);
DEFLIT(lit_120);
DEFLIT(lit_23);
DEFLIT(lit_122);
DEFLIT(lit_127);
DEFLIT(lit_165);
DEFLIT(lit_51);
DEFLIT(lit_156);
DEFLIT(lit_97);
DEFLIT(lit_49);
DEFLIT(lit_98);
DEFLIT(lit_50);
DEFLIT(lit_87);
DEFLIT(lit_73);
DEFLIT(lit_60);
DEFLIT(lit_167);
DEFLIT(lit_39);
DEFLIT(lit_117);
DEFLIT(lit_59);
DEFLIT(lit_132);
DEFLIT(lit_153);
DEFLIT(lit_31);
DEFLIT(lit_75);
DEFLIT(lit_124);
DEFLIT(lit_58);
DEFLIT(lit_155);
DEFLIT(lit_134);
DEFLIT(lit_9);
DEFLIT(lit_71);
DEFLIT(lit_35);
DEFLIT(lit_154);
DEFLIT(lit_24);
DEFLIT(lit_6);
DEFLIT(lit_85);
DEFLIT(lit_126);
DEFLIT(lit_63);
DEFLIT(lit_135);
DEFLIT(lit_42);
DEFLIT(lit_61);
DEFLIT(lit_14);
DEFLIT(lit_11);
DEFLIT(lit_88);
DEFLIT(lit_104);
DEFLIT(lit_53);
DEFLIT(lit_48);
DEFLIT(lit_151);
DEFLIT(lit_7);
DEFLIT(lit_56);
DEFLIT(lit_150);
DEFLIT(lit_79);
DEFLIT(lit_91);
DEFLIT(lit_30);
DEFLIT(lit_86);
DEFLIT(lit_102);
DEFLIT(lit_148);
DEFLIT(lit_68);
DEFLIT(lit_33);
DEFLIT(lit_2);
DEFLIT(lit_129);
DEFLIT(lit_45);
DEFLIT(lit_27);
DEFLIT(lit_145);
DEFLIT(lit_108);
DEFLIT(lit_100);
DEFLIT(lit_89);
DEFLIT(lit_22);
DEFLIT(lit_113);
DEFLIT(lit_125);
DEFLIT(lit_115);
DEFLIT(lit_19);
DEFLIT(lit_166);
DEFLIT(lit_65);
DEFLIT(lit_62);
DEFLIT(lit_163);
DEFLIT(lit_149);
DEFLIT(lit_139);
DEFLIT(lit_138);
DEFLIT(lit_10);
DEFLIT(lit_55);
DEFLIT(lit_44);
DEFLIT(lit_32);
DEFLIT(lit_146);
DEFLIT(lit_90);
DEFLIT(lit_144);
DEFLIT(lit_158);
DEFLIT(lit_141);
DEFLIT(lit_157);
DEFLIT(lit_29);

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
LOCFOR(fun_write_string_literal_27);
LOCFOR(fun_write_list_28);
LOCFOR(fun_quotationQ_29);
LOCFOR(fun_write_flat_30);
LOCFOR(fun_31);
LOCFOR(fun_write_map_32);
LOCFOR(fun_recurring_write_33);
LOCFOR(fun_recurring_write_34);
LOCFOR(fun_recurring_write_35);
LOCFOR(fun_recurring_write_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_write_params_39);
LOCFOR(fun_write_fun_guts_40);
LOCFOR(fun_recurring_write_41);
LOCFOR(fun_recurring_write_42);
LOCFOR(fun_recurring_write_43);
LOCFOR(fun_recurring_write_44);
LOCFOR(fun_recurring_write_45);
LOCFOR(fun_recurring_write_46);
LOCFOR(fun_47);
LOCFOR(fun_recurring_write_48);
LOCFOR(fun_49);
LOCFOR(fun_recurring_write_50);
LOCFOR(fun_51);
LOCFOR(fun_write_value_type_52);
LOCFOR(fun_write_value_type_53);
LOCFOR(fun_recurring_write_type_54);
LOCFOR(fun_recurring_write_type_55);
LOCFOR(fun_recur_56);
LOCFOR(fun_write_type_57);
LOCFOR(fun_recurring_write_58);
LOCFOR(fun_59);
LOCFOR(fun_60);
LOCFOR(fun_61);
LOCFOR(fun_recurring_write_62);
LOCFOR(fun_recurring_write_63);
LOCFOR(fun_arg_64);
LOCFOR(fun_65);
LOCFOR(fun_msg_66);
LOCFOR(fun_post_67);
LOCFOR(fun_maybe_pack_chars_68);
LOCFOR(fun_arg_69);
LOCFOR(fun_70);
FUNFOR(YgooSioSwriteYpe_msg);
LOCFOR(fun_x_1467_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
LOCFOR(fun_76);
FUNFOR(YgooSconditionsYmsg_to_str);
FUNFOR(YgooSioSwriteYsay);
extern P YgooSioSwriteY___main_0___ ();
extern P YgooSioSwriteY___main_1___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_as_binding_name_0) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_emit_1) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_emit_2) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYput),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_emit_3) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recur_4) {
  P x_,d_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
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

LOCCODEDEF(fun_emit_5) {
  P port_,x_;
  P recurF3858;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF3858 = T1;
  FUNINIT(recurF3858, 2,port_,recurF3858);
  T0 = CALL2(1,recurF3858,x_,YPint((P)-1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_6) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_14));
  BOXPUT(T0,FREEREF(0));
  T2 = BOXGET(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSioSwriteYwrite),T2,FREEREF(1));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_7) {
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

LOCCODEDEF(fun_write_to_string_8) {
  P x_;
  P portF3859;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  portF3859 = YPfalse;
  portF3859 = BOXFAB(portF3859);
  T2 = FUNFAB(fun_6,2,portF3859,x_);
  T3 = FUNFAB(fun_7,1,portF3859);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  RET(T1);
}

LOCCODEDEF(fun_recur_9) {
  P x_,d_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
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

LOCCODEDEF(fun_write_10) {
  P port_,x_;
  P recurF3860;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_9,2);
  recurF3860 = T1;
  FUNINIT(recurF3860, 2,port_,recurF3860);
  T0 = CALL2(1,recurF3860,x_,YPint((P)-1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_writeln_11) {
  P port_,x_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  CALL2(1,VARREF(YgooSioSwriteYwrite),port_,x_);
  T0 = CALL1(1,VARREF(YgooSioSportYnewline),port_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_12) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),x_);
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

LOCCODEDEF(fun_recurring_write_13) {
  P port_,x_,d_,recur_;
  P prefixF3861;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T4 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T3 = CALL1(1,VARREF(Yclass_name),T4);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T3);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_25),T2,LITREF(lit_26));
  prefixF3861 = T1;
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,prefixF3861,x_,LITREF(lit_27),d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_14) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,LITREF(lit_29),x_,LITREF(lit_30),d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_15) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,LITREF(lit_32),x_,LITREF(lit_33),d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_16) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_map),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_17) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
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

LOCCODEDEF(fun_recurring_write_18) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),x_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_19) {
  P port_,x_,d_,recur_;
  P tF3865;
  P xF3864;
  P xF3863;
  P xF3862;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_40));
  xF3862 = x_;
  T4 = (P)YPuntag_into(xF3862);
  xF3863 = T4;
  xF3864 = xF3863;
  tF3865 = (P)1;
  T3 = (P)YPiLL(xF3864,(P)2);
  T2 = (P)YPiv(T3,tF3865);
  T1 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),T2,YPint((P)16));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_20) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
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

LOCCODEDEF(fun_recurring_write_21) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_string_literal),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_22) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_char_literal),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_boolean_23) {
  P port_,mumble_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(mumble_, 1);
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)35));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,mumble_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_number_24) {
  P port_,x_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_char_literal_25) {
  P port_,x_;
  P probeF3866;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T3 = CALL1(1,VARREF(YgooSioSwriteYcharacter_name),x_);
  probeF3866 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_51));
  if (probeF3866 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,probeF3866);
    T0 = T1;
  } else {
    T2 = CALL2(1,VARREF(YgooSioSportYput),port_,x_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_character_name_26) {
  P char_;
  P assocF3867;
  P T0,T1,T2;
LINK_STACK();
  ARG(char_, 0);
  T2 = CALL3(1,VARREF(YgooScolsSlstYassqn),char_,VARREF(YgooSioSreadYDchar_long_names),YPint((P)1));
  assocF3867 = T2;
  if (assocF3867 != YPfalse) {
    T1 = CALL1(1,VARREF(YgooSmacrosY1st),assocF3867);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_string_literal_27) {
  P port_,x_;
  P tmpF3871;
  P cF3870;
  P iF3869;
  P lenF3868;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
  T10 = CALL1(1,VARREF(YgooStypesYlen),x_);
  lenF3868 = T10;
  iF3869 = YPint((P)0);
  LOOP_159: {
    P a159_0;
    T1 = CALL2(1,VARREF(YgooSlogYE),iF3869,lenF3868);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
      T0 = T2;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYelt),x_,iF3869);
      cF3870 = T9;
      T5 = CALL2(1,VARREF(YgooSlogYE),cF3870,YPchr((P)92));
      tmpF3871 = T5;
      if (tmpF3871 != YPfalse) {
        T3 = tmpF3871;
      } else {
        T4 = CALL2(1,VARREF(YgooSlogYE),cF3870,YPchr((P)34));
        T3 = T4;
      }
      if (T3 != YPfalse) {
        T6 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)92));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYput),port_,cF3870);
      T8 = CALL2(1,VARREF(YgooSmathYA),iF3869,YPint((P)1));
      a159_0 = T8;
      iF3869 = a159_0;
      goto LOOP_159;
      T0 = T7;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_list_28) {
  P port_,x_,d_,recur_;
  P nF3873;
  P lF3872;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
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
    T16 = CALL1(1,VARREF(Ytail),x_);
    lF3872 = T16;
    nF3873 = YPint((P)1);
    LOOP_160: {
      P a160_0,a160_1;
      T8 = CALL1(1,VARREF(YgooSmacrosYnulQ),lF3872);
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSmagYGE),nF3873,DYNREF(YgooSioSwriteYTmax_print_lengthT));
        if (T10 != YPfalse) {
          T11 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_58));
          T9 = T11;
        } else {
          CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
          T12 = CALL1(1,VARREF(Yhead),lF3872);
          CALL2(0,recur_,T12,d_);
          T14 = CALL1(1,VARREF(Ytail),lF3872);
          T15 = CALL2(1,VARREF(YgooSmathYA),nF3873,YPint((P)1));
          a160_0 = T14;
          a160_1 = T15;
          lF3872 = a160_0;
          nF3873 = a160_1;
          goto LOOP_160;
          T9 = T13;
        }
        T6 = T9;
      } else {
        T6 = YPfalse;
      }
    }
    T17 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
    T0 = T17;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_quotationQ_29) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),x_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_61));
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(Ytail),x_);
      T6 = CALL2(1,VARREF(YisaQ),T7,VARREF(YLlstG));
      if (T6 != YPfalse) {
        T10 = CALL1(1,VARREF(Ytail),x_);
        T9 = CALL1(1,VARREF(Ytail),T10);
        T8 = CALL1(1,VARREF(YgooSmacrosYnulQ),T9);
        T5 = T8;
      } else {
        T5 = YPfalse;
      }
      T2 = T5;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_write_flat_30) {
  P port_,prefix_,x_,suffix_,d_,recur_;
  P iF3875;
  P zF3874;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(port_, 0);
  ARG(prefix_, 1);
  ARG(x_, 2);
  ARG(suffix_, 3);
  ARG(d_, 4);
  ARG(recur_, 5);
  CALL2(1,VARREF(YgooSioSportYputs),port_,prefix_);
  T12 = CALL1(1,VARREF(YgooStypesYlen),x_);
  zF3874 = T12;
  T0 = CALL2(1,VARREF(YgooSmagYG),zF3874,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T1,d_);
    iF3875 = YPint((P)1);
    LOOP_161: {
      P a161_0;
      T3 = CALL2(1,VARREF(YgooSmagYGE),iF3875,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T3 != YPfalse) {
        T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_64));
        T2 = T4;
      } else {
        T7 = CALL2(1,VARREF(YgooSmagYGE),iF3875,zF3874);
        T6 = CALL1(1,VARREF(Ynot),T7);
        if (T6 != YPfalse) {
          CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
          T8 = CALL2(1,VARREF(YgooSmacrosYelt),x_,iF3875);
          CALL2(1,recur_,T8,d_);
          T10 = CALL2(1,VARREF(YgooSmathYA),iF3875,YPint((P)1));
          a161_0 = T10;
          iF3875 = a161_0;
          goto LOOP_161;
          T5 = T9;
        } else {
          T5 = YPfalse;
        }
        T2 = T5;
      }
    }
  } else {
  }
  T11 = CALL2(1,VARREF(YgooSioSportYputs),port_,suffix_);
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_31) {
  P blow_;
  P valF3882;
  P keyF3881;
  P tup30F3880;
  P iF3879;
  P tmpF3878;
  P x_1449F3877;
  P x_1450F3876;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(blow_, 0);
  T17 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
  x_1450F3876 = T16;
  T18 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(0));
  x_1449F3877 = T18;
  LOOP_162: {
    P a162_0,a162_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1450F3876);
    tmpF3878 = T4;
    if (tmpF3878 != YPfalse) {
      T2 = tmpF3878;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1449F3877);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1450F3876);
      iF3879 = T15;
      T13 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1449F3877);
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1449F3877);
      T12 = CALL2(1,VARREF(Ytup),T13,T14);
      tup30F3880 = T12;
      T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F3880,YPint((P)0));
      keyF3881 = T11;
      T10 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F3880,YPint((P)1));
      valF3882 = T10;
      T5 = CALL2(1,VARREF(YgooSmagYGE),iF3879,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T5 != YPfalse) {
        CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_69));
        T6 = CALL1(0,blow_,YPfalse);
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)32));
      CALL2(0,FREEREF(3),keyF3881,FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_70));
      CALL2(0,FREEREF(3),valF3882,FREEREF(2));
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1450F3876);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1449F3877);
      a162_0 = T8;
      a162_1 = T9;
      x_1450F3876 = a162_0;
      x_1449F3877 = a162_1;
      goto LOOP_162;
      T0 = T7;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_map_32) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_67));
  T1 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_31,4,x_,port_,d_,recur_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)62));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_recurring_write_33) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(YgooSioSportYport_filename),x_);
  T2 = CALL1(1,VARREF(YgooSioSportYport_line),x_);
  T0 = CALL4(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_72),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_34) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(YgooSioSportYport_filename),x_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_74),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_35) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_76));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_36) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_78));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_37) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_38) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_write_params_39) {
  P port_,x_,recur_;
  P tmpF3894;
  P valueF3893;
  P iF3892;
  P specF3891;
  P firstQF3890;
  P tmpF3889;
  P tmpF3888;
  P x_1452F3887;
  P x_1453F3886;
  P x_1454F3885;
  P namesF3884;
  P namesF3883;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
  T37 = CALL1(1,VARREF(YgooSfunYfun_names),x_);
  namesF3883 = T37;
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
  T36 = CALL1(1,VARREF(YgooSfunYfun_names),x_);
  namesF3884 = T36;
  T23 = fun_37;
  T24 = fun_38;
  T22 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T23,T24);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_1454F3885 = T21;
  T26 = CALL1(1,VARREF(YgooSfunYfun_specs),x_);
  T25 = CALL1(1,VARREF(YgooScolsScolYenum),T26);
  x_1453F3886 = T25;
  T28 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
  x_1452F3887 = T27;
  LOOP_163: {
    P a163_0,a163_1,a163_2;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1454F3885);
    tmpF3888 = T6;
    if (tmpF3888 != YPfalse) {
      T2 = tmpF3888;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1453F3886);
      tmpF3889 = T5;
      if (tmpF3889 != YPfalse) {
        T3 = tmpF3889;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1452F3887);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_1454F3885);
      firstQF3890 = T20;
      T19 = CALL1(1,VARREF(YgooScolsScolYnow),x_1453F3886);
      specF3891 = T19;
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_1452F3887);
      iF3892 = T18;
      T7 = CALL1(1,VARREF(Ynot),firstQF3890);
      if (T7 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
      } else {
      }
      T9 = CALL1(1,VARREF(YgooSmacrosYnulQ),namesF3884);
      if (T9 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,specF3891);
      } else {
        T12 = CALL2(1,VARREF(YgooSmacrosYelt),namesF3884,iF3892);
        T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T12);
        CALL3(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_83),T11);
        CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,specF3891);
        T13 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
      }
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1454F3885);
      T16 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1453F3886);
      T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1452F3887);
      a163_0 = T15;
      a163_1 = T16;
      a163_2 = T17;
      x_1454F3885 = a163_0;
      x_1453F3886 = a163_1;
      x_1452F3887 = a163_2;
      goto LOOP_163;
      T0 = T14;
    } else {
      T0 = YPfalse;
    }
  }
  T35 = CALL1(1,VARREF(YgooSfunYfun_val),x_);
  valueF3893 = T35;
  T32 = CALL1(1,VARREF(Ynot),valueF3893);
  tmpF3894 = T32;
  if (tmpF3894 != YPfalse) {
    T30 = tmpF3894;
  } else {
    T31 = CALL2(1,VARREF(YgooSmacrosYEE),valueF3893,VARREF(YLanyG));
    T30 = T31;
  }
  T29 = CALL1(1,VARREF(Ynot),T30);
  if (T29 != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_84));
    T33 = CALL2(1,VARREF(YgooSioSwriteYwrite_value_type),port_,valueF3893);
  } else {
  }
  T34 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
UNLINK_STACK();
  QRET(T34);
}

LOCCODEDEF(fun_write_fun_guts_40) {
  P port_,x_,name_,recur_;
  P nameF3895;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(name_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_87));
  CALL2(1,VARREF(YgooSioSportYputs),port_,name_);
  T3 = CALL1(1,VARREF(YgooSfunYfun_name),x_);
  nameF3895 = T3;
  if (nameF3895 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
    T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF3895);
    T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
  CALL3(1,VARREF(YgooSioSwriteYwrite_params),port_,x_,recur_);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_88));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_recurring_write_41) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_90),recur_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_42) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_92),recur_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_43) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(Ysrc_loc_line),x_);
  T2 = CALL1(1,VARREF(Ysrc_loc_file),x_);
  T0 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_94),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_44) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_96));
  T1 = CALL1(1,VARREF(Yclass_name),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
  CALL2(1,VARREF(YgooSioSportYputs),port_,T0);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_97));
  T3 = CALL1(1,VARREF(Yclass_parents),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yclass_name),T3);
  CALL2(1,recur_,T2,d_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_98));
UNLINK_STACK();
  QRET(T4);
}

LOCCODEDEF(fun_recurring_write_45) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_100));
  T0 = CALL1(1,VARREF(Ytype_object),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_101));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_recurring_write_46) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_103));
  T0 = CALL1(1,VARREF(Ytype_class),x_);
  CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_104));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_47) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_48) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_106));
  T0 = FUNFAB(fun_47,1,port_);
  T1 = CALL1(1,VARREF(Yunion_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_108));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_49) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_50) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_110));
  T0 = FUNFAB(fun_49,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_112));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_51) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_value_type_52) {
  P port_,x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_115));
  T0 = FUNFAB(fun_51,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_117));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_write_value_type_53) {
  P port_,x_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_type_54) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T2 = CALL1(1,VARREF(Yclass_name),x_);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_type_55) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recur_56) {
  P x_,d_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write_type),FREEREF(0),x_,d_,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_type_57) {
  P port_,x_;
  P recurF3896;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_56,2);
  recurF3896 = T1;
  FUNINIT(recurF3896, 2,port_,recurF3896);
  T0 = CALL2(1,recurF3896,x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_58) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_126));
  T0 = CALL1(1,VARREF(Yprop_getter),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_127));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_59) {
  P getterF3902;
  P propF3901;
  P iF3900;
  P tmpF3899;
  P x_1457F3898;
  P x_1458F3897;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  VARSET(YgooSclassYTreport_prop_unbound_errorsQT,YPfalse);
  T16 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
  x_1458F3897 = T15;
  T18 = CALL1(1,VARREF(Yprops_of),FREEREF(0));
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_1457F3898 = T17;
  LOOP_164: {
    P a164_0,a164_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1458F3897);
    tmpF3899 = T4;
    if (tmpF3899 != YPfalse) {
      T2 = tmpF3899;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1457F3898);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1458F3897);
      iF3900 = T14;
      T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1457F3898);
      propF3901 = T13;
      T5 = CALL2(1,VARREF(YgooSmagYGE),iF3900,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T5 != YPfalse) {
        CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_131));
        T6 = CALL1(1,FREEREF(2),YPfalse);
      } else {
      }
      T12 = CALL1(1,VARREF(Yprop_getter),propF3901);
      getterF3902 = T12;
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)32));
      T7 = CALL1(1,VARREF(YgooSfunYfun_name),getterF3902);
      CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T7);
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_132));
      T8 = CALL1(1,getterF3902,FREEREF(0));
      CALL2(0,FREEREF(4),T8,FREEREF(3));
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1458F3897);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1457F3898);
      a164_0 = T10;
      a164_1 = T11;
      x_1458F3897 = a164_0;
      x_1457F3898 = a164_1;
      goto LOOP_164;
      T0 = T9;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_60) {
  P T0;
LINK_STACK();
  T0 = VARSET(YgooSclassYTreport_prop_unbound_errorsQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_61) {
  P blow_;
  P x_1456F3903;
  P T0,T1,T2;
LINK_STACK();
  ARG(blow_, 0);
  x_1456F3903 = VARREF(YgooSclassYTreport_prop_unbound_errorsQT);
  T1 = FUNFAB(fun_59,5,FREEREF(0),FREEREF(1),blow_,FREEREF(2),FREEREF(3));
  T2 = FUNFAB(fun_60,1,x_1456F3903);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_62) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_129));
  T1 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_61,4,x_,port_,d_,recur_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_133));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_recurring_write_63) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_135));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_arg_64) {
  P char_,class_;
  P tmpF3906;
  P argumentF3905;
  P current_indexF3904;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
  T11 = BOXGET(FREEREF(0));
  current_indexF3904 = T11;
  T1 = BOXGET(FREEREF(0));
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)1));
  BOXPUT(T0,FREEREF(0));
  T3 = CALL2(1,VARREF(YgooSmagYL),current_indexF3904,FREEREF(1));
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T4 = CALL3(1,VARREF(Yassert_error),LITREF(lit_140),FREEREF(2),FREEREF(3));
  } else {
  }
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),current_indexF3904);
  argumentF3905 = T10;
  T8 = CALL2(1,VARREF(YgooSmacrosYEE),class_,VARREF(YLanyG));
  tmpF3906 = T8;
  if (tmpF3906 != YPfalse) {
    T6 = tmpF3906;
  } else {
    T7 = CALL2(1,VARREF(YisaQ),argumentF3905,class_);
    T6 = T7;
  }
  T5 = CALL1(1,VARREF(Ynot),T6);
  if (T5 != YPfalse) {
    T9 = CALL4(1,VARREF(Yassert_error),LITREF(lit_141),char_,class_,argumentF3905);
  } else {
  }
UNLINK_STACK();
  QRET(argumentF3905);
}

LOCCODEDEF(fun_65) {
  P c_;
  P x_1461F3908;
  P x_1460F3907;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
LINK_STACK();
  ARG(c_, 0);
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T42 = CALL1(1,VARREF(YgooSchrYto_upper),c_);
    x_1460F3907 = T42;
    x_1461F3908 = VARREF(YgooSmacrosYEE);
    T3 = CALL2(1,x_1461F3908,x_1460F3907,YPchr((P)68));
    if (T3 != YPfalse) {
      T6 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T5);
      T2 = T4;
    } else {
      T8 = CALL2(1,x_1461F3908,x_1460F3907,YPchr((P)66));
      if (T8 != YPfalse) {
        T11 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T10 = CALL2(1,VARREF(YgooSmathYnum_to_str),T11,YPint((P)2));
        T9 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T10);
        T7 = T9;
      } else {
        T13 = CALL2(1,x_1461F3908,x_1460F3907,YPchr((P)79));
        if (T13 != YPfalse) {
          T16 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T15 = CALL2(1,VARREF(YgooSmathYnum_to_str),T16,YPint((P)8));
          T14 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T15);
          T12 = T14;
        } else {
          T18 = CALL2(1,x_1461F3908,x_1460F3907,YPchr((P)88));
          if (T18 != YPfalse) {
            T21 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T20 = CALL2(1,VARREF(YgooSmathYnum_to_str),T21,YPint((P)16));
            T19 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T20);
            T17 = T19;
          } else {
            T23 = CALL2(1,x_1461F3908,x_1460F3907,YPchr((P)67));
            if (T23 != YPfalse) {
              T25 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T24 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),T25);
              T22 = T24;
            } else {
              T27 = CALL2(1,x_1461F3908,x_1460F3907,YPchr((P)83));
              if (T27 != YPfalse) {
                T29 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T28 = CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T29);
                T26 = T28;
              } else {
                T31 = CALL2(1,x_1461F3908,x_1460F3907,YPchr((P)61));
                if (T31 != YPfalse) {
                  T33 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T32 = CALL2(1,VARREF(YgooSioSwriteYwrite),FREEREF(1),T33);
                  T30 = T32;
                } else {
                  T35 = CALL2(1,x_1461F3908,x_1460F3907,YPchr((P)84));
                  if (T35 != YPfalse) {
                    T37 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                    T36 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(1),T37);
                    T34 = T36;
                  } else {
                    T39 = CALL2(1,x_1461F3908,x_1460F3907,YPchr((P)37));
                    if (T39 != YPfalse) {
                      T40 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)37));
                      T38 = T40;
                    } else {
                      T41 = CALL3(1,VARREF(Yerror),LITREF(lit_143),c_,FREEREF(3));
                      T38 = T41;
                    }
                    T34 = T38;
                  }
                  T30 = T34;
                }
                T26 = T30;
              }
              T22 = T26;
            }
            T17 = T22;
          }
          T12 = T17;
        }
        T7 = T12;
      }
      T2 = T7;
    }
    T43 = BOXPUT(YPfalse,FREEREF(0));
    T0 = T43;
  } else {
    T45 = CALL2(1,VARREF(YgooSmacrosYEE),c_,YPchr((P)37));
    if (T45 != YPfalse) {
      T46 = BOXPUT(YPtrue,FREEREF(0));
      T44 = T46;
    } else {
      T47 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),c_);
      T44 = T47;
    }
    T0 = T44;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_msg_66) {
  P port_,message_,arguments_;
  P argF3912;
  P num_argumentsF3911;
  P argument_indexF3910;
  P found_percentQF3909;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
  found_percentQF3909 = YPfalse;
  found_percentQF3909 = BOXFAB(found_percentQF3909);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF3910 = YPint((P)0);
  argument_indexF3910 = BOXFAB(argument_indexF3910);
  T10 = CALL1(1,VARREF(YgooStypesYlen),arguments_);
  num_argumentsF3911 = T10;
  T4 = FUNSHELL(1,fun_arg_64,4);
  argF3912 = T4;
  FUNINIT(argF3912, 4,argument_indexF3910,num_argumentsF3911,message_,arguments_);
  T3 = FUNFAB(fun_65,4,found_percentQF3909,port_,argF3912,message_);
  T2 = CALL2(1,VARREF(YgooSmacrosYdo),T3,message_);
  T8 = BOXGET(found_percentQF3909);
  T7 = CALL1(1,VARREF(Ynot),T8);
  T6 = CALL1(1,VARREF(Ynot),T7);
  if (T6 != YPfalse) {
    T9 = CALL2(1,VARREF(Yassert_error),LITREF(lit_144),message_);
    T5 = T9;
  } else {
    T5 = YPfalse;
  }
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_post_67) {
  P message_,arguments_;
  P T0;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
  T0 = CALL5(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg),YPfalse,VARREF(YgooSioSportYout),message_,arguments_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_maybe_pack_chars_68) {
  P UF3913;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  T2 = CALL1(1,VARREF(YgooSmacrosYnulQ),FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = BOXGET(FREEREF(1));
    UF3913 = T10;
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
    T7 = CALL1(1,VARREF(Ylst),FREEREF(2));
    T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),FREEREF(0));
    T8 = CALL1(1,VARREF(Ylst),T9);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T8,LITREF(lit_151));
    T4 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3913,T5);
    T3 = BOXPUT(T4,FREEREF(1));
    T11 = CALL1(1,VARREF(YgooScolsScolxYzapX),FREEREF(0));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_arg_69) {
  P char_;
  P current_indexF3914;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(char_, 0);
  CALL0(1,FREEREF(0));
  T6 = BOXGET(FREEREF(1));
  current_indexF3914 = T6;
  T1 = BOXGET(FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)1));
  BOXPUT(T0,FREEREF(1));
  T3 = CALL2(1,VARREF(YgooSmagYL),current_indexF3914,FREEREF(2));
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T4 = CALL3(1,VARREF(Yassert_error),LITREF(lit_153),FREEREF(3),FREEREF(4));
  } else {
  }
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(4),current_indexF3914);
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_70) {
  P c_;
  P UF3924;
  P UF3923;
  P UF3922;
  P UF3921;
  P UF3920;
  P UF3919;
  P UF3918;
  P UF3917;
  P x_1463F3916;
  P x_1462F3915;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106;
LINK_STACK();
  ARG(c_, 0);
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T101 = CALL1(1,VARREF(YgooSchrYto_upper),c_);
    x_1462F3915 = T101;
    x_1463F3916 = VARREF(YgooSmacrosYEE);
    T3 = CALL2(1,x_1463F3916,x_1462F3915,YPchr((P)68));
    if (T3 != YPfalse) {
      T14 = BOXGET(FREEREF(1));
      UF3917 = T14;
      T7 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
      T8 = CALL1(1,VARREF(Ylst),FREEREF(2));
      T11 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
      T13 = CALL1(1,FREEREF(3),c_);
      T12 = CALL1(1,VARREF(Ylst),T13);
      T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,LITREF(lit_151));
      T9 = CALL1(1,VARREF(Ylst),T10);
      T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T9,LITREF(lit_151));
      T5 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3917,T6);
      T4 = BOXPUT(T5,FREEREF(1));
      T2 = T4;
    } else {
      T16 = CALL2(1,x_1463F3916,x_1462F3915,YPchr((P)66));
      if (T16 != YPfalse) {
        T28 = BOXGET(FREEREF(1));
        UF3918 = T28;
        T20 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
        T21 = CALL1(1,VARREF(Ylst),FREEREF(2));
        T24 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
        T26 = CALL1(1,FREEREF(3),c_);
        T25 = CALL1(1,VARREF(Ylst),T26);
        T27 = CALL1(1,VARREF(Ylst),YPint((P)2));
        T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,LITREF(lit_151));
        T22 = CALL1(1,VARREF(Ylst),T23);
        T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T22,LITREF(lit_151));
        T18 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3918,T19);
        T17 = BOXPUT(T18,FREEREF(1));
        T15 = T17;
      } else {
        T30 = CALL2(1,x_1463F3916,x_1462F3915,YPchr((P)79));
        if (T30 != YPfalse) {
          T42 = BOXGET(FREEREF(1));
          UF3919 = T42;
          T34 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
          T35 = CALL1(1,VARREF(Ylst),FREEREF(2));
          T38 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
          T40 = CALL1(1,FREEREF(3),c_);
          T39 = CALL1(1,VARREF(Ylst),T40);
          T41 = CALL1(1,VARREF(Ylst),YPint((P)8));
          T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T41,LITREF(lit_151));
          T36 = CALL1(1,VARREF(Ylst),T37);
          T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T36,LITREF(lit_151));
          T32 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3919,T33);
          T31 = BOXPUT(T32,FREEREF(1));
          T29 = T31;
        } else {
          T44 = CALL2(1,x_1463F3916,x_1462F3915,YPchr((P)88));
          if (T44 != YPfalse) {
            T56 = BOXGET(FREEREF(1));
            UF3920 = T56;
            T48 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
            T49 = CALL1(1,VARREF(Ylst),FREEREF(2));
            T52 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
            T54 = CALL1(1,FREEREF(3),c_);
            T53 = CALL1(1,VARREF(Ylst),T54);
            T55 = CALL1(1,VARREF(Ylst),YPint((P)16));
            T51 = CALL4(1,VARREF(YgooSmacrosYcat),T52,T53,T55,LITREF(lit_151));
            T50 = CALL1(1,VARREF(Ylst),T51);
            T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,LITREF(lit_151));
            T46 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3920,T47);
            T45 = BOXPUT(T46,FREEREF(1));
            T43 = T45;
          } else {
            T58 = CALL2(1,x_1463F3916,x_1462F3915,YPchr((P)67));
            if (T58 != YPfalse) {
              T66 = BOXGET(FREEREF(1));
              UF3921 = T66;
              T62 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
              T63 = CALL1(1,VARREF(Ylst),FREEREF(2));
              T65 = CALL2(1,FREEREF(3),c_,VARREF(YLchrG));
              T64 = CALL1(1,VARREF(Ylst),T65);
              T61 = CALL4(1,VARREF(YgooSmacrosYcat),T62,T63,T64,LITREF(lit_151));
              T60 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3921,T61);
              T59 = BOXPUT(T60,FREEREF(1));
              T57 = T59;
            } else {
              T68 = CALL2(1,x_1463F3916,x_1462F3915,YPchr((P)83));
              if (T68 != YPfalse) {
                T76 = BOXGET(FREEREF(1));
                UF3922 = T76;
                T72 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
                T73 = CALL1(1,VARREF(Ylst),FREEREF(2));
                T75 = CALL1(1,FREEREF(3),c_);
                T74 = CALL1(1,VARREF(Ylst),T75);
                T71 = CALL4(1,VARREF(YgooSmacrosYcat),T72,T73,T74,LITREF(lit_151));
                T70 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3922,T71);
                T69 = BOXPUT(T70,FREEREF(1));
                T67 = T69;
              } else {
                T78 = CALL2(1,x_1463F3916,x_1462F3915,YPchr((P)61));
                if (T78 != YPfalse) {
                  T86 = BOXGET(FREEREF(1));
                  UF3923 = T86;
                  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
                  T83 = CALL1(1,VARREF(Ylst),FREEREF(2));
                  T85 = CALL1(1,FREEREF(3),c_);
                  T84 = CALL1(1,VARREF(Ylst),T85);
                  T81 = CALL4(1,VARREF(YgooSmacrosYcat),T82,T83,T84,LITREF(lit_151));
                  T80 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3923,T81);
                  T79 = BOXPUT(T80,FREEREF(1));
                  T77 = T79;
                } else {
                  T88 = CALL2(1,x_1463F3916,x_1462F3915,YPchr((P)84));
                  if (T88 != YPfalse) {
                    T96 = BOXGET(FREEREF(1));
                    UF3924 = T96;
                    T92 = CALL1(1,VARREF(Ylst),LITREF(lit_122));
                    T93 = CALL1(1,VARREF(Ylst),FREEREF(2));
                    T95 = CALL1(1,FREEREF(3),c_);
                    T94 = CALL1(1,VARREF(Ylst),T95);
                    T91 = CALL4(1,VARREF(YgooSmacrosYcat),T92,T93,T94,LITREF(lit_151));
                    T90 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3924,T91);
                    T89 = BOXPUT(T90,FREEREF(1));
                    T87 = T89;
                  } else {
                    T98 = CALL2(1,x_1463F3916,x_1462F3915,YPchr((P)37));
                    if (T98 != YPfalse) {
                      T99 = CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(4),YPchr((P)37));
                      T97 = T99;
                    } else {
                      T100 = CALL3(1,VARREF(Yerror),LITREF(lit_157),c_,FREEREF(5));
                      T97 = T100;
                    }
                    T87 = T97;
                  }
                  T77 = T87;
                }
                T67 = T77;
              }
              T57 = T67;
            }
            T43 = T57;
          }
          T29 = T43;
        }
        T15 = T29;
      }
      T2 = T15;
    }
    T102 = BOXPUT(YPfalse,FREEREF(0));
    T0 = T102;
  } else {
    T104 = CALL2(1,VARREF(YgooSmacrosYEE),c_,YPchr((P)37));
    if (T104 != YPfalse) {
      T105 = BOXPUT(YPtrue,FREEREF(0));
      T103 = T105;
    } else {
      T106 = CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(4),c_);
      T103 = T106;
    }
    T0 = T103;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSwriteYpe_msg) {
  P port_expr_,message_,args_;
  P exprsF3933;
  P argF3932;
  P maybe_pack_charsF3931;
  P packer_F3930;
  P portF3929;
  P charsF3928;
  P num_argsF3927;
  P arg_indexF3926;
  P found_percentQF3925;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
  found_percentQF3925 = YPfalse;
  found_percentQF3925 = BOXFAB(found_percentQF3925);
  check_type(YPint((P)0),VARREF(YLintG));
  arg_indexF3926 = YPint((P)0);
  arg_indexF3926 = BOXFAB(arg_indexF3926);
  T24 = CALL1(1,VARREF(YgooStypesYlen),args_);
  num_argsF3927 = T24;
  T23 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  charsF3928 = T23;
  T22 = CALL0(1,VARREF(YgooSmacrosYgensym));
  portF3929 = T22;
  T21 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F3930 = T21;
  packer_F3930 = BOXFAB(packer_F3930);
  T17 = FUNSHELL(1,fun_maybe_pack_chars_68,3);
  maybe_pack_charsF3931 = T17;
  T18 = FUNSHELL(1,fun_arg_69,5);
  argF3932 = T18;
  FUNINIT(maybe_pack_charsF3931, 3,charsF3928,packer_F3930,portF3929);
  FUNINIT(argF3932, 5,maybe_pack_charsF3931,arg_indexF3926,num_argsF3927,message_,args_);
  T15 = FUNFAB(fun_70,6,found_percentQF3925,packer_F3930,portF3929,argF3932,charsF3928,message_);
  CALL2(1,VARREF(YgooSmacrosYdo),T15,message_);
  T16 = CALL0(1,maybe_pack_charsF3931);
  T20 = BOXGET(packer_F3930);
  T19 = CALL1(1,VARREF(YgooSpackerYpacker_res),T20);
  exprsF3933 = T19;
  T4 = BOXGET(found_percentQF3925);
  T3 = CALL1(1,VARREF(Ynot),T4);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T5 = CALL2(1,VARREF(Yassert_error),LITREF(lit_158),message_);
  } else {
  }
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
  T12 = CALL1(1,VARREF(Ylst),portF3929);
  T13 = CALL1(1,VARREF(Ylst),port_expr_);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T13,LITREF(lit_151));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T9 = CALL2(1,VARREF(YgooSmacrosYcat),T10,LITREF(lit_151));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,exprsF3933,LITREF(lit_151));
UNLINK_STACK();
  QRET(T6);
}

LOCCODEDEF(fun_x_1467_72) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_164),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_73) {
  P return_;
  P x_1466F3944;
  P x_1466F3943;
  P x_1466F3942;
  P x_1466F3941;
  P x_1466F3940;
  P x_1466F3939;
  P argsF3938;
  P messageF3937;
  P portF3936;
  P x_1466F3935;
  P x_1467F3934;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(return_, 0);
  T28 = FUNSHELL(0,fun_x_1467_72,2);
  x_1467F3934 = T28;
  FUNINIT(x_1467F3934, 2,FREEREF(0),return_);
  x_1466F3935 = FREEREF(0);
  portF3936 = YPfalse;
  messageF3937 = YPfalse;
  argsF3938 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1466F3935,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1466F3935,LITREF(lit_164),x_1467F3934);
    x_1466F3939 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1466F3939,x_1467F3934);
    portF3936 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1466F3939);
    x_1466F3940 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1466F3940,x_1467F3934);
    messageF3937 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1466F3940);
    x_1466F3941 = T9;
    argsF3938 = x_1466F3941;
    x_1466F3942 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1466F3942,x_1467F3934);
    x_1466F3943 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1466F3943,x_1467F3934);
    T7 = CALL1(1,VARREF(Ytail),x_1466F3942);
    x_1466F3944 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1466F3944,x_1467F3934);
  } else {
    T13 = CALL2(1,x_1467F3934,LITREF(lit_165),x_1466F3935);
  }
  T16 = messageF3937;
  T15 = CALL2(1,VARREF(YisaQ),T16,VARREF(YLstrG));
  if (T15 != YPfalse) {
    T18 = portF3936;
    T19 = messageF3937;
    T20 = argsF3938;
    T17 = CALL3(1,VARREF(YgooSioSwriteYpe_msg),T18,T19,T20);
    T14 = T17;
  } else {
    T22 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
    T24 = portF3936;
    T23 = CALL1(1,VARREF(Ylst),T24);
    T26 = messageF3937;
    T25 = CALL1(1,VARREF(Ylst),T26);
    T27 = argsF3938;
    T21 = CALL5(1,VARREF(YgooSmacrosYcat),T22,T23,T25,T27,LITREF(lit_151));
    T14 = T21;
  }
UNLINK_STACK();
  QRET(T14);
}

LOCCODEDEF(fun_74) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_73,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_75) {
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_14));
  BOXPUT(T0,FREEREF(0));
  T1 = BOXGET(FREEREF(0));
  CALL5(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg),YPfalse,T1,FREEREF(1),FREEREF(2));
  T3 = BOXGET(FREEREF(0));
  T2 = CALL1(1,VARREF(YgooSioSportYport_contents),T3);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_76) {
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

FUNCODEDEF(YgooSconditionsYmsg_to_str) {
  P message_,arguments_;
  P portF3945;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
  portF3945 = YPfalse;
  portF3945 = BOXFAB(portF3945);
  T2 = FUNFAB(fun_75,3,portF3945,message_,arguments_);
  T3 = FUNFAB(fun_76,1,portF3945);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  RET(T1);
}

FUNCODEDEF(YgooSioSwriteYsay) {
  P port_,args_;
  P iF3947;
  P limF3946;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  NARGS(args_, 1);
  T7 = CALL1(1,VARREF(YgooStypesYlen),args_);
  limF3946 = T7;
  iF3947 = YPint((P)0);
  LOOP_165: {
    P a165_0;
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),iF3947,limF3946);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooScolsScolYlow_elt),args_,iF3947);
      T3 = CALL1(1,VARREF(YgooSanyYto_str),T4);
      CALL2(1,VARREF(YgooSioSportYputs),port_,T3);
      T6 = CALL2(1,VARREF(YgooSmathYA),iF3947,YPint((P)1));
      a165_0 = T6;
      iF3947 = a165_0;
      goto LOOP_165;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
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
  P T128,T129,T130,T131;
DEFCREGS();
  DYNDEFSET(YgooSioSwriteYTmax_print_depthT,YPint((P)4));
  DYNDEFSET(YgooSioSwriteYTmax_print_lengthT,YPint((P)12));
  lit_0 = YPPsym((P)"as-binding-name");
  lit_1 = YPPlist(1,YPPsym((P)"name"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_binding_name_0 = YPfab_met(FUNCODEREF(fun_as_binding_name_0),T0,LITREF(lit_0),LITREF(lit_1),sloc(27),YPfalse);
  T2 = VARREF_OR(YgooSioSwriteYas_binding_name,YPfalse);
  T3 = fun_as_binding_name_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSioSwriteYas_binding_name,T1);
  lit_2 = YPPsym((P)"do-emit");
  lit_3 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T4 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_1 = YPfab_met(FUNCODEREF(fun_do_emit_1),T4,LITREF(lit_2),LITREF(lit_3),sloc(30),YPfalse);
  T6 = VARREF_OR(YgooSioSwriteYdo_emit,YPfalse);
  T7 = fun_do_emit_1;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooSioSwriteYdo_emit,T5);
  lit_4 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T8 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_2 = YPfab_met(FUNCODEREF(fun_do_emit_2),T8,LITREF(lit_2),LITREF(lit_4),sloc(33),YPfalse);
  T10 = VARREF_OR(YgooSioSwriteYdo_emit,YPfalse);
  T11 = fun_do_emit_2;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooSioSwriteYdo_emit,T9);
  lit_5 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T12 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_3 = YPfab_met(FUNCODEREF(fun_do_emit_3),T12,LITREF(lit_2),LITREF(lit_5),sloc(36),YPfalse);
  T14 = VARREF_OR(YgooSioSwriteYdo_emit,YPfalse);
  T15 = fun_do_emit_3;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSioSwriteYdo_emit,T13);
  lit_6 = YPPsym((P)"emit");
  lit_7 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_8 = YPPsym((P)"recur");
  lit_9 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  lit_10 = YPsb((P)"*");
  T17 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_4 = YPfab_met(FUNCODEREF(fun_recur_4),T17,LITREF(lit_8),LITREF(lit_9),sloc(40),YPfalse);
  T16 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_emit_5 = YPfab_met(FUNCODEREF(fun_emit_5),T16,LITREF(lit_6),LITREF(lit_7),sloc(39),YPfalse);
  T19 = VARREF_OR(YgooSioSwriteYemit,YPfalse);
  T20 = fun_emit_5;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YgooSioSwriteYemit,T18);
  lit_11 = YPPsym((P)"write-to-string");
  lit_12 = YPPlist(1,YPPsym((P)"x"));
  lit_13 = Ynil;
  lit_14 = YPsb((P)"");
  T23 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_6 = YPfab_met(FUNCODEREF(fun_6),T23,YPfalse,LITREF(lit_13),sloc(46),YPfalse);
  T22 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_7 = YPfab_met(FUNCODEREF(fun_7),T22,YPfalse,LITREF(lit_13),sloc(46),YPfalse);
  T21 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_write_to_string_8 = YPfab_met(FUNCODEREF(fun_write_to_string_8),T21,LITREF(lit_11),LITREF(lit_12),sloc(45),YPfalse);
  T25 = VARREF_OR(YgooSioSwriteYwrite_to_string,YPfalse);
  T26 = fun_write_to_string_8;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YgooSioSwriteYwrite_to_string,T24);
  lit_15 = YPPsym((P)"write");
  lit_16 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  lit_18 = YPsb((P)"*");
  T28 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_9 = YPfab_met(FUNCODEREF(fun_recur_9),T28,LITREF(lit_8),LITREF(lit_17),sloc(49),YPfalse);
  T27 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_10 = YPfab_met(FUNCODEREF(fun_write_10),T27,LITREF(lit_15),LITREF(lit_16),sloc(48),YPfalse);
  T30 = VARREF_OR(YgooSioSwriteYwrite,YPfalse);
  T31 = fun_write_10;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooSioSwriteYwrite,T29);
  lit_19 = YPPsym((P)"writeln");
  lit_20 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_writeln_11 = YPfab_met(FUNCODEREF(fun_writeln_11),T32,LITREF(lit_19),LITREF(lit_20),sloc(54),YPfalse);
  T34 = VARREF_OR(YgooSioSwriteYwriteln,YPfalse);
  T35 = fun_writeln_11;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSioSwriteYwriteln,T33);
  lit_21 = YPPsym((P)"recurring-write");
  lit_22 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_23 = YPsb((P)"()");
  T36 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_12 = YPfab_met(FUNCODEREF(fun_recurring_write_12),T36,LITREF(lit_21),LITREF(lit_22),sloc(57),YPfalse);
  T38 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T39 = fun_recurring_write_12;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSioSwriteYrecurring_write,T37);
  lit_24 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_25 = YPsb((P)"$$");
  lit_26 = YPsb((P)"(");
  lit_27 = YPsb((P)")");
  T40 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_13 = YPfab_met(FUNCODEREF(fun_recurring_write_13),T40,LITREF(lit_21),LITREF(lit_24),sloc(62),YPfalse);
  T42 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T43 = fun_recurring_write_13;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSioSwriteYrecurring_write,T41);
  lit_28 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_29 = YPsb((P)"#(");
  lit_30 = YPsb((P)")");
  T44 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLtupG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_14 = YPfab_met(FUNCODEREF(fun_recurring_write_14),T44,LITREF(lit_21),LITREF(lit_28),sloc(66),YPfalse);
  T46 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T47 = fun_recurring_write_14;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooSioSwriteYrecurring_write,T45);
  lit_31 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_32 = YPsb((P)"#[");
  lit_33 = YPsb((P)"]");
  T48 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_15 = YPfab_met(FUNCODEREF(fun_recurring_write_15),T48,LITREF(lit_21),LITREF(lit_31),sloc(69),YPfalse);
  T50 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T51 = fun_recurring_write_15;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooSioSwriteYrecurring_write,T49);
  lit_34 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T52 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_16 = YPfab_met(FUNCODEREF(fun_recurring_write_16),T52,LITREF(lit_21),LITREF(lit_34),sloc(72),YPfalse);
  T54 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T55 = fun_recurring_write_16;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSioSwriteYrecurring_write,T53);
  lit_35 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_36 = YPPsym((P)"t");
  lit_37 = YPPsym((P)"f");
  T56 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_17 = YPfab_met(FUNCODEREF(fun_recurring_write_17),T56,LITREF(lit_21),LITREF(lit_35),sloc(75),YPfalse);
  T58 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T59 = fun_recurring_write_17;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YgooSioSwriteYrecurring_write,T57);
  lit_38 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T60 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsymG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_18 = YPfab_met(FUNCODEREF(fun_recurring_write_18),T60,LITREF(lit_21),LITREF(lit_38),sloc(80),YPfalse);
  T62 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T63 = fun_recurring_write_18;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSioSwriteYrecurring_write,T61);
  lit_39 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_40 = YPsb((P)"&0x");
  T64 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlocG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_19 = YPfab_met(FUNCODEREF(fun_recurring_write_19),T64,LITREF(lit_21),LITREF(lit_39),sloc(83),YPfalse);
  T66 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T67 = fun_recurring_write_19;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSioSwriteYrecurring_write,T65);
  lit_41 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_42 = YPsb((P)"<num>");
  T68 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_20 = YPfab_met(FUNCODEREF(fun_recurring_write_20),T68,LITREF(lit_21),LITREF(lit_41),sloc(87),YPfalse);
  T70 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T71 = fun_recurring_write_20;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSioSwriteYrecurring_write,T69);
  lit_43 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T72 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_21 = YPfab_met(FUNCODEREF(fun_recurring_write_21),T72,LITREF(lit_21),LITREF(lit_43),sloc(92),YPfalse);
  T74 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T75 = fun_recurring_write_21;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSioSwriteYrecurring_write,T73);
  lit_44 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T76 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_22 = YPfab_met(FUNCODEREF(fun_recurring_write_22),T76,LITREF(lit_21),LITREF(lit_44),sloc(95),YPfalse);
  T78 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T79 = fun_recurring_write_22;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooSioSwriteYrecurring_write,T77);
  lit_45 = YPPsym((P)"write-boolean");
  lit_46 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"mumble"));
  T80 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_boolean_23 = YPfab_met(FUNCODEREF(fun_write_boolean_23),T80,LITREF(lit_45),LITREF(lit_46),sloc(98),YPfalse);
  T82 = VARREF_OR(YgooSioSwriteYwrite_boolean,YPfalse);
  T83 = fun_write_boolean_23;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooSioSwriteYwrite_boolean,T81);
  lit_47 = YPPsym((P)"write-number");
  lit_48 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T84 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_number_24 = YPfab_met(FUNCODEREF(fun_write_number_24),T84,LITREF(lit_47),LITREF(lit_48),sloc(102),YPfalse);
  T86 = VARREF_OR(YgooSioSwriteYwrite_number,YPfalse);
  T87 = fun_write_number_24;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooSioSwriteYwrite_number,T85);
  lit_49 = YPPsym((P)"write-char-literal");
  lit_50 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_51 = YPsb((P)"#\\");
  T88 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_char_literal_25 = YPfab_met(FUNCODEREF(fun_write_char_literal_25),T88,LITREF(lit_49),LITREF(lit_50),sloc(105),YPfalse);
  T90 = VARREF_OR(YgooSioSwriteYwrite_char_literal,YPfalse);
  T91 = fun_write_char_literal_25;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooSioSwriteYwrite_char_literal,T89);
  lit_52 = YPPsym((P)"character-name");
  lit_53 = YPPlist(1,YPPsym((P)"char"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_character_name_26 = YPfab_met(FUNCODEREF(fun_character_name_26),T92,LITREF(lit_52),LITREF(lit_53),sloc(112),YPfalse);
  T94 = VARREF_OR(YgooSioSwriteYcharacter_name,YPfalse);
  T95 = fun_character_name_26;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YgooSioSwriteYcharacter_name,T93);
  lit_54 = YPPsym((P)"write-string-literal");
  lit_55 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T96 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_string_literal_27 = YPfab_met(FUNCODEREF(fun_write_string_literal_27),T96,LITREF(lit_54),LITREF(lit_55),sloc(116),YPfalse);
  T98 = VARREF_OR(YgooSioSwriteYwrite_string_literal,YPfalse);
  T99 = fun_write_string_literal_27;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooSioSwriteYwrite_string_literal,T97);
  lit_56 = YPPsym((P)"write-list");
  lit_57 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_58 = YPsb((P)" ...");
  T100 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_list_28 = YPfab_met(FUNCODEREF(fun_write_list_28),T100,LITREF(lit_56),LITREF(lit_57),sloc(128),YPfalse);
  T102 = VARREF_OR(YgooSioSwriteYwrite_list,YPfalse);
  T103 = fun_write_list_28;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooSioSwriteYwrite_list,T101);
  lit_59 = YPPsym((P)"quotation?");
  lit_60 = YPPlist(1,YPPsym((P)"x"));
  lit_61 = YPPsym((P)"quote");
  T104 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_quotationQ_29 = YPfab_met(FUNCODEREF(fun_quotationQ_29),T104,LITREF(lit_59),LITREF(lit_60),sloc(143),YPfalse);
  T106 = VARREF_OR(YgooSioSwriteYquotationQ,YPfalse);
  T107 = fun_quotationQ_29;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooSioSwriteYquotationQ,T105);
  lit_62 = YPPsym((P)"write-flat");
  lit_63 = YPPlist(6,YPPsym((P)"port"),YPPsym((P)"prefix"),YPPsym((P)"x"),YPPsym((P)"suffix"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_64 = YPsb((P)" ...");
  T108 = YPfab_sig(YPPlist(6,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLflatG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_write_flat_30 = YPfab_met(FUNCODEREF(fun_write_flat_30),T108,LITREF(lit_62),LITREF(lit_63),sloc(149),YPfalse);
  T110 = VARREF_OR(YgooSioSwriteYwrite_flat,YPfalse);
  T111 = fun_write_flat_30;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YgooSioSwriteYwrite_flat,T109);
  lit_65 = YPPsym((P)"write-map");
  lit_66 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_67 = YPsb((P)"#<");
  lit_68 = YPPlist(1,YPPsym((P)"blow"));
  lit_69 = YPsb((P)" ...");
  lit_70 = YPsb((P)": ");
  T113 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPfab_met(FUNCODEREF(fun_31),T113,YPfalse,LITREF(lit_68),sloc(167),YPfalse);
  T112 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_map_32 = YPfab_met(FUNCODEREF(fun_write_map_32),T112,LITREF(lit_65),LITREF(lit_66),sloc(164),YPfalse);
  T115 = VARREF_OR(YgooSioSwriteYwrite_map,YPfalse);
  T116 = fun_write_map_32;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YgooSioSwriteYwrite_map,T114);
  lit_71 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_72 = YPsb((P)"#{File-in-port %s %d}");
  T117 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLfile_in_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_33 = YPfab_met(FUNCODEREF(fun_recurring_write_33),T117,LITREF(lit_21),LITREF(lit_71),sloc(177),YPfalse);
  T119 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T120 = fun_recurring_write_33;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YgooSioSwriteYrecurring_write,T118);
  lit_73 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_74 = YPsb((P)"#{File-out-port %s}");
  T121 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLfile_out_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_34 = YPfab_met(FUNCODEREF(fun_recurring_write_34),T121,LITREF(lit_21),LITREF(lit_73),sloc(180),YPfalse);
  T123 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T124 = fun_recurring_write_34;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YgooSioSwriteYrecurring_write,T122);
  lit_75 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_76 = YPsb((P)"#{In-port}");
  T127 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLin_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T126 = fun_recurring_write_35 = YPfab_met(FUNCODEREF(fun_recurring_write_35),T127,LITREF(lit_21),LITREF(lit_75),sloc(183),YPfalse);
  T130 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T131 = fun_recurring_write_35;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  T128 = VARSET(YgooSioSwriteYrecurring_write,T129);
  T125 = T128;
  return T125;
}

P YgooSioSwriteY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112;
DEFCREGS();
  lit_77 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_78 = YPsb((P)"#{Out-port}");
  T0 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLout_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_36 = YPfab_met(FUNCODEREF(fun_recurring_write_36),T0,LITREF(lit_21),LITREF(lit_77),sloc(186),YPfalse);
  T2 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T3 = fun_recurring_write_36;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSioSwriteYrecurring_write,T1);
  lit_79 = YPPsym((P)"write-params");
  lit_80 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"recur"));
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  lit_82 = YPPlist(1,YPPsym((P)"x"));
  lit_83 = YPsb((P)"(%s ");
  lit_84 = YPsb((P)" => ");
  T6 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T6,YPfalse,LITREF(lit_81),sloc(195),YPfalse);
  T5 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPfab_met(FUNCODEREF(fun_38),T5,YPfalse,LITREF(lit_82),sloc(195),YPfalse);
  T4 = YPfab_sig(YPPlist(3,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_write_params_39 = YPfab_met(FUNCODEREF(fun_write_params_39),T4,LITREF(lit_79),LITREF(lit_80),sloc(191),YPfalse);
  T8 = VARREF_OR(YgooSioSwriteYwrite_params,YPfalse);
  T9 = fun_write_params_39;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSioSwriteYwrite_params,T7);
  lit_85 = YPPsym((P)"write-fun-guts");
  lit_86 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"name"),YPPsym((P)"recur"));
  lit_87 = YPsb((P)"#{");
  lit_88 = YPsb((P)"}");
  T10 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_fun_guts_40 = YPfab_met(FUNCODEREF(fun_write_fun_guts_40),T10,LITREF(lit_85),LITREF(lit_86),sloc(207),YPfalse);
  T12 = VARREF_OR(YgooSioSwriteYwrite_fun_guts,YPfalse);
  T13 = fun_write_fun_guts_40;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSioSwriteYwrite_fun_guts,T11);
  lit_89 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_90 = YPsb((P)"Gen");
  T14 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLgenG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_41 = YPfab_met(FUNCODEREF(fun_recurring_write_41),T14,LITREF(lit_21),LITREF(lit_89),sloc(217),YPfalse);
  T16 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T17 = fun_recurring_write_41;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooSioSwriteYrecurring_write,T15);
  lit_91 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_92 = YPsb((P)"Met");
  T18 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLmetG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_42 = YPfab_met(FUNCODEREF(fun_recurring_write_42),T18,LITREF(lit_21),LITREF(lit_91),sloc(220),YPfalse);
  T20 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T21 = fun_recurring_write_42;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YgooSioSwriteYrecurring_write,T19);
  lit_93 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_94 = YPsb((P)"<SRC-LOC %= %s>");
  T22 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsrc_locG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_43 = YPfab_met(FUNCODEREF(fun_recurring_write_43),T22,LITREF(lit_21),LITREF(lit_93),sloc(223),YPfalse);
  T24 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T25 = fun_recurring_write_43;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooSioSwriteYrecurring_write,T23);
  lit_95 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_96 = YPsb((P)"#{Class ");
  lit_97 = YPsb((P)" ");
  lit_98 = YPsb((P)"}");
  T26 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_44 = YPfab_met(FUNCODEREF(fun_recurring_write_44),T26,LITREF(lit_21),LITREF(lit_95),sloc(226),YPfalse);
  T28 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T29 = fun_recurring_write_44;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSioSwriteYrecurring_write,T27);
  lit_99 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_100 = YPsb((P)"#{T= ");
  lit_101 = YPsb((P)"}");
  T30 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsingletonG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_45 = YPfab_met(FUNCODEREF(fun_recurring_write_45),T30,LITREF(lit_21),LITREF(lit_99),sloc(233),YPfalse);
  T32 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T33 = fun_recurring_write_45;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooSioSwriteYrecurring_write,T31);
  lit_102 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_103 = YPsb((P)"#{T< ");
  lit_104 = YPsb((P)"}");
  T34 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsubclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_46 = YPfab_met(FUNCODEREF(fun_recurring_write_46),T34,LITREF(lit_21),LITREF(lit_102),sloc(238),YPfalse);
  T36 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T37 = fun_recurring_write_46;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YgooSioSwriteYrecurring_write,T35);
  lit_105 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_106 = YPsb((P)"#{T+");
  lit_107 = YPPlist(1,YPPsym((P)"t"));
  lit_108 = YPsb((P)"}");
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPfab_met(FUNCODEREF(fun_47),T39,YPfalse,LITREF(lit_107),sloc(245),YPfalse);
  T38 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLunionG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_48 = YPfab_met(FUNCODEREF(fun_recurring_write_48),T38,LITREF(lit_21),LITREF(lit_105),sloc(243),YPfalse);
  T41 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T42 = fun_recurring_write_48;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YgooSioSwriteYrecurring_write,T40);
  lit_109 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_110 = YPsb((P)"#{T*");
  lit_111 = YPPlist(1,YPPsym((P)"t"));
  lit_112 = YPsb((P)"}");
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPfab_met(FUNCODEREF(fun_49),T44,YPfalse,LITREF(lit_111),sloc(250),YPfalse);
  T43 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_50 = YPfab_met(FUNCODEREF(fun_recurring_write_50),T43,LITREF(lit_21),LITREF(lit_109),sloc(248),YPfalse);
  T46 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T47 = fun_recurring_write_50;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooSioSwriteYrecurring_write,T45);
  lit_113 = YPPsym((P)"write-value-type");
  lit_114 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_115 = YPsb((P)"(tup");
  lit_116 = YPPlist(1,YPPsym((P)"t"));
  lit_117 = YPsb((P)")");
  T49 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPfab_met(FUNCODEREF(fun_51),T49,YPfalse,LITREF(lit_116),sloc(255),YPfalse);
  T48 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_52 = YPfab_met(FUNCODEREF(fun_write_value_type_52),T48,LITREF(lit_113),LITREF(lit_114),sloc(253),YPfalse);
  T51 = VARREF_OR(YgooSioSwriteYwrite_value_type,YPfalse);
  T52 = fun_write_value_type_52;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YgooSioSwriteYwrite_value_type,T50);
  lit_118 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T53 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_53 = YPfab_met(FUNCODEREF(fun_write_value_type_53),T53,LITREF(lit_113),LITREF(lit_118),sloc(258),YPfalse);
  T55 = VARREF_OR(YgooSioSwriteYwrite_value_type,YPfalse);
  T56 = fun_write_value_type_53;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YgooSioSwriteYwrite_value_type,T54);
  lit_119 = YPPsym((P)"recurring-write-type");
  lit_120 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T57 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_54 = YPfab_met(FUNCODEREF(fun_recurring_write_type_54),T57,LITREF(lit_119),LITREF(lit_120),sloc(261),YPfalse);
  T59 = VARREF_OR(YgooSioSwriteYrecurring_write_type,YPfalse);
  T60 = fun_recurring_write_type_54;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YgooSioSwriteYrecurring_write_type,T58);
  lit_121 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T61 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_55 = YPfab_met(FUNCODEREF(fun_recurring_write_type_55),T61,LITREF(lit_119),LITREF(lit_121),sloc(264),YPfalse);
  T63 = VARREF_OR(YgooSioSwriteYrecurring_write_type,YPfalse);
  T64 = fun_recurring_write_type_55;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YgooSioSwriteYrecurring_write_type,T62);
  lit_122 = YPPsym((P)"write-type");
  lit_123 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_124 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  T66 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_56 = YPfab_met(FUNCODEREF(fun_recur_56),T66,LITREF(lit_8),LITREF(lit_124),sloc(268),YPfalse);
  T65 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_type_57 = YPfab_met(FUNCODEREF(fun_write_type_57),T65,LITREF(lit_122),LITREF(lit_123),sloc(267),YPfalse);
  T68 = VARREF_OR(YgooSioSwriteYwrite_type,YPfalse);
  T69 = fun_write_type_57;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooSioSwriteYwrite_type,T67);
  lit_125 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_126 = YPsb((P)"#{Prop ");
  lit_127 = YPsb((P)"}");
  T70 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLpropG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_58 = YPfab_met(FUNCODEREF(fun_recurring_write_58),T70,LITREF(lit_21),LITREF(lit_125),sloc(271),YPfalse);
  T72 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T73 = fun_recurring_write_58;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSioSwriteYrecurring_write,T71);
  lit_128 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_129 = YPsb((P)"#{");
  lit_130 = YPPlist(1,YPPsym((P)"blow"));
  lit_131 = YPsb((P)" ...");
  lit_132 = YPsb((P)": ");
  lit_133 = YPsb((P)"}");
  T77 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_59 = YPfab_met(FUNCODEREF(fun_59),T77,YPfalse,LITREF(lit_13),sloc(280),YPfalse);
  T76 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_60 = YPfab_met(FUNCODEREF(fun_60),T76,YPfalse,LITREF(lit_13),sloc(280),YPfalse);
  T75 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPfab_met(FUNCODEREF(fun_61),T75,YPfalse,LITREF(lit_130),sloc(279),YPfalse);
  T74 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_62 = YPfab_met(FUNCODEREF(fun_recurring_write_62),T74,LITREF(lit_21),LITREF(lit_128),sloc(276),YPfalse);
  T79 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T80 = fun_recurring_write_62;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YgooSioSwriteYrecurring_write,T78);
  lit_134 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_135 = YPsb((P)"#{End-of-file}");
  T83 = XCALL0(1,VARREF(YgooSchrYeof_object));
  T82 = XCALL1(1,VARREF(YgooStypesYtE),T83);
  T81 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),T82,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_63 = YPfab_met(FUNCODEREF(fun_recurring_write_63),T81,LITREF(lit_21),LITREF(lit_134),sloc(291),YPfalse);
  T85 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T86 = fun_recurring_write_63;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YgooSioSwriteYrecurring_write,T84);
  lit_136 = YPPsym((P)"msg");
  lit_137 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"arguments"));
  lit_138 = YPPsym((P)"arg");
  lit_139 = YPPlist(2,YPPsym((P)"char"),YPPsym((P)"class"));
  lit_140 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_141 = YPsb((P)"Msg argument for directive '%%%c' not of class %t: %=");
  lit_142 = YPPlist(1,YPPsym((P)"c"));
  lit_143 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_144 = YPsb((P)"Incomplete msg directive in \"%s\"");
  T89 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_arg_64 = YPfab_met(FUNCODEREF(fun_arg_64),T89,LITREF(lit_138),LITREF(lit_139),sloc(298),YPfalse);
  T88 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPfab_met(FUNCODEREF(fun_65),T88,YPfalse,LITREF(lit_142),sloc(309),YPfalse);
  T87 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_msg_66 = YPfab_met(FUNCODEREF(fun_msg_66),T87,LITREF(lit_136),LITREF(lit_137),sloc(294),YPfalse);
  T91 = VARREF_OR(YgooSconditionsYmsg,YPfalse);
  T92 = fun_msg_66;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YgooSconditionsYmsg,T90);
  lit_145 = YPPsym((P)"post");
  lit_146 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T93 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_post_67 = YPfab_met(FUNCODEREF(fun_post_67),T93,LITREF(lit_145),LITREF(lit_146),sloc(331),YPfalse);
  T95 = VARREF_OR(YgooSioSwriteYpost,YPfalse);
  T96 = fun_post_67;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YgooSioSwriteYpost,T94);
  lit_147 = YPPsym((P)"pe-msg");
  lit_148 = YPPlist(3,YPPsym((P)"port-expr"),YPPsym((P)"message"),YPPsym((P)"args"));
  lit_149 = YPPsym((P)"maybe-pack-chars");
  lit_150 = YPPsym((P)"puts");
  lit_151 = Ynil;
  lit_152 = YPPlist(1,YPPsym((P)"char"));
  lit_153 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_154 = YPPlist(1,YPPsym((P)"c"));
  lit_155 = YPPsym((P)"num-to-str");
  lit_156 = YPPsym((P)"put");
  lit_157 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_158 = YPsb((P)"Incomplete msg directive in \"%s\"");
  lit_159 = YPPsym((P)"let");
  T100 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_maybe_pack_chars_68 = YPfab_met(FUNCODEREF(fun_maybe_pack_chars_68),T100,LITREF(lit_149),LITREF(lit_13),sloc(349),YPfalse);
  T99 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_arg_69 = YPfab_met(FUNCODEREF(fun_arg_69),T99,LITREF(lit_138),LITREF(lit_152),sloc(350),YPfalse);
  T98 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPfab_met(FUNCODEREF(fun_70),T98,YPfalse,LITREF(lit_154),sloc(357),YPfalse);
  T97 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSioSwriteYpe_msg = YPfab_met(FUNCODEREF(YgooSioSwriteYpe_msg),T97,LITREF(lit_147),LITREF(lit_148),sloc(338),YPfalse);
  T101 = YgooSioSwriteYpe_msg;
  VARSET(YgooSioSwriteYpe_msg,T101);
  lit_160 = YPPlist(1,YPPsym((P)"exp"));
  lit_161 = YPPlist(1,YPPsym((P)"return"));
  lit_162 = YPPsym((P)"x-1467");
  lit_163 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_164 = YPPsym((P)"msg*");
  lit_165 = YPsb((P)"Match Pattern Failure");
  T104 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1467_72 = YPfab_met(FUNCODEREF(fun_x_1467_72),T104,LITREF(lit_162),LITREF(lit_163),YPfalse,YPfalse);
  T103 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPfab_met(FUNCODEREF(fun_73),T103,YPfalse,LITREF(lit_161),YPfalse,YPfalse);
  T102 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPfab_met(FUNCODEREF(fun_74),T102,YPfalse,LITREF(lit_160),YPfalse,YPfalse);
  T105 = fun_74;
  YPmacro(YPPsym((P)"goo/io/write"),YPPsym((P)"msg*"),T105);
  lit_166 = YPPsym((P)"msg-to-str");
  lit_167 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T108 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_75 = YPfab_met(FUNCODEREF(fun_75),T108,YPfalse,LITREF(lit_13),sloc(390),YPfalse);
  T107 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_76 = YPfab_met(FUNCODEREF(fun_76),T107,YPfalse,LITREF(lit_13),sloc(390),YPfalse);
  T106 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSconditionsYmsg_to_str = YPfab_met(FUNCODEREF(YgooSconditionsYmsg_to_str),T106,LITREF(lit_166),LITREF(lit_167),sloc(389),YPfalse);
  T109 = YgooSconditionsYmsg_to_str;
  VARSET(YgooSconditionsYmsg_to_str,T109);
  lit_168 = YPPsym((P)"say");
  lit_169 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"args"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSwriteYsay = YPfab_met(FUNCODEREF(YgooSioSwriteYsay),T110,LITREF(lit_168),LITREF(lit_169),sloc(394),YPfalse);
  T111 = YgooSioSwriteYsay;
  VARSET(YgooSioSwriteYsay,T111);
  T112 = YPfalse;
  return T112;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScycle;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSpacker},
  {&module_info_gooStypes},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmag},
  {&module_info_gooSmath},
  {&module_info_gooSioSport},
  {&module_info_gooScols},
  {&module_info_gooSconditions},
  {&module_info_gooSioSread},
  {&module_info_gooSpacker},
  {&module_info_gooSlate_macros},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"as-log", &module_info_gooSlog, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"port-filename", &module_info_gooSioSport, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {">", &module_info_gooSmag, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"*gensym-counter*", &module_info_gooSlate_macros, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"$char-long-names", &module_info_gooSioSread, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"write-list", CVAR, &YgooSioSwriteYwrite_list},
  {"*max-print-length*", DVAR, &YgooSioSwriteYTmax_print_lengthT},
  {"say", CVAR, &YgooSioSwriteYsay},
  {"pe-msg", CVAR, &YgooSioSwriteYpe_msg},
  {"writeln", CVAR, &YgooSioSwriteYwriteln},
  {"write-number", CVAR, &YgooSioSwriteYwrite_number},
  {"write-params", CVAR, &YgooSioSwriteYwrite_params},
  {"write-type", CVAR, &YgooSioSwriteYwrite_type},
  {"write-string-literal", CVAR, &YgooSioSwriteYwrite_string_literal},
  {"write-map", CVAR, &YgooSioSwriteYwrite_map},
  {"do-emit", CVAR, &YgooSioSwriteYdo_emit},
  {"as-binding-name", CVAR, &YgooSioSwriteYas_binding_name},
  {"emit", CVAR, &YgooSioSwriteYemit},
  {"write", CVAR, &YgooSioSwriteYwrite},
  {"write-flat", CVAR, &YgooSioSwriteYwrite_flat},
  {"post", CVAR, &YgooSioSwriteYpost},
  {"write-value-type", CVAR, &YgooSioSwriteYwrite_value_type},
  {"msg*", PVAR, NULL},
  {"quotation?", CVAR, &YgooSioSwriteYquotationQ},
  {"character-name", CVAR, &YgooSioSwriteYcharacter_name},
  {"write-boolean", CVAR, &YgooSioSwriteYwrite_boolean},
  {"---main-1---", PVAR, NULL},
  {"*max-print-depth*", DVAR, &YgooSioSwriteYTmax_print_depthT},
  {"write-fun-guts", CVAR, &YgooSioSwriteYwrite_fun_guts},
  {"write-to-string", CVAR, &YgooSioSwriteYwrite_to_string},
  {"recurring-write", CVAR, &YgooSioSwriteYrecurring_write},
  {"---main-0---", PVAR, NULL},
  {"write-char-literal", CVAR, &YgooSioSwriteYwrite_char_literal},
  {"recurring-write-type", CVAR, &YgooSioSwriteYrecurring_write_type},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"*max-print-length*", NULL},
  {"say", NULL},
  {"emit", NULL},
  {"pe-msg", NULL},
  {"writeln", NULL},
  {"write-type", NULL},
  {"msg-to-str", NULL},
  {"post", NULL},
  {"msg*", NULL},
  {"write", NULL},
  {"*max-print-depth*", NULL},
  {"write-to-string", NULL},
  {"recurring-write", NULL},
  {"msg", NULL},
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
extern void load_module_gooSfun (void);
extern void load_module_gooSclass (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSpacker (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSany (void);
extern void load_module_gooSlog (void);
extern void load_module_gooSchr (void);
extern void load_module_gooSmag (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSioSport (void);
extern void load_module_gooScols (void);
extern void load_module_gooSconditions (void);
extern void load_module_gooSioSread (void);
extern void load_module_gooSpacker (void);
extern void load_module_gooSlate_macros (void);

/* EXPRESSION: */

extern void load_module_gooSioSwrite (void);

void load_module_gooSioSwrite (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSpacker();
  load_module_gooStypes();
  load_module_gooSany();
  load_module_gooSlog();
  load_module_gooSchr();
  load_module_gooSmag();
  load_module_gooSmath();
  load_module_gooSioSport();
  load_module_gooScols();
  load_module_gooSconditions();
  load_module_gooSioSread();
  load_module_gooSpacker();
  load_module_gooSlate_macros();

  (P)YgooSioSwriteY___main_0___();
  (P)YgooSioSwriteY___main_1___();

}

/* END OF GENERATED CODE. */
