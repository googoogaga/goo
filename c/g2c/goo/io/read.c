/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/read");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/read */

EXT(YgooSmathYlog,"goo/math","log");
DEF(YgooSioSreadYTsharp_macrosT,"goo/io/read","*sharp-macros*");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYC,"goo/math","^");
DEF(YgooSioSreadYpreferred_case,"goo/io/read","preferred-case");
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
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YgooSioSreadYflush_whitespace,"goo/io/read","flush-whitespace");
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
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(YgooSioSreadYsub_read,"goo/io/read","sub-read");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
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
DEF(YgooSioSreadYDclose_curly,"goo/io/read","$close-curly");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yprop_offset,"goo/boot","prop-offset");
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
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSmathYatan2,"goo/math","atan2");
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
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YgooSioSreadYsub_read_vertical,"goo/io/read","sub-read-vertical");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
DEF(YgooSioSreadYsub_read_list,"goo/io/read","sub-read-list");
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
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
DEF(YgooSioSreadYsub_read_token,"goo/io/read","sub-read-token");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
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
DEF(YgooSioSreadYDstring_escape_chars,"goo/io/read","$string-escape-chars");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YgooSioSreadYTread_terminatingQ_vectorT,"goo/io/read","*read-terminating?-vector*");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YOnew,"goo/boot","@new");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YgooSioSreadYwarn,"goo/io/read","warn");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YgooSioSreadYreading_error,"goo/io/read","reading-error");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YgooSioSreadYDclose_paren,"goo/io/read","$close-paren");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
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
DEF(YgooSioSreadYsub_read_brackets,"goo/io/read","sub-read-brackets");
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
DEF(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
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
DEF(YgooSioSreadYtoken_message,"goo/io/read","token-message");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
DEF(YgooSioSreadYbs_sym,"goo/io/read","bs-sym");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YgooSioSreadYread_string_literal,"goo/io/read","read-string-literal");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
DEF(YgooSioSreadYmake_reader_token,"goo/io/read","make-reader-token");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
DEF(YgooSioSreadYDclose_bracket,"goo/io/read","$close-bracket");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YgooSioSreadYLreader_tokenG,"goo/io/read","<reader-token>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfun_env,"goo/boot","fun-env");
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
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
DEF(YgooSioSreadYsub_read_backslash,"goo/io/read","sub-read-backslash");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooSioSreadYsub_read_carefully,"goo/io/read","sub-read-carefully");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
DEF(YgooSioSreadYTread_dispatch_vectorT,"goo/io/read","*read-dispatch-vector*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOlit,"goo/boot","@lit");
DEF(YgooSioSreadYsub_read_constituent,"goo/io/read","sub-read-constituent");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooSioSreadYDvert_sym,"goo/io/read","$vert-sym");
DEF(YgooSioSreadYDvert_proxy,"goo/io/read","$vert-proxy");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YOdo,"goo/boot","@do");
DEF(YgooSioSreadYDstrange_symbol_names,"goo/io/read","$strange-symbol-names");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
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
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
DEF(YgooSioSreadYreader_tokenQ,"goo/io/read","reader-token?");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YgooSioSreadYsub_read_list_eof_error,"goo/io/read","sub-read-list-eof-error");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
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
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YgooSioSreadYdefine_sharp_macro,"goo/io/read","define-sharp-macro");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YgooSioSreadYsub_read_seq,"goo/io/read","sub-read-seq");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSmathYS,"goo/math","/");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
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
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
DEF(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DEF(YgooSioSreadYgobble_nested_comment,"goo/io/read","gobble-nested-comment");
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
DEF(YgooSioSreadYparse_token,"goo/io/read","parse-token");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
DEF(YgooSioSreadYset_standard_syntaxX,"goo/io/read","set-standard-syntax!");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YOtup,"goo/boot","@tup");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
DEF(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
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
DEF(YgooSioSreadYreverse_list_Gstring,"goo/io/read","reverse-list->string");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
DEF(YgooSioSreadYsub_read_curlies,"goo/io/read","sub-read-curlies");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
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
DEF(YgooSioSreadYgobble_line,"goo/io/read","gobble-line");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathY_,"goo/math","-");
EXT(YOrev,"goo/boot","@rev");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_33);
DEFLIT(lit_109);
DEFLIT(lit_45);
DEFLIT(lit_107);
DEFLIT(lit_100);
DEFLIT(lit_62);
DEFLIT(lit_94);
DEFLIT(lit_86);
DEFLIT(lit_31);
DEFLIT(lit_105);
DEFLIT(lit_27);
DEFLIT(lit_48);
DEFLIT(lit_66);
DEFLIT(lit_114);
DEFLIT(lit_79);
DEFLIT(lit_102);
DEFLIT(lit_122);
DEFLIT(lit_40);
DEFLIT(lit_115);
DEFLIT(lit_95);
DEFLIT(lit_93);
DEFLIT(lit_58);
DEFLIT(lit_54);
DEFLIT(lit_103);
DEFLIT(lit_113);
DEFLIT(lit_32);
DEFLIT(lit_2);
DEFLIT(lit_5);
DEFLIT(lit_23);
DEFLIT(lit_49);
DEFLIT(lit_42);
DEFLIT(lit_17);
DEFLIT(lit_38);
DEFLIT(lit_70);
DEFLIT(lit_77);
DEFLIT(lit_47);
DEFLIT(lit_81);
DEFLIT(lit_7);
DEFLIT(lit_22);
DEFLIT(lit_35);
DEFLIT(lit_28);
DEFLIT(lit_67);
DEFLIT(lit_116);
DEFLIT(lit_14);
DEFLIT(lit_60);
DEFLIT(lit_41);
DEFLIT(lit_74);
DEFLIT(lit_43);
DEFLIT(lit_68);
DEFLIT(lit_29);
DEFLIT(lit_51);
DEFLIT(lit_37);
DEFLIT(lit_98);
DEFLIT(lit_119);
DEFLIT(lit_8);
DEFLIT(lit_52);
DEFLIT(lit_76);
DEFLIT(lit_16);
DEFLIT(lit_125);
DEFLIT(lit_19);
DEFLIT(lit_90);
DEFLIT(lit_39);
DEFLIT(lit_59);
DEFLIT(lit_57);
DEFLIT(lit_20);
DEFLIT(lit_118);
DEFLIT(lit_0);
DEFLIT(lit_9);
DEFLIT(lit_78);
DEFLIT(lit_26);
DEFLIT(lit_13);
DEFLIT(lit_89);
DEFLIT(lit_97);
DEFLIT(lit_4);
DEFLIT(lit_88);
DEFLIT(lit_61);
DEFLIT(lit_44);
DEFLIT(lit_104);
DEFLIT(lit_15);
DEFLIT(lit_10);
DEFLIT(lit_6);
DEFLIT(lit_124);
DEFLIT(lit_87);
DEFLIT(lit_108);
DEFLIT(lit_46);
DEFLIT(lit_12);
DEFLIT(lit_21);
DEFLIT(lit_111);
DEFLIT(lit_106);
DEFLIT(lit_120);
DEFLIT(lit_83);
DEFLIT(lit_112);
DEFLIT(lit_18);
DEFLIT(lit_34);
DEFLIT(lit_50);
DEFLIT(lit_123);
DEFLIT(lit_53);
DEFLIT(lit_82);
DEFLIT(lit_91);
DEFLIT(lit_64);
DEFLIT(lit_80);
DEFLIT(lit_30);
DEFLIT(lit_126);
DEFLIT(lit_11);
DEFLIT(lit_72);
DEFLIT(lit_36);
DEFLIT(lit_110);
DEFLIT(lit_55);
DEFLIT(lit_75);
DEFLIT(lit_92);
DEFLIT(lit_84);
DEFLIT(lit_85);
DEFLIT(lit_96);
DEFLIT(lit_117);
DEFLIT(lit_71);
DEFLIT(lit_3);
DEFLIT(lit_69);
DEFLIT(lit_99);
DEFLIT(lit_24);
DEFLIT(lit_1);
DEFLIT(lit_73);
DEFLIT(lit_101);
DEFLIT(lit_63);
DEFLIT(lit_56);
DEFLIT(lit_25);
DEFLIT(lit_65);
DEFLIT(lit_121);

/* FUNCTIONS: */

LOCFOR(fun_read_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_read_from_string_3);
LOCFOR(fun_sub_read_carefully_4);
LOCFOR(fun_token_message_5);
LOCFOR(fun_make_reader_token_6);
LOCFOR(fun_reader_tokenQ_7);
LOCFOR(fun_sub_read_8);
LOCFOR(fun_9);
LOCFOR(fun_set_standard_syntaxX_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
FUNFOR(YgooSioSreadYflush_whitespace);
FUNFOR(YgooSioSreadYread_delimited_list);
FUNFOR(YgooSioSreadYsub_read_constituent);
LOCFOR(fun_16);
LOCFOR(fun_set_standard_read_macroX_17);
LOCFOR(fun_get_standard_read_macro_18);
LOCFOR(fun_sub_read_vertical_19);
LOCFOR(fun_sub_read_backslash_20);
FUNFOR(YgooSioSreadYsub_read_list_eof_error);
LOCFOR(fun_read_next_22);
LOCFOR(fun_sub_read_list_23);
LOCFOR(fun_sub_read_seq_24);
LOCFOR(fun_sub_read_brackets_25);
LOCFOR(fun_sub_read_curlies_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
FUNFOR(YgooSioSreadYread_string_literal);
LOCFOR(fun_34);
LOCFOR(fun_gobble_line_35);
LOCFOR(fun_define_sharp_macro_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
FUNFOR(YgooSioSreadYgobble_nested_comment);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_sub_read_token_48);
LOCFOR(fun_49);
LOCFOR(fun_parse_token_50);
LOCFOR(fun_reading_error_51);
LOCFOR(fun_warn_52);
LOCFOR(fun_reverse_list_Gstring_53);
extern P YgooSioSreadY___main_0___ ();
extern P YgooSioSreadY___main_1___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_read_0) {
  P port_;
  P formF3686;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  LOOP_153: {
    T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
    formF3686 = T7;
    T2 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF3686);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T0 = formF3686;
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF3686,VARREF(YgooSioSreadYDclose_paren));
      if (T4 != YPfalse) {
        T5 = CALL1(1,VARREF(YgooSioSreadYwarn),LITREF(lit_2));
        T3 = T5;
      } else {
        goto LOOP_153;
        T3 = T6;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_1) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_in_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  T2 = BOXGET(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSconditionsYread),T2);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_2) {
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

LOCCODEDEF(fun_read_from_string_3) {
  P x_;
  P portF3687;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  portF3687 = YPfalse;
  portF3687 = BOXFAB(portF3687);
  T2 = FUNFAB(fun_1,2,portF3687,x_);
  T3 = FUNFAB(fun_2,1,portF3687);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_sub_read_carefully_4) {
  P port_;
  P formF3688;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF3688 = T7;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF3688);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_8));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF3688);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Ytail),formF3688);
      T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,T6);
      T3 = T5;
    } else {
      T3 = formF3688;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_token_message_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSioSreadYtoken_message));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_make_reader_token_6) {
  P message_;
  P T0;
LINK_STACK();
  ARG(message_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),message_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reader_tokenQ_7) {
  P form_;
  P T0;
LINK_STACK();
  ARG(form_, 0);
  T0 = CALL2(1,VARREF(YisaQ),form_,VARREF(YgooSioSreadYLreader_tokenG));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sub_read_8) {
  P port_;
  P cF3689;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(port_, 0);
  T5 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF3689 = T5;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3689);
  if (T1 != YPfalse) {
    T0 = cF3689;
  } else {
    T4 = CALL1(1,VARREF(YgooSchrYchar_Gascii),cF3689);
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T4);
    T2 = CALL2(1,T3,cF3689,port_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_9) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_22),c_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_set_standard_syntaxX_10) {
  P char_,terminatingQ_,reader_;
  P T0,T1,T2;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(reader_, 2);
  T0 = CALL1(1,VARREF(YgooSchrYchar_Gascii),char_);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),reader_,VARREF(YgooSioSreadYTread_dispatch_vectorT),T0);
  T2 = CALL1(1,VARREF(YgooSchrYchar_Gascii),char_);
  T1 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),terminatingQ_,VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T2);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_11) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_12) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),FREEREF(0),VARREF(YgooSioSreadYTread_dispatch_vectorT),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYflush_whitespace) {
  P port_;
  P cF3690;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  T4 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF3690 = T4;
  T2 = CALL1(1,VARREF(YgooSchrYchar_Gascii),cF3690);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),VARREF(YgooScolsSstrYascii_whitespaces),T2);
  if (T1 != YPfalse) {
    CALL1(1,VARREF(YgooSioSportYget),port_);
    T3 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
    T0 = T3;
  } else {
    T0 = cF3690;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_delimited_list) {
  P endchar_,port_;
  P UF3693;
  P cF3692;
  P retlistF3691;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(endchar_, 0);
  ARG(port_, 1);
  retlistF3691 = VARREF(Ynil);
  T11 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
  cF3692 = T11;
  LOOP_154: {
    P a154_0;
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),cF3692,endchar_);
    if (T2 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T4 = retlistF3691;
      T3 = CALL1(1,VARREF(YgooScolsSseqYrev),T4);
      T1 = T3;
    } else {
      T8 = retlistF3691;
      UF3693 = T8;
      T7 = CALL1(1,VARREF(YgooSconditionsYread),port_);
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,UF3693);
      T5 = retlistF3691 = T6;
      T10 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
      a154_0 = T10;
      cF3692 = a154_0;
      goto LOOP_154;
      T1 = T9;
    }
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YgooSioSreadYsub_read_constituent) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),c_,port_);
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_16) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL3(1,VARREF(YgooSioSreadYset_standard_syntaxX),c_,YPfalse,VARREF(YgooSioSreadYsub_read_constituent));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_set_standard_read_macroX_17) {
  P char_,terminatingQ_,proc_;
  P T0;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(proc_, 2);
  T0 = CALL3(1,VARREF(YgooSioSreadYset_standard_syntaxX),char_,terminatingQ_,proc_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_get_standard_read_macro_18) {
  P char_;
  P T0,T1;
LINK_STACK();
  ARG(char_, 0);
  T1 = CALL1(1,VARREF(YgooSchrYchar_Gascii),char_);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_vertical_19) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),LITREF(lit_42),port_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_backslash_20) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),LITREF(lit_45),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYsub_read_list_eof_error) {
  P port_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  T0 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_50));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_read_next_22) {
  P c_,prev_,line_,form_;
  P nextF3695;
  P prevF3694;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(c_, 0);
  ARG(prev_, 1);
  ARG(line_, 2);
  ARG(form_, 3);
  T19 = CALL2(1,VARREF(YgooSmacrosYEE),prev_,VARREF(YgooSioSreadYDvert_proxy));
  if (T19 != YPfalse) {
    T18 = VARREF(YgooSioSreadYDvert_sym);
  } else {
    T18 = prev_;
  }
  prevF3694 = T18;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),form_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),FREEREF(0));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDclose_paren));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,prevF3694);
      T3 = T5;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDvert_sym));
      if (T7 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),FREEREF(0));
        nextF3695 = T12;
        T10 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,nextF3695);
        T9 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF3694,T10,line_);
        T11 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,FREEREF(0));
        T8 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T9,T11,line_);
        T6 = T8;
      } else {
        if (YPtrue != YPfalse) {
          T16 = CALL1(1,VARREF(YgooSioSportYport_line),FREEREF(0));
          T17 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
          T15 = CALL4(1,FREEREF(1),c_,form_,T16,T17);
          T14 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF3694,T15,line_);
          T13 = T14;
        } else {
          T13 = YPfalse;
        }
        T6 = T13;
      }
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_list_23) {
  P c_,p_;
  P read_nextF3698;
  P formF3697;
  P lineF3696;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(p_, 1);
  T10 = CALL1(1,VARREF(YgooSioSportYport_line),p_);
  lineF3696 = T10;
  T9 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
  formF3697 = T9;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF3697);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),p_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF3697,VARREF(YgooSioSreadYDclose_paren));
    if (T4 != YPfalse) {
      T3 = Ynil;
    } else {
      if (YPtrue != YPfalse) {
        T8 = FUNSHELL(1,fun_read_next_22,2);
        read_nextF3698 = T8;
        FUNINIT(read_nextF3698, 2,p_,read_nextF3698);
        T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
        T6 = CALL4(1,read_nextF3698,c_,formF3697,lineF3696,T7);
        T5 = T6;
      } else {
        T5 = YPfalse;
      }
      T3 = T5;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_seq_24) {
  P c_,e_,port_;
  P formF3699;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(e_, 1);
  ARG(port_, 2);
  T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF3699 = T7;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF3699);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_57));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF3699,e_);
    if (T4 != YPfalse) {
      T3 = Ynil;
    } else {
      T6 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,e_,port_);
      T5 = CALL2(1,VARREF(YgooSmacrosYpair),formF3699,T6);
      T3 = T5;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_brackets_25) {
  P c_,port_;
  P x_1442F3702;
  P x_1441F3701;
  P formF3700;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T29 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_bracket),port_);
  formF3700 = T29;
  T28 = CALL1(1,VARREF(YgooStypesYlen),formF3700);
  x_1441F3701 = T28;
  x_1442F3702 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1442F3702,x_1441F3701,YPint((P)2));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
    T5 = CALL1(1,VARREF(YgooSmacrosY1st),formF3700);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T7 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3700);
    T6 = CALL1(1,VARREF(Ylst),T7);
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T6,LITREF(lit_61));
    T0 = T2;
  } else {
    T9 = CALL2(1,x_1442F3702,x_1441F3701,YPint((P)3));
    if (T9 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF3700);
      T11 = CALL2(1,VARREF(YgooSmacrosYEE),T12,LITREF(lit_62));
      if (T11 != YPfalse) {
        T14 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
        T16 = CALL1(1,VARREF(YgooSmacrosY1st),formF3700);
        T15 = CALL1(1,VARREF(Ylst),T16);
        T18 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3700);
        T17 = CALL1(1,VARREF(Ylst),T18);
        T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_61));
        T10 = T13;
      } else {
        T20 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
        T22 = CALL1(1,VARREF(YgooSmacrosY1st),formF3700);
        T21 = CALL1(1,VARREF(Ylst),T22);
        T24 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3700);
        T23 = CALL1(1,VARREF(Ylst),T24);
        T26 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF3700);
        T25 = CALL1(1,VARREF(Ylst),T26);
        T19 = CALL5(1,VARREF(YgooSmacrosYcat),T20,T21,T23,T25,LITREF(lit_61));
        T10 = T19;
      }
      T8 = T10;
    } else {
      T27 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_65));
      T8 = T27;
    }
    T0 = T8;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_curlies_26) {
  P c_,port_;
  P slash_indexF3704;
  P formsF3703;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T10 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_curly),port_);
  formsF3703 = T10;
  T9 = CALL2(1,VARREF(YgooScolsSseqYpos),formsF3703,VARREF(YgooSioSreadYbs_sym));
  slash_indexF3704 = T9;
  if (slash_indexF3704 != YPfalse) {
    T2 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
    T4 = CALL3(1,VARREF(YgooScolsSseqYsub),formsF3703,YPint((P)0),slash_indexF3704);
    T3 = CALL1(1,VARREF(Ylst),T4);
    T6 = CALL2(1,VARREF(YgooSmathYA),slash_indexF3704,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooScolsSseqYsubT),formsF3703,T6);
    T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T5,LITREF(lit_61));
    T0 = T1;
  } else {
    T8 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
    T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,formsF3703,LITREF(lit_61));
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_27) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_paren));
}

LOCCODEDEF(fun_28) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_curly));
}

LOCCODEDEF(fun_29) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_bracket));
}

LOCCODEDEF(fun_30) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_75),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_31) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_77),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_32) {
  P c_,port_;
  P keywordF3706;
  P nextF3705;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T7 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  nextF3705 = T7;
  T3 = CALL1(1,VARREF(YgooSchrYeof_objectQ),nextF3705);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_79));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSlogYE),nextF3705,YPchr((P)64));
    if (T6 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T5 = LITREF(lit_80);
    } else {
      T5 = LITREF(lit_81);
    }
    T2 = T5;
  }
  keywordF3706 = T2;
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),keywordF3706,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_string_literal) {
  P c_,port_;
  P ecF3712;
  P tmpF3711;
  P cF3710;
  P cF3709;
  P iF3708;
  P lF3707;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  lF3707 = Ynil;
  iF3708 = YPint((P)0);
  LOOP_155: {
    P a155_0,a155_1;
    T29 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3709 = T29;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3709);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_84));
      T0 = T2;
    } else {
      T4 = CALL2(1,VARREF(YgooSlogYE),cF3709,YPchr((P)92));
      if (T4 != YPfalse) {
        T22 = CALL1(1,VARREF(YgooSioSportYget),port_);
        cF3710 = T22;
        T6 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3710);
        if (T6 != YPfalse) {
          T7 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_85));
          T5 = T7;
        } else {
          T11 = CALL2(1,VARREF(YgooSlogYE),cF3710,YPchr((P)92));
          tmpF3711 = T11;
          if (tmpF3711 != YPfalse) {
            T9 = tmpF3711;
          } else {
            T10 = CALL2(1,VARREF(YgooSlogYE),cF3710,YPchr((P)34));
            T9 = T10;
          }
          if (T9 != YPfalse) {
            T13 = CALL2(1,VARREF(YgooSmacrosYpair),cF3710,lF3707);
            T14 = CALL2(1,VARREF(YgooSmathYA),iF3708,YPint((P)1));
            a155_0 = T13;
            a155_1 = T14;
            lF3707 = a155_0;
            iF3708 = a155_1;
            goto LOOP_155;
            T8 = T12;
          } else {
            T21 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF3710);
            T20 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYDstring_escape_chars),T21);
            ecF3712 = T20;
            if (ecF3712 != YPfalse) {
              T17 = CALL2(1,VARREF(YgooSmacrosYpair),ecF3712,lF3707);
              T18 = CALL2(1,VARREF(YgooSmathYA),iF3708,YPint((P)1));
              a155_0 = T17;
              a155_1 = T18;
              lF3707 = a155_0;
              iF3708 = a155_1;
              goto LOOP_155;
              T15 = T16;
            } else {
              T19 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_86),cF3710);
              T15 = T19;
            }
            T8 = T15;
          }
          T5 = T8;
        }
        T3 = T5;
      } else {
        T24 = CALL2(1,VARREF(YgooSlogYE),cF3709,YPchr((P)34));
        if (T24 != YPfalse) {
          T25 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),lF3707,iF3708);
          T23 = T25;
        } else {
          T27 = CALL2(1,VARREF(YgooSmacrosYpair),cF3709,lF3707);
          T28 = CALL2(1,VARREF(YgooSmathYA),iF3708,YPint((P)1));
          a155_0 = T27;
          a155_1 = T28;
          lF3707 = a155_0;
          iF3708 = a155_1;
          goto LOOP_155;
          T23 = T26;
        }
        T3 = T23;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_34) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSreadYgobble_line),port_);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_gobble_line_35) {
  P port_;
  P cF3713;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(port_, 0);
  LOOP_156: {
    T5 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3713 = T5;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3713);
    if (T1 != YPfalse) {
      T0 = cF3713;
    } else {
      T3 = CALL2(1,VARREF(YgooSlogYE),cF3713,YPchr((P)10));
      if (T3 != YPfalse) {
        T2 = YPfalse;
      } else {
        goto LOOP_156;
        T2 = T4;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_define_sharp_macro_36) {
  P c_,proc_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  ARG(proc_, 1);
  T2 = CALL2(1,VARREF(Ylst),c_,proc_);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,VARREF(YgooSioSreadYTsharp_macrosT));
  T0 = VARSET(YgooSioSreadYTsharp_macrosT,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_37) {
  P c_,port_;
  P probeF3716;
  P cF3715;
  P cF3714;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T10 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF3714 = T10;
  T7 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3714);
  if (T7 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_93));
    T6 = T8;
  } else {
    T9 = CALL1(1,VARREF(YgooSchrYto_lower),cF3714);
    T6 = T9;
  }
  cF3715 = T6;
  T5 = CALL2(1,VARREF(YgooScolsSlstYassq),cF3715,VARREF(YgooSioSreadYTsharp_macrosT));
  probeF3716 = T5;
  if (probeF3716 != YPfalse) {
    T3 = CALL1(1,VARREF(Ytail),probeF3716);
    T2 = CALL1(1,VARREF(Yhead),T3);
    T1 = CALL2(1,T2,cF3715,port_);
    T0 = T1;
  } else {
    T4 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_94),cF3715);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_38) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_39) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_40) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDvert_proxy));
}

FUNCODEDEF(YgooSioSreadYgobble_nested_comment) {
  P port_;
  P x_1444F3720;
  P x_1443F3719;
  P cF3718;
  P found_slashQF3717;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  found_slashQF3717 = YPfalse;
  LOOP_157: {
    P a157_0;
    T10 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3718 = T10;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3718);
    if (T1 != YPfalse) {
      T0 = cF3718;
    } else {
      x_1443F3719 = cF3718;
      x_1444F3720 = VARREF(YgooSmacrosYEE);
      T3 = CALL2(1,x_1444F3720,x_1443F3719,YPchr((P)47));
      if (T3 != YPfalse) {
        a157_0 = YPtrue;
        found_slashQF3717 = a157_0;
        goto LOOP_157;
        T2 = T4;
      } else {
        T6 = CALL2(1,x_1444F3720,x_1443F3719,YPchr((P)35));
        if (T6 != YPfalse) {
          if (found_slashQF3717 != YPfalse) {
            T7 = YPfalse;
          } else {
            a157_0 = YPfalse;
            found_slashQF3717 = a157_0;
            goto LOOP_157;
            T7 = T8;
          }
          T5 = T7;
        } else {
          a157_0 = YPfalse;
          found_slashQF3717 = a157_0;
          goto LOOP_157;
          T5 = T9;
        }
        T2 = T5;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_42) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSreadYgobble_nested_comment),port_);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_43) {
  P c_,port_;
  P tempF3723;
  P nameF3722;
  P cF3721;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T16 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF3721 = T16;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3721);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_103));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooSchrYalphaQ),cF3721);
    if (T4 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
      nameF3722 = T14;
      T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF3722);
      T7 = CALL1(1,VARREF(YgooStypesYlen),T8);
      T6 = CALL2(1,VARREF(YgooSlogYE),T7,YPint((P)1));
      if (T6 != YPfalse) {
        T5 = cF3721;
      } else {
        T13 = CALL2(1,VARREF(YgooScolsSlstYassq),nameF3722,VARREF(YgooSioSreadYDchar_long_names));
        tempF3723 = T13;
        if (tempF3723 != YPfalse) {
          T11 = CALL1(1,VARREF(Ytail),tempF3723);
          T10 = CALL1(1,VARREF(Yhead),T11);
          T9 = T10;
        } else {
          T12 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_104),nameF3722);
          T9 = T12;
        }
        T5 = T9;
      }
      T3 = T5;
    } else {
      T15 = CALL1(1,VARREF(YgooSioSportYget),port_);
      T3 = T15;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_44) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_45) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_bracket),port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_46) {
  P c_,port_;
  P tmpF3725;
  P stringF3724;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T3 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),YPchr((P)35),port_);
  stringF3724 = T3;
  T2 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),stringF3724);
  tmpF3725 = T2;
  if (tmpF3725 != YPfalse) {
    T0 = tmpF3725;
  } else {
    T1 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_108),stringF3724);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_47) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),c_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_token_48) {
  P c_,port_;
  P tmpF3729;
  P cF3728;
  P nF3727;
  P lF3726;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T13 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),c_);
  T12 = CALL1(1,VARREF(Ylst),T13);
  lF3726 = T12;
  nF3727 = YPint((P)1);
  LOOP_158: {
    P a158_0,a158_1;
    T11 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
    cF3728 = T11;
    T4 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3728);
    tmpF3729 = T4;
    if (tmpF3729 != YPfalse) {
      T1 = tmpF3729;
    } else {
      T3 = CALL1(1,VARREF(YgooSchrYchar_Gascii),cF3728);
      T2 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T3);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),lF3726,nF3727);
      T0 = T5;
    } else {
      T9 = CALL1(1,VARREF(YgooSioSportYget),port_);
      T8 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),T9);
      T7 = CALL2(1,VARREF(YgooSmacrosYpair),T8,lF3726);
      T10 = CALL2(1,VARREF(YgooSmathYA),nF3727,YPint((P)1));
      a158_0 = T7;
      a158_1 = T10;
      lF3726 = a158_0;
      nF3727 = a158_1;
      goto LOOP_158;
      T0 = T6;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_49) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSlogYE),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_parse_token_50) {
  P string_,port_;
  P maybe_numberF3734;
  P tmpF3733;
  P tmpF3732;
  P tmpF3731;
  P cF3730;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(string_, 0);
  ARG(port_, 1);
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),string_,YPint((P)0));
  cF3730 = T8;
  T7 = CALL1(1,VARREF(YgooSchrYdigitQ),cF3730);
  tmpF3731 = T7;
  if (tmpF3731 != YPfalse) {
    T1 = tmpF3731;
  } else {
    T6 = CALL2(1,VARREF(YgooSlogYE),cF3730,YPchr((P)43));
    tmpF3732 = T6;
    if (tmpF3732 != YPfalse) {
      T2 = tmpF3732;
    } else {
      T5 = CALL2(1,VARREF(YgooSlogYE),cF3730,YPchr((P)45));
      tmpF3733 = T5;
      if (tmpF3733 != YPfalse) {
        T3 = tmpF3733;
      } else {
        T4 = CALL2(1,VARREF(YgooSlogYE),cF3730,YPchr((P)46));
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T18 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),string_);
    maybe_numberF3734 = T18;
    if (maybe_numberF3734 != YPfalse) {
      T9 = maybe_numberF3734;
    } else {
      T12 = FUNFAB(fun_49,1,string_);
      T11 = CALL2(1,VARREF(YgooStypesYanyQ),T12,VARREF(YgooSioSreadYDstrange_symbol_names));
      if (T11 != YPfalse) {
        T13 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),string_);
        T10 = T13;
      } else {
        T15 = CALL2(1,VARREF(YgooSlogYE),string_,LITREF(lit_116));
        if (T15 != YPfalse) {
          T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),string_);
          T14 = T16;
        } else {
          T17 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_117),string_);
          T14 = T17;
        }
        T10 = T14;
      }
      T9 = T10;
    }
    T0 = T9;
  } else {
    T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),string_);
    T0 = T19;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reading_error_51) {
  P port_,message_,irritants_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(irritants_, 2);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),message_,LITREF(lit_122));
  T3 = CALL1(1,VARREF(Ylst),port_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),irritants_,T3);
  T0 = CALL2(1,VARREF(Yerror),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_warn_52) {
  P string_,irritants_and_port_;
LINK_STACK();
  ARG(string_, 0);
  NARGS(irritants_and_port_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_reverse_list_Gstring_53) {
  P l_,n_;
  P T0,T1;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),l_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

P YgooSioSreadY___main_0___() {
  P str10496F3736;
  P sub_read_whitespaceF3735;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102;
DEFCREGS();
  lit_0 = YPPsym((P)"read");
  lit_1 = YPPlist(1,YPPsym((P)"port"));
  lit_2 = YPsb((P)"discarding extraneous right parenthesis");
  T0 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_0 = YPfab_met(FUNCODEREF(fun_read_0),T0,LITREF(lit_0),LITREF(lit_1),sloc(20),YPsb((P)"(fun ((port <in-port>) => <any>) (rep loop () (def form (sub-read port)) (if (not (reader-token? form)) form (if (== form $close-paren) (warn discarding extraneous right parenthesis) (loop)))))"));
  T2 = VARREF_OR(YgooSconditionsYread,YPfalse);
  T3 = fun_read_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSconditionsYread,T1);
  lit_3 = YPPsym((P)"read-from-string");
  lit_4 = YPPlist(1,YPPsym((P)"x"));
  lit_5 = Ynil;
  T6 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T6,YPfalse,LITREF(lit_5),sloc(33),YPsb((P)"(fun () (seq (set port (open <str-in-port> x)) (read port)))"));
  T5 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_2 = YPfab_met(FUNCODEREF(fun_2),T5,YPfalse,LITREF(lit_5),sloc(33),YPsb((P)"(fun () (and port (close port)))"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_from_string_3 = YPfab_met(FUNCODEREF(fun_read_from_string_3),T4,LITREF(lit_3),LITREF(lit_4),sloc(32),YPsb((P)"(fun ((x <str>) => <any>) (with-port (port (open <str-in-port> x)) (read port)))"));
  T8 = VARREF_OR(YgooSioSreadYread_from_string,YPfalse);
  T9 = fun_read_from_string_3;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSioSreadYread_from_string,T7);
  lit_6 = YPPsym((P)"sub-read-carefully");
  lit_7 = YPPlist(1,YPPsym((P)"port"));
  lit_8 = YPsb((P)"unexpected end of file");
  T10 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_carefully_4 = YPfab_met(FUNCODEREF(fun_sub_read_carefully_4),T10,LITREF(lit_6),LITREF(lit_7),sloc(35),YPsb((P)"(fun ((port <port>) => <any>) (def form (sub-read port)) (if (eof-object? form) (reading-error port unexpected end of file) (if (reader-token? form) (reading-error port (tail form)) form)))"));
  T12 = VARREF_OR(YgooSioSreadYsub_read_carefully,YPfalse);
  T13 = fun_sub_read_carefully_4;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSioSreadYsub_read_carefully,T11);
  lit_9 = YPPsym((P)"<reader-token>");
  T15 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T14 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_9),T15);
  VARSET(YgooSioSreadYLreader_tokenG,T14);
  lit_10 = YPPsym((P)"token-message");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_token_message_5 = YPfab_met(FUNCODEREF(fun_token_message_5),T16,LITREF(lit_10),LITREF(lit_11),sloc(45),YPsb((P)"(fun ((_x <reader-token>)) (prop-value _x token-message))"));
  T18 = VARREF_OR(YgooSioSreadYtoken_message,YPfalse);
  T19 = fun_token_message_5;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSioSreadYtoken_message,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),YPfalse,VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_12 = YPPsym((P)"make-reader-token");
  lit_13 = YPPlist(1,YPPsym((P)"message"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_reader_token_6 = YPfab_met(FUNCODEREF(fun_make_reader_token_6),T20,LITREF(lit_12),LITREF(lit_13),sloc(47),YPsb((P)"(fun (message => <any>) (new <reader-token> token-message message))"));
  T22 = VARREF_OR(YgooSioSreadYmake_reader_token,YPfalse);
  T23 = fun_make_reader_token_6;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSioSreadYmake_reader_token,T21);
  lit_14 = YPPsym((P)"reader-token?");
  lit_15 = YPPlist(1,YPPsym((P)"form"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_reader_tokenQ_7 = YPfab_met(FUNCODEREF(fun_reader_tokenQ_7),T24,LITREF(lit_14),LITREF(lit_15),sloc(50),YPsb((P)"(fun (form => <log>) (isa? form <reader-token>))"));
  T26 = VARREF_OR(YgooSioSreadYreader_tokenQ,YPfalse);
  T27 = fun_reader_tokenQ_7;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSioSreadYreader_tokenQ,T25);
  lit_16 = YPsb((P)"unexpected right parenthesis");
  T28 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_16));
  VARSET(YgooSioSreadYDclose_paren,T28);
  lit_17 = YPsb((P)"unexpected right bracket");
  T29 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_17));
  VARSET(YgooSioSreadYDclose_bracket,T29);
  lit_18 = YPsb((P)"unexpected right curly");
  T30 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_18));
  VARSET(YgooSioSreadYDclose_curly,T30);
  lit_19 = YPPsym((P)"sub-read");
  lit_20 = YPPlist(1,YPPsym((P)"port"));
  T31 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_8 = YPfab_met(FUNCODEREF(fun_sub_read_8),T31,LITREF(lit_19),LITREF(lit_20),sloc(59),YPsb((P)"(fun ((port <port>) => <any>) (def c (get port)) (if (eof-object? c) (seq c) ((elt *read-dispatch-vector* (char->ascii c)) c port)))"));
  T33 = VARREF_OR(YgooSioSreadYsub_read,YPfalse);
  T34 = fun_sub_read_8;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YgooSioSreadYsub_read,T32);
  lit_21 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_22 = YPsb((P)"illegal character read");
  T35 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T35,YPfalse,LITREF(lit_21),sloc(70),YPsb((P)"(fun (c port) (reading-error port illegal character read c))"));
  T37 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T38 = fun_9;
  T36 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T37,T38);
  VARSET(YgooSioSreadYTread_dispatch_vectorT,T36);
  T40 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T39 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T40,YPtrue);
  VARSET(YgooSioSreadYTread_terminatingQ_vectorT,T39);
  lit_23 = YPPsym((P)"set-standard-syntax!");
  lit_24 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"reader"));
  T41 = YPfab_sig(YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_syntaxX_10 = YPfab_met(FUNCODEREF(fun_set_standard_syntaxX_10),T41,LITREF(lit_23),LITREF(lit_24),sloc(74),YPsb((P)"(fun ((char <chr>) terminating? reader) (set (elt *read-dispatch-vector* (char->ascii char)) reader) (set (elt *read-terminating?-vector* (char->ascii char)) terminating?))"));
  T43 = VARREF_OR(YgooSioSreadYset_standard_syntaxX,YPfalse);
  T44 = fun_set_standard_syntaxX_10;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YgooSioSreadYset_standard_syntaxX,T42);
  lit_25 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_26 = YPPlist(1,YPPsym((P)"c"));
  T46 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T46,YPfalse,LITREF(lit_25),sloc(78),YPsb((P)"(fun (c port) (sub-read port))"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T45,YPfalse,LITREF(lit_26),sloc(79),YPsb((P)"(fun (c) (set (elt *read-dispatch-vector* c) sub-read-whitespace))"));
  T49 = fun_11;
  sub_read_whitespaceF3735 = T49;
  T48 = FUNFAB(fun_12,1,sub_read_whitespaceF3735);
  T47 = XCALL2(1,VARREF(YgooSmacrosYdo),T48,VARREF(YgooScolsSstrYascii_whitespaces));
  lit_27 = YPPsym((P)"flush-whitespace");
  lit_28 = YPPlist(1,YPPsym((P)"port"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYflush_whitespace = YPfab_met(FUNCODEREF(YgooSioSreadYflush_whitespace),T50,LITREF(lit_27),LITREF(lit_28),sloc(82),YPsb((P)"(fun ((port <port>)) (def c (peek port)) (if (mem? ascii-whitespaces (char->ascii c)) (seq (get port) (flush-whitespace port)) c))"));
  T51 = YgooSioSreadYflush_whitespace;
  VARSET(YgooSioSreadYflush_whitespace,T51);
  lit_29 = YPPsym((P)"read-delimited-list");
  lit_30 = YPPlist(2,YPPsym((P)"endchar"),YPPsym((P)"port"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_delimited_list = YPfab_met(FUNCODEREF(YgooSioSreadYread_delimited_list),T52,LITREF(lit_29),LITREF(lit_30),sloc(90),YPsb((P)"(fun ((endchar <chr>) (port <port>)) (def retlist nil) (rep loop ((c (flush-whitespace port))) (if (== c endchar) (seq (get port) (rev retlist)) (seq (opf retlist (pair (read port) _)) (loop (flush-whitespace port))))))"));
  T53 = YgooSioSreadYread_delimited_list;
  VARSET(YgooSioSreadYread_delimited_list,T53);
  lit_31 = YPPsym((P)"sub-read-constituent");
  lit_32 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_constituent = YPfab_met(FUNCODEREF(YgooSioSreadYsub_read_constituent),T54,LITREF(lit_31),LITREF(lit_32),sloc(98),YPsb((P)"(fun (c port) (parse-token (sub-read-token c port) port))"));
  T55 = YgooSioSreadYsub_read_constituent;
  VARSET(YgooSioSreadYsub_read_constituent,T55);
  lit_33 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  lit_34 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  lit_35 = YPPlist(1,YPPsym((P)"c"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPfab_met(FUNCODEREF(fun_16),T56,YPfalse,LITREF(lit_35),sloc(105),YPsb((P)"(fun (c) (set-standard-syntax! c #f sub-read-constituent))"));
  T59 = XCALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_33),LITREF(lit_34));
  str10496F3736 = T59;
  T58 = fun_16;
  T57 = XCALL2(1,VARREF(YgooSmacrosYdo),T58,str10496F3736);
  lit_36 = YPPsym((P)"set-standard-read-macro!");
  lit_37 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"proc"));
  T60 = YPfab_sig(YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_read_macroX_17 = YPfab_met(FUNCODEREF(fun_set_standard_read_macroX_17),T60,LITREF(lit_36),LITREF(lit_37),sloc(110),YPsb((P)"(fun ((char <chr>) terminating? (proc <fun>)) (set-standard-syntax! char terminating? proc))"));
  T62 = VARREF_OR(YgooSioSreadYset_standard_read_macroX,YPfalse);
  T63 = fun_set_standard_read_macroX_17;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSioSreadYset_standard_read_macroX,T61);
  lit_38 = YPPsym((P)"get-standard-read-macro");
  lit_39 = YPPlist(1,YPPsym((P)"char"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_get_standard_read_macro_18 = YPfab_met(FUNCODEREF(fun_get_standard_read_macro_18),T64,LITREF(lit_38),LITREF(lit_39),sloc(113),YPsb((P)"(fun ((char <chr>)) (elt *read-dispatch-vector* (char->ascii char)))"));
  T66 = VARREF_OR(YgooSioSreadYget_standard_read_macro,YPfalse);
  T67 = fun_get_standard_read_macro_18;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSioSreadYget_standard_read_macro,T65);
  lit_40 = YPPsym((P)"sub-read-vertical");
  lit_41 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_42 = YPsb((P)"|");
  T68 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_vertical_19 = YPfab_met(FUNCODEREF(fun_sub_read_vertical_19),T68,LITREF(lit_40),LITREF(lit_41),sloc(116),YPsb((P)"(fun ((c <chr>) (port <port>) => <any>) (parse-token | port))"));
  T70 = VARREF_OR(YgooSioSreadYsub_read_vertical,YPfalse);
  T71 = fun_sub_read_vertical_19;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSioSreadYsub_read_vertical,T69);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)124),YPtrue,VARREF(YgooSioSreadYsub_read_vertical));
  lit_43 = YPPsym((P)"sub-read-backslash");
  lit_44 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_45 = YPsb((P)"\\");
  T72 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_backslash_20 = YPfab_met(FUNCODEREF(fun_sub_read_backslash_20),T72,LITREF(lit_43),LITREF(lit_44),sloc(121),YPsb((P)"(fun ((c <chr>) (port <port>) => <any>) (parse-token \\ port))"));
  T74 = VARREF_OR(YgooSioSreadYsub_read_backslash,YPfalse);
  T75 = fun_sub_read_backslash_20;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSioSreadYsub_read_backslash,T73);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)92),YPtrue,VARREF(YgooSioSreadYsub_read_backslash));
  lit_46 = YPsb((P)"|");
  T76 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),LITREF(lit_46));
  VARSET(YgooSioSreadYDvert_sym,T76);
  lit_47 = YPsb((P)"vert-proxy");
  T77 = XCALL1(1,VARREF(Ylst),LITREF(lit_47));
  VARSET(YgooSioSreadYDvert_proxy,T77);
  lit_48 = YPPsym((P)"sub-read-list-eof-error");
  lit_49 = YPPlist(1,YPPsym((P)"port"));
  lit_50 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T78 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_list_eof_error = YPfab_met(FUNCODEREF(YgooSioSreadYsub_read_list_eof_error),T78,LITREF(lit_48),LITREF(lit_49),sloc(129),YPsb((P)"(fun ((port <port>)) (reading-error port end of file inside list -- unbalanced parentheses))"));
  T79 = YgooSioSreadYsub_read_list_eof_error;
  VARSET(YgooSioSreadYsub_read_list_eof_error,T79);
  lit_51 = YPPsym((P)"sub-read-list");
  lit_52 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"p"));
  lit_53 = YPPsym((P)"read-next");
  lit_54 = YPPlist(4,YPPsym((P)"c"),YPPsym((P)"prev"),YPPsym((P)"line"),YPPsym((P)"form"));
  T81 = YPfab_sig(YPPlist(4,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_read_next_22 = YPfab_met(FUNCODEREF(fun_read_next_22),T81,LITREF(lit_53),LITREF(lit_54),sloc(139),YPsb((P)"(fun ((c <chr>) prev line form => #f) (def prev (if (== prev $vert-proxy) $vert-sym prev)) (cond ((eof-object? form) (sub-read-list-eof-error p)) ((== form $close-paren) (line-list line prev)) ((== form $vert-sym) (let ((next (sub-read-carefully p))) (line-pair (line-pair prev (line-list line next) line) (sub-read-list c p) line))) (#t (line-pair prev (read-next c form (port-line p) (sub-read p)) line))))"));
  T80 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_list_23 = YPfab_met(FUNCODEREF(fun_sub_read_list_23),T80,LITREF(lit_51),LITREF(lit_52),sloc(132),YPsb((P)"(fun ((c <chr>) (p <port>) => <any>) (def line (port-line p)) (def form (sub-read p)) (cond ((eof-object? form) (sub-read-list-eof-error p)) ((== form $close-paren) '()) (#t (rep read-next (((c <chr>) c) (prev form) (line line) (form (sub-read p))) (def prev (if (== prev $vert-proxy) $vert-sym prev)) (cond ((eof-object? form) (sub-read-list-eof-error p)) ((== form $close-paren) (line-list line prev)) ((== form $vert-sym) (let ((next (sub-read-carefully p))) (line-pair (line-pair prev (line-list line next) line) (sub-read-list c p) line))) (#t (line-pair prev (read-next c form (port-line p) (sub-read p)) line)))))))"));
  T83 = VARREF_OR(YgooSioSreadYsub_read_list,YPfalse);
  T84 = fun_sub_read_list_23;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YgooSioSreadYsub_read_list,T82);
  lit_55 = YPPsym((P)"sub-read-seq");
  lit_56 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"e"),YPPsym((P)"port"));
  lit_57 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T85 = YPfab_sig(YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_sub_read_seq_24 = YPfab_met(FUNCODEREF(fun_sub_read_seq_24),T85,LITREF(lit_55),LITREF(lit_56),sloc(156),YPsb((P)"(fun ((c <chr>) e (port <port>) => <any>) (def form (sub-read port)) (if (eof-object? form) (reading-error port end of file inside list -- unbalanced parentheses) (if (== form e) '() (pair form (sub-read-seq c e port)))))"));
  T87 = VARREF_OR(YgooSioSreadYsub_read_seq,YPfalse);
  T88 = fun_sub_read_seq_24;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YgooSioSreadYsub_read_seq,T86);
  lit_58 = YPPsym((P)"sub-read-brackets");
  lit_59 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_60 = YPPsym((P)"elt");
  lit_61 = Ynil;
  lit_62 = YPPsym((P)"*");
  lit_63 = YPPsym((P)"sub*");
  lit_64 = YPPsym((P)"sub");
  lit_65 = YPsb((P)"invalid [ ... ] form");
  T89 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_brackets_25 = YPfab_met(FUNCODEREF(fun_sub_read_brackets_25),T89,LITREF(lit_58),LITREF(lit_59),sloc(165),YPsb((P)"(fun ((c <chr>) (port <port>) => <any>) (def form (sub-read-seq c $close-bracket port)) (case (len form) ((2) (quasiquote (elt (unquote (1st form)) (unquote (2nd form))))) ((3) (if (== (3rd form) '*) (quasiquote (sub* (unquote (1st form)) (unquote (2nd form)))) (quasiquote (sub (unquote (1st form)) (unquote (2nd form)) (unquote (3rd form)))))) (#t (reading-error port invalid [ ... ] form))))"));
  T91 = VARREF_OR(YgooSioSreadYsub_read_brackets,YPfalse);
  T92 = fun_sub_read_brackets_25;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YgooSioSreadYsub_read_brackets,T90);
  lit_66 = YPsb((P)"\\");
  T93 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),LITREF(lit_66));
  VARSET(YgooSioSreadYbs_sym,T93);
  lit_67 = YPPsym((P)"sub-read-curlies");
  lit_68 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_69 = YPPsym((P)"fun");
  lit_70 = YPPsym((P)"seq");
  T94 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_curlies_26 = YPfab_met(FUNCODEREF(fun_sub_read_curlies_26),T94,LITREF(lit_67),LITREF(lit_68),sloc(176),YPsb((P)"(fun ((c <chr>) (port <port>) => <any>) (def forms (sub-read-seq c $close-curly port)) (def slash-index (pos forms bs-sym)) (if slash-index (quasiquote (fun (unquote (sub forms 0 slash-index)) (unquote-splicing (sub* forms (+ slash-index 1))))) (quasiquote (seq (unquote-splicing forms)))))"));
  T96 = VARREF_OR(YgooSioSreadYsub_read_curlies,YPfalse);
  T97 = fun_sub_read_curlies_26;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YgooSioSreadYsub_read_curlies,T95);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)40),YPtrue,VARREF(YgooSioSreadYsub_read_list));
  lit_71 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T100 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T99 = fun_27 = YPfab_met(FUNCODEREF(fun_27),T100,YPfalse,LITREF(lit_71),sloc(185),YPsb((P)"(fun (c port) $close-paren)"));
  T102 = fun_27;
  T101 = XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T102);
  T98 = T101;
  return T98;
}

P YgooSioSreadY___main_1___() {
  P number_sharp_macroF3738;
  P vecF3737;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77;
DEFCREGS();
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)123),YPtrue,VARREF(YgooSioSreadYsub_read_curlies));
  lit_72 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_28 = YPfab_met(FUNCODEREF(fun_28),T0,YPfalse,LITREF(lit_72),sloc(189),YPsb((P)"(fun (c port) $close-curly)"));
  T1 = fun_28;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)125),YPtrue,T1);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)91),YPtrue,VARREF(YgooSioSreadYsub_read_brackets));
  lit_73 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T2 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPfab_met(FUNCODEREF(fun_29),T2,YPfalse,LITREF(lit_73),sloc(193),YPsb((P)"(fun (c port) $close-bracket)"));
  T3 = fun_29;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)93),YPtrue,T3);
  lit_74 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_75 = YPPsym((P)"quote");
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_30 = YPfab_met(FUNCODEREF(fun_30),T4,YPfalse,LITREF(lit_74),sloc(196),YPsb((P)"(fun (c port) (lst 'quote (sub-read-carefully port)))"));
  T5 = fun_30;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T5);
  lit_76 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_77 = YPPsym((P)"quasiquote");
  T6 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_31 = YPfab_met(FUNCODEREF(fun_31),T6,YPfalse,LITREF(lit_76),sloc(199),YPsb((P)"(fun (c port) (lst 'quasiquote (sub-read-carefully port)))"));
  T7 = fun_31;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T7);
  lit_78 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_79 = YPsb((P)"end of file after ,");
  lit_80 = YPPsym((P)"unquote-splicing");
  lit_81 = YPPsym((P)"unquote");
  T8 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_32 = YPfab_met(FUNCODEREF(fun_32),T8,YPfalse,LITREF(lit_78),sloc(203),YPsb((P)"(fun (c port) (def next (peek port)) (def keyword (if (eof-object? next) (reading-error port end of file after ,) (if (= next @) (seq (get port) 'unquote-splicing) 'unquote))) (lst keyword (sub-read-carefully port)))"));
  T9 = fun_32;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T9);
  T16 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T15 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T16,YPfalse);
  vecF3737 = T15;
  T10 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)116));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)9),vecF3737,T10);
  T11 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)102));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)12),vecF3737,T11);
  T12 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)114));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)13),vecF3737,T12);
  T13 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)110));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)10),vecF3737,T13);
  T14 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF3737);
  VARSET(YgooSioSreadYDstring_escape_chars,T14);
  lit_82 = YPPsym((P)"read-string-literal");
  lit_83 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_84 = YPsb((P)"end of file within a string");
  lit_85 = YPsb((P)"end of file within a string");
  lit_86 = YPsb((P)"invalid escaped character in string");
  T17 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_string_literal = YPfab_met(FUNCODEREF(YgooSioSreadYread_string_literal),T17,LITREF(lit_82),LITREF(lit_83),sloc(221),YPsb((P)"(fun (c port) (rep loop ((l '()) (i 0)) (def c (get port)) (if (eof-object? c) (reading-error port end of file within a string) (if (= c \\) (let ((c (get port))) (if (eof-object? c) (reading-error port end of file within a string) (if (or (= c \\) (= c \")) (loop (pair c l) (+ i 1)) (let ((ec (elt $string-escape-chars (as <int> c)))) (if ec (loop (pair ec l) (+ i 1)) (reading-error port invalid escaped character in string c)))))) (if (= c \") (reverse-list->string l i) (loop (pair c l) (+ i 1)))))))"));
  T18 = YgooSioSreadYread_string_literal;
  VARSET(YgooSioSreadYread_string_literal,T18);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)34),YPtrue,VARREF(YgooSioSreadYread_string_literal));
  lit_87 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T19 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T19,YPfalse,LITREF(lit_87),sloc(247),YPsb((P)"(fun (c port) (gobble-line port) (sub-read port))"));
  T20 = fun_34;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T20);
  lit_88 = YPPsym((P)"gobble-line");
  lit_89 = YPPlist(1,YPPsym((P)"port"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gobble_line_35 = YPfab_met(FUNCODEREF(fun_gobble_line_35),T21,LITREF(lit_88),LITREF(lit_89),sloc(249),YPsb((P)"(fun ((port <port>)) (rep loop () (def c (get port)) (if (eof-object? c) c (if (= c \n) #f (loop)))))"));
  T23 = VARREF_OR(YgooSioSreadYgobble_line,YPfalse);
  T24 = fun_gobble_line_35;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YgooSioSreadYgobble_line,T22);
  VARSET(YgooSioSreadYTsharp_macrosT,Ynil);
  lit_90 = YPPsym((P)"define-sharp-macro");
  lit_91 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"proc"));
  T25 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_define_sharp_macro_36 = YPfab_met(FUNCODEREF(fun_define_sharp_macro_36),T25,LITREF(lit_90),LITREF(lit_91),sloc(256),YPsb((P)"(fun (c proc) (set *sharp-macros* (pair (lst c proc) *sharp-macros*)))"));
  T27 = VARREF_OR(YgooSioSreadYdefine_sharp_macro,YPfalse);
  T28 = fun_define_sharp_macro_36;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooSioSreadYdefine_sharp_macro,T26);
  lit_92 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_93 = YPsb((P)"end of file after #");
  lit_94 = YPsb((P)"unknown # syntax");
  T29 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T29,YPfalse,LITREF(lit_92),sloc(261),YPsb((P)"(fun (c port) (def c (peek port)) (def c (if (eof-object? c) (reading-error port end of file after #) (to-lower c))) (def probe (assq c *sharp-macros*)) (if probe ((head (tail probe)) c port) (reading-error port unknown # syntax c)))"));
  T30 = fun_37;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T30);
  lit_95 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_38 = YPfab_met(FUNCODEREF(fun_38),T31,YPfalse,LITREF(lit_95),sloc(271),YPsb((P)"(fun (c port) (get port) #f)"));
  T32 = fun_38;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)102),T32);
  lit_96 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T33 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPfab_met(FUNCODEREF(fun_39),T33,YPfalse,LITREF(lit_96),sloc(273),YPsb((P)"(fun (c port) (get port) #t)"));
  T34 = fun_39;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)116),T34);
  lit_97 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T35 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_40 = YPfab_met(FUNCODEREF(fun_40),T35,YPfalse,LITREF(lit_97),sloc(275),YPsb((P)"(fun (c port) (get port) $vert-proxy)"));
  T36 = fun_40;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)124),T36);
  lit_98 = YPPsym((P)"gobble-nested-comment");
  lit_99 = YPPlist(1,YPPsym((P)"port"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYgobble_nested_comment = YPfab_met(FUNCODEREF(YgooSioSreadYgobble_nested_comment),T37,LITREF(lit_98),LITREF(lit_99),sloc(277),YPsb((P)"(fun ((port <port>)) (rep loop ((found-slash? #f)) (def c (get port)) (if (eof-object? c) c (case c ((/) (loop #t)) ((#) (if found-slash? #f (loop #f))) (#t (loop #f))))))"));
  T38 = YgooSioSreadYgobble_nested_comment;
  VARSET(YgooSioSreadYgobble_nested_comment,T38);
  lit_100 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_42 = YPfab_met(FUNCODEREF(fun_42),T39,YPfalse,LITREF(lit_100),sloc(288),YPsb((P)"(fun (c port) (gobble-nested-comment port) (sub-read port))"));
  T40 = fun_42;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)47),T40);
  lit_101 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  VARSET(YgooSioSreadYDchar_long_names,LITREF(lit_101));
  lit_102 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_103 = YPsb((P)"end of file after #\\");
  lit_104 = YPsb((P)"unknown #\\ name");
  T41 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPfab_met(FUNCODEREF(fun_43),T41,YPfalse,LITREF(lit_102),sloc(299),YPsb((P)"(fun (c port) (get port) (def c (peek port)) (if (eof-object? c) (reading-error port end of file after #\\) (if (alpha? c) (let ((name (sub-read-carefully port))) (if (= (len (as <str> name)) 1) c (let ((temp (assq name $char-long-names))) (if temp (head (tail temp)) (reading-error port unknown #\\ name name))))) (get port))))"));
  T42 = fun_43;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)92),T42);
  lit_105 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T43 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T43,YPfalse,LITREF(lit_105),sloc(316),YPsb((P)"(fun (c port) (get port) (as <tup> (sub-read-list c port)))"));
  T44 = fun_44;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)40),T44);
  lit_106 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T45 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_45 = YPfab_met(FUNCODEREF(fun_45),T45,YPfalse,LITREF(lit_106),sloc(322),YPsb((P)"(fun (c port) (get port) (as <vec> (sub-read-seq c $close-bracket port)))"));
  T46 = fun_45;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)91),T46);
  lit_107 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_108 = YPsb((P)"unsupported number syntax");
  lit_109 = YPPlist(1,YPPsym((P)"c"));
  lit_110 = YPPlist(4,YPchr((P)98),YPchr((P)111),YPchr((P)100),YPchr((P)120));
  T48 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_46 = YPfab_met(FUNCODEREF(fun_46),T48,YPfalse,LITREF(lit_107),sloc(327),YPsb((P)"(fun (c port) (def string (sub-read-token # port)) (or (str-to-num string) (reading-error port unsupported number syntax string)))"));
  T47 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPfab_met(FUNCODEREF(fun_47),T47,YPfalse,LITREF(lit_109),sloc(331),YPsb((P)"(fun (c) (define-sharp-macro c number-sharp-macro))"));
  T51 = fun_46;
  number_sharp_macroF3738 = T51;
  T50 = FUNFAB(fun_47,1,number_sharp_macroF3738);
  T49 = XCALL2(1,VARREF(YgooSmacrosYdo),T50,LITREF(lit_110));
  lit_111 = YPPsym((P)"sub-read-token");
  lit_112 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_token_48 = YPfab_met(FUNCODEREF(fun_sub_read_token_48),T52,LITREF(lit_111),LITREF(lit_112),sloc(336),YPsb((P)"(fun ((c <chr>) (port <port>) => <any>) (rep loop ((l (lst (preferred-case c))) (n 1)) (def c (peek port)) (if (or (eof-object? c) (elt *read-terminating?-vector* (char->ascii c))) (reverse-list->string l n) (loop (pair (preferred-case (get port)) l) (+ n 1)))))"));
  T54 = VARREF_OR(YgooSioSreadYsub_read_token,YPfalse);
  T55 = fun_sub_read_token_48;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSioSreadYsub_read_token,T53);
  lit_113 = YPPsym((P)"parse-token");
  lit_114 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"port"));
  lit_115 = YPPlist(1,YPPsym((P)"x"));
  lit_116 = YPsb((P)".");
  lit_117 = YPsb((P)"unsupported number syntax");
  T57 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPfab_met(FUNCODEREF(fun_49),T57,YPfalse,LITREF(lit_115),sloc(357),YPsb((P)"(fun (x) (= string x))"));
  T56 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_token_50 = YPfab_met(FUNCODEREF(fun_parse_token_50),T56,LITREF(lit_113),LITREF(lit_114),sloc(347),YPsb((P)"(fun ((string <str>) (port <port>) => <any>) (if (let ((c (elt string 0))) (or (digit? c) (= c +) (= c -) (= c .))) (let ((maybe-number (str-to-num string))) (if maybe-number maybe-number (if (any? (fun (x) (= string x)) $strange-symbol-names) (as <sym> string) (if (= string .) (as <sym> string) (reading-error port unsupported number syntax string))))) (seq (as <sym> string))))"));
  T59 = VARREF_OR(YgooSioSreadYparse_token,YPfalse);
  T60 = fun_parse_token_50;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YgooSioSreadYparse_token,T58);
  lit_118 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  VARSET(YgooSioSreadYDstrange_symbol_names,LITREF(lit_118));
  lit_119 = YPPsym((P)"t");
  T64 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),LITREF(lit_119));
  T63 = XCALL2(1,VARREF(YgooSmacrosYelt),T64,YPint((P)0));
  T62 = XCALL2(1,VARREF(YgooSlogYE),T63,YPchr((P)84));
  if (T62 != YPfalse) {
    T61 = VARREF(YgooSchrYto_upper);
  } else {
    T61 = VARREF(YgooSchrYto_lower);
  }
  VARSET(YgooSioSreadYpreferred_case,T61);
  lit_120 = YPPsym((P)"reading-error");
  lit_121 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"irritants"));
  lit_122 = YPsb((P)": %=");
  T65 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLportG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reading_error_51 = YPfab_met(FUNCODEREF(fun_reading_error_51),T65,LITREF(lit_120),LITREF(lit_121),sloc(384),YPsb((P)"(fun ((port <port>) (message <str>) (irritants ...)) (error (cat message : %=) (cat irritants (lst port))))"));
  T67 = VARREF_OR(YgooSioSreadYreading_error,YPfalse);
  T68 = fun_reading_error_51;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YgooSioSreadYreading_error,T66);
  lit_123 = YPPsym((P)"warn");
  lit_124 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"irritants-and-port"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_warn_52 = YPfab_met(FUNCODEREF(fun_warn_52),T69,LITREF(lit_123),LITREF(lit_124),sloc(388),YPsb((P)"(fun ((string <str>) (irritants-and-port ...)) #f)"));
  T71 = VARREF_OR(YgooSioSreadYwarn,YPfalse);
  T72 = fun_warn_52;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YgooSioSreadYwarn,T70);
  lit_125 = YPPsym((P)"reverse-list->string");
  lit_126 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  T73 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_reverse_list_Gstring_53 = YPfab_met(FUNCODEREF(fun_reverse_list_Gstring_53),T73,LITREF(lit_125),LITREF(lit_126),sloc(396),YPsb((P)"(fun ((l <lst>) (n <int>) => <str>) (as <str> (rev! l)))"));
  T75 = VARREF_OR(YgooSioSreadYreverse_list_Gstring,YPfalse);
  T76 = fun_reverse_list_Gstring_53;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YgooSioSreadYreverse_list_Gstring,T74);
  T77 = YPfalse;
  return T77;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSrep;
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
  {&module_info_gooSconditions},
  {&module_info_gooStypes},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmath},
  {&module_info_gooSioSport},
  {&module_info_gooScols},
  {&module_info_gooScolsSlst},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"log", &module_info_gooSmath, NULL},
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
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
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
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
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
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"atan2", &module_info_gooSmath, NULL},
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
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
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
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"now", &module_info_gooScolsScol, NULL},
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
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
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
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
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
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
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
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
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
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
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
  {"map", &module_info_gooSmacros, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
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
  {"@+", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
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
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
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
  {"to-upper", &module_info_gooSchr, NULL},
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
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
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
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
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
  {"/", &module_info_gooSmath, NULL},
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
  {"<restart>", &module_info_gooSconditions, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
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
  {"suffix?", &module_info_gooScolsSseq, NULL},
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
  {"<flo>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
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
  {"%snul", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
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
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
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
  {"-", &module_info_gooSmath, NULL},
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
  {"*sharp-macros*", CVAR, &YgooSioSreadYTsharp_macrosT},
  {"preferred-case", CVAR, &YgooSioSreadYpreferred_case},
  {"flush-whitespace", CVAR, &YgooSioSreadYflush_whitespace},
  {"sub-read", CVAR, &YgooSioSreadYsub_read},
  {"$close-curly", CVAR, &YgooSioSreadYDclose_curly},
  {"sub-read-vertical", CVAR, &YgooSioSreadYsub_read_vertical},
  {"sub-read-list", CVAR, &YgooSioSreadYsub_read_list},
  {"---main-0---", PVAR, NULL},
  {"sub-read-token", CVAR, &YgooSioSreadYsub_read_token},
  {"$string-escape-chars", CVAR, &YgooSioSreadYDstring_escape_chars},
  {"*read-terminating?-vector*", CVAR, &YgooSioSreadYTread_terminatingQ_vectorT},
  {"warn", CVAR, &YgooSioSreadYwarn},
  {"---main-1---", PVAR, NULL},
  {"reading-error", CVAR, &YgooSioSreadYreading_error},
  {"$close-paren", CVAR, &YgooSioSreadYDclose_paren},
  {"sub-read-brackets", CVAR, &YgooSioSreadYsub_read_brackets},
  {"read-from-string", CVAR, &YgooSioSreadYread_from_string},
  {"token-message", CVAR, &YgooSioSreadYtoken_message},
  {"bs-sym", CVAR, &YgooSioSreadYbs_sym},
  {"get-standard-read-macro", CVAR, &YgooSioSreadYget_standard_read_macro},
  {"read-string-literal", CVAR, &YgooSioSreadYread_string_literal},
  {"make-reader-token", CVAR, &YgooSioSreadYmake_reader_token},
  {"$close-bracket", CVAR, &YgooSioSreadYDclose_bracket},
  {"<reader-token>", CVAR, &YgooSioSreadYLreader_tokenG},
  {"sub-read-backslash", CVAR, &YgooSioSreadYsub_read_backslash},
  {"$char-long-names", CVAR, &YgooSioSreadYDchar_long_names},
  {"sub-read-carefully", CVAR, &YgooSioSreadYsub_read_carefully},
  {"*read-dispatch-vector*", CVAR, &YgooSioSreadYTread_dispatch_vectorT},
  {"sub-read-constituent", CVAR, &YgooSioSreadYsub_read_constituent},
  {"$vert-sym", CVAR, &YgooSioSreadYDvert_sym},
  {"$vert-proxy", CVAR, &YgooSioSreadYDvert_proxy},
  {"$strange-symbol-names", CVAR, &YgooSioSreadYDstrange_symbol_names},
  {"reader-token?", CVAR, &YgooSioSreadYreader_tokenQ},
  {"sub-read-list-eof-error", CVAR, &YgooSioSreadYsub_read_list_eof_error},
  {"define-sharp-macro", CVAR, &YgooSioSreadYdefine_sharp_macro},
  {"sub-read-seq", CVAR, &YgooSioSreadYsub_read_seq},
  {"set-standard-read-macro!", CVAR, &YgooSioSreadYset_standard_read_macroX},
  {"gobble-nested-comment", CVAR, &YgooSioSreadYgobble_nested_comment},
  {"parse-token", CVAR, &YgooSioSreadYparse_token},
  {"set-standard-syntax!", CVAR, &YgooSioSreadYset_standard_syntaxX},
  {"read-delimited-list", CVAR, &YgooSioSreadYread_delimited_list},
  {"reverse-list->string", CVAR, &YgooSioSreadYreverse_list_Gstring},
  {"sub-read-curlies", CVAR, &YgooSioSreadYsub_read_curlies},
  {"gobble-line", CVAR, &YgooSioSreadYgobble_line},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"read", NULL},
  {"get-standard-read-macro", NULL},
  {"$char-long-names", NULL},
  {"set-standard-read-macro!", NULL},
  {"read-from-string", NULL},
  {"read-delimited-list", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSioSread;
MODULE_INFO module_info_gooSioSread = {
  "goo/io/read",
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
extern void load_module_gooSconditions (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSany (void);
extern void load_module_gooSlog (void);
extern void load_module_gooSchr (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSioSport (void);
extern void load_module_gooScols (void);
extern void load_module_gooScolsSlst (void);

/* EXPRESSION: */

extern void load_module_gooSioSread (void);

void load_module_gooSioSread (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSconditions();
  load_module_gooStypes();
  load_module_gooSany();
  load_module_gooSlog();
  load_module_gooSchr();
  load_module_gooSmath();
  load_module_gooSioSport();
  load_module_gooScols();
  load_module_gooScolsSlst();

  (P)YgooSioSreadY___main_0___();
  (P)YgooSioSreadY___main_1___();

}

/* END OF GENERATED CODE. */
