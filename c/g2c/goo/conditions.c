/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/conditions");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/conditions */

EXT(Yclass_children,"goo/boot","class-children");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYK,"goo/math","|");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
DEF(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YgooSconditionsYhandler_activeQ,"goo/conditions","handler-active?");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
DEF(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOtup,"goo/boot","@tup");
DEF(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooScolsSlstYlstT,"goo/cols/lst","lst*");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Ynot,"goo/boot","not");
DEF(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
DEF(YgooSconditionsYLcpl_errorG,"goo/conditions","<cpl-error>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Ylst,"goo/boot","lst");
DEF(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
DEF(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
DEF(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
DYNDEF(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YgooSconditionsYdo_handlers_of_type,"goo/conditions","do-handlers-of-type");
DEF(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YOnew,"goo/boot","@new");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YLboxG,"goo/boot","<box>");
DEF(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
DEF(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
DEF(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(Ybox_value,"goo/boot","box-value");
DEF(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
DEF(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
DEF(YgooSconditionsYcondition_message_setter,"goo/conditions","condition-message-setter");
DEF(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSlogYE,"goo/log","=");
DEF(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YgooSconditionsYsignal_handler_list,"goo/conditions","signal-handler-list");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
DEF(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYmod_,"goo/math","mod-");
DEF(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
DEF(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooSconditionsYhandler_condition_type,"goo/conditions","handler-condition-type");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
DEF(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
DEF(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooSconditionsYcondition_arguments_setter,"goo/conditions","condition-arguments-setter");
DEF(YgooSconditionsYhandler_test,"goo/conditions","handler-test");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
DEF(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YLclassG,"goo/boot","<class>");
DEF(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
DEF(YgooSconditionsYincongruent_method_error_generic,"goo/conditions","incongruent-method-error-generic");
DEF(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooSconditionsYincongruent_method_error_method,"goo/conditions","incongruent-method-error-method");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
DEF(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
DEF(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
DEF(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
DEF(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
DEF(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YPsnul,"goo/boot","%snul");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yerror,"goo/boot","error");
DEF(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yclass_gens,"goo/boot","class-gens");
DEF(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
DEF(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YPfalse,"goo/boot","%false");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmathYS,"goo/math","/");
DEF(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
DEF(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YOlit,"goo/boot","@lit");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YOallQ,"goo/boot","@all?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YtT,"goo/boot","t*");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYmod,"goo/math","mod");
DEF(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YgooSconditionsYLincongruent_method_errorG,"goo/conditions","<incongruent-method-error>");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYC,"goo/math","^");
DEF(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
DEF(YgooSconditionsYhandler_info,"goo/conditions","handler-info");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmacrosYpair,"goo/macros","pair");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_93);
DEFLIT(lit_178);
DEFLIT(lit_197);
DEFLIT(lit_7);
DEFLIT(lit_79);
DEFLIT(lit_110);
DEFLIT(lit_234);
DEFLIT(lit_213);
DEFLIT(lit_120);
DEFLIT(lit_215);
DEFLIT(lit_85);
DEFLIT(lit_62);
DEFLIT(lit_101);
DEFLIT(lit_204);
DEFLIT(lit_206);
DEFLIT(lit_126);
DEFLIT(lit_109);
DEFLIT(lit_122);
DEFLIT(lit_139);
DEFLIT(lit_65);
DEFLIT(lit_57);
DEFLIT(lit_108);
DEFLIT(lit_156);
DEFLIT(lit_176);
DEFLIT(lit_41);
DEFLIT(lit_48);
DEFLIT(lit_118);
DEFLIT(lit_66);
DEFLIT(lit_40);
DEFLIT(lit_105);
DEFLIT(lit_77);
DEFLIT(lit_163);
DEFLIT(lit_80);
DEFLIT(lit_125);
DEFLIT(lit_74);
DEFLIT(lit_49);
DEFLIT(lit_189);
DEFLIT(lit_60);
DEFLIT(lit_58);
DEFLIT(lit_30);
DEFLIT(lit_232);
DEFLIT(lit_16);
DEFLIT(lit_121);
DEFLIT(lit_201);
DEFLIT(lit_217);
DEFLIT(lit_179);
DEFLIT(lit_11);
DEFLIT(lit_0);
DEFLIT(lit_119);
DEFLIT(lit_75);
DEFLIT(lit_229);
DEFLIT(lit_149);
DEFLIT(lit_173);
DEFLIT(lit_39);
DEFLIT(lit_157);
DEFLIT(lit_18);
DEFLIT(lit_208);
DEFLIT(lit_130);
DEFLIT(lit_5);
DEFLIT(lit_143);
DEFLIT(lit_83);
DEFLIT(lit_161);
DEFLIT(lit_1);
DEFLIT(lit_203);
DEFLIT(lit_228);
DEFLIT(lit_112);
DEFLIT(lit_44);
DEFLIT(lit_100);
DEFLIT(lit_148);
DEFLIT(lit_116);
DEFLIT(lit_72);
DEFLIT(lit_226);
DEFLIT(lit_6);
DEFLIT(lit_162);
DEFLIT(lit_35);
DEFLIT(lit_187);
DEFLIT(lit_52);
DEFLIT(lit_27);
DEFLIT(lit_94);
DEFLIT(lit_142);
DEFLIT(lit_67);
DEFLIT(lit_91);
DEFLIT(lit_193);
DEFLIT(lit_188);
DEFLIT(lit_59);
DEFLIT(lit_69);
DEFLIT(lit_230);
DEFLIT(lit_86);
DEFLIT(lit_99);
DEFLIT(lit_14);
DEFLIT(lit_138);
DEFLIT(lit_136);
DEFLIT(lit_194);
DEFLIT(lit_47);
DEFLIT(lit_87);
DEFLIT(lit_192);
DEFLIT(lit_111);
DEFLIT(lit_55);
DEFLIT(lit_17);
DEFLIT(lit_218);
DEFLIT(lit_171);
DEFLIT(lit_43);
DEFLIT(lit_107);
DEFLIT(lit_106);
DEFLIT(lit_63);
DEFLIT(lit_15);
DEFLIT(lit_233);
DEFLIT(lit_76);
DEFLIT(lit_177);
DEFLIT(lit_140);
DEFLIT(lit_216);
DEFLIT(lit_13);
DEFLIT(lit_29);
DEFLIT(lit_3);
DEFLIT(lit_184);
DEFLIT(lit_9);
DEFLIT(lit_237);
DEFLIT(lit_81);
DEFLIT(lit_141);
DEFLIT(lit_38);
DEFLIT(lit_20);
DEFLIT(lit_33);
DEFLIT(lit_102);
DEFLIT(lit_227);
DEFLIT(lit_89);
DEFLIT(lit_164);
DEFLIT(lit_26);
DEFLIT(lit_19);
DEFLIT(lit_180);
DEFLIT(lit_71);
DEFLIT(lit_231);
DEFLIT(lit_124);
DEFLIT(lit_4);
DEFLIT(lit_209);
DEFLIT(lit_185);
DEFLIT(lit_103);
DEFLIT(lit_199);
DEFLIT(lit_127);
DEFLIT(lit_198);
DEFLIT(lit_90);
DEFLIT(lit_73);
DEFLIT(lit_222);
DEFLIT(lit_2);
DEFLIT(lit_104);
DEFLIT(lit_146);
DEFLIT(lit_25);
DEFLIT(lit_37);
DEFLIT(lit_225);
DEFLIT(lit_131);
DEFLIT(lit_160);
DEFLIT(lit_223);
DEFLIT(lit_158);
DEFLIT(lit_113);
DEFLIT(lit_123);
DEFLIT(lit_95);
DEFLIT(lit_195);
DEFLIT(lit_114);
DEFLIT(lit_159);
DEFLIT(lit_22);
DEFLIT(lit_183);
DEFLIT(lit_219);
DEFLIT(lit_36);
DEFLIT(lit_98);
DEFLIT(lit_200);
DEFLIT(lit_32);
DEFLIT(lit_34);
DEFLIT(lit_154);
DEFLIT(lit_129);
DEFLIT(lit_169);
DEFLIT(lit_238);
DEFLIT(lit_10);
DEFLIT(lit_191);
DEFLIT(lit_53);
DEFLIT(lit_97);
DEFLIT(lit_155);
DEFLIT(lit_186);
DEFLIT(lit_207);
DEFLIT(lit_212);
DEFLIT(lit_24);
DEFLIT(lit_182);
DEFLIT(lit_151);
DEFLIT(lit_51);
DEFLIT(lit_165);
DEFLIT(lit_224);
DEFLIT(lit_54);
DEFLIT(lit_214);
DEFLIT(lit_167);
DEFLIT(lit_21);
DEFLIT(lit_153);
DEFLIT(lit_96);
DEFLIT(lit_64);
DEFLIT(lit_134);
DEFLIT(lit_166);
DEFLIT(lit_170);
DEFLIT(lit_31);
DEFLIT(lit_152);
DEFLIT(lit_150);
DEFLIT(lit_78);
DEFLIT(lit_92);
DEFLIT(lit_235);
DEFLIT(lit_23);
DEFLIT(lit_8);
DEFLIT(lit_190);
DEFLIT(lit_68);
DEFLIT(lit_42);
DEFLIT(lit_145);
DEFLIT(lit_56);
DEFLIT(lit_236);
DEFLIT(lit_147);
DEFLIT(lit_61);
DEFLIT(lit_174);
DEFLIT(lit_172);
DEFLIT(lit_45);
DEFLIT(lit_181);
DEFLIT(lit_175);
DEFLIT(lit_12);
DEFLIT(lit_28);
DEFLIT(lit_220);
DEFLIT(lit_84);
DEFLIT(lit_211);
DEFLIT(lit_221);
DEFLIT(lit_88);
DEFLIT(lit_168);
DEFLIT(lit_70);
DEFLIT(lit_137);
DEFLIT(lit_133);
DEFLIT(lit_196);
DEFLIT(lit_50);
DEFLIT(lit_46);
DEFLIT(lit_82);
DEFLIT(lit_128);
DEFLIT(lit_205);
DEFLIT(lit_135);
DEFLIT(lit_202);
DEFLIT(lit_117);
DEFLIT(lit_210);
DEFLIT(lit_144);
DEFLIT(lit_132);
DEFLIT(lit_115);

/* FUNCTIONS: */

LOCFOR(fun_default_handler_0);
LOCFOR(fun_describe_condition_1);
LOCFOR(fun_default_handler_description_2);
LOCFOR(fun_build_condition_interactively_3);
LOCFOR(fun_condition_message_4);
LOCFOR(fun_condition_message_setter_5);
LOCFOR(fun_6);
LOCFOR(fun_condition_arguments_7);
LOCFOR(fun_condition_arguments_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_describe_condition_10);
LOCFOR(fun_build_condition_interactively_11);
LOCFOR(fun_default_handler_12);
LOCFOR(fun_default_handler_description_13);
LOCFOR(fun_incongruent_method_error_generic_14);
LOCFOR(fun_incongruent_method_error_method_15);
LOCFOR(fun_describe_condition_16);
LOCFOR(fun_default_handler_description_17);
LOCFOR(fun_describe_handler_18);
LOCFOR(fun_build_condition_for_handler_interactively_19);
LOCFOR(fun_handler_info_message_20);
LOCFOR(fun_handler_info_arguments_21);
LOCFOR(fun_22);
LOCFOR(fun_describe_handler_23);
LOCFOR(fun_handler_condition_type_24);
LOCFOR(fun_handler_info_25);
LOCFOR(fun_handler_test_26);
LOCFOR(fun_handler_function_27);
FUNFOR(YgooSconditionsYfab_handler);
FUNFOR(YgooSconditionsYhandler_activeQ);
FUNFOR(YgooSconditionsYhandler_matchesQ);
LOCFOR(fun_31);
LOCFOR(fun_Uhandler_functionU_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
FUNFOR(YPwith_monitor);
LOCFOR(fun_36);
FUNFOR(YgooSconditionsYsignal_handler_list);
LOCFOR(fun_sig_38);
LOCFOR(fun_sig_39);
LOCFOR(fun_error_40);
LOCFOR(fun_error_41);
FUNFOR(YgooSfunYincongruent_method_error);
LOCFOR(fun_call_error_function_43);
LOCFOR(fun_call_error_arguments_44);
LOCFOR(fun_describe_condition_45);
FUNFOR(Yarity_error);
FUNFOR(Ynarity_error);
LOCFOR(fun_describe_condition_48);
LOCFOR(fun_type_error_value_49);
LOCFOR(fun_type_error_type_50);
FUNFOR(Ytype_error);
LOCFOR(fun_describe_condition_52);
FUNFOR(Yunknown_function_error);
LOCFOR(fun_describe_condition_54);
FUNFOR(Yargument_type_error);
LOCFOR(fun_describe_condition_56);
FUNFOR(Yreturn_type_error);
LOCFOR(fun_describe_condition_58);
FUNFOR(Yambiguous_method_error);
LOCFOR(fun_describe_condition_60);
FUNFOR(Yno_applicable_methods_error);
LOCFOR(fun_describe_condition_62);
FUNFOR(Yno_next_methods_error);
LOCFOR(fun_describe_condition_64);
FUNFOR(Ycpl_error);
FUNFOR(Ysyntax_error);
LOCFOR(fun_macro_error_name_67);
LOCFOR(fun_macro_error_arguments_68);
FUNFOR(YgooSmacrosYmacro_error);
LOCFOR(fun_describe_condition_70);
FUNFOR(Ystack_overflow_error);
LOCFOR(fun_describe_condition_72);
FUNFOR(Yinternal_error);
FUNFOR(Yassert_error);
LOCFOR(fun_describe_condition_75);
LOCFOR(fun_range_error_collection_76);
LOCFOR(fun_range_error_key_77);
LOCFOR(fun_range_error_78);
LOCFOR(fun_describe_condition_79);
LOCFOR(fun_file_opening_error_filename_80);
LOCFOR(fun_file_opening_error_81);
LOCFOR(fun_describe_condition_82);
LOCFOR(fun_unbound_variable_error_variable_83);
LOCFOR(fun_describe_condition_84);
LOCFOR(fun_property_error_owner_85);
LOCFOR(fun_86);
LOCFOR(fun_property_error_generic_87);
LOCFOR(fun_88);
FUNFOR(Yproperty_unbound_error);
LOCFOR(fun_describe_condition_90);
FUNFOR(Yproperty_not_found_error);
LOCFOR(fun_describe_condition_92);
FUNFOR(Yproperty_type_error);
LOCFOR(fun_describe_condition_94);
FUNFOR(Yas_error);
LOCFOR(fun_describe_condition_96);
FUNFOR(Yarithmetic_error);
FUNFOR(Ykeyboard_interrupt);
FUNFOR(YgooSconditionsYdo_handlers_of_type);
LOCFOR(fun_100);
FUNFOR(YgooSconditionsYlist_handlers);
LOCFOR(fun_102);
FUNFOR(YgooSconditionsYinvoke_handler_interactively);
FUNFOR(YgooSconditionsYchoose_handler);
extern P YgooSconditionsY___main_0___ ();
extern P YgooSconditionsY___main_1___ ();
extern P YgooSconditionsY___main_2___ ();
extern P YgooSconditionsY___main_3___ ();
extern P YgooSconditionsY___main_4___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_default_handler_0) {
  P c_;
LINK_STACK();
  ARG(c_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_describe_condition_1) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_5),c_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_default_handler_description_2) {
  P cond_type_;
  P T0;
LINK_STACK();
  ARG(cond_type_, 0);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_8),cond_type_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_build_condition_interactively_3) {
  P cond_type_,in_,out_;
  P T0;
LINK_STACK();
  ARG(cond_type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
  T0 = CALL1(1,VARREF(Ynew),cond_type_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_condition_message_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYcondition_message));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_condition_message_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcondition_message));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_6) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_17));
}

LOCCODEDEF(fun_condition_arguments_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYcondition_arguments));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_condition_arguments_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcondition_arguments));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_9) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_describe_condition_10) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcondition_message),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcondition_arguments),c_);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg_to_str),YPfalse,T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_build_condition_interactively_11) {
  P cond_type_,in_,out_;
  P condF3650;
  P next_metsF3649;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(cond_type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
  T6 = (P)YPfun_reg();
  T7 = (P)YPnext_methods();
  T5 = CALL5(1,VARREF(YgooSmacrosYOchecked_next_methods),T6,T7,cond_type_,in_,out_);
  next_metsF3649 = T5;
  T3 = CALL1(1,VARREF(Yhead),next_metsF3649);
  T4 = CALL1(1,VARREF(Ytail),next_metsF3649);
  T2 = CALLN(1,VARREF(YgooSmacrosYnapp),6,T3,T4,cond_type_,in_,out_,Ynil);
  condF3650 = T2;
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_25));
  T0 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  CALL2(1,VARREF(YgooSconditionsYcondition_message_setter),T0,condF3650);
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_26));
  T1 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  CALL2(1,VARREF(YgooSconditionsYcondition_arguments_setter),T1,condF3650);
UNLINK_STACK();
  RET(condF3650);
}

LOCCODEDEF(fun_default_handler_12) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL1(1,VARREF(YgooSconditionsYdescribe_condition),c_);
  CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_29),T0);
  T1 = (P)YPinvoke_debugger(c_);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_default_handler_description_13) {
  P cond_type_;
  P T0;
LINK_STACK();
  ARG(cond_type_, 0);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_34),cond_type_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_incongruent_method_error_generic_14) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYincongruent_method_error_generic));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_incongruent_method_error_method_15) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYincongruent_method_error_method));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_16) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYincongruent_method_error_method),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYincongruent_method_error_generic),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_41),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_default_handler_description_17) {
  P cond_type_;
LINK_STACK();
  ARG(cond_type_, 0);
UNLINK_STACK();
  RET(LITREF(lit_44));
}

LOCCODEDEF(fun_describe_handler_18) {
  P info_,condition_type_;
  P T0;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
  T0 = CALL1(1,VARREF(YgooSconditionsYdefault_handler_description),condition_type_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_build_condition_for_handler_interactively_19) {
  P info_,condition_type_,in_,out_;
  P T0;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
  ARG(in_, 2);
  ARG(out_, 3);
  T0 = CALL3(1,VARREF(YgooSconditionsYbuild_condition_interactively),condition_type_,in_,out_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_handler_info_message_20) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSfunYhandler_info_message));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_handler_info_arguments_21) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSfunYhandler_info_arguments));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_22) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

LOCCODEDEF(fun_describe_handler_23) {
  P info_,condition_type_;
  P T0,T1,T2;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
  T1 = CALL1(1,VARREF(YgooSfunYhandler_info_message),info_);
  T2 = CALL1(1,VARREF(YgooSfunYhandler_info_arguments),info_);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg_to_str),YPfalse,T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_handler_condition_type_24) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYhandler_condition_type));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_handler_info_25) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYhandler_info));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_handler_test_26) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYhandler_test));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_handler_function_27) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYhandler_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYfab_handler) {
  P type_,info_,test_,f_;
  P T0;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_, 2);
  ARG(f_, 3);
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_condition_type),type_,VARREF(YgooSconditionsYhandler_info),info_,VARREF(YgooSconditionsYhandler_test),test_,VARREF(YgooSconditionsYhandler_function),f_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSconditionsYhandler_activeQ) {
  P handler_;
  P T0,T1;
LINK_STACK();
  ARG(handler_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYhandler_test),handler_);
  T0 = CALL0(1,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSconditionsYhandler_matchesQ) {
  P handler_,condition_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(handler_, 0);
  ARG(condition_, 1);
  T2 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T1 = CALL2(1,VARREF(YisaQ),condition_,T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSconditionsYhandler_activeQ),handler_);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_31) {
  P UresumeU_;
  P T0;
LINK_STACK();
  ARG(UresumeU_, 0);
  CALL2(1,FREEREF(1),FREEREF(0),UresumeU_);
  T0 = CALL0(1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Uhandler_functionU_32) {
  P condition_,Unext_handlerU_;
  P T0,T1;
LINK_STACK();
  ARG(condition_, 0);
  ARG(Unext_handlerU_, 1);
  T1 = FUNFAB(fun_31,3,condition_,FREEREF(0),Unext_handlerU_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_33) {
  P T0;
LINK_STACK();
  T0 = CALL0(0,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_34) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YgooSconditionsYTcurrent_handlersT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPwith_monitor) {
  P type_,info_,test_fun_,user_handler_,main_fun_;
  P Uoriginal_handlersUF3651;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_fun_, 2);
  ARG(user_handler_, 3);
  ARG(main_fun_, 4);
  Uoriginal_handlersUF3651 = DYNREF(YgooSconditionsYTcurrent_handlersT);
  T2 = FUNFAB(fun_Uhandler_functionU_32,1,user_handler_);
  T1 = CALL4(1,VARREF(YgooSconditionsYfab_handler),type_,info_,test_fun_,T2);
  T0 = CALL2(1,VARREF(YgooScolsSseqxYpushX),DYNREF(YgooSconditionsYTcurrent_handlersT),T1);
  DYNSET(YgooSconditionsYTcurrent_handlersT,T0);
  T4 = FUNFAB(fun_33,1,main_fun_);
  T5 = FUNFAB(fun_34,1,Uoriginal_handlersUF3651);
  T3 = with_cleanup(T4,T5);
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_36) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYsignal_handler_list) {
  P condition_,handlers_;
  P remainingF3653;
  P handlerF3652;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(condition_, 0);
  ARG(handlers_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),handlers_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSconditionsYdefault_handler),condition_);
    T0 = T2;
  } else {
    T10 = CALL1(1,VARREF(Yhead),handlers_);
    handlerF3652 = T10;
    T9 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF3653 = T9;
    T4 = CALL2(1,VARREF(YgooSconditionsYhandler_matchesQ),handlerF3652,condition_);
    if (T4 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSconditionsYhandler_function),handlerF3652);
      T6 = FUNFAB(fun_36,2,condition_,remainingF3653);
      T5 = CALL2(1,T7,condition_,T6);
      T3 = T5;
    } else {
      T8 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),condition_,remainingF3653);
      T3 = T8;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sig_38) {
  P condition_,args_;
  P T0;
LINK_STACK();
  ARG(condition_, 0);
  NARGS(args_, 1);
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),condition_,DYNREF(YgooSconditionsYTcurrent_handlersT));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sig_39) {
  P c_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLsimple_conditionG),VARREF(YgooSconditionsYcondition_message),c_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_error_40) {
  P c_,args_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),c_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_error_41) {
  P c_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLsimple_errorG),VARREF(YgooSconditionsYcondition_message),c_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(Yerror),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYincongruent_method_error) {
  P gen_,met_;
  P T0,T1;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLincongruent_method_errorG),VARREF(YgooSconditionsYincongruent_method_error_generic),gen_,VARREF(YgooSconditionsYincongruent_method_error_method),met_);
  T0 = CALL1(1,VARREF(Yerror),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_call_error_function_43) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYcall_error_function));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_call_error_arguments_44) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYcall_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_45) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_95),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yarity_error) {
  P fun_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(fun_, 0);
  ARG(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLarity_errorG),VARREF(YgooSconditionsYcall_error_function),fun_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ynarity_error) {
  P fun_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(fun_, 0);
  ARG(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLnarity_errorG),VARREF(YgooSconditionsYcall_error_function),fun_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_48) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_102),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_type_error_value_49) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYtype_error_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_type_error_type_50) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYtype_error_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ytype_error) {
  P arg_,type_;
  P T0,T1;
LINK_STACK();
  ARG(arg_, 0);
  ARG(type_, 1);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLtype_errorG),VARREF(YgooSconditionsYtype_error_value),arg_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_52) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYtype_error_type),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_111),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yunknown_function_error) {
  P f_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLunknown_function_errorG),VARREF(YgooSconditionsYcall_error_function),f_,VARREF(YgooSconditionsYcall_error_arguments),T2,VARREF(YgooSconditionsYtype_error_value),f_,VARREF(YgooSconditionsYtype_error_type),VARREF(YLfunG));
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_54) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_116),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yargument_type_error) {
  P f_,val_,type_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(val_, 1);
  ARG(type_, 2);
  ARG(args_, 3);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLargument_type_errorG),VARREF(YgooSconditionsYcall_error_function),f_,VARREF(YgooSconditionsYcall_error_arguments),T2,VARREF(YgooSconditionsYtype_error_value),val_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_56) {
  P c_;
  P next_metsF3654;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T3 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T1 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_121),T2,T3);
  T8 = (P)YPfun_reg();
  T9 = (P)YPnext_methods();
  T7 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T8,T9,c_);
  next_metsF3654 = T7;
  T5 = CALL1(1,VARREF(Yhead),next_metsF3654);
  T6 = CALL1(1,VARREF(Ytail),next_metsF3654);
  T4 = CALL4(1,VARREF(YgooSmacrosYnapp),T5,T6,c_,Ynil);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yreturn_type_error) {
  P f_,val_,type_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(val_, 1);
  ARG(type_, 2);
  ARG(args_, 3);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLreturn_type_errorG),VARREF(YgooSconditionsYcall_error_function),f_,VARREF(YgooSconditionsYcall_error_arguments),T2,VARREF(YgooSconditionsYtype_error_value),val_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_58) {
  P c_;
  P next_metsF3655;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T3 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T1 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_126),T2,T3);
  T8 = (P)YPfun_reg();
  T9 = (P)YPnext_methods();
  T7 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T8,T9,c_);
  next_metsF3655 = T7;
  T5 = CALL1(1,VARREF(Yhead),next_metsF3655);
  T6 = CALL1(1,VARREF(Ytail),next_metsF3655);
  T4 = CALL4(1,VARREF(YgooSmacrosYnapp),T5,T6,c_,Ynil);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yambiguous_method_error) {
  P gen_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLambiguous_method_errorG),VARREF(YgooSconditionsYcall_error_function),gen_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_60) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_131),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yno_applicable_methods_error) {
  P gen_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLno_applicable_methods_errorG),VARREF(YgooSconditionsYcall_error_function),gen_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_62) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_136),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yno_next_methods_error) {
  P met_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(met_, 0);
  ARG(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLno_next_methods_errorG),VARREF(YgooSconditionsYcall_error_function),met_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_64) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_141),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Ycpl_error) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL4(1,VARREF(Ynew),VARREF(YgooSconditionsYLcpl_errorG),VARREF(YgooSconditionsYcondition_message),msg_,T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ysyntax_error) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLsyntax_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_macro_error_name_67) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYmacro_error_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_macro_error_arguments_68) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYmacro_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmacro_error) {
  P name_,args_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  ARG(args_, 1);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLmacro_errorG),VARREF(YgooSconditionsYmacro_error_name),name_,VARREF(YgooSconditionsYmacro_error_arguments),args_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_70) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYmacro_error_name),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYmacro_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_157),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Ystack_overflow_error) {
  P T0,T1;
LINK_STACK();
  T1 = CALL1(1,VARREF(Ynew),VARREF(YgooSconditionsYLstack_overflowG));
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_72) {
  P c_;
LINK_STACK();
  ARG(c_, 0);
UNLINK_STACK();
  RET(LITREF(lit_161));
}

FUNCODEDEF(Yinternal_error) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLinternal_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yassert_error) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLassert_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_75) {
  P c_;
  P next_metsF3656;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(c_, 0);
  T5 = (P)YPfun_reg();
  T6 = (P)YPnext_methods();
  T4 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T5,T6,c_);
  next_metsF3656 = T4;
  T2 = CALL1(1,VARREF(Yhead),next_metsF3656);
  T3 = CALL1(1,VARREF(Ytail),next_metsF3656);
  T1 = CALL4(1,VARREF(YgooSmacrosYnapp),T2,T3,c_,Ynil);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_169),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_range_error_collection_76) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYrange_error_collection));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_range_error_key_77) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYrange_error_key));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_range_error_78) {
  P c_,k_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(k_, 1);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLrange_errorG),VARREF(YgooSconditionsYrange_error_collection),c_,VARREF(YgooSconditionsYrange_error_key),k_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_79) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYrange_error_key),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYrange_error_collection),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_178),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_file_opening_error_filename_80) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYfile_opening_error_filename));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_file_opening_error_81) {
  P filename_;
  P T0,T1;
LINK_STACK();
  ARG(filename_, 0);
  T1 = CALL3(1,VARREF(Ynew),VARREF(YgooSconditionsYLfile_opening_errorG),VARREF(YgooSconditionsYfile_opening_error_filename),filename_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_82) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYfile_opening_error_filename),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_186),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_unbound_variable_error_variable_83) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYunbound_variable_error_variable));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_84) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYunbound_variable_error_variable),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_192),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_property_error_owner_85) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYproperty_error_owner));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_86) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_property_error_generic_87) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYproperty_error_generic));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_88) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(Yproperty_unbound_error) {
  P owner_;
  P T0,T1;
LINK_STACK();
  ARG(owner_, 0);
  T1 = CALL3(1,VARREF(Ynew),VARREF(YgooSconditionsYLproperty_unbound_errorG),VARREF(YgooSconditionsYproperty_error_owner),owner_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_90) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYproperty_error_owner),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_204),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yproperty_not_found_error) {
  P generic_,owner_;
  P T0,T1;
LINK_STACK();
  ARG(generic_, 0);
  ARG(owner_, 1);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLproperty_not_found_errorG),VARREF(YgooSconditionsYproperty_error_generic),generic_,VARREF(YgooSconditionsYproperty_error_owner),owner_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_92) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYproperty_error_generic),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYproperty_error_owner),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_209),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yproperty_type_error) {
  P generic_,value_,type_;
  P T0,T1;
LINK_STACK();
  ARG(generic_, 0);
  ARG(value_, 1);
  ARG(type_, 2);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YgooSconditionsYLproperty_type_errorG),VARREF(YgooSconditionsYproperty_error_generic),generic_,VARREF(YgooSconditionsYtype_error_value),value_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_94) {
  P c_;
  P next_metsF3657;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(YgooSconditionsYproperty_error_generic),c_);
  T1 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_214),T2);
  T7 = (P)YPfun_reg();
  T8 = (P)YPnext_methods();
  T6 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T7,T8,c_);
  next_metsF3657 = T6;
  T4 = CALL1(1,VARREF(Yhead),next_metsF3657);
  T5 = CALL1(1,VARREF(Ytail),next_metsF3657);
  T3 = CALL4(1,VARREF(YgooSmacrosYnapp),T4,T5,c_,Ynil);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yas_error) {
  P type_,value_;
  P T0,T1;
LINK_STACK();
  ARG(type_, 0);
  ARG(value_, 1);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLas_errorG),VARREF(YgooSconditionsYtype_error_type),type_,VARREF(YgooSconditionsYtype_error_value),value_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_describe_condition_96) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_type),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_219),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yarithmetic_error) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLarithmetic_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T0,T1;
LINK_STACK();
  T1 = CALL1(1,VARREF(Ynew),VARREF(YgooSconditionsYLkeyboard_interruptG));
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYdo_handlers_of_type) {
  P type_,f_;
  P remainingF3660;
  P handlerF3659;
  P handlersF3658;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(type_, 0);
  ARG(f_, 1);
  handlersF3658 = DYNREF(YgooSconditionsYTcurrent_handlersT);
  LOOP_151: {
    P a151_0;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),handlersF3658);
    if (T1 != YPfalse) {
      T0 = YPfalse;
    } else {
      T9 = CALL1(1,VARREF(Yhead),handlersF3658);
      handlerF3659 = T9;
      T8 = CALL1(1,VARREF(Ytail),handlersF3658);
      remainingF3660 = T8;
      T4 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handlerF3659);
      T3 = CALL2(1,VARREF(YsubtypeQ),T4,type_);
      if (T3 != YPfalse) {
        T5 = CALL1(1,VARREF(YgooSconditionsYhandler_activeQ),handlerF3659);
        T2 = T5;
      } else {
        T2 = YPfalse;
      }
      if (T2 != YPfalse) {
        T6 = CALL1(0,f_,handlerF3659);
      } else {
      }
      a151_0 = remainingF3660;
      handlersF3658 = a151_0;
      goto LOOP_151;
      T0 = T7;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_100) {
  P handler_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(handler_, 0);
  T0 = BOXGET(FREEREF(1));
  T2 = CALL1(1,VARREF(YgooSconditionsYhandler_info),handler_);
  T3 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T1 = CALL2(1,VARREF(YgooSconditionsYdescribe_handler),T2,T3);
  CALL4(1,VARREF(YgooSconditionsYmsg),FREEREF(0),LITREF(lit_230),T0,T1);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),FREEREF(2),handler_);
  T6 = BOXGET(FREEREF(1));
  T5 = CALL2(1,VARREF(YgooSmathYA),T6,YPint((P)1));
  T4 = BOXPUT(T5,FREEREF(1));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YgooSconditionsYlist_handlers) {
  P type_,out_;
  P applicableF3662;
  P iF3661;
  P T0,T1,T2;
LINK_STACK();
  ARG(type_, 0);
  ARG(out_, 1);
  iF3661 = YPint((P)1);
  iF3661 = BOXFAB(iF3661);
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  applicableF3662 = T2;
  T1 = FUNFAB(fun_100,3,out_,iF3661,applicableF3662);
  CALL2(1,VARREF(YgooSconditionsYdo_handlers_of_type),type_,T1);
UNLINK_STACK();
  RET(applicableF3662);
}

LOCCODEDEF(fun_102) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYinvoke_handler_interactively) {
  P handler_,in_,out_;
  P remainingF3666;
  P currentF3665;
  P handlersF3664;
  P conditionF3663;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(handler_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
  T15 = CALL1(1,VARREF(YgooSconditionsYhandler_info),handler_);
  T16 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T14 = CALL4(1,VARREF(YgooSconditionsYbuild_condition_for_handler_interactively),T15,T16,in_,out_);
  conditionF3663 = T14;
  T1 = CALL2(1,VARREF(YgooSconditionsYhandler_matchesQ),handler_,conditionF3663);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T2 = CALL3(1,VARREF(Yerror),LITREF(lit_233),handler_,conditionF3663);
  } else {
  }
  handlersF3664 = DYNREF(YgooSconditionsYTcurrent_handlersT);
  LOOP_152: {
    P a152_0;
    T4 = CALL1(1,VARREF(YgooSmacrosYnulQ),handlersF3664);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Yerror),LITREF(lit_234),handler_);
      T3 = T5;
    } else {
      T13 = CALL1(1,VARREF(Yhead),handlersF3664);
      currentF3665 = T13;
      T12 = CALL1(1,VARREF(Ytail),handlersF3664);
      remainingF3666 = T12;
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),handler_,currentF3665);
      if (T7 != YPfalse) {
        T10 = CALL1(1,VARREF(YgooSconditionsYhandler_function),handler_);
        T9 = FUNFAB(fun_102,2,conditionF3663,remainingF3666);
        T8 = CALL2(1,T10,conditionF3663,T9);
        T6 = T8;
      } else {
        a152_0 = remainingF3666;
        handlersF3664 = a152_0;
        goto LOOP_152;
        T6 = T11;
      }
      T3 = T6;
    }
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(YgooSconditionsYchoose_handler) {
  P type_,in_,out_;
  P tmpF3669;
  P nF3668;
  P handlersF3667;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
  T9 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),type_,out_);
  handlersF3667 = T9;
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_237));
  T8 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
  nF3668 = T7;
  T3 = CALL2(1,VARREF(YgooSmagYL),nF3668,YPint((P)0));
  tmpF3669 = T3;
  if (tmpF3669 != YPfalse) {
    T0 = tmpF3669;
  } else {
    T2 = CALL1(1,VARREF(YgooStypesYlen),handlersF3667);
    T1 = CALL2(1,VARREF(YgooSmagYGE),nF3668,T2);
    T0 = T1;
  }
  if (T0 != YPfalse) {
    T4 = CALL2(1,VARREF(Yerror),LITREF(lit_238),nF3668);
  } else {
  }
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),handlersF3667,nF3668);
  T5 = CALL3(1,VARREF(YgooSconditionsYinvoke_handler_interactively),T6,in_,out_);
UNLINK_STACK();
  QRET(T5);
}

P YgooSconditionsY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85;
DEFCREGS();
  lit_0 = YPPsym((P)"<condition>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YgooSconditionsYLconditionG,T0);
  lit_1 = YPPsym((P)"default-handler");
  lit_2 = YPPlist(1,YPPsym((P)"c"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_handler_0 = YPfab_met(FUNCODEREF(fun_default_handler_0),T2,LITREF(lit_1),LITREF(lit_2),sloc(27),YPfalse);
  T4 = VARREF_OR(YgooSconditionsYdefault_handler,YPfalse);
  T5 = fun_default_handler_0;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YgooSconditionsYdefault_handler,T3);
  lit_3 = YPPsym((P)"describe-condition");
  lit_4 = YPPlist(1,YPPsym((P)"c"));
  lit_5 = YPsb((P)"Anonymous condition %=");
  T6 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_1 = YPfab_met(FUNCODEREF(fun_describe_condition_1),T6,LITREF(lit_3),LITREF(lit_4),sloc(30),YPfalse);
  T8 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T9 = fun_describe_condition_1;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSconditionsYdescribe_condition,T7);
  lit_6 = YPPsym((P)"default-handler-description");
  lit_7 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_8 = YPsb((P)"Anonymous handler for %s");
  T11 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T10 = YPfab_sig(YPPlist(1,T11),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_2 = YPfab_met(FUNCODEREF(fun_default_handler_description_2),T10,LITREF(lit_6),LITREF(lit_7),sloc(33),YPfalse);
  T13 = VARREF_OR(YgooSconditionsYdefault_handler_description,YPfalse);
  T14 = fun_default_handler_description_2;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YgooSconditionsYdefault_handler_description,T12);
  lit_9 = YPPsym((P)"build-condition-interactively");
  lit_10 = YPPlist(3,YPPsym((P)"cond-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  T16 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T15 = YPfab_sig(YPPlist(3,T16,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_interactively_3 = YPfab_met(FUNCODEREF(fun_build_condition_interactively_3),T15,LITREF(lit_9),LITREF(lit_10),sloc(36),YPfalse);
  T18 = VARREF_OR(YgooSconditionsYbuild_condition_interactively,YPfalse);
  T19 = fun_build_condition_interactively_3;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSconditionsYbuild_condition_interactively,T17);
  lit_11 = YPPsym((P)"<simple-condition>");
  T21 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLconditionG),Ynil);
  T20 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_11),T21);
  VARSET(YgooSconditionsYLsimple_conditionG,T20);
  lit_12 = YPPsym((P)"condition-message");
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_condition_message_4 = YPfab_met(FUNCODEREF(fun_condition_message_4),T22,LITREF(lit_12),LITREF(lit_13),sloc(41),YPfalse);
  T24 = VARREF_OR(YgooSconditionsYcondition_message,YPfalse);
  T25 = fun_condition_message_4;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooSconditionsYcondition_message,T23);
  lit_14 = YPPsym((P)"condition-message-setter");
  lit_15 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_condition_message_setter_5 = YPfab_met(FUNCODEREF(fun_condition_message_setter_5),T26,LITREF(lit_14),LITREF(lit_15),sloc(41),YPfalse);
  T28 = VARREF_OR(YgooSconditionsYcondition_message_setter,YPfalse);
  T29 = fun_condition_message_setter_5;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSconditionsYcondition_message_setter,T27);
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  lit_17 = YPsb((P)"");
  T30 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPfab_met(FUNCODEREF(fun_6),T30,YPfalse,LITREF(lit_16),sloc(41),YPfalse);
  T31 = fun_6;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLsimple_conditionG),VARREF(YgooSconditionsYcondition_message),VARREF(YgooSconditionsYcondition_message_setter),VARREF(YLstrG),T31);
  lit_18 = YPPsym((P)"condition-arguments");
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_condition_arguments_7 = YPfab_met(FUNCODEREF(fun_condition_arguments_7),T32,LITREF(lit_18),LITREF(lit_19),sloc(42),YPfalse);
  T34 = VARREF_OR(YgooSconditionsYcondition_arguments,YPfalse);
  T35 = fun_condition_arguments_7;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSconditionsYcondition_arguments,T33);
  lit_20 = YPPsym((P)"condition-arguments-setter");
  lit_21 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_condition_arguments_setter_8 = YPfab_met(FUNCODEREF(fun_condition_arguments_setter_8),T36,LITREF(lit_20),LITREF(lit_21),sloc(42),YPfalse);
  T38 = VARREF_OR(YgooSconditionsYcondition_arguments_setter,YPfalse);
  T39 = fun_condition_arguments_setter_8;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSconditionsYcondition_arguments_setter,T37);
  lit_22 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T40,YPfalse,LITREF(lit_22),sloc(42),YPfalse);
  T41 = fun_9;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLsimple_conditionG),VARREF(YgooSconditionsYcondition_arguments),VARREF(YgooSconditionsYcondition_arguments_setter),VARREF(YLlstG),T41);
  lit_23 = YPPlist(1,YPPsym((P)"c"));
  T42 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_10 = YPfab_met(FUNCODEREF(fun_describe_condition_10),T42,LITREF(lit_3),LITREF(lit_23),sloc(44),YPfalse);
  T44 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T45 = fun_describe_condition_10;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooSconditionsYdescribe_condition,T43);
  lit_24 = YPPlist(3,YPPsym((P)"cond-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_25 = YPsb((P)"Condition format string: ");
  lit_26 = YPsb((P)"Condition format arguments: ");
  T47 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLsimple_conditionG));
  T46 = YPfab_sig(YPPlist(3,T47,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_interactively_11 = YPfab_met(FUNCODEREF(fun_build_condition_interactively_11),T46,LITREF(lit_9),LITREF(lit_24),sloc(47),YPfalse);
  T49 = VARREF_OR(YgooSconditionsYbuild_condition_interactively,YPfalse);
  T50 = fun_build_condition_interactively_11;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YgooSconditionsYbuild_condition_interactively,T48);
  lit_27 = YPPsym((P)"<serious-condition>");
  T52 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLconditionG),Ynil);
  T51 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_27),T52);
  VARSET(YgooSconditionsYLserious_conditionG,T51);
  lit_28 = YPPlist(1,YPPsym((P)"c"));
  lit_29 = YPsb((P)"%s\n");
  T53 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLserious_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_handler_12 = YPfab_met(FUNCODEREF(fun_default_handler_12),T53,LITREF(lit_1),LITREF(lit_28),sloc(58),YPfalse);
  T55 = VARREF_OR(YgooSconditionsYdefault_handler,YPfalse);
  T56 = fun_default_handler_12;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YgooSconditionsYdefault_handler,T54);
  lit_30 = YPPsym((P)"<error>");
  T58 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLserious_conditionG),Ynil);
  T57 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_30),T58);
  VARSET(YgooSconditionsYLerrorG,T57);
  lit_31 = YPPsym((P)"<simple-error>");
  T61 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLsimple_conditionG),Ynil);
  T60 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLerrorG),T61);
  T59 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_31),T60);
  VARSET(YgooSconditionsYLsimple_errorG,T59);
  lit_32 = YPPsym((P)"<restart>");
  T63 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLconditionG),Ynil);
  T62 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_32),T63);
  VARSET(YgooSconditionsYLrestartG,T62);
  lit_33 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_34 = YPsb((P)"Anonymous restart of type %s");
  T65 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLrestartG));
  T64 = YPfab_sig(YPPlist(1,T65),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_13 = YPfab_met(FUNCODEREF(fun_default_handler_description_13),T64,LITREF(lit_6),LITREF(lit_33),sloc(82),YPfalse);
  T67 = VARREF_OR(YgooSconditionsYdefault_handler_description,YPfalse);
  T68 = fun_default_handler_description_13;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YgooSconditionsYdefault_handler_description,T66);
  lit_35 = YPPsym((P)"<incongruent-method-error>");
  T70 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLerrorG),Ynil);
  T69 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_35),T70);
  VARSET(YgooSconditionsYLincongruent_method_errorG,T69);
  lit_36 = YPPsym((P)"incongruent-method-error-generic");
  lit_37 = YPPlist(1,YPPsym((P)"_x"));
  T71 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_generic_14 = YPfab_met(FUNCODEREF(fun_incongruent_method_error_generic_14),T71,LITREF(lit_36),LITREF(lit_37),sloc(86),YPfalse);
  T73 = VARREF_OR(YgooSconditionsYincongruent_method_error_generic,YPfalse);
  T74 = fun_incongruent_method_error_generic_14;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YgooSconditionsYincongruent_method_error_generic,T72);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLincongruent_method_errorG),VARREF(YgooSconditionsYincongruent_method_error_generic),YPfalse,VARREF(YLgenG),VARREF(YPprop_unbound_error));
  lit_38 = YPPsym((P)"incongruent-method-error-method");
  lit_39 = YPPlist(1,YPPsym((P)"_x"));
  T75 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_method_15 = YPfab_met(FUNCODEREF(fun_incongruent_method_error_method_15),T75,LITREF(lit_38),LITREF(lit_39),sloc(87),YPfalse);
  T77 = VARREF_OR(YgooSconditionsYincongruent_method_error_method,YPfalse);
  T78 = fun_incongruent_method_error_method_15;
  T76 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T77,T78);
  VARSET(YgooSconditionsYincongruent_method_error_method,T76);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLincongruent_method_errorG),VARREF(YgooSconditionsYincongruent_method_error_method),YPfalse,VARREF(YLmetG),VARREF(YPprop_unbound_error));
  lit_40 = YPPlist(1,YPPsym((P)"c"));
  lit_41 = YPsb((P)"Method %= incongruent with generic %=.");
  T81 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T80 = fun_describe_condition_16 = YPfab_met(FUNCODEREF(fun_describe_condition_16),T81,LITREF(lit_3),LITREF(lit_40),sloc(89),YPfalse);
  T84 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T85 = fun_describe_condition_16;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  T82 = VARSET(YgooSconditionsYdescribe_condition,T83);
  T79 = T82;
  return T79;
}

P YgooSconditionsY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108;
DEFCREGS();
  lit_42 = YPPsym((P)"<replace-generic-restart>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLrestartG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_42),T1);
  VARSET(YgooSfunYLreplace_generic_restartG,T0);
  lit_43 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_44 = YPsb((P)"Replace the generic function with an nul, congruent one");
  T3 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSfunYLreplace_generic_restartG));
  T2 = YPfab_sig(YPPlist(1,T3),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_17 = YPfab_met(FUNCODEREF(fun_default_handler_description_17),T2,LITREF(lit_6),LITREF(lit_43),sloc(96),YPfalse);
  T5 = VARREF_OR(YgooSconditionsYdefault_handler_description,YPfalse);
  T6 = fun_default_handler_description_17;
  T4 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T5,T6);
  VARSET(YgooSconditionsYdefault_handler_description,T4);
  lit_45 = YPPsym((P)"<handler-info>");
  T8 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T7 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_45),T8);
  VARSET(YgooSconditionsYLhandler_infoG,T7);
  lit_46 = YPPsym((P)"describe-handler");
  lit_47 = YPPlist(2,YPPsym((P)"info"),YPPsym((P)"condition-type"));
  T9 = YPfab_sig(YPPlist(2,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_describe_handler_18 = YPfab_met(FUNCODEREF(fun_describe_handler_18),T9,LITREF(lit_46),LITREF(lit_47),sloc(113),YPfalse);
  T11 = VARREF_OR(YgooSconditionsYdescribe_handler,YPfalse);
  T12 = fun_describe_handler_18;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YgooSconditionsYdescribe_handler,T10);
  lit_48 = YPPsym((P)"build-condition-for-handler-interactively");
  lit_49 = YPPlist(4,YPPsym((P)"info"),YPPsym((P)"condition-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  T13 = YPfab_sig(YPPlist(4,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_for_handler_interactively_19 = YPfab_met(FUNCODEREF(fun_build_condition_for_handler_interactively_19),T13,LITREF(lit_48),LITREF(lit_49),sloc(116),YPfalse);
  T15 = VARREF_OR(YgooSconditionsYbuild_condition_for_handler_interactively,YPfalse);
  T16 = fun_build_condition_for_handler_interactively_19;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YgooSconditionsYbuild_condition_for_handler_interactively,T14);
  T17 = XCALL1(1,VARREF(Ynew),VARREF(YgooSconditionsYLhandler_infoG));
  VARSET(YgooSconditionsYDdefault_handler_info,T17);
  lit_50 = YPPsym((P)"<simple-handler-info>");
  T19 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLhandler_infoG),Ynil);
  T18 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_50),T19);
  VARSET(YgooSfunYLsimple_handler_infoG,T18);
  lit_51 = YPPsym((P)"handler-info-message");
  lit_52 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YgooSfunYLsimple_handler_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_message_20 = YPfab_met(FUNCODEREF(fun_handler_info_message_20),T20,LITREF(lit_51),LITREF(lit_52),sloc(123),YPfalse);
  T22 = VARREF_OR(YgooSfunYhandler_info_message,YPfalse);
  T23 = fun_handler_info_message_20;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSfunYhandler_info_message,T21);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YgooSfunYhandler_info_message),YPfalse,VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_53 = YPPsym((P)"handler-info-arguments");
  lit_54 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YgooSfunYLsimple_handler_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_arguments_21 = YPfab_met(FUNCODEREF(fun_handler_info_arguments_21),T24,LITREF(lit_53),LITREF(lit_54),sloc(124),YPfalse);
  T26 = VARREF_OR(YgooSfunYhandler_info_arguments,YPfalse);
  T27 = fun_handler_info_arguments_21;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSfunYhandler_info_arguments,T25);
  lit_55 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPfab_met(FUNCODEREF(fun_22),T28,YPfalse,LITREF(lit_55),sloc(124),YPfalse);
  T29 = fun_22;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YgooSfunYhandler_info_arguments),YPfalse,VARREF(YLlstG),T29);
  lit_56 = YPPlist(2,YPPsym((P)"info"),YPPsym((P)"condition-type"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_describe_handler_23 = YPfab_met(FUNCODEREF(fun_describe_handler_23),T30,LITREF(lit_46),LITREF(lit_56),sloc(126),YPfalse);
  T32 = VARREF_OR(YgooSconditionsYdescribe_handler,YPfalse);
  T33 = fun_describe_handler_23;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooSconditionsYdescribe_handler,T31);
  DYNDEFSET(YgooSconditionsYTcurrent_handlersT,Ynil);
  lit_57 = YPPsym((P)"<handler>");
  T35 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T34 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_57),T35);
  VARSET(YgooSconditionsYLhandlerG,T34);
  lit_58 = YPPsym((P)"handler-condition-type");
  lit_59 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_condition_type_24 = YPfab_met(FUNCODEREF(fun_handler_condition_type_24),T36,LITREF(lit_58),LITREF(lit_59),sloc(144),YPfalse);
  T38 = VARREF_OR(YgooSconditionsYhandler_condition_type,YPfalse);
  T39 = fun_handler_condition_type_24;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSconditionsYhandler_condition_type,T37);
  T40 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_condition_type),YPfalse,T40,VARREF(YPprop_unbound_error));
  lit_60 = YPPsym((P)"handler-info");
  lit_61 = YPPlist(1,YPPsym((P)"_x"));
  T41 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_25 = YPfab_met(FUNCODEREF(fun_handler_info_25),T41,LITREF(lit_60),LITREF(lit_61),sloc(145),YPfalse);
  T43 = VARREF_OR(YgooSconditionsYhandler_info,YPfalse);
  T44 = fun_handler_info_25;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YgooSconditionsYhandler_info,T42);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_info),YPfalse,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YPprop_unbound_error));
  lit_62 = YPPsym((P)"handler-test");
  lit_63 = YPPlist(1,YPPsym((P)"_x"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_test_26 = YPfab_met(FUNCODEREF(fun_handler_test_26),T45,LITREF(lit_62),LITREF(lit_63),sloc(146),YPfalse);
  T47 = VARREF_OR(YgooSconditionsYhandler_test,YPfalse);
  T48 = fun_handler_test_26;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YgooSconditionsYhandler_test,T46);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_test),YPfalse,VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_64 = YPPsym((P)"handler-function");
  lit_65 = YPPlist(1,YPPsym((P)"_x"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_function_27 = YPfab_met(FUNCODEREF(fun_handler_function_27),T49,LITREF(lit_64),LITREF(lit_65),sloc(147),YPfalse);
  T51 = VARREF_OR(YgooSconditionsYhandler_function,YPfalse);
  T52 = fun_handler_function_27;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YgooSconditionsYhandler_function,T50);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_function),YPfalse,VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_66 = YPPsym((P)"fab-handler");
  lit_67 = YPPlist(4,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test"),YPPsym((P)"f"));
  T54 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T53 = YPfab_sig(YPPlist(4,T54,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooSconditionsYLhandlerG),Ynil);
  YgooSconditionsYfab_handler = YPfab_met(FUNCODEREF(YgooSconditionsYfab_handler),T53,LITREF(lit_66),LITREF(lit_67),sloc(149),YPfalse);
  T55 = YgooSconditionsYfab_handler;
  VARSET(YgooSconditionsYfab_handler,T55);
  lit_68 = YPPsym((P)"handler-active?");
  lit_69 = YPPlist(1,YPPsym((P)"handler"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSconditionsYhandler_activeQ = YPfab_met(FUNCODEREF(YgooSconditionsYhandler_activeQ),T56,LITREF(lit_68),LITREF(lit_69),sloc(157),YPfalse);
  T57 = YgooSconditionsYhandler_activeQ;
  VARSET(YgooSconditionsYhandler_activeQ,T57);
  lit_70 = YPPsym((P)"handler-matches?");
  lit_71 = YPPlist(2,YPPsym((P)"handler"),YPPsym((P)"condition"));
  T58 = YPfab_sig(YPPlist(2,VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSconditionsYhandler_matchesQ = YPfab_met(FUNCODEREF(YgooSconditionsYhandler_matchesQ),T58,LITREF(lit_70),LITREF(lit_71),sloc(160),YPfalse);
  T59 = YgooSconditionsYhandler_matchesQ;
  VARSET(YgooSconditionsYhandler_matchesQ,T59);
  lit_72 = YPPsym((P)"%with-monitor");
  lit_73 = YPPlist(5,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test-fun"),YPPsym((P)"user-handler"),YPPsym((P)"main-fun"));
  lit_74 = YPPsym((P)"_handler-function_");
  lit_75 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"_next-handler_"));
  lit_76 = YPPlist(1,YPPsym((P)"_resume_"));
  lit_77 = Ynil;
  T65 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPfab_met(FUNCODEREF(fun_31),T65,YPfalse,LITREF(lit_76),sloc(169),YPfalse);
  T64 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Uhandler_functionU_32 = YPfab_met(FUNCODEREF(fun_Uhandler_functionU_32),T64,LITREF(lit_74),LITREF(lit_75),sloc(168),YPfalse);
  T63 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_33 = YPfab_met(FUNCODEREF(fun_33),T63,YPfalse,LITREF(lit_77),sloc(174),YPfalse);
  T62 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T62,YPfalse,LITREF(lit_77),sloc(174),YPfalse);
  T61 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T60 = YPfab_sig(YPPlist(5,T61,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YPwith_monitor = YPfab_met(FUNCODEREF(YPwith_monitor),T60,LITREF(lit_72),LITREF(lit_73),sloc(164),YPfalse);
  T66 = YPwith_monitor;
  VARSET(YPwith_monitor,T66);
  lit_78 = YPPsym((P)"signal-handler-list");
  lit_79 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"handlers"));
  T68 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_36 = YPfab_met(FUNCODEREF(fun_36),T68,YPfalse,LITREF(lit_77),sloc(184),YPfalse);
  T67 = YPfab_sig(YPPlist(2,VARREF(YgooSconditionsYLconditionG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSconditionsYsignal_handler_list = YPfab_met(FUNCODEREF(YgooSconditionsYsignal_handler_list),T67,LITREF(lit_78),LITREF(lit_79),sloc(177),YPfalse);
  T69 = YgooSconditionsYsignal_handler_list;
  VARSET(YgooSconditionsYsignal_handler_list,T69);
  lit_80 = YPPsym((P)"sig");
  lit_81 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"args"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sig_38 = YPfab_met(FUNCODEREF(fun_sig_38),T70,LITREF(lit_80),LITREF(lit_81),sloc(187),YPfalse);
  T72 = VARREF_OR(YgooSconditionsYsig,YPfalse);
  T73 = fun_sig_38;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSconditionsYsig,T71);
  lit_82 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T74 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sig_39 = YPfab_met(FUNCODEREF(fun_sig_39),T74,LITREF(lit_80),LITREF(lit_82),sloc(190),YPfalse);
  T76 = VARREF_OR(YgooSconditionsYsig,YPfalse);
  T77 = fun_sig_39;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooSconditionsYsig,T75);
  lit_83 = YPPsym((P)"error");
  lit_84 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T78 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLerrorG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_error_40 = YPfab_met(FUNCODEREF(fun_error_40),T78,LITREF(lit_83),LITREF(lit_84),sloc(197),YPfalse);
  T80 = VARREF_OR(Yerror,YPfalse);
  T81 = fun_error_40;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(Yerror,T79);
  lit_85 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T82 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_error_41 = YPfab_met(FUNCODEREF(fun_error_41),T82,LITREF(lit_83),LITREF(lit_85),sloc(200),YPfalse);
  T84 = VARREF_OR(Yerror,YPfalse);
  T85 = fun_error_41;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(Yerror,T83);
  lit_86 = YPPsym((P)"incongruent-method-error");
  lit_87 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T86 = YPfab_sig(YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYincongruent_method_error = YPfab_met(FUNCODEREF(YgooSfunYincongruent_method_error),T86,LITREF(lit_86),LITREF(lit_87),sloc(204),YPfalse);
  T87 = YgooSfunYincongruent_method_error;
  VARSET(YgooSfunYincongruent_method_error,T87);
  lit_88 = YPPsym((P)"<call-error>");
  T89 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLerrorG),Ynil);
  T88 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_88),T89);
  VARSET(YgooSconditionsYLcall_errorG,T88);
  lit_89 = YPPsym((P)"call-error-function");
  lit_90 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_call_error_function_43 = YPfab_met(FUNCODEREF(fun_call_error_function_43),T90,LITREF(lit_89),LITREF(lit_90),sloc(210),YPfalse);
  T92 = VARREF_OR(YgooSconditionsYcall_error_function,YPfalse);
  T93 = fun_call_error_function_43;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YgooSconditionsYcall_error_function,T91);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLcall_errorG),VARREF(YgooSconditionsYcall_error_function),YPfalse,VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_91 = YPPsym((P)"call-error-arguments");
  lit_92 = YPPlist(1,YPPsym((P)"_x"));
  T94 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_call_error_arguments_44 = YPfab_met(FUNCODEREF(fun_call_error_arguments_44),T94,LITREF(lit_91),LITREF(lit_92),sloc(211),YPfalse);
  T96 = VARREF_OR(YgooSconditionsYcall_error_arguments,YPfalse);
  T97 = fun_call_error_arguments_44;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YgooSconditionsYcall_error_arguments,T95);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLcall_errorG),VARREF(YgooSconditionsYcall_error_arguments),YPfalse,VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_93 = YPPsym((P)"<arity-error>");
  T99 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T98 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_93),T99);
  VARSET(YgooSconditionsYLarity_errorG,T98);
  lit_94 = YPPlist(1,YPPsym((P)"c"));
  lit_95 = YPsb((P)"Function %= called with wrong number arguments %=.");
  T100 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLarity_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_45 = YPfab_met(FUNCODEREF(fun_describe_condition_45),T100,LITREF(lit_3),LITREF(lit_94),sloc(215),YPfalse);
  T102 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T103 = fun_describe_condition_45;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooSconditionsYdescribe_condition,T101);
  lit_96 = YPPsym((P)"arity-error");
  lit_97 = YPPlist(2,YPPsym((P)"fun"),YPPsym((P)"args"));
  T106 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T105 = Yarity_error = YPfab_met(FUNCODEREF(Yarity_error),T106,LITREF(lit_96),LITREF(lit_97),sloc(219),YPfalse);
  T108 = Yarity_error;
  T107 = VARSET(Yarity_error,T108);
  T104 = T107;
  return T104;
}

P YgooSconditionsY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117;
DEFCREGS();
  lit_98 = YPPsym((P)"<narity-error>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLarity_errorG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_98),T1);
  VARSET(YgooSconditionsYLnarity_errorG,T0);
  lit_99 = YPPsym((P)"narity-error");
  lit_100 = YPPlist(2,YPPsym((P)"fun"),YPPsym((P)"args"));
  T2 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ynarity_error = YPfab_met(FUNCODEREF(Ynarity_error),T2,LITREF(lit_99),LITREF(lit_100),sloc(225),YPfalse);
  T3 = Ynarity_error;
  VARSET(Ynarity_error,T3);
  lit_101 = YPPlist(1,YPPsym((P)"c"));
  lit_102 = YPsb((P)"Nary function %= called with too few arguments %=.");
  T4 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLnarity_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_48 = YPfab_met(FUNCODEREF(fun_describe_condition_48),T4,LITREF(lit_3),LITREF(lit_101),sloc(229),YPfalse);
  T6 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T7 = fun_describe_condition_48;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooSconditionsYdescribe_condition,T5);
  lit_103 = YPPsym((P)"<type-error>");
  T9 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLerrorG),Ynil);
  T8 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_103),T9);
  VARSET(YgooSconditionsYLtype_errorG,T8);
  lit_104 = YPPsym((P)"type-error-value");
  lit_105 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_type_error_value_49 = YPfab_met(FUNCODEREF(fun_type_error_value_49),T10,LITREF(lit_104),LITREF(lit_105),sloc(234),YPfalse);
  T12 = VARREF_OR(YgooSconditionsYtype_error_value,YPfalse);
  T13 = fun_type_error_value_49;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSconditionsYtype_error_value,T11);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLtype_errorG),VARREF(YgooSconditionsYtype_error_value),YPfalse,VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_106 = YPPsym((P)"type-error-type");
  lit_107 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_type_error_type_50 = YPfab_met(FUNCODEREF(fun_type_error_type_50),T14,LITREF(lit_106),LITREF(lit_107),sloc(235),YPfalse);
  T16 = VARREF_OR(YgooSconditionsYtype_error_type,YPfalse);
  T17 = fun_type_error_type_50;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooSconditionsYtype_error_type,T15);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLtype_errorG),VARREF(YgooSconditionsYtype_error_type),YPfalse,VARREF(YLtypeG),VARREF(YPprop_unbound_error));
  lit_108 = YPPsym((P)"type-error");
  lit_109 = YPPlist(2,YPPsym((P)"arg"),YPPsym((P)"type"));
  T18 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ytype_error = YPfab_met(FUNCODEREF(Ytype_error),T18,LITREF(lit_108),LITREF(lit_109),sloc(237),YPfalse);
  T19 = Ytype_error;
  VARSET(Ytype_error,T19);
  lit_110 = YPPlist(1,YPPsym((P)"c"));
  lit_111 = YPsb((P)"Type check failure on %= expected %t.");
  T20 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_52 = YPfab_met(FUNCODEREF(fun_describe_condition_52),T20,LITREF(lit_3),LITREF(lit_110),sloc(240),YPfalse);
  T22 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T23 = fun_describe_condition_52;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSconditionsYdescribe_condition,T21);
  lit_112 = YPPsym((P)"<unknown-function-error>");
  T26 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T25 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLtype_errorG),T26);
  T24 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_112),T25);
  VARSET(YgooSconditionsYLunknown_function_errorG,T24);
  lit_113 = YPPsym((P)"unknown-function-error");
  lit_114 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"args"));
  T27 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunknown_function_error = YPfab_met(FUNCODEREF(Yunknown_function_error),T27,LITREF(lit_113),LITREF(lit_114),sloc(246),YPfalse);
  T28 = Yunknown_function_error;
  VARSET(Yunknown_function_error,T28);
  lit_115 = YPPlist(1,YPPsym((P)"c"));
  lit_116 = YPsb((P)"Unknown function %= called on %=.");
  T29 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLunknown_function_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_54 = YPfab_met(FUNCODEREF(fun_describe_condition_54),T29,LITREF(lit_3),LITREF(lit_115),sloc(251),YPfalse);
  T31 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T32 = fun_describe_condition_54;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooSconditionsYdescribe_condition,T30);
  lit_117 = YPPsym((P)"<argument-type-error>");
  T35 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T34 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLtype_errorG),T35);
  T33 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_117),T34);
  VARSET(YgooSconditionsYLargument_type_errorG,T33);
  lit_118 = YPPsym((P)"argument-type-error");
  lit_119 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"val"),YPPsym((P)"type"),YPPsym((P)"args"));
  T36 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  Yargument_type_error = YPfab_met(FUNCODEREF(Yargument_type_error),T36,LITREF(lit_118),LITREF(lit_119),sloc(257),YPfalse);
  T37 = Yargument_type_error;
  VARSET(Yargument_type_error,T37);
  lit_120 = YPPlist(1,YPPsym((P)"c"));
  lit_121 = YPsb((P)"During call of %= on %= ");
  T38 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLargument_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_56 = YPfab_met(FUNCODEREF(fun_describe_condition_56),T38,LITREF(lit_3),LITREF(lit_120),sloc(262),YPfalse);
  T40 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T41 = fun_describe_condition_56;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooSconditionsYdescribe_condition,T39);
  lit_122 = YPPsym((P)"<return-type-error>");
  T44 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T43 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLtype_errorG),T44);
  T42 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_122),T43);
  VARSET(YgooSconditionsYLreturn_type_errorG,T42);
  lit_123 = YPPsym((P)"return-type-error");
  lit_124 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"val"),YPPsym((P)"type"),YPPsym((P)"args"));
  T45 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  Yreturn_type_error = YPfab_met(FUNCODEREF(Yreturn_type_error),T45,LITREF(lit_123),LITREF(lit_124),sloc(269),YPfalse);
  T46 = Yreturn_type_error;
  VARSET(Yreturn_type_error,T46);
  lit_125 = YPPlist(1,YPPsym((P)"c"));
  lit_126 = YPsb((P)"During return of call of %= on %= ");
  T47 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLreturn_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_58 = YPfab_met(FUNCODEREF(fun_describe_condition_58),T47,LITREF(lit_3),LITREF(lit_125),sloc(274),YPfalse);
  T49 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T50 = fun_describe_condition_58;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YgooSconditionsYdescribe_condition,T48);
  lit_127 = YPPsym((P)"<ambiguous-method-error>");
  T52 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T51 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_127),T52);
  VARSET(YgooSconditionsYLambiguous_method_errorG,T51);
  lit_128 = YPPsym((P)"ambiguous-method-error");
  lit_129 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T53 = YPfab_sig(YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yambiguous_method_error = YPfab_met(FUNCODEREF(Yambiguous_method_error),T53,LITREF(lit_128),LITREF(lit_129),sloc(281),YPfalse);
  T54 = Yambiguous_method_error;
  VARSET(Yambiguous_method_error,T54);
  lit_130 = YPPlist(1,YPPsym((P)"c"));
  lit_131 = YPsb((P)"Ambiguous methods on %= when called with %=.");
  T55 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLambiguous_method_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_60 = YPfab_met(FUNCODEREF(fun_describe_condition_60),T55,LITREF(lit_3),LITREF(lit_130),sloc(285),YPfalse);
  T57 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T58 = fun_describe_condition_60;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YgooSconditionsYdescribe_condition,T56);
  lit_132 = YPPsym((P)"<no-applicable-methods-error>");
  T60 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T59 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_132),T60);
  VARSET(YgooSconditionsYLno_applicable_methods_errorG,T59);
  lit_133 = YPPsym((P)"no-applicable-methods-error");
  lit_134 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T61 = YPfab_sig(YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yno_applicable_methods_error = YPfab_met(FUNCODEREF(Yno_applicable_methods_error),T61,LITREF(lit_133),LITREF(lit_134),sloc(291),YPfalse);
  T62 = Yno_applicable_methods_error;
  VARSET(Yno_applicable_methods_error,T62);
  lit_135 = YPPlist(1,YPPsym((P)"c"));
  lit_136 = YPsb((P)"No applicable methods on %= when called with %=.");
  T63 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLno_applicable_methods_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_62 = YPfab_met(FUNCODEREF(fun_describe_condition_62),T63,LITREF(lit_3),LITREF(lit_135),sloc(296),YPfalse);
  T65 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T66 = fun_describe_condition_62;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YgooSconditionsYdescribe_condition,T64);
  lit_137 = YPPsym((P)"<no-next-methods-error>");
  T68 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T67 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_137),T68);
  VARSET(YgooSconditionsYLno_next_methods_errorG,T67);
  lit_138 = YPPsym((P)"no-next-methods-error");
  lit_139 = YPPlist(2,YPPsym((P)"met"),YPPsym((P)"args"));
  T69 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yno_next_methods_error = YPfab_met(FUNCODEREF(Yno_next_methods_error),T69,LITREF(lit_138),LITREF(lit_139),sloc(302),YPfalse);
  T70 = Yno_next_methods_error;
  VARSET(Yno_next_methods_error,T70);
  lit_140 = YPPlist(1,YPPsym((P)"c"));
  lit_141 = YPsb((P)"No next-methods on %= when called with %=.");
  T71 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLno_next_methods_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_64 = YPfab_met(FUNCODEREF(fun_describe_condition_64),T71,LITREF(lit_3),LITREF(lit_140),sloc(306),YPfalse);
  T73 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T74 = fun_describe_condition_64;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YgooSconditionsYdescribe_condition,T72);
  lit_142 = YPPsym((P)"<cpl-error>");
  T76 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T75 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_142),T76);
  VARSET(YgooSconditionsYLcpl_errorG,T75);
  lit_143 = YPPsym((P)"cpl-error");
  lit_144 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T77 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Ycpl_error = YPfab_met(FUNCODEREF(Ycpl_error),T77,LITREF(lit_143),LITREF(lit_144),sloc(312),YPfalse);
  T78 = Ycpl_error;
  VARSET(Ycpl_error,T78);
  lit_145 = YPPsym((P)"<compiler-error>");
  T80 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLerrorG),Ynil);
  T79 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_145),T80);
  VARSET(YgooSconditionsYLcompiler_errorG,T79);
  lit_146 = YPPsym((P)"<syntax-error>");
  T83 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T82 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLcompiler_errorG),T83);
  T81 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_146),T82);
  VARSET(YgooSconditionsYLsyntax_errorG,T81);
  lit_147 = YPPsym((P)"syntax-error");
  lit_148 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T84 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Ysyntax_error = YPfab_met(FUNCODEREF(Ysyntax_error),T84,LITREF(lit_147),LITREF(lit_148),sloc(319),YPfalse);
  T85 = Ysyntax_error;
  VARSET(Ysyntax_error,T85);
  lit_149 = YPPsym((P)"<macro-error>");
  T87 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLsyntax_errorG),Ynil);
  T86 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_149),T87);
  VARSET(YgooSconditionsYLmacro_errorG,T86);
  lit_150 = YPPsym((P)"macro-error-name");
  lit_151 = YPPlist(1,YPPsym((P)"_x"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_macro_error_name_67 = YPfab_met(FUNCODEREF(fun_macro_error_name_67),T88,LITREF(lit_150),LITREF(lit_151),sloc(324),YPfalse);
  T90 = VARREF_OR(YgooSconditionsYmacro_error_name,YPfalse);
  T91 = fun_macro_error_name_67;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooSconditionsYmacro_error_name,T89);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLmacro_errorG),VARREF(YgooSconditionsYmacro_error_name),YPfalse,VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_152 = YPPsym((P)"macro-error-arguments");
  lit_153 = YPPlist(1,YPPsym((P)"_x"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_macro_error_arguments_68 = YPfab_met(FUNCODEREF(fun_macro_error_arguments_68),T92,LITREF(lit_152),LITREF(lit_153),sloc(325),YPfalse);
  T94 = VARREF_OR(YgooSconditionsYmacro_error_arguments,YPfalse);
  T95 = fun_macro_error_arguments_68;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YgooSconditionsYmacro_error_arguments,T93);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLmacro_errorG),VARREF(YgooSconditionsYmacro_error_arguments),YPfalse,VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_154 = YPPsym((P)"macro-error");
  lit_155 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"args"));
  T96 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmacro_error = YPfab_met(FUNCODEREF(YgooSmacrosYmacro_error),T96,LITREF(lit_154),LITREF(lit_155),sloc(327),YPfalse);
  T97 = YgooSmacrosYmacro_error;
  VARSET(YgooSmacrosYmacro_error,T97);
  lit_156 = YPPlist(1,YPPsym((P)"c"));
  lit_157 = YPsb((P)"Macro expansion failure for %s when called with %=.");
  T98 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_70 = YPfab_met(FUNCODEREF(fun_describe_condition_70),T98,LITREF(lit_3),LITREF(lit_156),sloc(330),YPfalse);
  T100 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T101 = fun_describe_condition_70;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YgooSconditionsYdescribe_condition,T99);
  lit_158 = YPPsym((P)"<stack-overflow>");
  T103 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLerrorG),Ynil);
  T102 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_158),T103);
  VARSET(YgooSconditionsYLstack_overflowG,T102);
  lit_159 = YPPsym((P)"stack-overflow-error");
  T104 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ystack_overflow_error = YPfab_met(FUNCODEREF(Ystack_overflow_error),T104,LITREF(lit_159),LITREF(lit_77),sloc(336),YPfalse);
  T105 = Ystack_overflow_error;
  VARSET(Ystack_overflow_error,T105);
  lit_160 = YPPlist(1,YPPsym((P)"c"));
  lit_161 = YPsb((P)"Stack overflow.");
  T106 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLstack_overflowG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_72 = YPfab_met(FUNCODEREF(fun_describe_condition_72),T106,LITREF(lit_3),LITREF(lit_160),sloc(339),YPfalse);
  T108 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T109 = fun_describe_condition_72;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YgooSconditionsYdescribe_condition,T107);
  lit_162 = YPPsym((P)"<internal-error>");
  T111 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T110 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_162),T111);
  VARSET(YgooSconditionsYLinternal_errorG,T110);
  lit_163 = YPPsym((P)"internal-error");
  lit_164 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T112 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yinternal_error = YPfab_met(FUNCODEREF(Yinternal_error),T112,LITREF(lit_163),LITREF(lit_164),sloc(343),YPfalse);
  T113 = Yinternal_error;
  VARSET(Yinternal_error,T113);
  lit_165 = YPPsym((P)"<assert-error>");
  T117 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T116 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_165),T117);
  T115 = VARSET(YgooSconditionsYLassert_errorG,T116);
  T114 = T115;
  return T114;
}

P YgooSconditionsY___main_3___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118;
DEFCREGS();
  lit_166 = YPPsym((P)"assert-error");
  lit_167 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yassert_error = YPfab_met(FUNCODEREF(Yassert_error),T0,LITREF(lit_166),LITREF(lit_167),sloc(349),YPfalse);
  T1 = Yassert_error;
  VARSET(Yassert_error,T1);
  lit_168 = YPPlist(1,YPPsym((P)"c"));
  lit_169 = YPsb((P)"Assert failure ");
  T2 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLassert_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_75 = YPfab_met(FUNCODEREF(fun_describe_condition_75),T2,LITREF(lit_3),LITREF(lit_168),sloc(353),YPfalse);
  T4 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T5 = fun_describe_condition_75;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YgooSconditionsYdescribe_condition,T3);
  lit_170 = YPPsym((P)"<range-error>");
  T7 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLerrorG),Ynil);
  T6 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_170),T7);
  VARSET(YgooSconditionsYLrange_errorG,T6);
  lit_171 = YPPsym((P)"range-error-collection");
  lit_172 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_error_collection_76 = YPfab_met(FUNCODEREF(fun_range_error_collection_76),T8,LITREF(lit_171),LITREF(lit_172),sloc(357),YPfalse);
  T10 = VARREF_OR(YgooSconditionsYrange_error_collection,YPfalse);
  T11 = fun_range_error_collection_76;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooSconditionsYrange_error_collection,T9);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLrange_errorG),VARREF(YgooSconditionsYrange_error_collection),YPfalse,VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_173 = YPPsym((P)"range-error-key");
  lit_174 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_error_key_77 = YPfab_met(FUNCODEREF(fun_range_error_key_77),T12,LITREF(lit_173),LITREF(lit_174),sloc(358),YPfalse);
  T14 = VARREF_OR(YgooSconditionsYrange_error_key,YPfalse);
  T15 = fun_range_error_key_77;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSconditionsYrange_error_key,T13);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLrange_errorG),VARREF(YgooSconditionsYrange_error_key),YPfalse,VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_175 = YPPsym((P)"range-error");
  lit_176 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"k"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_error_78 = YPfab_met(FUNCODEREF(fun_range_error_78),T16,LITREF(lit_175),LITREF(lit_176),sloc(360),YPfalse);
  T18 = VARREF_OR(Yrange_error,YPfalse);
  T19 = fun_range_error_78;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(Yrange_error,T17);
  lit_177 = YPPlist(1,YPPsym((P)"c"));
  lit_178 = YPsb((P)"Nonexistent key %= in %=");
  T20 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_79 = YPfab_met(FUNCODEREF(fun_describe_condition_79),T20,LITREF(lit_3),LITREF(lit_177),sloc(363),YPfalse);
  T22 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T23 = fun_describe_condition_79;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSconditionsYdescribe_condition,T21);
  lit_179 = YPPsym((P)"<io-error>");
  T25 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLerrorG),Ynil);
  T24 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_179),T25);
  VARSET(YgooSconditionsYLio_errorG,T24);
  lit_180 = YPPsym((P)"<file-opening-error>");
  T27 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLio_errorG),Ynil);
  T26 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_180),T27);
  VARSET(YgooSconditionsYLfile_opening_errorG,T26);
  lit_181 = YPPsym((P)"file-opening-error-filename");
  lit_182 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLfile_opening_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_file_opening_error_filename_80 = YPfab_met(FUNCODEREF(fun_file_opening_error_filename_80),T28,LITREF(lit_181),LITREF(lit_182),sloc(370),YPfalse);
  T30 = VARREF_OR(YgooSconditionsYfile_opening_error_filename,YPfalse);
  T31 = fun_file_opening_error_filename_80;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooSconditionsYfile_opening_error_filename,T29);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLfile_opening_errorG),VARREF(YgooSconditionsYfile_opening_error_filename),YPfalse,VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_183 = YPPsym((P)"file-opening-error");
  lit_184 = YPPlist(1,YPPsym((P)"filename"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_file_opening_error_81 = YPfab_met(FUNCODEREF(fun_file_opening_error_81),T32,LITREF(lit_183),LITREF(lit_184),sloc(372),YPfalse);
  T34 = VARREF_OR(Yfile_opening_error,YPfalse);
  T35 = fun_file_opening_error_81;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(Yfile_opening_error,T33);
  lit_185 = YPPlist(1,YPPsym((P)"c"));
  lit_186 = YPsb((P)"Failed to open %s.");
  T36 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLfile_opening_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_82 = YPfab_met(FUNCODEREF(fun_describe_condition_82),T36,LITREF(lit_3),LITREF(lit_185),sloc(375),YPfalse);
  T38 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T39 = fun_describe_condition_82;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSconditionsYdescribe_condition,T37);
  lit_187 = YPPsym((P)"<unbound-error>");
  T41 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLerrorG),Ynil);
  T40 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_187),T41);
  VARSET(YgooSconditionsYLunbound_errorG,T40);
  lit_188 = YPPsym((P)"<unbound-variable-error>");
  T43 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLunbound_errorG),Ynil);
  T42 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_188),T43);
  VARSET(YgooSconditionsYLunbound_variable_errorG,T42);
  lit_189 = YPPsym((P)"unbound-variable-error-variable");
  lit_190 = YPPlist(1,YPPsym((P)"_x"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLunbound_variable_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unbound_variable_error_variable_83 = YPfab_met(FUNCODEREF(fun_unbound_variable_error_variable_83),T44,LITREF(lit_189),LITREF(lit_190),sloc(381),YPfalse);
  T46 = VARREF_OR(YgooSconditionsYunbound_variable_error_variable,YPfalse);
  T47 = fun_unbound_variable_error_variable_83;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooSconditionsYunbound_variable_error_variable,T45);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLunbound_variable_errorG),VARREF(YgooSconditionsYunbound_variable_error_variable),YPfalse,VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_191 = YPPlist(1,YPPsym((P)"c"));
  lit_192 = YPsb((P)"Unbound variable %s.");
  T48 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLunbound_variable_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_84 = YPfab_met(FUNCODEREF(fun_describe_condition_84),T48,LITREF(lit_3),LITREF(lit_191),sloc(383),YPfalse);
  T50 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T51 = fun_describe_condition_84;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooSconditionsYdescribe_condition,T49);
  lit_193 = YPPsym((P)"<property-error>");
  T53 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLerrorG),Ynil);
  T52 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_193),T53);
  VARSET(YgooSconditionsYLproperty_errorG,T52);
  lit_194 = YPPsym((P)"property-error-owner");
  lit_195 = YPPlist(1,YPPsym((P)"_x"));
  T54 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_property_error_owner_85 = YPfab_met(FUNCODEREF(fun_property_error_owner_85),T54,LITREF(lit_194),LITREF(lit_195),sloc(387),YPfalse);
  T56 = VARREF_OR(YgooSconditionsYproperty_error_owner,YPfalse);
  T57 = fun_property_error_owner_85;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooSconditionsYproperty_error_owner,T55);
  lit_196 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPfab_met(FUNCODEREF(fun_86),T58,YPfalse,LITREF(lit_196),sloc(387),YPfalse);
  T59 = fun_86;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLproperty_errorG),VARREF(YgooSconditionsYproperty_error_owner),YPfalse,VARREF(YLanyG),T59);
  lit_197 = YPPsym((P)"property-error-generic");
  lit_198 = YPPlist(1,YPPsym((P)"_x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_property_error_generic_87 = YPfab_met(FUNCODEREF(fun_property_error_generic_87),T60,LITREF(lit_197),LITREF(lit_198),sloc(388),YPfalse);
  T62 = VARREF_OR(YgooSconditionsYproperty_error_generic,YPfalse);
  T63 = fun_property_error_generic_87;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSconditionsYproperty_error_generic,T61);
  lit_199 = YPPlist(1,YPPsym((P)"_x"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPfab_met(FUNCODEREF(fun_88),T64,YPfalse,LITREF(lit_199),sloc(388),YPfalse);
  T65 = fun_88;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLproperty_errorG),VARREF(YgooSconditionsYproperty_error_generic),YPfalse,VARREF(YLanyG),T65);
  lit_200 = YPPsym((P)"<property-unbound-error>");
  T68 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLunbound_errorG),Ynil);
  T67 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLproperty_errorG),T68);
  T66 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_200),T67);
  VARSET(YgooSconditionsYLproperty_unbound_errorG,T66);
  lit_201 = YPPsym((P)"property-unbound-error");
  lit_202 = YPPlist(1,YPPsym((P)"owner"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yproperty_unbound_error = YPfab_met(FUNCODEREF(Yproperty_unbound_error),T69,LITREF(lit_201),LITREF(lit_202),sloc(392),YPfalse);
  T70 = Yproperty_unbound_error;
  VARSET(Yproperty_unbound_error,T70);
  lit_203 = YPPlist(1,YPPsym((P)"c"));
  lit_204 = YPsb((P)"Unbound property on %=.");
  T71 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLproperty_unbound_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_90 = YPfab_met(FUNCODEREF(fun_describe_condition_90),T71,LITREF(lit_3),LITREF(lit_203),sloc(395),YPfalse);
  T73 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T74 = fun_describe_condition_90;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YgooSconditionsYdescribe_condition,T72);
  lit_205 = YPPsym((P)"<property-not-found-error>");
  T76 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLproperty_errorG),Ynil);
  T75 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_205),T76);
  VARSET(YgooSconditionsYLproperty_not_found_errorG,T75);
  lit_206 = YPPsym((P)"property-not-found-error");
  lit_207 = YPPlist(2,YPPsym((P)"generic"),YPPsym((P)"owner"));
  T77 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yproperty_not_found_error = YPfab_met(FUNCODEREF(Yproperty_not_found_error),T77,LITREF(lit_206),LITREF(lit_207),sloc(400),YPfalse);
  T78 = Yproperty_not_found_error;
  VARSET(Yproperty_not_found_error,T78);
  lit_208 = YPPlist(1,YPPsym((P)"c"));
  lit_209 = YPsb((P)"Property %s not found in %s.");
  T79 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLproperty_not_found_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_92 = YPfab_met(FUNCODEREF(fun_describe_condition_92),T79,LITREF(lit_3),LITREF(lit_208),sloc(405),YPfalse);
  T81 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T82 = fun_describe_condition_92;
  T80 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T81,T82);
  VARSET(YgooSconditionsYdescribe_condition,T80);
  lit_210 = YPPsym((P)"<property-type-error>");
  T85 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLtype_errorG),Ynil);
  T84 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLproperty_errorG),T85);
  T83 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_210),T84);
  VARSET(YgooSconditionsYLproperty_type_errorG,T83);
  lit_211 = YPPsym((P)"property-type-error");
  lit_212 = YPPlist(3,YPPsym((P)"generic"),YPPsym((P)"value"),YPPsym((P)"type"));
  T86 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yproperty_type_error = YPfab_met(FUNCODEREF(Yproperty_type_error),T86,LITREF(lit_211),LITREF(lit_212),sloc(411),YPfalse);
  T87 = Yproperty_type_error;
  VARSET(Yproperty_type_error,T87);
  lit_213 = YPPlist(1,YPPsym((P)"c"));
  lit_214 = YPsb((P)"Property %s ");
  T88 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLproperty_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_94 = YPfab_met(FUNCODEREF(fun_describe_condition_94),T88,LITREF(lit_3),LITREF(lit_213),sloc(417),YPfalse);
  T90 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T91 = fun_describe_condition_94;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooSconditionsYdescribe_condition,T89);
  lit_215 = YPPsym((P)"<as-error>");
  T93 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLtype_errorG),Ynil);
  T92 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_215),T93);
  VARSET(YgooSconditionsYLas_errorG,T92);
  lit_216 = YPPsym((P)"as-error");
  lit_217 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"value"));
  T94 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yas_error = YPfab_met(FUNCODEREF(Yas_error),T94,LITREF(lit_216),LITREF(lit_217),sloc(422),YPfalse);
  T95 = Yas_error;
  VARSET(Yas_error,T95);
  lit_218 = YPPlist(1,YPPsym((P)"c"));
  lit_219 = YPsb((P)"No AS method for type %t and value %=.");
  T96 = YPfab_sig(YPPlist(1,VARREF(YgooSconditionsYLas_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_96 = YPfab_met(FUNCODEREF(fun_describe_condition_96),T96,LITREF(lit_3),LITREF(lit_218),sloc(425),YPfalse);
  T98 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T99 = fun_describe_condition_96;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooSconditionsYdescribe_condition,T97);
  lit_220 = YPPsym((P)"<arithmetic-error>");
  T101 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T100 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_220),T101);
  VARSET(YgooSconditionsYLarithmetic_errorG,T100);
  lit_221 = YPPsym((P)"arithmetic-error");
  lit_222 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T102 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yarithmetic_error = YPfab_met(FUNCODEREF(Yarithmetic_error),T102,LITREF(lit_221),LITREF(lit_222),sloc(431),YPfalse);
  T103 = Yarithmetic_error;
  VARSET(Yarithmetic_error,T103);
  lit_223 = YPPsym((P)"<keyboard-interrupt>");
  T105 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLconditionG),Ynil);
  T104 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_223),T105);
  VARSET(YgooSconditionsYLkeyboard_interruptG,T104);
  lit_224 = YPPsym((P)"keyboard-interrupt");
  T106 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPfab_met(FUNCODEREF(Ykeyboard_interrupt),T106,LITREF(lit_224),LITREF(lit_77),sloc(437),YPfalse);
  T107 = Ykeyboard_interrupt;
  VARSET(Ykeyboard_interrupt,T107);
  lit_225 = YPPsym((P)"do-handlers-of-type");
  lit_226 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"f"));
  T109 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T108 = YPfab_sig(YPPlist(2,T109,VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSconditionsYdo_handlers_of_type = YPfab_met(FUNCODEREF(YgooSconditionsYdo_handlers_of_type),T108,LITREF(lit_225),LITREF(lit_226),sloc(468),YPfalse);
  T110 = YgooSconditionsYdo_handlers_of_type;
  VARSET(YgooSconditionsYdo_handlers_of_type,T110);
  lit_227 = YPPsym((P)"list-handlers");
  lit_228 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"out"));
  lit_229 = YPPlist(1,YPPsym((P)"handler"));
  lit_230 = YPsb((P)"%d. %s.\n");
  T116 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T115 = fun_100 = YPfab_met(FUNCODEREF(fun_100),T116,YPfalse,LITREF(lit_229),sloc(487),YPfalse);
  T114 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T113 = YPfab_sig(YPPlist(2,T114,VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  T112 = YgooSconditionsYlist_handlers = YPfab_met(FUNCODEREF(YgooSconditionsYlist_handlers),T113,LITREF(lit_227),LITREF(lit_228),sloc(483),YPfalse);
  T118 = YgooSconditionsYlist_handlers;
  T117 = VARSET(YgooSconditionsYlist_handlers,T118);
  T111 = T117;
  return T111;
}

P YgooSconditionsY___main_4___() {
  P T0,T1,T2,T3,T4,T5,T6;
DEFCREGS();
  lit_231 = YPPsym((P)"invoke-handler-interactively");
  lit_232 = YPPlist(3,YPPsym((P)"handler"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_233 = YPsb((P)"Handler %= does not match condition %=");
  lit_234 = YPsb((P)"Handler %= is not installed");
  T1 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_102 = YPfab_met(FUNCODEREF(fun_102),T1,YPfalse,LITREF(lit_77),sloc(510),YPfalse);
  T0 = YPfab_sig(YPPlist(3,VARREF(YgooSconditionsYLhandlerG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSconditionsYinvoke_handler_interactively = YPfab_met(FUNCODEREF(YgooSconditionsYinvoke_handler_interactively),T0,LITREF(lit_231),LITREF(lit_232),sloc(497),YPfalse);
  T2 = YgooSconditionsYinvoke_handler_interactively;
  VARSET(YgooSconditionsYinvoke_handler_interactively,T2);
  lit_235 = YPPsym((P)"choose-handler");
  lit_236 = YPPlist(3,YPPsym((P)"type"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_237 = YPsb((P)"Please pick a handler: ");
  lit_238 = YPsb((P)"No such handler %d");
  T4 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T3 = YPfab_sig(YPPlist(3,T4,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSconditionsYchoose_handler = YPfab_met(FUNCODEREF(YgooSconditionsYchoose_handler),T3,LITREF(lit_235),LITREF(lit_236),sloc(514),YPfalse);
  T5 = YgooSconditionsYchoose_handler;
  VARSET(YgooSconditionsYchoose_handler,T5);
  VARSET(YTrestarts_okQT,YPtrue);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T6 = YPfalse;
  return T6;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSapp;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSopts;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsStup;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSport;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmag},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooSapp},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {&module_info_gooScolsSopts},
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsStup},
  {&module_info_gooScolsSvec},
  {&module_info_gooScolsStab},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"class-children", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"lst*", &module_info_gooScolsSlst, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"port-filename", &module_info_gooSioSport, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSlog, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"exp", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-3---", PVAR, NULL},
  {"<as-error>", CVAR, &YgooSconditionsYLas_errorG},
  {"handler-active?", CVAR, &YgooSconditionsYhandler_activeQ},
  {"macro-error-arguments", CVAR, &YgooSconditionsYmacro_error_arguments},
  {"sig", CVAR, &YgooSconditionsYsig},
  {"range-error-collection", CVAR, &YgooSconditionsYrange_error_collection},
  {"default-handler-description", CVAR, &YgooSconditionsYdefault_handler_description},
  {"<cpl-error>", CVAR, &YgooSconditionsYLcpl_errorG},
  {"<return-type-error>", CVAR, &YgooSconditionsYLreturn_type_errorG},
  {"<simple-condition>", CVAR, &YgooSconditionsYLsimple_conditionG},
  {"<property-not-found-error>", CVAR, &YgooSconditionsYLproperty_not_found_errorG},
  {"$default-handler-info", CVAR, &YgooSconditionsYDdefault_handler_info},
  {"call-error-function", CVAR, &YgooSconditionsYcall_error_function},
  {"*current-handlers*", DVAR, &YgooSconditionsYTcurrent_handlersT},
  {"do-handlers-of-type", CVAR, &YgooSconditionsYdo_handlers_of_type},
  {"list-handlers", CVAR, &YgooSconditionsYlist_handlers},
  {"<arithmetic-error>", CVAR, &YgooSconditionsYLarithmetic_errorG},
  {"<property-unbound-error>", CVAR, &YgooSconditionsYLproperty_unbound_errorG},
  {"unbound-variable-error-variable", CVAR, &YgooSconditionsYunbound_variable_error_variable},
  {"<unbound-error>", CVAR, &YgooSconditionsYLunbound_errorG},
  {"<io-error>", CVAR, &YgooSconditionsYLio_errorG},
  {"fab-handler", CVAR, &YgooSconditionsYfab_handler},
  {"choose-handler", CVAR, &YgooSconditionsYchoose_handler},
  {"describe-condition", CVAR, &YgooSconditionsYdescribe_condition},
  {"<internal-error>", CVAR, &YgooSconditionsYLinternal_errorG},
  {"<assert-error>", CVAR, &YgooSconditionsYLassert_errorG},
  {"condition-message-setter", CVAR, &YgooSconditionsYcondition_message_setter},
  {"<unbound-variable-error>", CVAR, &YgooSconditionsYLunbound_variable_errorG},
  {"<syntax-error>", CVAR, &YgooSconditionsYLsyntax_errorG},
  {"<macro-error>", CVAR, &YgooSconditionsYLmacro_errorG},
  {"<no-applicable-methods-error>", CVAR, &YgooSconditionsYLno_applicable_methods_errorG},
  {"<argument-type-error>", CVAR, &YgooSconditionsYLargument_type_errorG},
  {"signal-handler-list", CVAR, &YgooSconditionsYsignal_handler_list},
  {"<property-error>", CVAR, &YgooSconditionsYLproperty_errorG},
  {"<property-type-error>", CVAR, &YgooSconditionsYLproperty_type_errorG},
  {"file-opening-error-filename", CVAR, &YgooSconditionsYfile_opening_error_filename},
  {"type-error-type", CVAR, &YgooSconditionsYtype_error_type},
  {"<file-opening-error>", CVAR, &YgooSconditionsYLfile_opening_errorG},
  {"<type-error>", CVAR, &YgooSconditionsYLtype_errorG},
  {"<arity-error>", CVAR, &YgooSconditionsYLarity_errorG},
  {"handler-condition-type", CVAR, &YgooSconditionsYhandler_condition_type},
  {"<unknown-function-error>", CVAR, &YgooSconditionsYLunknown_function_errorG},
  {"<call-error>", CVAR, &YgooSconditionsYLcall_errorG},
  {"---main-2---", PVAR, NULL},
  {"condition-arguments-setter", CVAR, &YgooSconditionsYcondition_arguments_setter},
  {"handler-test", CVAR, &YgooSconditionsYhandler_test},
  {"describe-handler", CVAR, &YgooSconditionsYdescribe_handler},
  {"property-error-owner", CVAR, &YgooSconditionsYproperty_error_owner},
  {"<serious-condition>", CVAR, &YgooSconditionsYLserious_conditionG},
  {"incongruent-method-error-generic", CVAR, &YgooSconditionsYincongruent_method_error_generic},
  {"read", CVAR, &YgooSconditionsYread},
  {"<simple-error>", CVAR, &YgooSconditionsYLsimple_errorG},
  {"incongruent-method-error-method", CVAR, &YgooSconditionsYincongruent_method_error_method},
  {"<narity-error>", CVAR, &YgooSconditionsYLnarity_errorG},
  {"<condition>", CVAR, &YgooSconditionsYLconditionG},
  {"invoke-handler-interactively", CVAR, &YgooSconditionsYinvoke_handler_interactively},
  {"range-error-key", CVAR, &YgooSconditionsYrange_error_key},
  {"<compiler-error>", CVAR, &YgooSconditionsYLcompiler_errorG},
  {"condition-message", CVAR, &YgooSconditionsYcondition_message},
  {"---main-0---", PVAR, NULL},
  {"<stack-overflow>", CVAR, &YgooSconditionsYLstack_overflowG},
  {"---main-1---", PVAR, NULL},
  {"<restart>", CVAR, &YgooSconditionsYLrestartG},
  {"call-error-arguments", CVAR, &YgooSconditionsYcall_error_arguments},
  {"<keyboard-interrupt>", CVAR, &YgooSconditionsYLkeyboard_interruptG},
  {"default-handler", CVAR, &YgooSconditionsYdefault_handler},
  {"msg", CVAR, &YgooSconditionsYmsg},
  {"msg-to-str", CVAR, &YgooSconditionsYmsg_to_str},
  {"condition-arguments", CVAR, &YgooSconditionsYcondition_arguments},
  {"build-condition-interactively", CVAR, &YgooSconditionsYbuild_condition_interactively},
  {"---main-4---", PVAR, NULL},
  {"<no-next-methods-error>", CVAR, &YgooSconditionsYLno_next_methods_errorG},
  {"handler-matches?", CVAR, &YgooSconditionsYhandler_matchesQ},
  {"<error>", CVAR, &YgooSconditionsYLerrorG},
  {"<handler>", CVAR, &YgooSconditionsYLhandlerG},
  {"<handler-info>", CVAR, &YgooSconditionsYLhandler_infoG},
  {"property-error-generic", CVAR, &YgooSconditionsYproperty_error_generic},
  {"handler-function", CVAR, &YgooSconditionsYhandler_function},
  {"<incongruent-method-error>", CVAR, &YgooSconditionsYLincongruent_method_errorG},
  {"<range-error>", CVAR, &YgooSconditionsYLrange_errorG},
  {"type-error-value", CVAR, &YgooSconditionsYtype_error_value},
  {"macro-error-name", CVAR, &YgooSconditionsYmacro_error_name},
  {"build-condition-for-handler-interactively", CVAR, &YgooSconditionsYbuild_condition_for_handler_interactively},
  {"<ambiguous-method-error>", CVAR, &YgooSconditionsYLambiguous_method_errorG},
  {"handler-info", CVAR, &YgooSconditionsYhandler_info},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<as-error>", NULL},
  {"macro-error-arguments", NULL},
  {"<call-error>", NULL},
  {"sig", NULL},
  {"assert-error", NULL},
  {"handler-info-message", NULL},
  {"<arity-error>", NULL},
  {"<simple-error>", NULL},
  {"macro-error", NULL},
  {"range-error-collection", NULL},
  {"<condition>", NULL},
  {"default-handler-description", NULL},
  {"keyboard-interrupt", NULL},
  {"<return-type-error>", NULL},
  {"<simple-condition>", NULL},
  {"<property-not-found-error>", NULL},
  {"$default-handler-info", NULL},
  {"narity-error", NULL},
  {"<unbound-error>", NULL},
  {"<arithmetic-error>", NULL},
  {"<property-unbound-error>", NULL},
  {"*current-handlers*", NULL},
  {"unbound-variable-error-variable", NULL},
  {"<internal-error>", NULL},
  {"fab-handler", NULL},
  {"choose-handler", NULL},
  {"<io-error>", NULL},
  {"describe-condition", NULL},
  {"<unbound-variable-error>", NULL},
  {"<no-applicable-methods-error>", NULL},
  {"<argument-type-error>", NULL},
  {"<property-error>", NULL},
  {"<property-type-error>", NULL},
  {"file-opening-error-filename", NULL},
  {"type-error-type", NULL},
  {"<file-opening-error>", NULL},
  {"call-error-function", NULL},
  {"<unknown-function-error>", NULL},
  {"error", NULL},
  {"return-type-error", NULL},
  {"%with-monitor", NULL},
  {"describe-handler", NULL},
  {"property-error-owner", NULL},
  {"<serious-condition>", NULL},
  {"read", NULL},
  {"<narity-error>", NULL},
  {"invoke-handler-interactively", NULL},
  {"range-error-key", NULL},
  {"<compiler-error>", NULL},
  {"<simple-handler-info>", NULL},
  {"condition-message", NULL},
  {"no-next-methods-error", NULL},
  {"<stack-overflow>", NULL},
  {"handler-info-arguments", NULL},
  {"argument-type-error", NULL},
  {"<restart>", NULL},
  {"call-error-arguments", NULL},
  {"<keyboard-interrupt>", NULL},
  {"default-handler", NULL},
  {"<syntax-error>", NULL},
  {"msg-to-str", NULL},
  {"<macro-error>", NULL},
  {"stack-overflow-error", NULL},
  {"<assert-error>", NULL},
  {"condition-arguments", NULL},
  {"arity-error", NULL},
  {"build-condition-interactively", NULL},
  {"msg", NULL},
  {"<no-next-methods-error>", NULL},
  {"handler-matches?", NULL},
  {"list-handlers", NULL},
  {"<replace-generic-restart>", NULL},
  {"<error>", NULL},
  {"arithmetic-error", NULL},
  {"<type-error>", NULL},
  {"<handler>", NULL},
  {"internal-error", NULL},
  {"<handler-info>", NULL},
  {"property-error-generic", NULL},
  {"handler-function", NULL},
  {"<range-error>", NULL},
  {"type-error-value", NULL},
  {"range-error", NULL},
  {"macro-error-name", NULL},
  {"build-condition-for-handler-interactively", NULL},
  {"<ambiguous-method-error>", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSconditions;
MODULE_INFO module_info_gooSconditions = {
  "goo/conditions",
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
extern void load_module_gooSany (void);
extern void load_module_gooSlog (void);
extern void load_module_gooSchr (void);
extern void load_module_gooSmag (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSapp (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);
extern void load_module_gooScolsSopts (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsStup (void);
extern void load_module_gooScolsSvec (void);
extern void load_module_gooScolsStab (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_gooSconditions (void);

void load_module_gooSconditions (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSany();
  load_module_gooSlog();
  load_module_gooSchr();
  load_module_gooSmag();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooSapp();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();
  load_module_gooScolsSopts();
  load_module_gooScolsSlst();
  load_module_gooScolsStup();
  load_module_gooScolsSvec();
  load_module_gooScolsStab();
  load_module_gooSioSport();

  (P)YgooSconditionsY___main_0___();
  (P)YgooSconditionsY___main_1___();
  (P)YgooSconditionsY___main_2___();
  (P)YgooSconditionsY___main_3___();
  (P)YgooSconditionsY___main_4___();

}

/* END OF GENERATED CODE. */
