/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/write");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/write */

EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(Yfab_pair,"goo/boot","fab-pair");
DEF(YgooSioSwriteYwrite_number,"goo/io/write","write-number");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
DEF(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yprop_offset,"goo/boot","prop-offset");
DEF(YgooSioSwriteYrecurring_write_type,"goo/io/write","recurring-write-type");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
DEF(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YOtanyQ,"goo/boot","@tany?");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
DEF(YgooSioSwriteYwrite_list,"goo/io/write","write-list");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
DEF(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(YgooSioSwriteYquotationQ,"goo/io/write","quotation?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YOnew,"goo/boot","@new");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(YgooSioSwriteYas_binding_name,"goo/io/write","as-binding-name");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YgooSioSwriteYwrite_params,"goo/io/write","write-params");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
DEF(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ynew,"goo/boot","new");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
DEF(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
DEF(YgooSioSwriteYdo_emit,"goo/io/write","do-emit");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YgooSioSwriteYwrite_string_literal,"goo/io/write","write-string-literal");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
DEF(YgooSioSwriteYwrite_flat,"goo/io/write","write-flat");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmathYceil,"goo/math","ceil");
DYNDEF(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
DEF(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmathYS,"goo/math","/");
EXT(YOdo,"goo/boot","@do");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YOallQ,"goo/boot","@all?");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YgooSioSwriteYwrite_value_type,"goo/io/write","write-value-type");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
DEF(YgooSioSwriteYwrite_char_literal,"goo/io/write","write-char-literal");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYB,"goo/math","&");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
DYNDEF(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(YgooSioSwriteYcharacter_name,"goo/io/write","character-name");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YgooSioSwriteYwrite_boolean,"goo/io/write","write-boolean");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yorder_specs,"goo/boot","order-specs");
DEF(YgooSioSwriteYwrite_fun_guts,"goo/io/write","write-fun-guts");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YOtup,"goo/boot","@tup");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
DEF(YgooSioSwriteYwrite_map,"goo/io/write","write-map");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSlate_macrosYTgensym_counterT,"goo/late-macros","*gensym-counter*");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YOrev,"goo/boot","@rev");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_132);
DEFLIT(lit_80);
DEFLIT(lit_38);
DEFLIT(lit_112);
DEFLIT(lit_147);
DEFLIT(lit_156);
DEFLIT(lit_64);
DEFLIT(lit_122);
DEFLIT(lit_150);
DEFLIT(lit_8);
DEFLIT(lit_139);
DEFLIT(lit_85);
DEFLIT(lit_23);
DEFLIT(lit_1);
DEFLIT(lit_5);
DEFLIT(lit_4);
DEFLIT(lit_144);
DEFLIT(lit_51);
DEFLIT(lit_161);
DEFLIT(lit_126);
DEFLIT(lit_163);
DEFLIT(lit_10);
DEFLIT(lit_93);
DEFLIT(lit_9);
DEFLIT(lit_99);
DEFLIT(lit_106);
DEFLIT(lit_56);
DEFLIT(lit_2);
DEFLIT(lit_81);
DEFLIT(lit_40);
DEFLIT(lit_167);
DEFLIT(lit_123);
DEFLIT(lit_118);
DEFLIT(lit_45);
DEFLIT(lit_124);
DEFLIT(lit_105);
DEFLIT(lit_60);
DEFLIT(lit_41);
DEFLIT(lit_119);
DEFLIT(lit_107);
DEFLIT(lit_43);
DEFLIT(lit_82);
DEFLIT(lit_128);
DEFLIT(lit_71);
DEFLIT(lit_155);
DEFLIT(lit_19);
DEFLIT(lit_13);
DEFLIT(lit_165);
DEFLIT(lit_76);
DEFLIT(lit_137);
DEFLIT(lit_116);
DEFLIT(lit_86);
DEFLIT(lit_94);
DEFLIT(lit_39);
DEFLIT(lit_84);
DEFLIT(lit_87);
DEFLIT(lit_77);
DEFLIT(lit_31);
DEFLIT(lit_92);
DEFLIT(lit_47);
DEFLIT(lit_74);
DEFLIT(lit_166);
DEFLIT(lit_27);
DEFLIT(lit_98);
DEFLIT(lit_69);
DEFLIT(lit_88);
DEFLIT(lit_30);
DEFLIT(lit_140);
DEFLIT(lit_3);
DEFLIT(lit_63);
DEFLIT(lit_36);
DEFLIT(lit_33);
DEFLIT(lit_28);
DEFLIT(lit_114);
DEFLIT(lit_89);
DEFLIT(lit_133);
DEFLIT(lit_73);
DEFLIT(lit_44);
DEFLIT(lit_96);
DEFLIT(lit_61);
DEFLIT(lit_148);
DEFLIT(lit_54);
DEFLIT(lit_22);
DEFLIT(lit_0);
DEFLIT(lit_68);
DEFLIT(lit_151);
DEFLIT(lit_115);
DEFLIT(lit_79);
DEFLIT(lit_169);
DEFLIT(lit_146);
DEFLIT(lit_159);
DEFLIT(lit_16);
DEFLIT(lit_37);
DEFLIT(lit_29);
DEFLIT(lit_58);
DEFLIT(lit_57);
DEFLIT(lit_42);
DEFLIT(lit_66);
DEFLIT(lit_32);
DEFLIT(lit_101);
DEFLIT(lit_136);
DEFLIT(lit_78);
DEFLIT(lit_52);
DEFLIT(lit_6);
DEFLIT(lit_113);
DEFLIT(lit_168);
DEFLIT(lit_20);
DEFLIT(lit_103);
DEFLIT(lit_46);
DEFLIT(lit_90);
DEFLIT(lit_104);
DEFLIT(lit_135);
DEFLIT(lit_141);
DEFLIT(lit_55);
DEFLIT(lit_7);
DEFLIT(lit_26);
DEFLIT(lit_48);
DEFLIT(lit_70);
DEFLIT(lit_120);
DEFLIT(lit_62);
DEFLIT(lit_117);
DEFLIT(lit_108);
DEFLIT(lit_158);
DEFLIT(lit_127);
DEFLIT(lit_67);
DEFLIT(lit_154);
DEFLIT(lit_34);
DEFLIT(lit_109);
DEFLIT(lit_100);
DEFLIT(lit_145);
DEFLIT(lit_53);
DEFLIT(lit_164);
DEFLIT(lit_149);
DEFLIT(lit_12);
DEFLIT(lit_15);
DEFLIT(lit_75);
DEFLIT(lit_129);
DEFLIT(lit_83);
DEFLIT(lit_162);
DEFLIT(lit_95);
DEFLIT(lit_152);
DEFLIT(lit_65);
DEFLIT(lit_160);
DEFLIT(lit_35);
DEFLIT(lit_14);
DEFLIT(lit_72);
DEFLIT(lit_91);
DEFLIT(lit_102);
DEFLIT(lit_110);
DEFLIT(lit_17);
DEFLIT(lit_121);
DEFLIT(lit_143);
DEFLIT(lit_134);
DEFLIT(lit_138);
DEFLIT(lit_153);
DEFLIT(lit_157);
DEFLIT(lit_131);
DEFLIT(lit_49);
DEFLIT(lit_11);
DEFLIT(lit_142);
DEFLIT(lit_97);
DEFLIT(lit_21);
DEFLIT(lit_25);
DEFLIT(lit_18);
DEFLIT(lit_24);
DEFLIT(lit_130);
DEFLIT(lit_111);
DEFLIT(lit_50);
DEFLIT(lit_59);
DEFLIT(lit_125);

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
  P recurF3760;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF3760 = T1;
  FUNINIT(recurF3760, 2,port_,recurF3760);
  T0 = CALL2(1,recurF3760,x_,YPint((P)-1));
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
  P portF3761;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  portF3761 = YPfalse;
  portF3761 = BOXFAB(portF3761);
  T2 = FUNFAB(fun_6,2,portF3761,x_);
  T3 = FUNFAB(fun_7,1,portF3761);
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
  P recurF3762;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_9,2);
  recurF3762 = T1;
  FUNINIT(recurF3762, 2,port_,recurF3762);
  T0 = CALL2(1,recurF3762,x_,YPint((P)-1));
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
  P prefixF3763;
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
  prefixF3763 = T1;
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,prefixF3763,x_,LITREF(lit_27),d_,recur_);
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
  P tF3767;
  P xF3766;
  P xF3765;
  P xF3764;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_40));
  xF3764 = x_;
  T4 = (P)YPuntag_into(xF3764);
  xF3765 = T4;
  xF3766 = xF3765;
  tF3767 = (P)1;
  T3 = (P)YPiLL(xF3766,(P)2);
  T2 = (P)YPiv(T3,tF3767);
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
  P probeF3768;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T3 = CALL1(1,VARREF(YgooSioSwriteYcharacter_name),x_);
  probeF3768 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_51));
  if (probeF3768 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,probeF3768);
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
  P assocF3769;
  P T0,T1,T2;
LINK_STACK();
  ARG(char_, 0);
  T2 = CALL3(1,VARREF(YgooScolsSlstYassqn),char_,VARREF(YgooSioSreadYDchar_long_names),YPint((P)1));
  assocF3769 = T2;
  if (assocF3769 != YPfalse) {
    T1 = CALL1(1,VARREF(YgooSmacrosY1st),assocF3769);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_string_literal_27) {
  P port_,x_;
  P tmpF3773;
  P cF3772;
  P iF3771;
  P lenF3770;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
  T10 = CALL1(1,VARREF(YgooStypesYlen),x_);
  lenF3770 = T10;
  iF3771 = YPint((P)0);
  LOOP_159: {
    P a159_0;
    T1 = CALL2(1,VARREF(YgooSlogYE),iF3771,lenF3770);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
      T0 = T2;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYelt),x_,iF3771);
      cF3772 = T9;
      T5 = CALL2(1,VARREF(YgooSlogYE),cF3772,YPchr((P)92));
      tmpF3773 = T5;
      if (tmpF3773 != YPfalse) {
        T3 = tmpF3773;
      } else {
        T4 = CALL2(1,VARREF(YgooSlogYE),cF3772,YPchr((P)34));
        T3 = T4;
      }
      if (T3 != YPfalse) {
        T6 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)92));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYput),port_,cF3772);
      T8 = CALL2(1,VARREF(YgooSmathYA),iF3771,YPint((P)1));
      a159_0 = T8;
      iF3771 = a159_0;
      goto LOOP_159;
      T0 = T7;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_list_28) {
  P port_,x_,d_,recur_;
  P nF3775;
  P lF3774;
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
    lF3774 = T16;
    nF3775 = YPint((P)1);
    LOOP_160: {
      P a160_0,a160_1;
      T8 = CALL1(1,VARREF(YgooSmacrosYnulQ),lF3774);
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSmagYGE),nF3775,DYNREF(YgooSioSwriteYTmax_print_lengthT));
        if (T10 != YPfalse) {
          T11 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_58));
          T9 = T11;
        } else {
          CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
          T12 = CALL1(1,VARREF(Yhead),lF3774);
          CALL2(0,recur_,T12,d_);
          T14 = CALL1(1,VARREF(Ytail),lF3774);
          T15 = CALL2(1,VARREF(YgooSmathYA),nF3775,YPint((P)1));
          a160_0 = T14;
          a160_1 = T15;
          lF3774 = a160_0;
          nF3775 = a160_1;
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
  P iF3777;
  P zF3776;
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
  zF3776 = T12;
  T0 = CALL2(1,VARREF(YgooSmagYG),zF3776,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T1,d_);
    iF3777 = YPint((P)1);
    LOOP_161: {
      P a161_0;
      T3 = CALL2(1,VARREF(YgooSmagYGE),iF3777,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T3 != YPfalse) {
        T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_64));
        T2 = T4;
      } else {
        T7 = CALL2(1,VARREF(YgooSmagYGE),iF3777,zF3776);
        T6 = CALL1(1,VARREF(Ynot),T7);
        if (T6 != YPfalse) {
          CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
          T8 = CALL2(1,VARREF(YgooSmacrosYelt),x_,iF3777);
          CALL2(1,recur_,T8,d_);
          T10 = CALL2(1,VARREF(YgooSmathYA),iF3777,YPint((P)1));
          a161_0 = T10;
          iF3777 = a161_0;
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
  P valF3784;
  P keyF3783;
  P tup30F3782;
  P iF3781;
  P tmpF3780;
  P x_1449F3779;
  P x_1450F3778;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(blow_, 0);
  T17 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
  x_1450F3778 = T16;
  T18 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(0));
  x_1449F3779 = T18;
  LOOP_162: {
    P a162_0,a162_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1450F3778);
    tmpF3780 = T4;
    if (tmpF3780 != YPfalse) {
      T2 = tmpF3780;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1449F3779);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1450F3778);
      iF3781 = T15;
      T13 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1449F3779);
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1449F3779);
      T12 = CALL2(1,VARREF(Ytup),T13,T14);
      tup30F3782 = T12;
      T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F3782,YPint((P)0));
      keyF3783 = T11;
      T10 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F3782,YPint((P)1));
      valF3784 = T10;
      T5 = CALL2(1,VARREF(YgooSmagYGE),iF3781,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T5 != YPfalse) {
        CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_69));
        T6 = CALL1(0,blow_,YPfalse);
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)32));
      CALL2(0,FREEREF(3),keyF3783,FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_70));
      CALL2(0,FREEREF(3),valF3784,FREEREF(2));
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1450F3778);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1449F3779);
      a162_0 = T8;
      a162_1 = T9;
      x_1450F3778 = a162_0;
      x_1449F3779 = a162_1;
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
  P tmpF3796;
  P valueF3795;
  P iF3794;
  P specF3793;
  P firstQF3792;
  P tmpF3791;
  P tmpF3790;
  P x_1452F3789;
  P x_1453F3788;
  P x_1454F3787;
  P namesF3786;
  P namesF3785;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
  T37 = CALL1(1,VARREF(YgooSfunYfun_names),x_);
  namesF3785 = T37;
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
  T36 = CALL1(1,VARREF(YgooSfunYfun_names),x_);
  namesF3786 = T36;
  T23 = fun_37;
  T24 = fun_38;
  T22 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T23,T24);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_1454F3787 = T21;
  T26 = CALL1(1,VARREF(YgooSfunYfun_specs),x_);
  T25 = CALL1(1,VARREF(YgooScolsScolYenum),T26);
  x_1453F3788 = T25;
  T28 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
  x_1452F3789 = T27;
  LOOP_163: {
    P a163_0,a163_1,a163_2;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1454F3787);
    tmpF3790 = T6;
    if (tmpF3790 != YPfalse) {
      T2 = tmpF3790;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1453F3788);
      tmpF3791 = T5;
      if (tmpF3791 != YPfalse) {
        T3 = tmpF3791;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1452F3789);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_1454F3787);
      firstQF3792 = T20;
      T19 = CALL1(1,VARREF(YgooScolsScolYnow),x_1453F3788);
      specF3793 = T19;
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_1452F3789);
      iF3794 = T18;
      T7 = CALL1(1,VARREF(Ynot),firstQF3792);
      if (T7 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
      } else {
      }
      T9 = CALL1(1,VARREF(YgooSmacrosYnulQ),namesF3786);
      if (T9 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,specF3793);
      } else {
        T12 = CALL2(1,VARREF(YgooSmacrosYelt),namesF3786,iF3794);
        T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T12);
        CALL3(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_83),T11);
        CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,specF3793);
        T13 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
      }
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1454F3787);
      T16 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1453F3788);
      T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1452F3789);
      a163_0 = T15;
      a163_1 = T16;
      a163_2 = T17;
      x_1454F3787 = a163_0;
      x_1453F3788 = a163_1;
      x_1452F3789 = a163_2;
      goto LOOP_163;
      T0 = T14;
    } else {
      T0 = YPfalse;
    }
  }
  T35 = CALL1(1,VARREF(YgooSfunYfun_val),x_);
  valueF3795 = T35;
  T32 = CALL1(1,VARREF(Ynot),valueF3795);
  tmpF3796 = T32;
  if (tmpF3796 != YPfalse) {
    T30 = tmpF3796;
  } else {
    T31 = CALL2(1,VARREF(YgooSmacrosYEE),valueF3795,VARREF(YLanyG));
    T30 = T31;
  }
  T29 = CALL1(1,VARREF(Ynot),T30);
  if (T29 != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_84));
    T33 = CALL2(1,VARREF(YgooSioSwriteYwrite_value_type),port_,valueF3795);
  } else {
  }
  T34 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
UNLINK_STACK();
  QRET(T34);
}

LOCCODEDEF(fun_write_fun_guts_40) {
  P port_,x_,name_,recur_;
  P nameF3797;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(name_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_87));
  CALL2(1,VARREF(YgooSioSportYputs),port_,name_);
  T3 = CALL1(1,VARREF(YgooSfunYfun_name),x_);
  nameF3797 = T3;
  if (nameF3797 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
    T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF3797);
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
  P recurF3798;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_56,2);
  recurF3798 = T1;
  FUNINIT(recurF3798, 2,port_,recurF3798);
  T0 = CALL2(1,recurF3798,x_,YPint((P)0));
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
  P getterF3804;
  P propF3803;
  P iF3802;
  P tmpF3801;
  P x_1457F3800;
  P x_1458F3799;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  VARSET(YgooSclassYTreport_prop_unbound_errorsQT,YPfalse);
  T16 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
  x_1458F3799 = T15;
  T18 = CALL1(1,VARREF(Yprops_of),FREEREF(0));
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_1457F3800 = T17;
  LOOP_164: {
    P a164_0,a164_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1458F3799);
    tmpF3801 = T4;
    if (tmpF3801 != YPfalse) {
      T2 = tmpF3801;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1457F3800);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1458F3799);
      iF3802 = T14;
      T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1457F3800);
      propF3803 = T13;
      T5 = CALL2(1,VARREF(YgooSmagYGE),iF3802,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T5 != YPfalse) {
        CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_131));
        T6 = CALL1(1,FREEREF(2),YPfalse);
      } else {
      }
      T12 = CALL1(1,VARREF(Yprop_getter),propF3803);
      getterF3804 = T12;
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)32));
      T7 = CALL1(1,VARREF(YgooSfunYfun_name),getterF3804);
      CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T7);
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_132));
      T8 = CALL1(1,getterF3804,FREEREF(0));
      CALL2(0,FREEREF(4),T8,FREEREF(3));
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1458F3799);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1457F3800);
      a164_0 = T10;
      a164_1 = T11;
      x_1458F3799 = a164_0;
      x_1457F3800 = a164_1;
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
  P x_1456F3805;
  P T0,T1,T2;
LINK_STACK();
  ARG(blow_, 0);
  x_1456F3805 = VARREF(YgooSclassYTreport_prop_unbound_errorsQT);
  T1 = FUNFAB(fun_59,5,FREEREF(0),FREEREF(1),blow_,FREEREF(2),FREEREF(3));
  T2 = FUNFAB(fun_60,1,x_1456F3805);
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
  P tmpF3808;
  P argumentF3807;
  P current_indexF3806;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
  T11 = BOXGET(FREEREF(0));
  current_indexF3806 = T11;
  T1 = BOXGET(FREEREF(0));
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)1));
  BOXPUT(T0,FREEREF(0));
  T3 = CALL2(1,VARREF(YgooSmagYL),current_indexF3806,FREEREF(1));
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T4 = CALL3(1,VARREF(Yassert_error),LITREF(lit_140),FREEREF(2),FREEREF(3));
  } else {
  }
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),current_indexF3806);
  argumentF3807 = T10;
  T8 = CALL2(1,VARREF(YgooSmacrosYEE),class_,VARREF(YLanyG));
  tmpF3808 = T8;
  if (tmpF3808 != YPfalse) {
    T6 = tmpF3808;
  } else {
    T7 = CALL2(1,VARREF(YisaQ),argumentF3807,class_);
    T6 = T7;
  }
  T5 = CALL1(1,VARREF(Ynot),T6);
  if (T5 != YPfalse) {
    T9 = CALL4(1,VARREF(Yassert_error),LITREF(lit_141),char_,class_,argumentF3807);
  } else {
  }
UNLINK_STACK();
  QRET(argumentF3807);
}

LOCCODEDEF(fun_65) {
  P c_;
  P x_1461F3810;
  P x_1460F3809;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
LINK_STACK();
  ARG(c_, 0);
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T42 = CALL1(1,VARREF(YgooSchrYto_upper),c_);
    x_1460F3809 = T42;
    x_1461F3810 = VARREF(YgooSmacrosYEE);
    T3 = CALL2(1,x_1461F3810,x_1460F3809,YPchr((P)68));
    if (T3 != YPfalse) {
      T6 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T5);
      T2 = T4;
    } else {
      T8 = CALL2(1,x_1461F3810,x_1460F3809,YPchr((P)66));
      if (T8 != YPfalse) {
        T11 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T10 = CALL2(1,VARREF(YgooSmathYnum_to_str),T11,YPint((P)2));
        T9 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T10);
        T7 = T9;
      } else {
        T13 = CALL2(1,x_1461F3810,x_1460F3809,YPchr((P)79));
        if (T13 != YPfalse) {
          T16 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T15 = CALL2(1,VARREF(YgooSmathYnum_to_str),T16,YPint((P)8));
          T14 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T15);
          T12 = T14;
        } else {
          T18 = CALL2(1,x_1461F3810,x_1460F3809,YPchr((P)88));
          if (T18 != YPfalse) {
            T21 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T20 = CALL2(1,VARREF(YgooSmathYnum_to_str),T21,YPint((P)16));
            T19 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T20);
            T17 = T19;
          } else {
            T23 = CALL2(1,x_1461F3810,x_1460F3809,YPchr((P)67));
            if (T23 != YPfalse) {
              T25 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T24 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),T25);
              T22 = T24;
            } else {
              T27 = CALL2(1,x_1461F3810,x_1460F3809,YPchr((P)83));
              if (T27 != YPfalse) {
                T29 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T28 = CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T29);
                T26 = T28;
              } else {
                T31 = CALL2(1,x_1461F3810,x_1460F3809,YPchr((P)61));
                if (T31 != YPfalse) {
                  T33 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T32 = CALL2(1,VARREF(YgooSioSwriteYwrite),FREEREF(1),T33);
                  T30 = T32;
                } else {
                  T35 = CALL2(1,x_1461F3810,x_1460F3809,YPchr((P)84));
                  if (T35 != YPfalse) {
                    T37 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                    T36 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(1),T37);
                    T34 = T36;
                  } else {
                    T39 = CALL2(1,x_1461F3810,x_1460F3809,YPchr((P)37));
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
  P argF3814;
  P num_argumentsF3813;
  P argument_indexF3812;
  P found_percentQF3811;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
  found_percentQF3811 = YPfalse;
  found_percentQF3811 = BOXFAB(found_percentQF3811);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF3812 = YPint((P)0);
  argument_indexF3812 = BOXFAB(argument_indexF3812);
  T10 = CALL1(1,VARREF(YgooStypesYlen),arguments_);
  num_argumentsF3813 = T10;
  T4 = FUNSHELL(1,fun_arg_64,4);
  argF3814 = T4;
  FUNINIT(argF3814, 4,argument_indexF3812,num_argumentsF3813,message_,arguments_);
  T3 = FUNFAB(fun_65,4,found_percentQF3811,port_,argF3814,message_);
  T2 = CALL2(1,VARREF(YgooSmacrosYdo),T3,message_);
  T8 = BOXGET(found_percentQF3811);
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
  P UF3815;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  T2 = CALL1(1,VARREF(YgooSmacrosYnulQ),FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = BOXGET(FREEREF(1));
    UF3815 = T10;
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
    T7 = CALL1(1,VARREF(Ylst),FREEREF(2));
    T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),FREEREF(0));
    T8 = CALL1(1,VARREF(Ylst),T9);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T8,LITREF(lit_151));
    T4 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3815,T5);
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
  P current_indexF3816;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(char_, 0);
  CALL0(1,FREEREF(0));
  T6 = BOXGET(FREEREF(1));
  current_indexF3816 = T6;
  T1 = BOXGET(FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)1));
  BOXPUT(T0,FREEREF(1));
  T3 = CALL2(1,VARREF(YgooSmagYL),current_indexF3816,FREEREF(2));
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T4 = CALL3(1,VARREF(Yassert_error),LITREF(lit_153),FREEREF(3),FREEREF(4));
  } else {
  }
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(4),current_indexF3816);
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_70) {
  P c_;
  P UF3826;
  P UF3825;
  P UF3824;
  P UF3823;
  P UF3822;
  P UF3821;
  P UF3820;
  P UF3819;
  P x_1463F3818;
  P x_1462F3817;
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
    x_1462F3817 = T101;
    x_1463F3818 = VARREF(YgooSmacrosYEE);
    T3 = CALL2(1,x_1463F3818,x_1462F3817,YPchr((P)68));
    if (T3 != YPfalse) {
      T14 = BOXGET(FREEREF(1));
      UF3819 = T14;
      T7 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
      T8 = CALL1(1,VARREF(Ylst),FREEREF(2));
      T11 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
      T13 = CALL1(1,FREEREF(3),c_);
      T12 = CALL1(1,VARREF(Ylst),T13);
      T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,LITREF(lit_151));
      T9 = CALL1(1,VARREF(Ylst),T10);
      T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T9,LITREF(lit_151));
      T5 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3819,T6);
      T4 = BOXPUT(T5,FREEREF(1));
      T2 = T4;
    } else {
      T16 = CALL2(1,x_1463F3818,x_1462F3817,YPchr((P)66));
      if (T16 != YPfalse) {
        T28 = BOXGET(FREEREF(1));
        UF3820 = T28;
        T20 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
        T21 = CALL1(1,VARREF(Ylst),FREEREF(2));
        T24 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
        T26 = CALL1(1,FREEREF(3),c_);
        T25 = CALL1(1,VARREF(Ylst),T26);
        T27 = CALL1(1,VARREF(Ylst),YPint((P)2));
        T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,LITREF(lit_151));
        T22 = CALL1(1,VARREF(Ylst),T23);
        T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T22,LITREF(lit_151));
        T18 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3820,T19);
        T17 = BOXPUT(T18,FREEREF(1));
        T15 = T17;
      } else {
        T30 = CALL2(1,x_1463F3818,x_1462F3817,YPchr((P)79));
        if (T30 != YPfalse) {
          T42 = BOXGET(FREEREF(1));
          UF3821 = T42;
          T34 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
          T35 = CALL1(1,VARREF(Ylst),FREEREF(2));
          T38 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
          T40 = CALL1(1,FREEREF(3),c_);
          T39 = CALL1(1,VARREF(Ylst),T40);
          T41 = CALL1(1,VARREF(Ylst),YPint((P)8));
          T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T41,LITREF(lit_151));
          T36 = CALL1(1,VARREF(Ylst),T37);
          T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T36,LITREF(lit_151));
          T32 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3821,T33);
          T31 = BOXPUT(T32,FREEREF(1));
          T29 = T31;
        } else {
          T44 = CALL2(1,x_1463F3818,x_1462F3817,YPchr((P)88));
          if (T44 != YPfalse) {
            T56 = BOXGET(FREEREF(1));
            UF3822 = T56;
            T48 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
            T49 = CALL1(1,VARREF(Ylst),FREEREF(2));
            T52 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
            T54 = CALL1(1,FREEREF(3),c_);
            T53 = CALL1(1,VARREF(Ylst),T54);
            T55 = CALL1(1,VARREF(Ylst),YPint((P)16));
            T51 = CALL4(1,VARREF(YgooSmacrosYcat),T52,T53,T55,LITREF(lit_151));
            T50 = CALL1(1,VARREF(Ylst),T51);
            T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,LITREF(lit_151));
            T46 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3822,T47);
            T45 = BOXPUT(T46,FREEREF(1));
            T43 = T45;
          } else {
            T58 = CALL2(1,x_1463F3818,x_1462F3817,YPchr((P)67));
            if (T58 != YPfalse) {
              T66 = BOXGET(FREEREF(1));
              UF3823 = T66;
              T62 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
              T63 = CALL1(1,VARREF(Ylst),FREEREF(2));
              T65 = CALL2(1,FREEREF(3),c_,VARREF(YLchrG));
              T64 = CALL1(1,VARREF(Ylst),T65);
              T61 = CALL4(1,VARREF(YgooSmacrosYcat),T62,T63,T64,LITREF(lit_151));
              T60 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3823,T61);
              T59 = BOXPUT(T60,FREEREF(1));
              T57 = T59;
            } else {
              T68 = CALL2(1,x_1463F3818,x_1462F3817,YPchr((P)83));
              if (T68 != YPfalse) {
                T76 = BOXGET(FREEREF(1));
                UF3824 = T76;
                T72 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
                T73 = CALL1(1,VARREF(Ylst),FREEREF(2));
                T75 = CALL1(1,FREEREF(3),c_);
                T74 = CALL1(1,VARREF(Ylst),T75);
                T71 = CALL4(1,VARREF(YgooSmacrosYcat),T72,T73,T74,LITREF(lit_151));
                T70 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3824,T71);
                T69 = BOXPUT(T70,FREEREF(1));
                T67 = T69;
              } else {
                T78 = CALL2(1,x_1463F3818,x_1462F3817,YPchr((P)61));
                if (T78 != YPfalse) {
                  T86 = BOXGET(FREEREF(1));
                  UF3825 = T86;
                  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
                  T83 = CALL1(1,VARREF(Ylst),FREEREF(2));
                  T85 = CALL1(1,FREEREF(3),c_);
                  T84 = CALL1(1,VARREF(Ylst),T85);
                  T81 = CALL4(1,VARREF(YgooSmacrosYcat),T82,T83,T84,LITREF(lit_151));
                  T80 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3825,T81);
                  T79 = BOXPUT(T80,FREEREF(1));
                  T77 = T79;
                } else {
                  T88 = CALL2(1,x_1463F3818,x_1462F3817,YPchr((P)84));
                  if (T88 != YPfalse) {
                    T96 = BOXGET(FREEREF(1));
                    UF3826 = T96;
                    T92 = CALL1(1,VARREF(Ylst),LITREF(lit_122));
                    T93 = CALL1(1,VARREF(Ylst),FREEREF(2));
                    T95 = CALL1(1,FREEREF(3),c_);
                    T94 = CALL1(1,VARREF(Ylst),T95);
                    T91 = CALL4(1,VARREF(YgooSmacrosYcat),T92,T93,T94,LITREF(lit_151));
                    T90 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3826,T91);
                    T89 = BOXPUT(T90,FREEREF(1));
                    T87 = T89;
                  } else {
                    T98 = CALL2(1,x_1463F3818,x_1462F3817,YPchr((P)37));
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
  P exprsF3835;
  P argF3834;
  P maybe_pack_charsF3833;
  P packer_F3832;
  P portF3831;
  P charsF3830;
  P num_argsF3829;
  P arg_indexF3828;
  P found_percentQF3827;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
  found_percentQF3827 = YPfalse;
  found_percentQF3827 = BOXFAB(found_percentQF3827);
  check_type(YPint((P)0),VARREF(YLintG));
  arg_indexF3828 = YPint((P)0);
  arg_indexF3828 = BOXFAB(arg_indexF3828);
  T24 = CALL1(1,VARREF(YgooStypesYlen),args_);
  num_argsF3829 = T24;
  T23 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  charsF3830 = T23;
  T22 = CALL0(1,VARREF(YgooSmacrosYgensym));
  portF3831 = T22;
  T21 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F3832 = T21;
  packer_F3832 = BOXFAB(packer_F3832);
  T17 = FUNSHELL(1,fun_maybe_pack_chars_68,3);
  maybe_pack_charsF3833 = T17;
  T18 = FUNSHELL(1,fun_arg_69,5);
  argF3834 = T18;
  FUNINIT(maybe_pack_charsF3833, 3,charsF3830,packer_F3832,portF3831);
  FUNINIT(argF3834, 5,maybe_pack_charsF3833,arg_indexF3828,num_argsF3829,message_,args_);
  T15 = FUNFAB(fun_70,6,found_percentQF3827,packer_F3832,portF3831,argF3834,charsF3830,message_);
  CALL2(1,VARREF(YgooSmacrosYdo),T15,message_);
  T16 = CALL0(1,maybe_pack_charsF3833);
  T20 = BOXGET(packer_F3832);
  T19 = CALL1(1,VARREF(YgooSpackerYpacker_res),T20);
  exprsF3835 = T19;
  T4 = BOXGET(found_percentQF3827);
  T3 = CALL1(1,VARREF(Ynot),T4);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T5 = CALL2(1,VARREF(Yassert_error),LITREF(lit_158),message_);
  } else {
  }
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
  T12 = CALL1(1,VARREF(Ylst),portF3831);
  T13 = CALL1(1,VARREF(Ylst),port_expr_);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T13,LITREF(lit_151));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T9 = CALL2(1,VARREF(YgooSmacrosYcat),T10,LITREF(lit_151));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,exprsF3835,LITREF(lit_151));
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
  P x_1466F3846;
  P x_1466F3845;
  P x_1466F3844;
  P x_1466F3843;
  P x_1466F3842;
  P x_1466F3841;
  P argsF3840;
  P messageF3839;
  P portF3838;
  P x_1466F3837;
  P x_1467F3836;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(return_, 0);
  T28 = FUNSHELL(0,fun_x_1467_72,2);
  x_1467F3836 = T28;
  FUNINIT(x_1467F3836, 2,FREEREF(0),return_);
  x_1466F3837 = FREEREF(0);
  portF3838 = YPfalse;
  messageF3839 = YPfalse;
  argsF3840 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1466F3837,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1466F3837,LITREF(lit_164),x_1467F3836);
    x_1466F3841 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1466F3841,x_1467F3836);
    portF3838 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1466F3841);
    x_1466F3842 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1466F3842,x_1467F3836);
    messageF3839 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1466F3842);
    x_1466F3843 = T9;
    argsF3840 = x_1466F3843;
    x_1466F3844 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1466F3844,x_1467F3836);
    x_1466F3845 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1466F3845,x_1467F3836);
    T7 = CALL1(1,VARREF(Ytail),x_1466F3844);
    x_1466F3846 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1466F3846,x_1467F3836);
  } else {
    T13 = CALL2(1,x_1467F3836,LITREF(lit_165),x_1466F3837);
  }
  T16 = messageF3839;
  T15 = CALL2(1,VARREF(YisaQ),T16,VARREF(YLstrG));
  if (T15 != YPfalse) {
    T18 = portF3838;
    T19 = messageF3839;
    T20 = argsF3840;
    T17 = CALL3(1,VARREF(YgooSioSwriteYpe_msg),T18,T19,T20);
    T14 = T17;
  } else {
    T22 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
    T24 = portF3838;
    T23 = CALL1(1,VARREF(Ylst),T24);
    T26 = messageF3839;
    T25 = CALL1(1,VARREF(Ylst),T26);
    T27 = argsF3840;
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
  P portF3847;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
  portF3847 = YPfalse;
  portF3847 = BOXFAB(portF3847);
  T2 = FUNFAB(fun_75,3,portF3847,message_,arguments_);
  T3 = FUNFAB(fun_76,1,portF3847);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  RET(T1);
}

FUNCODEDEF(YgooSioSwriteYsay) {
  P port_,args_;
  P iF3849;
  P limF3848;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  NARGS(args_, 1);
  T7 = CALL1(1,VARREF(YgooStypesYlen),args_);
  limF3848 = T7;
  iF3849 = YPint((P)0);
  LOOP_165: {
    P a165_0;
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),iF3849,limF3848);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooScolsScolYlow_elt),args_,iF3849);
      T3 = CALL1(1,VARREF(YgooSanyYto_str),T4);
      CALL2(1,VARREF(YgooSioSportYputs),port_,T3);
      T6 = CALL2(1,VARREF(YgooSmathYA),iF3849,YPint((P)1));
      a165_0 = T6;
      iF3849 = a165_0;
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
  fun_as_binding_name_0 = YPfab_met(FUNCODEREF(fun_as_binding_name_0),T0,LITREF(lit_0),LITREF(lit_1),sloc(27),YPsb((P)"(fun (name) (as <str> name))"));
  T2 = VARREF_OR(YgooSioSwriteYas_binding_name,YPfalse);
  T3 = fun_as_binding_name_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSioSwriteYas_binding_name,T1);
  lit_2 = YPPsym((P)"do-emit");
  lit_3 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T4 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_1 = YPfab_met(FUNCODEREF(fun_do_emit_1),T4,LITREF(lit_2),LITREF(lit_3),sloc(30),YPsb((P)"(fun ((port <out-port>) (x <str>) (d <int>) (recur <fun>)) (puts port x))"));
  T6 = VARREF_OR(YgooSioSwriteYdo_emit,YPfalse);
  T7 = fun_do_emit_1;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooSioSwriteYdo_emit,T5);
  lit_4 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T8 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_2 = YPfab_met(FUNCODEREF(fun_do_emit_2),T8,LITREF(lit_2),LITREF(lit_4),sloc(33),YPsb((P)"(fun ((port <out-port>) (x <chr>) (d <int>) (recur <fun>)) (put port x))"));
  T10 = VARREF_OR(YgooSioSwriteYdo_emit,YPfalse);
  T11 = fun_do_emit_2;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooSioSwriteYdo_emit,T9);
  lit_5 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T12 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_3 = YPfab_met(FUNCODEREF(fun_do_emit_3),T12,LITREF(lit_2),LITREF(lit_5),sloc(36),YPsb((P)"(fun ((port <out-port>) x (d <int>) (recur <fun>)) (recurring-write port x d recur))"));
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
  fun_recur_4 = YPfab_met(FUNCODEREF(fun_recur_4),T17,LITREF(lit_8),LITREF(lit_9),sloc(40),YPsb((P)"(fun (x d => #f) (if (>= d *max-print-depth*) (puts port *) (do-emit port x (+ d 1) recur)))"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_emit_5 = YPfab_met(FUNCODEREF(fun_emit_5),T16,LITREF(lit_6),LITREF(lit_7),sloc(39),YPsb((P)"(fun ((port <out-port>) x) (rep recur ((x x) (d -1)) (if (>= d *max-print-depth*) (puts port *) (do-emit port x (+ d 1) recur))))"));
  T19 = VARREF_OR(YgooSioSwriteYemit,YPfalse);
  T20 = fun_emit_5;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YgooSioSwriteYemit,T18);
  lit_11 = YPPsym((P)"write-to-string");
  lit_12 = YPPlist(1,YPPsym((P)"x"));
  lit_13 = Ynil;
  lit_14 = YPsb((P)"");
  T23 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_6 = YPfab_met(FUNCODEREF(fun_6),T23,YPfalse,LITREF(lit_13),sloc(46),YPsb((P)"(fun () (seq (set port (open <str-out-port> )) (write port x)))"));
  T22 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_7 = YPfab_met(FUNCODEREF(fun_7),T22,YPfalse,LITREF(lit_13),sloc(46),YPsb((P)"(fun () (and port (close port)))"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_write_to_string_8 = YPfab_met(FUNCODEREF(fun_write_to_string_8),T21,LITREF(lit_11),LITREF(lit_12),sloc(45),YPsb((P)"(fun (x => <str>) (with-port (port (open <str-out-port> )) (write port x)))"));
  T25 = VARREF_OR(YgooSioSwriteYwrite_to_string,YPfalse);
  T26 = fun_write_to_string_8;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YgooSioSwriteYwrite_to_string,T24);
  lit_15 = YPPsym((P)"write");
  lit_16 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  lit_18 = YPsb((P)"*");
  T28 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_9 = YPfab_met(FUNCODEREF(fun_recur_9),T28,LITREF(lit_8),LITREF(lit_17),sloc(49),YPsb((P)"(fun (x d => #f) (if (>= d *max-print-depth*) (puts port *) (recurring-write port x (+ d 1) recur)))"));
  T27 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_10 = YPfab_met(FUNCODEREF(fun_write_10),T27,LITREF(lit_15),LITREF(lit_16),sloc(48),YPsb((P)"(fun ((port <out-port>) x) (rep recur ((x x) (d -1)) (if (>= d *max-print-depth*) (puts port *) (recurring-write port x (+ d 1) recur))))"));
  T30 = VARREF_OR(YgooSioSwriteYwrite,YPfalse);
  T31 = fun_write_10;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooSioSwriteYwrite,T29);
  lit_19 = YPPsym((P)"writeln");
  lit_20 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_writeln_11 = YPfab_met(FUNCODEREF(fun_writeln_11),T32,LITREF(lit_19),LITREF(lit_20),sloc(54),YPsb((P)"(fun ((port <out-port>) x) (write port x) (newline port))"));
  T34 = VARREF_OR(YgooSioSwriteYwriteln,YPfalse);
  T35 = fun_writeln_11;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSioSwriteYwriteln,T33);
  lit_21 = YPPsym((P)"recurring-write");
  lit_22 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_23 = YPsb((P)"()");
  T36 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_12 = YPfab_met(FUNCODEREF(fun_recurring_write_12),T36,LITREF(lit_21),LITREF(lit_22),sloc(57),YPsb((P)"(fun ((port <out-port>) (x <lst>) (d <int>) (recur <fun>)) (if (nul? x) (puts port ()) (write-list port x d recur)))"));
  T38 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T39 = fun_recurring_write_12;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSioSwriteYrecurring_write,T37);
  lit_24 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_25 = YPsb((P)"$$");
  lit_26 = YPsb((P)"(");
  lit_27 = YPsb((P)")");
  T40 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_13 = YPfab_met(FUNCODEREF(fun_recurring_write_13),T40,LITREF(lit_21),LITREF(lit_24),sloc(62),YPsb((P)"(fun ((port <out-port>) (x <flat>) (d <int>) (recur <fun>)) (def prefix (cat $$ (as <str> (class-name (class-of x))) ()) (write-flat port prefix x ) d recur))"));
  T42 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T43 = fun_recurring_write_13;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSioSwriteYrecurring_write,T41);
  lit_28 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_29 = YPsb((P)"#(");
  lit_30 = YPsb((P)")");
  T44 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLtupG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_14 = YPfab_met(FUNCODEREF(fun_recurring_write_14),T44,LITREF(lit_21),LITREF(lit_28),sloc(66),YPsb((P)"(fun ((port <out-port>) (x <tup>) (d <int>) (recur <fun>)) (write-flat port #( x ) d recur))"));
  T46 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T47 = fun_recurring_write_14;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooSioSwriteYrecurring_write,T45);
  lit_31 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_32 = YPsb((P)"#[");
  lit_33 = YPsb((P)"]");
  T48 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_15 = YPfab_met(FUNCODEREF(fun_recurring_write_15),T48,LITREF(lit_21),LITREF(lit_31),sloc(69),YPsb((P)"(fun ((port <out-port>) (x <vec>) (d <int>) (recur <fun>)) (write-flat port #[ x ] d recur))"));
  T50 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T51 = fun_recurring_write_15;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooSioSwriteYrecurring_write,T49);
  lit_34 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T52 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_16 = YPfab_met(FUNCODEREF(fun_recurring_write_16),T52,LITREF(lit_21),LITREF(lit_34),sloc(72),YPsb((P)"(fun ((port <out-port>) (x <map>) (d <int>) (recur <fun>)) (write-map port x d recur))"));
  T54 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T55 = fun_recurring_write_16;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSioSwriteYrecurring_write,T53);
  lit_35 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_36 = YPPsym((P)"t");
  lit_37 = YPPsym((P)"f");
  T56 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_17 = YPfab_met(FUNCODEREF(fun_recurring_write_17),T56,LITREF(lit_21),LITREF(lit_35),sloc(75),YPsb((P)"(fun ((port <out-port>) (x <log>) (d <int>) (recur <fun>)) (if x (write-boolean port 't) (write-boolean port 'f)))"));
  T58 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T59 = fun_recurring_write_17;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YgooSioSwriteYrecurring_write,T57);
  lit_38 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T60 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsymG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_18 = YPfab_met(FUNCODEREF(fun_recurring_write_18),T60,LITREF(lit_21),LITREF(lit_38),sloc(80),YPsb((P)"(fun ((port <out-port>) (x <sym>) (d <int>) (recur <fun>)) (puts port (as <str> x)))"));
  T62 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T63 = fun_recurring_write_18;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSioSwriteYrecurring_write,T61);
  lit_39 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_40 = YPsb((P)"&0x");
  T64 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlocG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_19 = YPfab_met(FUNCODEREF(fun_recurring_write_19),T64,LITREF(lit_21),LITREF(lit_39),sloc(83),YPsb((P)"(fun ((port <out-port>) (x <loc>) (d <int>) (recur <fun>)) (puts port &0x) (puts port (num-to-str-base (%ib (%lu x)) 16)))"));
  T66 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T67 = fun_recurring_write_19;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSioSwriteYrecurring_write,T65);
  lit_41 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_42 = YPsb((P)"<num>");
  T68 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_20 = YPfab_met(FUNCODEREF(fun_recurring_write_20),T68,LITREF(lit_21),LITREF(lit_41),sloc(87),YPsb((P)"(fun ((port <out-port>) (x <num>) (d <int>) (recur <fun>)) (if (== x <num>) (puts port (as-binding-name <num>)) (write-number port x)))"));
  T70 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T71 = fun_recurring_write_20;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSioSwriteYrecurring_write,T69);
  lit_43 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T72 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_21 = YPfab_met(FUNCODEREF(fun_recurring_write_21),T72,LITREF(lit_21),LITREF(lit_43),sloc(92),YPsb((P)"(fun ((port <out-port>) (x <str>) (d <int>) (recur <fun>)) (write-string-literal port x))"));
  T74 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T75 = fun_recurring_write_21;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSioSwriteYrecurring_write,T73);
  lit_44 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T76 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_22 = YPfab_met(FUNCODEREF(fun_recurring_write_22),T76,LITREF(lit_21),LITREF(lit_44),sloc(95),YPsb((P)"(fun ((port <out-port>) (x <chr>) (d <int>) (recur <fun>)) (write-char-literal port x))"));
  T78 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T79 = fun_recurring_write_22;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooSioSwriteYrecurring_write,T77);
  lit_45 = YPPsym((P)"write-boolean");
  lit_46 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"mumble"));
  T80 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_boolean_23 = YPfab_met(FUNCODEREF(fun_write_boolean_23),T80,LITREF(lit_45),LITREF(lit_46),sloc(98),YPsb((P)"(fun ((port <out-port>) mumble) (put port #) (write port mumble))"));
  T82 = VARREF_OR(YgooSioSwriteYwrite_boolean,YPfalse);
  T83 = fun_write_boolean_23;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooSioSwriteYwrite_boolean,T81);
  lit_47 = YPPsym((P)"write-number");
  lit_48 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T84 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_number_24 = YPfab_met(FUNCODEREF(fun_write_number_24),T84,LITREF(lit_47),LITREF(lit_48),sloc(102),YPsb((P)"(fun ((port <out-port>) (x <num>)) (puts port (num-to-str x)))"));
  T86 = VARREF_OR(YgooSioSwriteYwrite_number,YPfalse);
  T87 = fun_write_number_24;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooSioSwriteYwrite_number,T85);
  lit_49 = YPPsym((P)"write-char-literal");
  lit_50 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_51 = YPsb((P)"#\\");
  T88 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_char_literal_25 = YPfab_met(FUNCODEREF(fun_write_char_literal_25),T88,LITREF(lit_49),LITREF(lit_50),sloc(105),YPsb((P)"(fun ((port <out-port>) x) (def probe (character-name x)) (puts port #\\) (if probe (write port probe) (put port x)))"));
  T90 = VARREF_OR(YgooSioSwriteYwrite_char_literal,YPfalse);
  T91 = fun_write_char_literal_25;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooSioSwriteYwrite_char_literal,T89);
  lit_52 = YPPsym((P)"character-name");
  lit_53 = YPPlist(1,YPPsym((P)"char"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_character_name_26 = YPfab_met(FUNCODEREF(fun_character_name_26),T92,LITREF(lit_52),LITREF(lit_53),sloc(112),YPsb((P)"(fun ((char <chr>) => <any>) (def assoc (assqn char $char-long-names 1)) (and assoc (1st assoc)))"));
  T94 = VARREF_OR(YgooSioSwriteYcharacter_name,YPfalse);
  T95 = fun_character_name_26;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YgooSioSwriteYcharacter_name,T93);
  lit_54 = YPPsym((P)"write-string-literal");
  lit_55 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T96 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_string_literal_27 = YPfab_met(FUNCODEREF(fun_write_string_literal_27),T96,LITREF(lit_54),LITREF(lit_55),sloc(116),YPsb((P)"(fun ((port <out-port>) x) (put port \") (def len (len x)) (rep loop ((i 0)) (if (= i len) (put port \") (let ((c (elt x i))) (if (or (= c \\) (= c \")) (put port \\)) (put port c) (loop (+ i 1))))))"));
  T98 = VARREF_OR(YgooSioSwriteYwrite_string_literal,YPfalse);
  T99 = fun_write_string_literal_27;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooSioSwriteYwrite_string_literal,T97);
  lit_56 = YPPsym((P)"write-list");
  lit_57 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_58 = YPsb((P)" ...");
  T100 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_list_28 = YPfab_met(FUNCODEREF(fun_write_list_28),T100,LITREF(lit_56),LITREF(lit_57),sloc(128),YPsb((P)"(fun ((port <out-port>) (x <lst>) (d <int>) (recur <fun>)) (if (quotation? x) (seq (put port ') (recur (head (tail x)) d)) (seq (put port () (recur (head x) d) (rep loop ((l (tail x)) (n 1)) (unless (nul? l) (if (>= n *max-print-length*) (puts port  ...) (seq (put port  ) (recur (head l) d) (loop (tail l) (+ n 1)))))) (put port )))))"));
  T102 = VARREF_OR(YgooSioSwriteYwrite_list,YPfalse);
  T103 = fun_write_list_28;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooSioSwriteYwrite_list,T101);
  lit_59 = YPPsym((P)"quotation?");
  lit_60 = YPPlist(1,YPPsym((P)"x"));
  lit_61 = YPPsym((P)"quote");
  T104 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_quotationQ_29 = YPfab_met(FUNCODEREF(fun_quotationQ_29),T104,LITREF(lit_59),LITREF(lit_60),sloc(143),YPsb((P)"(fun (x => <log>) (and (isa? x <lst>) (== (head x) 'quote) (isa? (tail x) <lst>) (nul? (tail (tail x)))))"));
  T106 = VARREF_OR(YgooSioSwriteYquotationQ,YPfalse);
  T107 = fun_quotationQ_29;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooSioSwriteYquotationQ,T105);
  lit_62 = YPPsym((P)"write-flat");
  lit_63 = YPPlist(6,YPPsym((P)"port"),YPPsym((P)"prefix"),YPPsym((P)"x"),YPPsym((P)"suffix"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_64 = YPsb((P)" ...");
  T108 = YPfab_sig(YPPlist(6,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLflatG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_write_flat_30 = YPfab_met(FUNCODEREF(fun_write_flat_30),T108,LITREF(lit_62),LITREF(lit_63),sloc(149),YPsb((P)"(fun ((port <out-port>) (prefix <str>) (x <flat>) (suffix <str>) (d <int>) (recur <fun>)) (puts port prefix) (def z (len x)) (when (> z 0) (recur (elt x 0) d) (rep loop ((i 1)) (if (>= i *max-print-length*) (puts port  ...) (unless (>= i z) (put port  ) (recur (elt x i) d) (loop (+ i 1)))))) (puts port suffix))"));
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
  fun_31 = YPfab_met(FUNCODEREF(fun_31),T113,YPfalse,LITREF(lit_68),sloc(167),YPsb((P)"(fun (blow) (for (((tup key val) x) (i (from 0))) (when (>= i *max-print-length*) (puts port  ...) (blow #f)) (put port  ) (recur key d) (puts port : ) (recur val d)))"));
  T112 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_map_32 = YPfab_met(FUNCODEREF(fun_write_map_32),T112,LITREF(lit_65),LITREF(lit_66),sloc(164),YPsb((P)"(fun ((port <out-port>) (x <map>) (d <int>) (recur <fun>)) (puts port #<) (emit port (class-name (class-of x))) (esc blow (for (((tup key val) x) (i (from 0))) (when (>= i *max-print-length*) (puts port  ...) (blow #f)) (put port  ) (recur key d) (puts port : ) (recur val d))) (put port >))"));
  T115 = VARREF_OR(YgooSioSwriteYwrite_map,YPfalse);
  T116 = fun_write_map_32;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YgooSioSwriteYwrite_map,T114);
  lit_71 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_72 = YPsb((P)"#{File-in-port %s %d}");
  T117 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLfile_in_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_33 = YPfab_met(FUNCODEREF(fun_recurring_write_33),T117,LITREF(lit_21),LITREF(lit_71),sloc(177),YPsb((P)"(fun ((port <out-port>) (x <file-in-port>) (d <int>) (recur <fun>)) (msg port #{File-in-port %s %d} (port-filename x) (port-line x)))"));
  T119 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T120 = fun_recurring_write_33;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YgooSioSwriteYrecurring_write,T118);
  lit_73 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_74 = YPsb((P)"#{File-out-port %s}");
  T121 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLfile_out_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_34 = YPfab_met(FUNCODEREF(fun_recurring_write_34),T121,LITREF(lit_21),LITREF(lit_73),sloc(180),YPsb((P)"(fun ((port <out-port>) (x <file-out-port>) (d <int>) (recur <fun>)) (msg port #{File-out-port %s} (port-filename x)))"));
  T123 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T124 = fun_recurring_write_34;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YgooSioSwriteYrecurring_write,T122);
  lit_75 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_76 = YPsb((P)"#{In-port}");
  T127 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLin_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T126 = fun_recurring_write_35 = YPfab_met(FUNCODEREF(fun_recurring_write_35),T127,LITREF(lit_21),LITREF(lit_75),sloc(183),YPsb((P)"(fun ((port <out-port>) (x <in-port>) (d <int>) (recur <fun>)) (puts port #{In-port}))"));
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
  fun_recurring_write_36 = YPfab_met(FUNCODEREF(fun_recurring_write_36),T0,LITREF(lit_21),LITREF(lit_77),sloc(186),YPsb((P)"(fun ((port <out-port>) (x <out-port>) (d <int>) (recur <fun>)) (puts port #{Out-port}))"));
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
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T6,YPfalse,LITREF(lit_81),sloc(195),YPsb((P)"(fun ((x ...)) #t)"));
  T5 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPfab_met(FUNCODEREF(fun_38),T5,YPfalse,LITREF(lit_82),sloc(195),YPsb((P)"(fun ((x ...)) #f)"));
  T4 = YPfab_sig(YPPlist(3,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_write_params_39 = YPfab_met(FUNCODEREF(fun_write_params_39),T4,LITREF(lit_79),LITREF(lit_80),sloc(191),YPsb((P)"(fun ((port <out-port>) (x <fun>) (recur <fun>)) (def names (fun-names x)) (put port () (def names (fun-names x)) (for ((i (from 0)) (spec (fun-specs x)) (first? (first-then (op #t) (op #f)))) (unless first? (put port  )) (if (nul? names) (write-type port spec) (seq (msg port (%s  (as <str> (elt names i))) (write-type port spec) (put port ))))) (def value (fun-val x)) (unless (or (not value) (== value <any>)) (msg port  => ) (write-value-type port value)) (put port )))"));
  T8 = VARREF_OR(YgooSioSwriteYwrite_params,YPfalse);
  T9 = fun_write_params_39;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSioSwriteYwrite_params,T7);
  lit_85 = YPPsym((P)"write-fun-guts");
  lit_86 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"name"),YPPsym((P)"recur"));
  lit_87 = YPsb((P)"#{");
  lit_88 = YPsb((P)"}");
  T10 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_fun_guts_40 = YPfab_met(FUNCODEREF(fun_write_fun_guts_40),T10,LITREF(lit_85),LITREF(lit_86),sloc(207),YPsb((P)"(fun ((port <out-port>) (x <fun>) (name <str>) (recur <fun>)) (puts port #{) (puts port name) (def name (fun-name x)) (and name (seq (put port  ) (puts port (as <str> name)))) (put port  ) (write-params port x recur) (puts port }))"));
  T12 = VARREF_OR(YgooSioSwriteYwrite_fun_guts,YPfalse);
  T13 = fun_write_fun_guts_40;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSioSwriteYwrite_fun_guts,T11);
  lit_89 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_90 = YPsb((P)"Gen");
  T14 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLgenG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_41 = YPfab_met(FUNCODEREF(fun_recurring_write_41),T14,LITREF(lit_21),LITREF(lit_89),sloc(217),YPsb((P)"(fun ((port <out-port>) (x <gen>) (d <int>) (recur <fun>)) (write-fun-guts port x Gen recur))"));
  T16 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T17 = fun_recurring_write_41;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooSioSwriteYrecurring_write,T15);
  lit_91 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_92 = YPsb((P)"Met");
  T18 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLmetG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_42 = YPfab_met(FUNCODEREF(fun_recurring_write_42),T18,LITREF(lit_21),LITREF(lit_91),sloc(220),YPsb((P)"(fun ((port <out-port>) (x <met>) (d <int>) (recur <fun>)) (write-fun-guts port x Met recur))"));
  T20 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T21 = fun_recurring_write_42;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YgooSioSwriteYrecurring_write,T19);
  lit_93 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_94 = YPsb((P)"<SRC-LOC %= %s>");
  T22 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsrc_locG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_43 = YPfab_met(FUNCODEREF(fun_recurring_write_43),T22,LITREF(lit_21),LITREF(lit_93),sloc(223),YPsb((P)"(fun ((port <out-port>) (x <src-loc>) (d <int>) (recur <fun>)) (msg out <SRC-LOC %= %s> (src-loc-line x) (src-loc-file x)))"));
  T24 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T25 = fun_recurring_write_43;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooSioSwriteYrecurring_write,T23);
  lit_95 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_96 = YPsb((P)"#{Class ");
  lit_97 = YPsb((P)" ");
  lit_98 = YPsb((P)"}");
  T26 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_44 = YPfab_met(FUNCODEREF(fun_recurring_write_44),T26,LITREF(lit_21),LITREF(lit_95),sloc(226),YPsb((P)"(fun ((port <out-port>) (x <class>) (d <int>) (recur <fun>)) (puts port #{Class ) (puts port (as <str> (class-name x))) (puts port  ) (recur (map class-name (class-parents x)) d) (puts port }))"));
  T28 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T29 = fun_recurring_write_44;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSioSwriteYrecurring_write,T27);
  lit_99 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_100 = YPsb((P)"#{T= ");
  lit_101 = YPsb((P)"}");
  T30 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsingletonG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_45 = YPfab_met(FUNCODEREF(fun_recurring_write_45),T30,LITREF(lit_21),LITREF(lit_99),sloc(233),YPsb((P)"(fun ((port <out-port>) (x <singleton>) (d <int>) (recur <fun>)) (puts port #{T= ) (recur (type-object x) d) (puts port }))"));
  T32 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T33 = fun_recurring_write_45;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooSioSwriteYrecurring_write,T31);
  lit_102 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_103 = YPsb((P)"#{T< ");
  lit_104 = YPsb((P)"}");
  T34 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsubclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_46 = YPfab_met(FUNCODEREF(fun_recurring_write_46),T34,LITREF(lit_21),LITREF(lit_102),sloc(238),YPsb((P)"(fun ((port <out-port>) (x <subclass>) (d <int>) (recur <fun>)) (puts port #{T< ) (write-type port (type-class x)) (puts port }))"));
  T36 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T37 = fun_recurring_write_46;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YgooSioSwriteYrecurring_write,T35);
  lit_105 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_106 = YPsb((P)"#{T+");
  lit_107 = YPPlist(1,YPPsym((P)"t"));
  lit_108 = YPsb((P)"}");
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPfab_met(FUNCODEREF(fun_47),T39,YPfalse,LITREF(lit_107),sloc(245),YPsb((P)"(fun (t) (put port  ) (write-type port t))"));
  T38 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLunionG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_48 = YPfab_met(FUNCODEREF(fun_recurring_write_48),T38,LITREF(lit_21),LITREF(lit_105),sloc(243),YPsb((P)"(fun ((port <out-port>) (x <union>) (d <int>) (recur <fun>)) (puts port #{T+) (do (fun (t) (put port  ) (write-type port t)) (union-elts x)) (puts port }))"));
  T41 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T42 = fun_recurring_write_48;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YgooSioSwriteYrecurring_write,T40);
  lit_109 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_110 = YPsb((P)"#{T*");
  lit_111 = YPPlist(1,YPPsym((P)"t"));
  lit_112 = YPsb((P)"}");
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPfab_met(FUNCODEREF(fun_49),T44,YPfalse,LITREF(lit_111),sloc(250),YPsb((P)"(fun (t) (put port  ) (write-type port t))"));
  T43 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_50 = YPfab_met(FUNCODEREF(fun_recurring_write_50),T43,LITREF(lit_21),LITREF(lit_109),sloc(248),YPsb((P)"(fun ((port <out-port>) (x <product>) (d <int>) (recur <fun>)) (puts port #{T*) (do (fun (t) (put port  ) (write-type port t)) (product-elts x)) (puts port }))"));
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
  fun_51 = YPfab_met(FUNCODEREF(fun_51),T49,YPfalse,LITREF(lit_116),sloc(255),YPsb((P)"(fun (t) (put port  ) (write-type port t))"));
  T48 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_52 = YPfab_met(FUNCODEREF(fun_write_value_type_52),T48,LITREF(lit_113),LITREF(lit_114),sloc(253),YPsb((P)"(fun ((port <out-port>) (x <product>)) (puts port (tup) (do (fun (t) (put port  ) (write-type port t)) (product-elts x)) (puts port )))"));
  T51 = VARREF_OR(YgooSioSwriteYwrite_value_type,YPfalse);
  T52 = fun_write_value_type_52;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YgooSioSwriteYwrite_value_type,T50);
  lit_118 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T53 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_53 = YPfab_met(FUNCODEREF(fun_write_value_type_53),T53,LITREF(lit_113),LITREF(lit_118),sloc(258),YPsb((P)"(fun ((port <out-port>) x) (write-type port x))"));
  T55 = VARREF_OR(YgooSioSwriteYwrite_value_type,YPfalse);
  T56 = fun_write_value_type_53;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YgooSioSwriteYwrite_value_type,T54);
  lit_119 = YPPsym((P)"recurring-write-type");
  lit_120 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T57 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_54 = YPfab_met(FUNCODEREF(fun_recurring_write_type_54),T57,LITREF(lit_119),LITREF(lit_120),sloc(261),YPsb((P)"(fun ((port <out-port>) (x <class>) (d <int>) (recur <fun>)) (puts port (as <str> (class-name x))))"));
  T59 = VARREF_OR(YgooSioSwriteYrecurring_write_type,YPfalse);
  T60 = fun_recurring_write_type_54;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YgooSioSwriteYrecurring_write_type,T58);
  lit_121 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T61 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_55 = YPfab_met(FUNCODEREF(fun_recurring_write_type_55),T61,LITREF(lit_119),LITREF(lit_121),sloc(264),YPsb((P)"(fun ((port <out-port>) x (d <int>) (recur <fun>)) (recurring-write port x d recur))"));
  T63 = VARREF_OR(YgooSioSwriteYrecurring_write_type,YPfalse);
  T64 = fun_recurring_write_type_55;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YgooSioSwriteYrecurring_write_type,T62);
  lit_122 = YPPsym((P)"write-type");
  lit_123 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_124 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  T66 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_56 = YPfab_met(FUNCODEREF(fun_recur_56),T66,LITREF(lit_8),LITREF(lit_124),sloc(268),YPsb((P)"(fun (x d => #f) (recurring-write-type port x d recur))"));
  T65 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_type_57 = YPfab_met(FUNCODEREF(fun_write_type_57),T65,LITREF(lit_122),LITREF(lit_123),sloc(267),YPsb((P)"(fun ((port <out-port>) x) (rep recur ((x x) (d 0)) (recurring-write-type port x d recur)))"));
  T68 = VARREF_OR(YgooSioSwriteYwrite_type,YPfalse);
  T69 = fun_write_type_57;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooSioSwriteYwrite_type,T67);
  lit_125 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_126 = YPsb((P)"#{Prop ");
  lit_127 = YPsb((P)"}");
  T70 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLpropG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_58 = YPfab_met(FUNCODEREF(fun_recurring_write_58),T70,LITREF(lit_21),LITREF(lit_125),sloc(271),YPsb((P)"(fun ((port <out-port>) (x <prop>) (d <int>) (recur <fun>)) (puts port #{Prop ) (recur (prop-getter x) d) (puts port }))"));
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
  fun_59 = YPfab_met(FUNCODEREF(fun_59),T77,YPfalse,LITREF(lit_13),sloc(280),YPsb((P)"(fun () (seq (set *report-prop-unbound-errors?* #f) (dlet () (for ((prop (props-of x)) (i (from 0))) (when (>= i *max-print-length*) (puts port  ...) (blow #f)) (def getter (prop-getter prop)) (put port  ) (emit port (fun-name getter)) (puts port : ) (recur (getter x) d)))))"));
  T76 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_60 = YPfab_met(FUNCODEREF(fun_60),T76,YPfalse,LITREF(lit_13),sloc(280),YPsb((P)"(fun () (set *report-prop-unbound-errors?* x-1456))"));
  T75 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPfab_met(FUNCODEREF(fun_61),T75,YPfalse,LITREF(lit_130),sloc(279),YPsb((P)"(fun (blow) (without-prop-unbound-errors (for ((prop (props-of x)) (i (from 0))) (when (>= i *max-print-length*) (puts port  ...) (blow #f)) (def getter (prop-getter prop)) (put port  ) (emit port (fun-name getter)) (puts port : ) (recur (getter x) d))))"));
  T74 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_62 = YPfab_met(FUNCODEREF(fun_recurring_write_62),T74,LITREF(lit_21),LITREF(lit_128),sloc(276),YPsb((P)"(fun ((port <out-port>) x (d <int>) (recur <fun>)) (puts port #{) (emit port (class-name (class-of x))) (esc blow (without-prop-unbound-errors (for ((prop (props-of x)) (i (from 0))) (when (>= i *max-print-length*) (puts port  ...) (blow #f)) (def getter (prop-getter prop)) (put port  ) (emit port (fun-name getter)) (puts port : ) (recur (getter x) d)))) (puts port }))"));
  T79 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T80 = fun_recurring_write_62;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YgooSioSwriteYrecurring_write,T78);
  lit_134 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_135 = YPsb((P)"#{End-of-file}");
  T83 = XCALL0(1,VARREF(YgooSchrYeof_object));
  T82 = XCALL1(1,VARREF(YgooStypesYtE),T83);
  T81 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),T82,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_63 = YPfab_met(FUNCODEREF(fun_recurring_write_63),T81,LITREF(lit_21),LITREF(lit_134),sloc(291),YPsb((P)"(fun ((port <out-port>) (x (t= (eof-object))) (d <int>) (recur <fun>)) (puts port #{End-of-file}))"));
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
  fun_arg_64 = YPfab_met(FUNCODEREF(fun_arg_64),T89,LITREF(lit_138),LITREF(lit_139),sloc(298),YPsb((P)"(fun ((char <chr>) (class <any>) => <any>) (def current-index argument-index) (set argument-index (+ argument-index 1)) (assert (< current-index num-arguments) Too few arguments for msg string %=: %= message arguments) (def argument (elt arguments current-index)) (assert (or (== class <any>) (isa? argument class)) Msg argument for directive '%%%c' not of class %t: %= char class argument) argument)"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPfab_met(FUNCODEREF(fun_65),T88,YPfalse,LITREF(lit_142),sloc(309),YPsb((P)"(fun ((c <chr>)) (if found-percent? (seq (case (to-upper c) ((D) (puts port (num-to-str (arg c <num>)))) ((B) (puts port (num-to-str (arg c <int>) 2))) ((O) (puts port (num-to-str (arg c <int>) 8))) ((X) (puts port (num-to-str (arg c <int>) 16))) ((C) (put port (arg c <chr>))) ((S) (emit port (arg c <any>))) ((=) (write port (arg c <any>))) ((T) (write-type port (arg c <any>))) ((%) (put port %)) (#t (error Invalid msg directive '%s' in \"%s\" c message))) (set found-percent? #f)) (if (== c %) (set found-percent? #t) (put port c))))"));
  T87 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_msg_66 = YPfab_met(FUNCODEREF(fun_msg_66),T87,LITREF(lit_136),LITREF(lit_137),sloc(294),YPsb((P)"(fun ((port <out-port>) (message <str>) (arguments ...)) (def found-percent? #f) (def (argument-index <int>) 0) (def num-arguments (len arguments)) (loc ((arg ((char <chr>) (class <any>) => <any>) (def current-index argument-index) (set argument-index (+ argument-index 1)) (assert (< current-index num-arguments) Too few arguments for msg string %=: %= message arguments) (def argument (elt arguments current-index)) (assert (or (== class <any>) (isa? argument class)) Msg argument for directive '%%%c' not of class %t: %= char class argument) argument)) (do (fun ((c <chr>)) (if found-percent? (seq (case (to-upper c) ((D) (puts port (num-to-str (arg c <num>)))) ((B) (puts port (num-to-str (arg c <int>) 2))) ((O) (puts port (num-to-str (arg c <int>) 8))) ((X) (puts port (num-to-str (arg c <int>) 16))) ((C) (put port (arg c <chr>))) ((S) (emit port (arg c <any>))) ((=) (write port (arg c <any>))) ((T) (write-type port (arg c <any>))) ((%) (put port %)) (#t (error Invalid msg directive '%s' in \"%s\" c message))) (set found-percent? #f)) (if (== c %) (set found-percent? #t) (put port c)))) message)) (assert (not found-percent?) Incomplete msg directive in \"%s\" message))"));
  T91 = VARREF_OR(YgooSconditionsYmsg,YPfalse);
  T92 = fun_msg_66;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YgooSconditionsYmsg,T90);
  lit_145 = YPPsym((P)"post");
  lit_146 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T93 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_post_67 = YPfab_met(FUNCODEREF(fun_post_67),T93,LITREF(lit_145),LITREF(lit_146),sloc(331),YPsb((P)"(fun ((message <str>) (arguments ...)) (app msg out message arguments))"));
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
  fun_maybe_pack_chars_68 = YPfab_met(FUNCODEREF(fun_maybe_pack_chars_68),T100,LITREF(lit_149),LITREF(lit_13),sloc(349),YPsb((P)"(fun () (unless (nul? chars) (pack (quasiquote (puts (unquote port) (unquote (as <str> chars))))) (zap! chars)))"));
  T99 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_arg_69 = YPfab_met(FUNCODEREF(fun_arg_69),T99,LITREF(lit_138),LITREF(lit_152),sloc(350),YPsb((P)"(fun ((char <chr>) => <any>) (maybe-pack-chars) (def current-index arg-index) (set arg-index (+ arg-index 1)) (assert (< current-index num-args) Too few arguments for msg string %=: %= message args) (elt args current-index))"));
  T98 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPfab_met(FUNCODEREF(fun_70),T98,YPfalse,LITREF(lit_154),sloc(357),YPsb((P)"(fun ((c <chr>)) (if found-percent? (seq (case (to-upper c) ((D) (pack (quasiquote (puts (unquote port) (num-to-str (unquote (arg c))))))) ((B) (pack (quasiquote (puts (unquote port) (num-to-str (unquote (arg c)) 2))))) ((O) (pack (quasiquote (puts (unquote port) (num-to-str (unquote (arg c)) 8))))) ((X) (pack (quasiquote (puts (unquote port) (num-to-str (unquote (arg c)) 16))))) ((C) (pack (quasiquote (put (unquote port) (unquote (arg c <chr>)))))) ((S) (pack (quasiquote (emit (unquote port) (unquote (arg c)))))) ((=) (pack (quasiquote (write (unquote port) (unquote (arg c)))))) ((T) (pack (quasiquote (write-type (unquote port) (unquote (arg c)))))) ((%) (add! chars %)) (#t (error Invalid msg directive '%s' in \"%s\" c message))) (set found-percent? #f)) (if (== c %) (set found-percent? #t) (add! chars c))))"));
  T97 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSioSwriteYpe_msg = YPfab_met(FUNCODEREF(YgooSioSwriteYpe_msg),T97,LITREF(lit_147),LITREF(lit_148),sloc(338),YPsb((P)"(fun (port-expr (message <str>) (args <lst>)) (def found-percent? #f) (def (arg-index <int>) 0) (def num-args (len args)) (def chars (fab <vec> 0)) (def port (gensym)) (def exprs (packing (loc ((maybe-pack-chars () (unless (nul? chars) (pack (quasiquote (puts (unquote port) (unquote (as <str> chars))))) (zap! chars))) (arg ((char <chr>) => <any>) (maybe-pack-chars) (def current-index arg-index) (set arg-index (+ arg-index 1)) (assert (< current-index num-args) Too few arguments for msg string %=: %= message args) (elt args current-index))) (do (fun ((c <chr>)) (if found-percent? (seq (case (to-upper c) ((D) (pack (quasiquote (puts (unquote port) (num-to-str (unquote (arg c))))))) ((B) (pack (quasiquote (puts (unquote port) (num-to-str (unquote (arg c)) 2))))) ((O) (pack (quasiquote (puts (unquote port) (num-to-str (unquote (arg c)) 8))))) ((X) (pack (quasiquote (puts (unquote port) (num-to-str (unquote (arg c)) 16))))) ((C) (pack (quasiquote (put (unquote port) (unquote (arg c <chr>)))))) ((S) (pack (quasiquote (emit (unquote port) (unquote (arg c)))))) ((=) (pack (quasiquote (write (unquote port) (unquote (arg c)))))) ((T) (pack (quasiquote (write-type (unquote port) (unquote (arg c)))))) ((%) (add! chars %)) (#t (error Invalid msg directive '%s' in \"%s\" c message))) (set found-percent? #f)) (if (== c %) (set found-percent? #t) (add! chars c)))) message) (maybe-pack-chars)))) (assert (not found-percent?) Incomplete msg directive in \"%s\" message) (quasiquote (let (((unquote port) (unquote port-expr))) (unquote-splicing exprs))))"));
  T101 = YgooSioSwriteYpe_msg;
  VARSET(YgooSioSwriteYpe_msg,T101);
  lit_160 = YPPlist(1,YPPsym((P)"exp"));
  lit_161 = YPPlist(1,YPPsym((P)"return"));
  lit_162 = YPPsym((P)"x-1467");
  lit_163 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_164 = YPPsym((P)"msg*");
  lit_165 = YPsb((P)"Match Pattern Failure");
  T104 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1467_72 = YPfab_met(FUNCODEREF(fun_x_1467_72),T104,LITREF(lit_162),LITREF(lit_163),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'msg* exp)))"));
  T103 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPfab_met(FUNCODEREF(fun_73),T103,YPfalse,LITREF(lit_161),YPfalse,YPsb((P)"(fun (return) (loc ((x-1467 ((msg <str>) (args ...)) (return (macro-error 'msg* exp)))) (let ((x-1466 exp)) (let ((port #f) (message #f) (args #f)) (if (isa? x-1466 <lst>) (let ((x-1466 (match-atom x-1466 'msg* x-1467))) (let ((x-1466 (seq (set port (match-unquote x-1466 x-1467)) (tail x-1466)))) (let ((x-1466 (seq (set message (match-unquote x-1466 x-1467)) (tail x-1466)))) (let ((x-1466 (seq (set args x-1466) '()))) (let ((x-1466 (seq (let ((x-1466 (match-sublist x-1466 x-1467))) (match-nul-list x-1466 x-1467)) (tail x-1466)))) (match-nul-list x-1466 x-1467)))))) (x-1467 Match Pattern Failure x-1466)) (if (isa? message <str>) (pe-msg port message args) (quasiquote (msg (unquote port) (unquote message) (unquote-splicing args))))))))"));
  T102 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPfab_met(FUNCODEREF(fun_74),T102,YPfalse,LITREF(lit_160),YPfalse,YPsb((P)"(fun (exp) (mif ((msg* (unquote port) (unquote message) (unquote-splicing args)) exp) (if (isa? message <str>) (pe-msg port message args) (quasiquote (msg (unquote port) (unquote message) (unquote-splicing args)))) (macro-error 'msg* exp)))"));
  T105 = fun_74;
  YPmacro(YPPsym((P)"goo/io/write"),YPPsym((P)"msg*"),T105);
  lit_166 = YPPsym((P)"msg-to-str");
  lit_167 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T108 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_75 = YPfab_met(FUNCODEREF(fun_75),T108,YPfalse,LITREF(lit_13),sloc(390),YPsb((P)"(fun () (seq (set port (open <str-out-port> )) (app msg port message arguments) (port-contents port)))"));
  T107 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_76 = YPfab_met(FUNCODEREF(fun_76),T107,YPfalse,LITREF(lit_13),sloc(390),YPsb((P)"(fun () (and port (close port)))"));
  T106 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSconditionsYmsg_to_str = YPfab_met(FUNCODEREF(YgooSconditionsYmsg_to_str),T106,LITREF(lit_166),LITREF(lit_167),sloc(389),YPsb((P)"(fun ((message <str>) (arguments ...) => <str>) (with-port (port (open <str-out-port> )) (app msg port message arguments) (port-contents port)))"));
  T109 = YgooSconditionsYmsg_to_str;
  VARSET(YgooSconditionsYmsg_to_str,T109);
  lit_168 = YPPsym((P)"say");
  lit_169 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"args"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSwriteYsay = YPfab_met(FUNCODEREF(YgooSioSwriteYsay),T110,LITREF(lit_168),LITREF(lit_169),sloc(394),YPsb((P)"(fun ((port <out-port>) (args ...)) (def lim (len args)) (rep loop ((i 0)) (unless (== i lim) (puts port (to-str (low-elt args i))) (loop (+ i 1)))))"));
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
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSstr;

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
  {"log", &module_info_gooSmath, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"port-filename", &module_info_gooSioSport, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {">", &module_info_gooSmag, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"$char-long-names", &module_info_gooSioSread, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSlog, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"*gensym-counter*", &module_info_gooSlate_macros, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"write-number", CVAR, &YgooSioSwriteYwrite_number},
  {"recurring-write", CVAR, &YgooSioSwriteYrecurring_write},
  {"recurring-write-type", CVAR, &YgooSioSwriteYrecurring_write_type},
  {"pe-msg", CVAR, &YgooSioSwriteYpe_msg},
  {"msg*", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"write-list", CVAR, &YgooSioSwriteYwrite_list},
  {"say", CVAR, &YgooSioSwriteYsay},
  {"quotation?", CVAR, &YgooSioSwriteYquotationQ},
  {"---main-1---", PVAR, NULL},
  {"as-binding-name", CVAR, &YgooSioSwriteYas_binding_name},
  {"write-params", CVAR, &YgooSioSwriteYwrite_params},
  {"emit", CVAR, &YgooSioSwriteYemit},
  {"writeln", CVAR, &YgooSioSwriteYwriteln},
  {"write-type", CVAR, &YgooSioSwriteYwrite_type},
  {"do-emit", CVAR, &YgooSioSwriteYdo_emit},
  {"write-string-literal", CVAR, &YgooSioSwriteYwrite_string_literal},
  {"write-flat", CVAR, &YgooSioSwriteYwrite_flat},
  {"*max-print-depth*", DVAR, &YgooSioSwriteYTmax_print_depthT},
  {"post", CVAR, &YgooSioSwriteYpost},
  {"write-value-type", CVAR, &YgooSioSwriteYwrite_value_type},
  {"write-char-literal", CVAR, &YgooSioSwriteYwrite_char_literal},
  {"*max-print-length*", DVAR, &YgooSioSwriteYTmax_print_lengthT},
  {"write", CVAR, &YgooSioSwriteYwrite},
  {"character-name", CVAR, &YgooSioSwriteYcharacter_name},
  {"write-boolean", CVAR, &YgooSioSwriteYwrite_boolean},
  {"write-fun-guts", CVAR, &YgooSioSwriteYwrite_fun_guts},
  {"write-map", CVAR, &YgooSioSwriteYwrite_map},
  {"write-to-string", CVAR, &YgooSioSwriteYwrite_to_string},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"recurring-write", NULL},
  {"say", NULL},
  {"emit", NULL},
  {"pe-msg", NULL},
  {"writeln", NULL},
  {"msg-to-str", NULL},
  {"write-type", NULL},
  {"*max-print-depth*", NULL},
  {"post", NULL},
  {"msg*", NULL},
  {"*max-print-length*", NULL},
  {"write", NULL},
  {"msg", NULL},
  {"write-to-string", NULL},
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
