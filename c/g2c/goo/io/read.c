/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/read");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/read */

EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOlst,"goo/boot","@lst");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
DEF(YgooSioSreadYmake_reader_token,"goo/io/read","make-reader-token");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
DEF(YgooSioSreadYLreader_tokenG,"goo/io/read","<reader-token>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooSioSreadYread_long_string_literal,"goo/io/read","read-long-string-literal");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSioSreadYDvert_sym,"goo/io/read","$vert-sym");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YPfalse,"goo/boot","%false");
DEF(YgooSioSreadYread_c_statement_literal,"goo/io/read","read-c-statement-literal");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YgooSioSreadYsub_read_constituent,"goo/io/read","sub-read-constituent");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yas_error,"goo/boot","as-error");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yhead,"goo/boot","head");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YgooSioSreadYsub_read_list_eof_error,"goo/io/read","sub-read-list-eof-error");
DEF(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
DEF(YgooSioSreadYbs_sym,"goo/io/read","bs-sym");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
DEF(YgooSioSreadYDvert_proxy,"goo/io/read","$vert-proxy");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YgooSioSreadYsub_read_seq,"goo/io/read","sub-read-seq");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YgooSioSreadYTsharp_macrosT,"goo/io/read","*sharp-macros*");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YgooSioSreadYTread_terminatingQ_vectorT,"goo/io/read","*read-terminating?-vector*");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
DEF(YgooSioSreadYsub_read,"goo/io/read","sub-read");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
DEF(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ytup,"goo/boot","tup");
DEF(YgooSioSreadYDclose_bracket,"goo/io/read","$close-bracket");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YOdo,"goo/boot","@do");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(YgooSioSreadYDclose_paren,"goo/io/read","$close-paren");
DEF(YgooSioSreadYgobble_nested_comment,"goo/io/read","gobble-nested-comment");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
DEF(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YgooSioSreadYtoken_message,"goo/io/read","token-message");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YOlit,"goo/boot","@lit");
DEF(YgooSioSreadYreading_error,"goo/io/read","reading-error");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YtT,"goo/boot","t*");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yopts_count,"goo/boot","opts-count");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
DEF(YgooSioSreadYgobble_line,"goo/io/read","gobble-line");
DEF(YgooSioSreadYsub_read_token,"goo/io/read","sub-read-token");
DEF(YgooSioSreadYwarn,"goo/io/read","warn");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(YgooSioSreadYread_c_inline_literal,"goo/io/read","read-c-inline-literal");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(YgooSioSreadYdefine_sharp_macro,"goo/io/read","define-sharp-macro");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
DEF(YgooSioSreadYsub_read_curlies,"goo/io/read","sub-read-curlies");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
DEF(YgooSioSreadYsub_read_backslash,"goo/io/read","sub-read-backslash");
DEF(YgooSioSreadYsub_read_list,"goo/io/read","sub-read-list");
DEF(YgooSioSreadYTread_dispatch_vectorT,"goo/io/read","*read-dispatch-vector*");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
DEF(YgooSioSreadYflush_whitespace,"goo/io/read","flush-whitespace");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YOmap,"goo/boot","@map");
DEF(YgooSioSreadYparse_token,"goo/io/read","parse-token");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
DEF(YgooSioSreadYsub_read_carefully,"goo/io/read","sub-read-carefully");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YgooSioSreadYreverse_list_Gstring,"goo/io/read","reverse-list->string");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
DEF(YgooSioSreadYDclose_curly,"goo/io/read","$close-curly");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YgooSioSreadYsub_read_vertical,"goo/io/read","sub-read-vertical");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
DEF(YgooSioSreadYreader_tokenQ,"goo/io/read","reader-token?");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(YgooSioSreadYread_string_literal,"goo/io/read","read-string-literal");
DEF(YgooSioSreadYDstrange_symbol_names,"goo/io/read","$strange-symbol-names");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooScolsSlstYlstT,"goo/cols/lst","lst*");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
DEF(YgooSioSreadYset_standard_syntaxX,"goo/io/read","set-standard-syntax!");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YgooSioSreadYread_c_expression_literal,"goo/io/read","read-c-expression-literal");
DEF(YgooSioSreadYpreferred_case,"goo/io/read","preferred-case");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ylst,"goo/boot","lst");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
DEF(YgooSioSreadYparse_c_inline,"goo/io/read","parse-c-inline");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YPtrue,"goo/boot","%true");
EXT(Ybox_value,"goo/boot","box-value");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YgooSioSreadYsub_read_brackets,"goo/io/read","sub-read-brackets");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YOfold,"goo/boot","@fold");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSlogYE,"goo/log","=");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
DEF(YgooSioSreadYDstring_escape_chars,"goo/io/read","$string-escape-chars");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_5);
DEFLIT(lit_133);
DEFLIT(lit_70);
DEFLIT(lit_25);
DEFLIT(lit_89);
DEFLIT(lit_7);
DEFLIT(lit_140);
DEFLIT(lit_9);
DEFLIT(lit_45);
DEFLIT(lit_72);
DEFLIT(lit_137);
DEFLIT(lit_117);
DEFLIT(lit_106);
DEFLIT(lit_130);
DEFLIT(lit_78);
DEFLIT(lit_88);
DEFLIT(lit_12);
DEFLIT(lit_15);
DEFLIT(lit_36);
DEFLIT(lit_43);
DEFLIT(lit_115);
DEFLIT(lit_71);
DEFLIT(lit_116);
DEFLIT(lit_141);
DEFLIT(lit_134);
DEFLIT(lit_105);
DEFLIT(lit_129);
DEFLIT(lit_104);
DEFLIT(lit_122);
DEFLIT(lit_59);
DEFLIT(lit_34);
DEFLIT(lit_32);
DEFLIT(lit_113);
DEFLIT(lit_123);
DEFLIT(lit_101);
DEFLIT(lit_64);
DEFLIT(lit_17);
DEFLIT(lit_62);
DEFLIT(lit_100);
DEFLIT(lit_37);
DEFLIT(lit_102);
DEFLIT(lit_142);
DEFLIT(lit_0);
DEFLIT(lit_52);
DEFLIT(lit_53);
DEFLIT(lit_82);
DEFLIT(lit_119);
DEFLIT(lit_57);
DEFLIT(lit_22);
DEFLIT(lit_111);
DEFLIT(lit_68);
DEFLIT(lit_85);
DEFLIT(lit_69);
DEFLIT(lit_114);
DEFLIT(lit_55);
DEFLIT(lit_10);
DEFLIT(lit_54);
DEFLIT(lit_11);
DEFLIT(lit_127);
DEFLIT(lit_63);
DEFLIT(lit_35);
DEFLIT(lit_61);
DEFLIT(lit_6);
DEFLIT(lit_49);
DEFLIT(lit_79);
DEFLIT(lit_93);
DEFLIT(lit_33);
DEFLIT(lit_8);
DEFLIT(lit_66);
DEFLIT(lit_120);
DEFLIT(lit_40);
DEFLIT(lit_28);
DEFLIT(lit_31);
DEFLIT(lit_58);
DEFLIT(lit_98);
DEFLIT(lit_81);
DEFLIT(lit_125);
DEFLIT(lit_27);
DEFLIT(lit_60);
DEFLIT(lit_16);
DEFLIT(lit_84);
DEFLIT(lit_67);
DEFLIT(lit_139);
DEFLIT(lit_90);
DEFLIT(lit_26);
DEFLIT(lit_91);
DEFLIT(lit_109);
DEFLIT(lit_92);
DEFLIT(lit_107);
DEFLIT(lit_118);
DEFLIT(lit_38);
DEFLIT(lit_50);
DEFLIT(lit_124);
DEFLIT(lit_48);
DEFLIT(lit_131);
DEFLIT(lit_132);
DEFLIT(lit_24);
DEFLIT(lit_1);
DEFLIT(lit_112);
DEFLIT(lit_3);
DEFLIT(lit_42);
DEFLIT(lit_2);
DEFLIT(lit_138);
DEFLIT(lit_99);
DEFLIT(lit_46);
DEFLIT(lit_75);
DEFLIT(lit_108);
DEFLIT(lit_76);
DEFLIT(lit_41);
DEFLIT(lit_94);
DEFLIT(lit_30);
DEFLIT(lit_18);
DEFLIT(lit_87);
DEFLIT(lit_86);
DEFLIT(lit_97);
DEFLIT(lit_14);
DEFLIT(lit_29);
DEFLIT(lit_21);
DEFLIT(lit_77);
DEFLIT(lit_143);
DEFLIT(lit_20);
DEFLIT(lit_103);
DEFLIT(lit_136);
DEFLIT(lit_74);
DEFLIT(lit_44);
DEFLIT(lit_4);
DEFLIT(lit_39);
DEFLIT(lit_83);
DEFLIT(lit_13);
DEFLIT(lit_128);
DEFLIT(lit_19);
DEFLIT(lit_23);
DEFLIT(lit_73);
DEFLIT(lit_96);
DEFLIT(lit_51);
DEFLIT(lit_47);
DEFLIT(lit_135);
DEFLIT(lit_121);
DEFLIT(lit_95);
DEFLIT(lit_56);
DEFLIT(lit_126);
DEFLIT(lit_110);
DEFLIT(lit_65);
DEFLIT(lit_80);

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
FUNFOR(YgooSioSreadYread_long_string_literal);
LOCFOR(fun_parse_c_inline_44);
FUNFOR(YgooSioSreadYread_c_inline_literal);
FUNFOR(YgooSioSreadYread_c_statement_literal);
FUNFOR(YgooSioSreadYread_c_expression_literal);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_sub_read_token_53);
LOCFOR(fun_54);
LOCFOR(fun_parse_token_55);
LOCFOR(fun_reading_error_56);
LOCFOR(fun_warn_57);
LOCFOR(fun_reverse_list_Gstring_58);
extern P YgooSioSreadY___main_0___ ();
extern P YgooSioSreadY___main_1___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_read_0) {
  P port_;
  P formF3692;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  LOOP_154: {
    T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
    formF3692 = T7;
    T2 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF3692);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T0 = formF3692;
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF3692,VARREF(YgooSioSreadYDclose_paren));
      if (T4 != YPfalse) {
        T5 = CALL1(1,VARREF(YgooSioSreadYwarn),LITREF(lit_2));
        T3 = T5;
      } else {
        goto LOOP_154;
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
  P portF3693;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  portF3693 = YPfalse;
  portF3693 = BOXFAB(portF3693);
  T2 = FUNFAB(fun_1,2,portF3693,x_);
  T3 = FUNFAB(fun_2,1,portF3693);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_sub_read_carefully_4) {
  P port_;
  P formF3694;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF3694 = T7;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF3694);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_8));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF3694);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Ytail),formF3694);
      T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,T6);
      T3 = T5;
    } else {
      T3 = formF3694;
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
  P cF3695;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(port_, 0);
  T5 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF3695 = T5;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3695);
  if (T1 != YPfalse) {
    T0 = cF3695;
  } else {
    T4 = CALL1(1,VARREF(YgooSchrYchar_Gascii),cF3695);
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T4);
    T2 = CALL2(1,T3,cF3695,port_);
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
  P cF3696;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  T4 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF3696 = T4;
  T2 = CALL1(1,VARREF(YgooSchrYchar_Gascii),cF3696);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),VARREF(YgooScolsSstrYascii_whitespaces),T2);
  if (T1 != YPfalse) {
    CALL1(1,VARREF(YgooSioSportYget),port_);
    T3 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
    T0 = T3;
  } else {
    T0 = cF3696;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_delimited_list) {
  P endchar_,port_;
  P UF3699;
  P cF3698;
  P retlistF3697;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(endchar_, 0);
  ARG(port_, 1);
  retlistF3697 = VARREF(Ynil);
  T11 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
  cF3698 = T11;
  LOOP_155: {
    P a155_0;
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),cF3698,endchar_);
    if (T2 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T4 = retlistF3697;
      T3 = CALL1(1,VARREF(YgooScolsSseqYrev),T4);
      T1 = T3;
    } else {
      T8 = retlistF3697;
      UF3699 = T8;
      T7 = CALL1(1,VARREF(YgooSconditionsYread),port_);
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,UF3699);
      T5 = retlistF3697 = T6;
      T10 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
      a155_0 = T10;
      cF3698 = a155_0;
      goto LOOP_155;
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
  P nextF3701;
  P prevF3700;
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
  prevF3700 = T18;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),form_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),FREEREF(0));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDclose_paren));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,prevF3700);
      T3 = T5;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDvert_sym));
      if (T7 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),FREEREF(0));
        nextF3701 = T12;
        T10 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,nextF3701);
        T9 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF3700,T10,line_);
        T11 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,FREEREF(0));
        T8 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T9,T11,line_);
        T6 = T8;
      } else {
        if (YPtrue != YPfalse) {
          T16 = CALL1(1,VARREF(YgooSioSportYport_line),FREEREF(0));
          T17 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
          T15 = CALL4(1,FREEREF(1),c_,form_,T16,T17);
          T14 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF3700,T15,line_);
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
  P read_nextF3704;
  P formF3703;
  P lineF3702;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(p_, 1);
  T10 = CALL1(1,VARREF(YgooSioSportYport_line),p_);
  lineF3702 = T10;
  T9 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
  formF3703 = T9;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF3703);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),p_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF3703,VARREF(YgooSioSreadYDclose_paren));
    if (T4 != YPfalse) {
      T3 = Ynil;
    } else {
      if (YPtrue != YPfalse) {
        T8 = FUNSHELL(1,fun_read_next_22,2);
        read_nextF3704 = T8;
        FUNINIT(read_nextF3704, 2,p_,read_nextF3704);
        T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
        T6 = CALL4(1,read_nextF3704,c_,formF3703,lineF3702,T7);
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
  P formF3705;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(e_, 1);
  ARG(port_, 2);
  T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF3705 = T7;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),formF3705);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_57));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF3705,e_);
    if (T4 != YPfalse) {
      T3 = Ynil;
    } else {
      T6 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,e_,port_);
      T5 = CALL2(1,VARREF(YgooSmacrosYpair),formF3705,T6);
      T3 = T5;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_brackets_25) {
  P c_,port_;
  P x_1442F3708;
  P x_1441F3707;
  P formF3706;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T29 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_bracket),port_);
  formF3706 = T29;
  T28 = CALL1(1,VARREF(YgooStypesYlen),formF3706);
  x_1441F3707 = T28;
  x_1442F3708 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_1442F3708,x_1441F3707,YPint((P)2));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
    T5 = CALL1(1,VARREF(YgooSmacrosY1st),formF3706);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T7 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3706);
    T6 = CALL1(1,VARREF(Ylst),T7);
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T6,LITREF(lit_61));
    T0 = T2;
  } else {
    T9 = CALL2(1,x_1442F3708,x_1441F3707,YPint((P)3));
    if (T9 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF3706);
      T11 = CALL2(1,VARREF(YgooSmacrosYEE),T12,LITREF(lit_62));
      if (T11 != YPfalse) {
        T14 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
        T16 = CALL1(1,VARREF(YgooSmacrosY1st),formF3706);
        T15 = CALL1(1,VARREF(Ylst),T16);
        T18 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3706);
        T17 = CALL1(1,VARREF(Ylst),T18);
        T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_61));
        T10 = T13;
      } else {
        T20 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
        T22 = CALL1(1,VARREF(YgooSmacrosY1st),formF3706);
        T21 = CALL1(1,VARREF(Ylst),T22);
        T24 = CALL1(1,VARREF(YgooSmacrosY2nd),formF3706);
        T23 = CALL1(1,VARREF(Ylst),T24);
        T26 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF3706);
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
  P slash_indexF3710;
  P formsF3709;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T10 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_curly),port_);
  formsF3709 = T10;
  T9 = CALL2(1,VARREF(YgooScolsSseqYpos),formsF3709,VARREF(YgooSioSreadYbs_sym));
  slash_indexF3710 = T9;
  if (slash_indexF3710 != YPfalse) {
    T2 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
    T4 = CALL3(1,VARREF(YgooScolsSseqYsub),formsF3709,YPint((P)0),slash_indexF3710);
    T3 = CALL1(1,VARREF(Ylst),T4);
    T6 = CALL2(1,VARREF(YgooSmathYA),slash_indexF3710,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooScolsSseqYsubT),formsF3709,T6);
    T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T5,LITREF(lit_61));
    T0 = T1;
  } else {
    T8 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
    T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,formsF3709,LITREF(lit_61));
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
  P keywordF3712;
  P nextF3711;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T7 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  nextF3711 = T7;
  T3 = CALL1(1,VARREF(YgooSchrYeof_objectQ),nextF3711);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_79));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSlogYE),nextF3711,YPchr((P)64));
    if (T6 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T5 = LITREF(lit_80);
    } else {
      T5 = LITREF(lit_81);
    }
    T2 = T5;
  }
  keywordF3712 = T2;
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),keywordF3712,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_string_literal) {
  P c_,port_;
  P ecF3718;
  P tmpF3717;
  P cF3716;
  P cF3715;
  P iF3714;
  P lF3713;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  lF3713 = Ynil;
  iF3714 = YPint((P)0);
  LOOP_156: {
    P a156_0,a156_1;
    T29 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3715 = T29;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3715);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_84));
      T0 = T2;
    } else {
      T4 = CALL2(1,VARREF(YgooSlogYE),cF3715,YPchr((P)92));
      if (T4 != YPfalse) {
        T22 = CALL1(1,VARREF(YgooSioSportYget),port_);
        cF3716 = T22;
        T6 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3716);
        if (T6 != YPfalse) {
          T7 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_85));
          T5 = T7;
        } else {
          T11 = CALL2(1,VARREF(YgooSlogYE),cF3716,YPchr((P)92));
          tmpF3717 = T11;
          if (tmpF3717 != YPfalse) {
            T9 = tmpF3717;
          } else {
            T10 = CALL2(1,VARREF(YgooSlogYE),cF3716,YPchr((P)34));
            T9 = T10;
          }
          if (T9 != YPfalse) {
            T13 = CALL2(1,VARREF(YgooSmacrosYpair),cF3716,lF3713);
            T14 = CALL2(1,VARREF(YgooSmathYA),iF3714,YPint((P)1));
            a156_0 = T13;
            a156_1 = T14;
            lF3713 = a156_0;
            iF3714 = a156_1;
            goto LOOP_156;
            T8 = T12;
          } else {
            T21 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF3716);
            T20 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYDstring_escape_chars),T21);
            ecF3718 = T20;
            if (ecF3718 != YPfalse) {
              T17 = CALL2(1,VARREF(YgooSmacrosYpair),ecF3718,lF3713);
              T18 = CALL2(1,VARREF(YgooSmathYA),iF3714,YPint((P)1));
              a156_0 = T17;
              a156_1 = T18;
              lF3713 = a156_0;
              iF3714 = a156_1;
              goto LOOP_156;
              T15 = T16;
            } else {
              T19 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_86),cF3716);
              T15 = T19;
            }
            T8 = T15;
          }
          T5 = T8;
        }
        T3 = T5;
      } else {
        T24 = CALL2(1,VARREF(YgooSlogYE),cF3715,YPchr((P)34));
        if (T24 != YPfalse) {
          T25 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),lF3713,iF3714);
          T23 = T25;
        } else {
          T27 = CALL2(1,VARREF(YgooSmacrosYpair),cF3715,lF3713);
          T28 = CALL2(1,VARREF(YgooSmathYA),iF3714,YPint((P)1));
          a156_0 = T27;
          a156_1 = T28;
          lF3713 = a156_0;
          iF3714 = a156_1;
          goto LOOP_156;
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
  P cF3719;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(port_, 0);
  LOOP_157: {
    T5 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3719 = T5;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3719);
    if (T1 != YPfalse) {
      T0 = cF3719;
    } else {
      T3 = CALL2(1,VARREF(YgooSlogYE),cF3719,YPchr((P)10));
      if (T3 != YPfalse) {
        T2 = YPfalse;
      } else {
        goto LOOP_157;
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
  P probeF3722;
  P cF3721;
  P cF3720;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T10 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF3720 = T10;
  T7 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3720);
  if (T7 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_93));
    T6 = T8;
  } else {
    T9 = CALL1(1,VARREF(YgooSchrYto_lower),cF3720);
    T6 = T9;
  }
  cF3721 = T6;
  T5 = CALL2(1,VARREF(YgooScolsSlstYassq),cF3721,VARREF(YgooSioSreadYTsharp_macrosT));
  probeF3722 = T5;
  if (probeF3722 != YPfalse) {
    T3 = CALL1(1,VARREF(Ytail),probeF3722);
    T2 = CALL1(1,VARREF(Yhead),T3);
    T1 = CALL2(1,T2,cF3721,port_);
    T0 = T1;
  } else {
    T4 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_94),cF3721);
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
  P x_1444F3726;
  P x_1443F3725;
  P cF3724;
  P found_slashQF3723;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  found_slashQF3723 = YPfalse;
  LOOP_158: {
    P a158_0;
    T10 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3724 = T10;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3724);
    if (T1 != YPfalse) {
      T0 = cF3724;
    } else {
      x_1443F3725 = cF3724;
      x_1444F3726 = VARREF(YgooSmacrosYEE);
      T3 = CALL2(1,x_1444F3726,x_1443F3725,YPchr((P)47));
      if (T3 != YPfalse) {
        a158_0 = YPtrue;
        found_slashQF3723 = a158_0;
        goto LOOP_158;
        T2 = T4;
      } else {
        T6 = CALL2(1,x_1444F3726,x_1443F3725,YPchr((P)35));
        if (T6 != YPfalse) {
          if (found_slashQF3723 != YPfalse) {
            T7 = YPfalse;
          } else {
            a158_0 = YPfalse;
            found_slashQF3723 = a158_0;
            goto LOOP_158;
            T7 = T8;
          }
          T5 = T7;
        } else {
          a158_0 = YPfalse;
          found_slashQF3723 = a158_0;
          goto LOOP_158;
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

FUNCODEDEF(YgooSioSreadYread_long_string_literal) {
  P c_,port_;
  P x_1446F3732;
  P x_1445F3731;
  P cF3730;
  P qQF3729;
  P iF3728;
  P lF3727;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  lF3727 = Ynil;
  iF3728 = YPint((P)0);
  qQF3729 = YPfalse;
  LOOP_159: {
    P a159_0,a159_1,a159_2;
    T20 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3730 = T20;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3730);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_103));
      T0 = T2;
    } else {
      x_1445F3731 = cF3730;
      x_1446F3732 = VARREF(YgooSmacrosYEE);
      T4 = CALL2(1,x_1446F3732,x_1445F3731,YPchr((P)34));
      if (T4 != YPfalse) {
        T6 = CALL2(1,VARREF(YgooSmacrosYpair),cF3730,lF3727);
        T7 = CALL2(1,VARREF(YgooSmathYA),iF3728,YPint((P)1));
        a159_0 = T6;
        a159_1 = T7;
        a159_2 = YPtrue;
        lF3727 = a159_0;
        iF3728 = a159_1;
        qQF3729 = a159_2;
        goto LOOP_159;
        T3 = T5;
      } else {
        T9 = CALL2(1,x_1446F3732,x_1445F3731,YPchr((P)35));
        if (T9 != YPfalse) {
          if (qQF3729 != YPfalse) {
            T12 = CALL1(1,VARREF(Ytail),lF3727);
            T13 = CALL2(1,VARREF(YgooSmathY_),iF3728,YPint((P)1));
            T11 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),T12,T13);
            T10 = T11;
          } else {
            T15 = CALL2(1,VARREF(YgooSmacrosYpair),cF3730,lF3727);
            T16 = CALL2(1,VARREF(YgooSmathYA),iF3728,YPint((P)1));
            a159_0 = T15;
            a159_1 = T16;
            a159_2 = YPfalse;
            lF3727 = a159_0;
            iF3728 = a159_1;
            qQF3729 = a159_2;
            goto LOOP_159;
            T10 = T14;
          }
          T8 = T10;
        } else {
          T18 = CALL2(1,VARREF(YgooSmacrosYpair),cF3730,lF3727);
          T19 = CALL2(1,VARREF(YgooSmathYA),iF3728,YPint((P)1));
          a159_0 = T18;
          a159_1 = T19;
          a159_2 = YPfalse;
          lF3727 = a159_0;
          iF3728 = a159_1;
          qQF3729 = a159_2;
          goto LOOP_159;
          T8 = T17;
        }
        T3 = T8;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_parse_c_inline_44) {
  P s_;
  P valF3741;
  P tmpF3740;
  P x_1448F3739;
  P x_1447F3738;
  P cF3737;
  P resF3736;
  P strF3735;
  P bufF3734;
  P portF3733;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(s_, 0);
  T26 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_in_portG),s_);
  portF3733 = T26;
  T25 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  bufF3734 = T25;
  strF3735 = Ynil;
  resF3736 = Ynil;
  LOOP_160: {
    P a160_0,a160_1;
    T24 = CALL1(1,VARREF(YgooSioSportYget),portF3733);
    cF3737 = T24;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3737);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),strF3735);
      T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T5);
      T3 = CALL2(1,VARREF(YgooScolsScolYadd),resF3736,T4);
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),T3);
      T0 = T2;
    } else {
      x_1447F3738 = cF3737;
      x_1448F3739 = VARREF(YgooSmacrosYEE);
      T9 = CALL2(0,x_1448F3739,x_1447F3738,YPchr((P)36));
      tmpF3740 = T9;
      if (tmpF3740 != YPfalse) {
        T7 = tmpF3740;
      } else {
        T8 = CALL2(0,x_1448F3739,x_1447F3738,YPchr((P)64));
        T7 = T8;
      }
      if (T7 != YPfalse) {
        T16 = CALL2(1,VARREF(YgooSlogYE),cF3737,YPchr((P)36));
        if (T16 != YPfalse) {
          T17 = CALL1(1,VARREF(YgooSconditionsYread),portF3733);
          T15 = T17;
        } else {
          T19 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
          T21 = CALL1(1,VARREF(YgooSconditionsYread),portF3733);
          T20 = CALL1(1,VARREF(Ylst),T21);
          T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_61));
          T15 = T18;
        }
        valF3741 = T15;
        T14 = CALL1(1,VARREF(YgooSmacrosYrevX),strF3735);
        T13 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T14);
        T12 = CALL2(1,VARREF(YgooScolsScolYadd),resF3736,T13);
        T11 = CALL2(1,VARREF(YgooScolsScolYadd),T12,valF3741);
        a160_0 = Ynil;
        a160_1 = T11;
        strF3735 = a160_0;
        resF3736 = a160_1;
        goto LOOP_160;
        T6 = T10;
      } else {
        T23 = CALL2(1,VARREF(YgooScolsScolYadd),strF3735,cF3737);
        a160_0 = T23;
        a160_1 = resF3736;
        strF3735 = a160_0;
        resF3736 = a160_1;
        goto LOOP_160;
        T6 = T22;
      }
      T0 = T6;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_c_inline_literal) {
  P start_,end_,form_,port_;
  P x_1450F3747;
  P x_1449F3746;
  P cF3745;
  P dF3744;
  P iF3743;
  P lF3742;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(start_, 0);
  ARG(end_, 1);
  ARG(form_, 2);
  ARG(port_, 3);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  lF3742 = Ynil;
  iF3743 = YPint((P)0);
  dF3744 = YPint((P)1);
  LOOP_161: {
    P a161_0,a161_1,a161_2;
    T24 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF3745 = T24;
    T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3745);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_109));
      T0 = T2;
    } else {
      x_1449F3746 = cF3745;
      x_1450F3747 = VARREF(YgooSmacrosYEE);
      T4 = CALL2(1,x_1450F3747,x_1449F3746,start_);
      if (T4 != YPfalse) {
        T6 = CALL2(1,VARREF(YgooSmacrosYpair),cF3745,lF3742);
        T7 = CALL2(1,VARREF(YgooSmathYA),iF3743,YPint((P)1));
        T8 = CALL2(1,VARREF(YgooSmathYA),dF3744,YPint((P)1));
        a161_0 = T6;
        a161_1 = T7;
        a161_2 = T8;
        lF3742 = a161_0;
        iF3743 = a161_1;
        dF3744 = a161_2;
        goto LOOP_161;
        T3 = T5;
      } else {
        T10 = CALL2(1,x_1450F3747,x_1449F3746,end_);
        if (T10 != YPfalse) {
          T12 = CALL2(1,VARREF(YgooSlogYE),dF3744,YPint((P)1));
          if (T12 != YPfalse) {
            T14 = CALL1(1,VARREF(Ylst),form_);
            T16 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),lF3742,iF3743);
            T15 = CALL1(1,VARREF(YgooSioSreadYparse_c_inline),T16);
            T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_61));
            T11 = T13;
          } else {
            T18 = CALL2(1,VARREF(YgooSmacrosYpair),cF3745,lF3742);
            T19 = CALL2(1,VARREF(YgooSmathYA),iF3743,YPint((P)1));
            T20 = CALL2(1,VARREF(YgooSmathY_),dF3744,YPint((P)1));
            a161_0 = T18;
            a161_1 = T19;
            a161_2 = T20;
            lF3742 = a161_0;
            iF3743 = a161_1;
            dF3744 = a161_2;
            goto LOOP_161;
            T11 = T17;
          }
          T9 = T11;
        } else {
          T22 = CALL2(1,VARREF(YgooSmacrosYpair),cF3745,lF3742);
          T23 = CALL2(1,VARREF(YgooSmathYA),iF3743,YPint((P)1));
          a161_0 = T22;
          a161_1 = T23;
          a161_2 = dF3744;
          lF3742 = a161_0;
          iF3743 = a161_1;
          dF3744 = a161_2;
          goto LOOP_161;
          T9 = T21;
        }
        T3 = T9;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_c_statement_literal) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL4(1,VARREF(YgooSioSreadYread_c_inline_literal),YPchr((P)123),YPchr((P)125),LITREF(lit_112),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_c_expression_literal) {
  P ce_,port_;
  P inlineF3749;
  P cF3748;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(ce_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T8 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF3748 = T8;
  T7 = CALL4(1,VARREF(YgooSioSreadYread_c_inline_literal),YPchr((P)123),YPchr((P)125),LITREF(lit_115),port_);
  inlineF3749 = T7;
  T1 = CALL2(1,VARREF(YgooSlogYE),cF3748,YPchr((P)103));
  if (T1 != YPfalse) {
    T0 = inlineF3749;
  } else {
    T5 = CALL2(1,VARREF(YgooSchrYfabs),VARREF(YLstrG),cF3748);
    T4 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_116),T5,LITREF(lit_117));
    T3 = CALL1(1,VARREF(Ylst),T4);
    T6 = CALL1(1,VARREF(Ylst),inlineF3749);
    T2 = CALL3(1,VARREF(YgooSmacrosYcat),T3,T6,LITREF(lit_61));
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_48) {
  P c_,port_;
  P tempF3752;
  P nameF3751;
  P cF3750;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T16 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF3750 = T16;
  T1 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3750);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_120));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooSchrYalphaQ),cF3750);
    if (T4 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
      nameF3751 = T14;
      T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF3751);
      T7 = CALL1(1,VARREF(YgooStypesYlen),T8);
      T6 = CALL2(1,VARREF(YgooSlogYE),T7,YPint((P)1));
      if (T6 != YPfalse) {
        T5 = cF3750;
      } else {
        T13 = CALL2(1,VARREF(YgooScolsSlstYassq),nameF3751,VARREF(YgooSioSreadYDchar_long_names));
        tempF3752 = T13;
        if (tempF3752 != YPfalse) {
          T11 = CALL1(1,VARREF(Ytail),tempF3752);
          T10 = CALL1(1,VARREF(Yhead),T11);
          T9 = T10;
        } else {
          T12 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_121),nameF3751);
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

LOCCODEDEF(fun_49) {
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

LOCCODEDEF(fun_50) {
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

LOCCODEDEF(fun_51) {
  P c_,port_;
  P tmpF3754;
  P stringF3753;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T3 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),YPchr((P)35),port_);
  stringF3753 = T3;
  T2 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),stringF3753);
  tmpF3754 = T2;
  if (tmpF3754 != YPfalse) {
    T0 = tmpF3754;
  } else {
    T1 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_125),stringF3753);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_52) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),c_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sub_read_token_53) {
  P c_,port_;
  P tmpF3758;
  P cF3757;
  P nF3756;
  P lF3755;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T13 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),c_);
  T12 = CALL1(1,VARREF(Ylst),T13);
  lF3755 = T12;
  nF3756 = YPint((P)1);
  LOOP_162: {
    P a162_0,a162_1;
    T11 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
    cF3757 = T11;
    T4 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3757);
    tmpF3758 = T4;
    if (tmpF3758 != YPfalse) {
      T1 = tmpF3758;
    } else {
      T3 = CALL1(1,VARREF(YgooSchrYchar_Gascii),cF3757);
      T2 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T3);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),lF3755,nF3756);
      T0 = T5;
    } else {
      T9 = CALL1(1,VARREF(YgooSioSportYget),port_);
      T8 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),T9);
      T7 = CALL2(1,VARREF(YgooSmacrosYpair),T8,lF3755);
      T10 = CALL2(1,VARREF(YgooSmathYA),nF3756,YPint((P)1));
      a162_0 = T7;
      a162_1 = T10;
      lF3755 = a162_0;
      nF3756 = a162_1;
      goto LOOP_162;
      T0 = T6;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_54) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSlogYE),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_parse_token_55) {
  P string_,port_;
  P maybe_numberF3763;
  P tmpF3762;
  P tmpF3761;
  P tmpF3760;
  P cF3759;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(string_, 0);
  ARG(port_, 1);
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),string_,YPint((P)0));
  cF3759 = T8;
  T7 = CALL1(1,VARREF(YgooSchrYdigitQ),cF3759);
  tmpF3760 = T7;
  if (tmpF3760 != YPfalse) {
    T1 = tmpF3760;
  } else {
    T6 = CALL2(1,VARREF(YgooSlogYE),cF3759,YPchr((P)43));
    tmpF3761 = T6;
    if (tmpF3761 != YPfalse) {
      T2 = tmpF3761;
    } else {
      T5 = CALL2(1,VARREF(YgooSlogYE),cF3759,YPchr((P)45));
      tmpF3762 = T5;
      if (tmpF3762 != YPfalse) {
        T3 = tmpF3762;
      } else {
        T4 = CALL2(1,VARREF(YgooSlogYE),cF3759,YPchr((P)46));
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T18 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),string_);
    maybe_numberF3763 = T18;
    if (maybe_numberF3763 != YPfalse) {
      T9 = maybe_numberF3763;
    } else {
      T12 = FUNFAB(fun_54,1,string_);
      T11 = CALL2(1,VARREF(YgooStypesYanyQ),T12,VARREF(YgooSioSreadYDstrange_symbol_names));
      if (T11 != YPfalse) {
        T13 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),string_);
        T10 = T13;
      } else {
        T15 = CALL2(1,VARREF(YgooSlogYE),string_,LITREF(lit_133));
        if (T15 != YPfalse) {
          T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),string_);
          T14 = T16;
        } else {
          T17 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_134),string_);
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

LOCCODEDEF(fun_reading_error_56) {
  P port_,message_,irritants_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(irritants_, 2);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),message_,LITREF(lit_139));
  T3 = CALL1(1,VARREF(Ylst),port_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),irritants_,T3);
  T0 = CALL2(1,VARREF(Yerror),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_warn_57) {
  P string_,irritants_and_port_;
LINK_STACK();
  ARG(string_, 0);
  NARGS(irritants_and_port_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_reverse_list_Gstring_58) {
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
  P str10496F3765;
  P sub_read_whitespaceF3764;
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
  fun_read_0 = YPfab_met(FUNCODEREF(fun_read_0),T0,LITREF(lit_0),LITREF(lit_1),sloc(20),YPfalse);
  T2 = VARREF_OR(YgooSconditionsYread,YPfalse);
  T3 = fun_read_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSconditionsYread,T1);
  lit_3 = YPPsym((P)"read-from-string");
  lit_4 = YPPlist(1,YPPsym((P)"x"));
  lit_5 = Ynil;
  T6 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T6,YPfalse,LITREF(lit_5),sloc(33),YPfalse);
  T5 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_2 = YPfab_met(FUNCODEREF(fun_2),T5,YPfalse,LITREF(lit_5),sloc(33),YPfalse);
  T4 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_from_string_3 = YPfab_met(FUNCODEREF(fun_read_from_string_3),T4,LITREF(lit_3),LITREF(lit_4),sloc(32),YPfalse);
  T8 = VARREF_OR(YgooSioSreadYread_from_string,YPfalse);
  T9 = fun_read_from_string_3;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSioSreadYread_from_string,T7);
  lit_6 = YPPsym((P)"sub-read-carefully");
  lit_7 = YPPlist(1,YPPsym((P)"port"));
  lit_8 = YPsb((P)"unexpected end of file");
  T10 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_carefully_4 = YPfab_met(FUNCODEREF(fun_sub_read_carefully_4),T10,LITREF(lit_6),LITREF(lit_7),sloc(35),YPfalse);
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
  fun_token_message_5 = YPfab_met(FUNCODEREF(fun_token_message_5),T16,LITREF(lit_10),LITREF(lit_11),sloc(45),YPfalse);
  T18 = VARREF_OR(YgooSioSreadYtoken_message,YPfalse);
  T19 = fun_token_message_5;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSioSreadYtoken_message,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),YPfalse,VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_12 = YPPsym((P)"make-reader-token");
  lit_13 = YPPlist(1,YPPsym((P)"message"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_reader_token_6 = YPfab_met(FUNCODEREF(fun_make_reader_token_6),T20,LITREF(lit_12),LITREF(lit_13),sloc(47),YPfalse);
  T22 = VARREF_OR(YgooSioSreadYmake_reader_token,YPfalse);
  T23 = fun_make_reader_token_6;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSioSreadYmake_reader_token,T21);
  lit_14 = YPPsym((P)"reader-token?");
  lit_15 = YPPlist(1,YPPsym((P)"form"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_reader_tokenQ_7 = YPfab_met(FUNCODEREF(fun_reader_tokenQ_7),T24,LITREF(lit_14),LITREF(lit_15),sloc(50),YPfalse);
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
  fun_sub_read_8 = YPfab_met(FUNCODEREF(fun_sub_read_8),T31,LITREF(lit_19),LITREF(lit_20),sloc(59),YPfalse);
  T33 = VARREF_OR(YgooSioSreadYsub_read,YPfalse);
  T34 = fun_sub_read_8;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YgooSioSreadYsub_read,T32);
  lit_21 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_22 = YPsb((P)"illegal character read");
  T35 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T35,YPfalse,LITREF(lit_21),sloc(70),YPfalse);
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
  fun_set_standard_syntaxX_10 = YPfab_met(FUNCODEREF(fun_set_standard_syntaxX_10),T41,LITREF(lit_23),LITREF(lit_24),sloc(74),YPfalse);
  T43 = VARREF_OR(YgooSioSreadYset_standard_syntaxX,YPfalse);
  T44 = fun_set_standard_syntaxX_10;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YgooSioSreadYset_standard_syntaxX,T42);
  lit_25 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_26 = YPPlist(1,YPPsym((P)"c"));
  T46 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T46,YPfalse,LITREF(lit_25),sloc(78),YPfalse);
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T45,YPfalse,LITREF(lit_26),sloc(79),YPfalse);
  T49 = fun_11;
  sub_read_whitespaceF3764 = T49;
  T48 = FUNFAB(fun_12,1,sub_read_whitespaceF3764);
  T47 = XCALL2(1,VARREF(YgooSmacrosYdo),T48,VARREF(YgooScolsSstrYascii_whitespaces));
  lit_27 = YPPsym((P)"flush-whitespace");
  lit_28 = YPPlist(1,YPPsym((P)"port"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYflush_whitespace = YPfab_met(FUNCODEREF(YgooSioSreadYflush_whitespace),T50,LITREF(lit_27),LITREF(lit_28),sloc(82),YPfalse);
  T51 = YgooSioSreadYflush_whitespace;
  VARSET(YgooSioSreadYflush_whitespace,T51);
  lit_29 = YPPsym((P)"read-delimited-list");
  lit_30 = YPPlist(2,YPPsym((P)"endchar"),YPPsym((P)"port"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_delimited_list = YPfab_met(FUNCODEREF(YgooSioSreadYread_delimited_list),T52,LITREF(lit_29),LITREF(lit_30),sloc(90),YPfalse);
  T53 = YgooSioSreadYread_delimited_list;
  VARSET(YgooSioSreadYread_delimited_list,T53);
  lit_31 = YPPsym((P)"sub-read-constituent");
  lit_32 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_constituent = YPfab_met(FUNCODEREF(YgooSioSreadYsub_read_constituent),T54,LITREF(lit_31),LITREF(lit_32),sloc(98),YPfalse);
  T55 = YgooSioSreadYsub_read_constituent;
  VARSET(YgooSioSreadYsub_read_constituent,T55);
  lit_33 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  lit_34 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  lit_35 = YPPlist(1,YPPsym((P)"c"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPfab_met(FUNCODEREF(fun_16),T56,YPfalse,LITREF(lit_35),sloc(105),YPfalse);
  T59 = XCALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_33),LITREF(lit_34));
  str10496F3765 = T59;
  T58 = fun_16;
  T57 = XCALL2(1,VARREF(YgooSmacrosYdo),T58,str10496F3765);
  lit_36 = YPPsym((P)"set-standard-read-macro!");
  lit_37 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"proc"));
  T60 = YPfab_sig(YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_read_macroX_17 = YPfab_met(FUNCODEREF(fun_set_standard_read_macroX_17),T60,LITREF(lit_36),LITREF(lit_37),sloc(110),YPfalse);
  T62 = VARREF_OR(YgooSioSreadYset_standard_read_macroX,YPfalse);
  T63 = fun_set_standard_read_macroX_17;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSioSreadYset_standard_read_macroX,T61);
  lit_38 = YPPsym((P)"get-standard-read-macro");
  lit_39 = YPPlist(1,YPPsym((P)"char"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_get_standard_read_macro_18 = YPfab_met(FUNCODEREF(fun_get_standard_read_macro_18),T64,LITREF(lit_38),LITREF(lit_39),sloc(113),YPfalse);
  T66 = VARREF_OR(YgooSioSreadYget_standard_read_macro,YPfalse);
  T67 = fun_get_standard_read_macro_18;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSioSreadYget_standard_read_macro,T65);
  lit_40 = YPPsym((P)"sub-read-vertical");
  lit_41 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_42 = YPsb((P)"|");
  T68 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_vertical_19 = YPfab_met(FUNCODEREF(fun_sub_read_vertical_19),T68,LITREF(lit_40),LITREF(lit_41),sloc(116),YPfalse);
  T70 = VARREF_OR(YgooSioSreadYsub_read_vertical,YPfalse);
  T71 = fun_sub_read_vertical_19;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSioSreadYsub_read_vertical,T69);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)124),YPtrue,VARREF(YgooSioSreadYsub_read_vertical));
  lit_43 = YPPsym((P)"sub-read-backslash");
  lit_44 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_45 = YPsb((P)"\\");
  T72 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_backslash_20 = YPfab_met(FUNCODEREF(fun_sub_read_backslash_20),T72,LITREF(lit_43),LITREF(lit_44),sloc(121),YPfalse);
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
  YgooSioSreadYsub_read_list_eof_error = YPfab_met(FUNCODEREF(YgooSioSreadYsub_read_list_eof_error),T78,LITREF(lit_48),LITREF(lit_49),sloc(129),YPfalse);
  T79 = YgooSioSreadYsub_read_list_eof_error;
  VARSET(YgooSioSreadYsub_read_list_eof_error,T79);
  lit_51 = YPPsym((P)"sub-read-list");
  lit_52 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"p"));
  lit_53 = YPPsym((P)"read-next");
  lit_54 = YPPlist(4,YPPsym((P)"c"),YPPsym((P)"prev"),YPPsym((P)"line"),YPPsym((P)"form"));
  T81 = YPfab_sig(YPPlist(4,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_read_next_22 = YPfab_met(FUNCODEREF(fun_read_next_22),T81,LITREF(lit_53),LITREF(lit_54),sloc(139),YPfalse);
  T80 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_list_23 = YPfab_met(FUNCODEREF(fun_sub_read_list_23),T80,LITREF(lit_51),LITREF(lit_52),sloc(132),YPfalse);
  T83 = VARREF_OR(YgooSioSreadYsub_read_list,YPfalse);
  T84 = fun_sub_read_list_23;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YgooSioSreadYsub_read_list,T82);
  lit_55 = YPPsym((P)"sub-read-seq");
  lit_56 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"e"),YPPsym((P)"port"));
  lit_57 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T85 = YPfab_sig(YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_sub_read_seq_24 = YPfab_met(FUNCODEREF(fun_sub_read_seq_24),T85,LITREF(lit_55),LITREF(lit_56),sloc(156),YPfalse);
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
  fun_sub_read_brackets_25 = YPfab_met(FUNCODEREF(fun_sub_read_brackets_25),T89,LITREF(lit_58),LITREF(lit_59),sloc(165),YPfalse);
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
  fun_sub_read_curlies_26 = YPfab_met(FUNCODEREF(fun_sub_read_curlies_26),T94,LITREF(lit_67),LITREF(lit_68),sloc(176),YPfalse);
  T96 = VARREF_OR(YgooSioSreadYsub_read_curlies,YPfalse);
  T97 = fun_sub_read_curlies_26;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YgooSioSreadYsub_read_curlies,T95);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)40),YPtrue,VARREF(YgooSioSreadYsub_read_list));
  lit_71 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T100 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T99 = fun_27 = YPfab_met(FUNCODEREF(fun_27),T100,YPfalse,LITREF(lit_71),sloc(185),YPfalse);
  T102 = fun_27;
  T101 = XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T102);
  T98 = T101;
  return T98;
}

P YgooSioSreadY___main_1___() {
  P number_sharp_macroF3767;
  P vecF3766;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89;
DEFCREGS();
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)123),YPtrue,VARREF(YgooSioSreadYsub_read_curlies));
  lit_72 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_28 = YPfab_met(FUNCODEREF(fun_28),T0,YPfalse,LITREF(lit_72),sloc(189),YPfalse);
  T1 = fun_28;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)125),YPtrue,T1);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)91),YPtrue,VARREF(YgooSioSreadYsub_read_brackets));
  lit_73 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T2 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPfab_met(FUNCODEREF(fun_29),T2,YPfalse,LITREF(lit_73),sloc(193),YPfalse);
  T3 = fun_29;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)93),YPtrue,T3);
  lit_74 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_75 = YPPsym((P)"quote");
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_30 = YPfab_met(FUNCODEREF(fun_30),T4,YPfalse,LITREF(lit_74),sloc(196),YPfalse);
  T5 = fun_30;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T5);
  lit_76 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_77 = YPPsym((P)"quasiquote");
  T6 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_31 = YPfab_met(FUNCODEREF(fun_31),T6,YPfalse,LITREF(lit_76),sloc(199),YPfalse);
  T7 = fun_31;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T7);
  lit_78 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_79 = YPsb((P)"end of file after ,");
  lit_80 = YPPsym((P)"unquote-splicing");
  lit_81 = YPPsym((P)"unquote");
  T8 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_32 = YPfab_met(FUNCODEREF(fun_32),T8,YPfalse,LITREF(lit_78),sloc(203),YPfalse);
  T9 = fun_32;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T9);
  T16 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T15 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T16,YPfalse);
  vecF3766 = T15;
  T10 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)116));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)9),vecF3766,T10);
  T11 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)102));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)12),vecF3766,T11);
  T12 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)114));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)13),vecF3766,T12);
  T13 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)110));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)10),vecF3766,T13);
  T14 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF3766);
  VARSET(YgooSioSreadYDstring_escape_chars,T14);
  lit_82 = YPPsym((P)"read-string-literal");
  lit_83 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_84 = YPsb((P)"end of file within a string");
  lit_85 = YPsb((P)"end of file within a string");
  lit_86 = YPsb((P)"invalid escaped character in string");
  T17 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_string_literal = YPfab_met(FUNCODEREF(YgooSioSreadYread_string_literal),T17,LITREF(lit_82),LITREF(lit_83),sloc(221),YPfalse);
  T18 = YgooSioSreadYread_string_literal;
  VARSET(YgooSioSreadYread_string_literal,T18);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)34),YPtrue,VARREF(YgooSioSreadYread_string_literal));
  lit_87 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T19 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T19,YPfalse,LITREF(lit_87),sloc(247),YPfalse);
  T20 = fun_34;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T20);
  lit_88 = YPPsym((P)"gobble-line");
  lit_89 = YPPlist(1,YPPsym((P)"port"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gobble_line_35 = YPfab_met(FUNCODEREF(fun_gobble_line_35),T21,LITREF(lit_88),LITREF(lit_89),sloc(249),YPfalse);
  T23 = VARREF_OR(YgooSioSreadYgobble_line,YPfalse);
  T24 = fun_gobble_line_35;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YgooSioSreadYgobble_line,T22);
  VARSET(YgooSioSreadYTsharp_macrosT,Ynil);
  lit_90 = YPPsym((P)"define-sharp-macro");
  lit_91 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"proc"));
  T25 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_define_sharp_macro_36 = YPfab_met(FUNCODEREF(fun_define_sharp_macro_36),T25,LITREF(lit_90),LITREF(lit_91),sloc(256),YPfalse);
  T27 = VARREF_OR(YgooSioSreadYdefine_sharp_macro,YPfalse);
  T28 = fun_define_sharp_macro_36;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooSioSreadYdefine_sharp_macro,T26);
  lit_92 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_93 = YPsb((P)"end of file after #");
  lit_94 = YPsb((P)"unknown # syntax");
  T29 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T29,YPfalse,LITREF(lit_92),sloc(261),YPfalse);
  T30 = fun_37;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T30);
  lit_95 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_38 = YPfab_met(FUNCODEREF(fun_38),T31,YPfalse,LITREF(lit_95),sloc(271),YPfalse);
  T32 = fun_38;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)102),T32);
  lit_96 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T33 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPfab_met(FUNCODEREF(fun_39),T33,YPfalse,LITREF(lit_96),sloc(273),YPfalse);
  T34 = fun_39;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)116),T34);
  lit_97 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T35 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_40 = YPfab_met(FUNCODEREF(fun_40),T35,YPfalse,LITREF(lit_97),sloc(275),YPfalse);
  T36 = fun_40;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)124),T36);
  lit_98 = YPPsym((P)"gobble-nested-comment");
  lit_99 = YPPlist(1,YPPsym((P)"port"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYgobble_nested_comment = YPfab_met(FUNCODEREF(YgooSioSreadYgobble_nested_comment),T37,LITREF(lit_98),LITREF(lit_99),sloc(277),YPfalse);
  T38 = YgooSioSreadYgobble_nested_comment;
  VARSET(YgooSioSreadYgobble_nested_comment,T38);
  lit_100 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_42 = YPfab_met(FUNCODEREF(fun_42),T39,YPfalse,LITREF(lit_100),sloc(288),YPfalse);
  T40 = fun_42;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)47),T40);
  lit_101 = YPPsym((P)"read-long-string-literal");
  lit_102 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_103 = YPsb((P)"end of file within a long string");
  T41 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_long_string_literal = YPfab_met(FUNCODEREF(YgooSioSreadYread_long_string_literal),T41,LITREF(lit_101),LITREF(lit_102),sloc(290),YPfalse);
  T42 = YgooSioSreadYread_long_string_literal;
  VARSET(YgooSioSreadYread_long_string_literal,T42);
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)34),VARREF(YgooSioSreadYread_long_string_literal));
  lit_104 = YPPsym((P)"parse-c-inline");
  lit_105 = YPPlist(1,YPPsym((P)"s"));
  lit_106 = YPPsym((P)"to-c");
  T43 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_parse_c_inline_44 = YPfab_met(FUNCODEREF(fun_parse_c_inline_44),T43,LITREF(lit_104),LITREF(lit_105),sloc(304),YPfalse);
  T45 = VARREF_OR(YgooSioSreadYparse_c_inline,YPfalse);
  T46 = fun_parse_c_inline_44;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YgooSioSreadYparse_c_inline,T44);
  lit_107 = YPPsym((P)"read-c-inline-literal");
  lit_108 = YPPlist(4,YPPsym((P)"start"),YPPsym((P)"end"),YPPsym((P)"form"),YPPsym((P)"port"));
  lit_109 = YPsb((P)"end of file within c-inline");
  T47 = YPfab_sig(YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_c_inline_literal = YPfab_met(FUNCODEREF(YgooSioSreadYread_c_inline_literal),T47,LITREF(lit_107),LITREF(lit_108),sloc(318),YPfalse);
  T48 = YgooSioSreadYread_c_inline_literal;
  VARSET(YgooSioSreadYread_c_inline_literal,T48);
  lit_110 = YPPsym((P)"read-c-statement-literal");
  lit_111 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_112 = YPPsym((P)"c-ment");
  T49 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_c_statement_literal = YPfab_met(FUNCODEREF(YgooSioSreadYread_c_statement_literal),T49,LITREF(lit_110),LITREF(lit_111),sloc(331),YPfalse);
  T50 = YgooSioSreadYread_c_statement_literal;
  VARSET(YgooSioSreadYread_c_statement_literal,T50);
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)123),VARREF(YgooSioSreadYread_c_statement_literal));
  lit_113 = YPPsym((P)"read-c-expression-literal");
  lit_114 = YPPlist(2,YPPsym((P)"ce"),YPPsym((P)"port"));
  lit_115 = YPPsym((P)"c-expr");
  lit_116 = YPPsym((P)"%");
  lit_117 = YPPsym((P)"b");
  T51 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_c_expression_literal = YPfab_met(FUNCODEREF(YgooSioSreadYread_c_expression_literal),T51,LITREF(lit_113),LITREF(lit_114),sloc(336),YPfalse);
  T52 = YgooSioSreadYread_c_expression_literal;
  VARSET(YgooSioSreadYread_c_expression_literal,T52);
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)101),VARREF(YgooSioSreadYread_c_expression_literal));
  lit_118 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  VARSET(YgooSioSreadYDchar_long_names,LITREF(lit_118));
  lit_119 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_120 = YPsb((P)"end of file after #\\");
  lit_121 = YPsb((P)"unknown #\\ name");
  T53 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_48 = YPfab_met(FUNCODEREF(fun_48),T53,YPfalse,LITREF(lit_119),sloc(355),YPfalse);
  T54 = fun_48;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)92),T54);
  lit_122 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T55 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_49 = YPfab_met(FUNCODEREF(fun_49),T55,YPfalse,LITREF(lit_122),sloc(372),YPfalse);
  T56 = fun_49;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)40),T56);
  lit_123 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T57 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_50 = YPfab_met(FUNCODEREF(fun_50),T57,YPfalse,LITREF(lit_123),sloc(378),YPfalse);
  T58 = fun_50;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)91),T58);
  lit_124 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_125 = YPsb((P)"unsupported number syntax");
  lit_126 = YPPlist(1,YPPsym((P)"c"));
  lit_127 = YPPlist(4,YPchr((P)98),YPchr((P)111),YPchr((P)100),YPchr((P)120));
  T60 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_51 = YPfab_met(FUNCODEREF(fun_51),T60,YPfalse,LITREF(lit_124),sloc(383),YPfalse);
  T59 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPfab_met(FUNCODEREF(fun_52),T59,YPfalse,LITREF(lit_126),sloc(387),YPfalse);
  T63 = fun_51;
  number_sharp_macroF3767 = T63;
  T62 = FUNFAB(fun_52,1,number_sharp_macroF3767);
  T61 = XCALL2(1,VARREF(YgooSmacrosYdo),T62,LITREF(lit_127));
  lit_128 = YPPsym((P)"sub-read-token");
  lit_129 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_token_53 = YPfab_met(FUNCODEREF(fun_sub_read_token_53),T64,LITREF(lit_128),LITREF(lit_129),sloc(392),YPfalse);
  T66 = VARREF_OR(YgooSioSreadYsub_read_token,YPfalse);
  T67 = fun_sub_read_token_53;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSioSreadYsub_read_token,T65);
  lit_130 = YPPsym((P)"parse-token");
  lit_131 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"port"));
  lit_132 = YPPlist(1,YPPsym((P)"x"));
  lit_133 = YPsb((P)".");
  lit_134 = YPsb((P)"unsupported number syntax");
  T69 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPfab_met(FUNCODEREF(fun_54),T69,YPfalse,LITREF(lit_132),sloc(413),YPfalse);
  T68 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_token_55 = YPfab_met(FUNCODEREF(fun_parse_token_55),T68,LITREF(lit_130),LITREF(lit_131),sloc(403),YPfalse);
  T71 = VARREF_OR(YgooSioSreadYparse_token,YPfalse);
  T72 = fun_parse_token_55;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YgooSioSreadYparse_token,T70);
  lit_135 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  VARSET(YgooSioSreadYDstrange_symbol_names,LITREF(lit_135));
  lit_136 = YPPsym((P)"t");
  T76 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),LITREF(lit_136));
  T75 = XCALL2(1,VARREF(YgooSmacrosYelt),T76,YPint((P)0));
  T74 = XCALL2(1,VARREF(YgooSlogYE),T75,YPchr((P)84));
  if (T74 != YPfalse) {
    T73 = VARREF(YgooSchrYto_upper);
  } else {
    T73 = VARREF(YgooSchrYto_lower);
  }
  VARSET(YgooSioSreadYpreferred_case,T73);
  lit_137 = YPPsym((P)"reading-error");
  lit_138 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"irritants"));
  lit_139 = YPsb((P)": %=");
  T77 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLportG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reading_error_56 = YPfab_met(FUNCODEREF(fun_reading_error_56),T77,LITREF(lit_137),LITREF(lit_138),sloc(440),YPfalse);
  T79 = VARREF_OR(YgooSioSreadYreading_error,YPfalse);
  T80 = fun_reading_error_56;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YgooSioSreadYreading_error,T78);
  lit_140 = YPPsym((P)"warn");
  lit_141 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"irritants-and-port"));
  T81 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_warn_57 = YPfab_met(FUNCODEREF(fun_warn_57),T81,LITREF(lit_140),LITREF(lit_141),sloc(444),YPfalse);
  T83 = VARREF_OR(YgooSioSreadYwarn,YPfalse);
  T84 = fun_warn_57;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YgooSioSreadYwarn,T82);
  lit_142 = YPPsym((P)"reverse-list->string");
  lit_143 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  T85 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_reverse_list_Gstring_58 = YPfab_met(FUNCODEREF(fun_reverse_list_Gstring_58),T85,LITREF(lit_142),LITREF(lit_143),sloc(452),YPfalse);
  T87 = VARREF_OR(YgooSioSreadYreverse_list_Gstring,YPfalse);
  T88 = fun_reverse_list_Gstring_58;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YgooSioSreadYreverse_list_Gstring,T86);
  T89 = YPfalse;
  return T89;
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
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSmap;

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
  {"@add-new", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"as-log", &module_info_gooSlog, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"exp", &module_info_gooSmath, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"port-filename", &module_info_gooSioSport, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"lst*", &module_info_gooScolsSlst, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"make-reader-token", CVAR, &YgooSioSreadYmake_reader_token},
  {"<reader-token>", CVAR, &YgooSioSreadYLreader_tokenG},
  {"read-long-string-literal", CVAR, &YgooSioSreadYread_long_string_literal},
  {"$vert-sym", CVAR, &YgooSioSreadYDvert_sym},
  {"read-c-statement-literal", CVAR, &YgooSioSreadYread_c_statement_literal},
  {"sub-read-constituent", CVAR, &YgooSioSreadYsub_read_constituent},
  {"sub-read-list-eof-error", CVAR, &YgooSioSreadYsub_read_list_eof_error},
  {"$char-long-names", CVAR, &YgooSioSreadYDchar_long_names},
  {"bs-sym", CVAR, &YgooSioSreadYbs_sym},
  {"$vert-proxy", CVAR, &YgooSioSreadYDvert_proxy},
  {"---main-0---", PVAR, NULL},
  {"sub-read-seq", CVAR, &YgooSioSreadYsub_read_seq},
  {"*sharp-macros*", CVAR, &YgooSioSreadYTsharp_macrosT},
  {"*read-terminating?-vector*", CVAR, &YgooSioSreadYTread_terminatingQ_vectorT},
  {"sub-read", CVAR, &YgooSioSreadYsub_read},
  {"set-standard-read-macro!", CVAR, &YgooSioSreadYset_standard_read_macroX},
  {"$close-bracket", CVAR, &YgooSioSreadYDclose_bracket},
  {"$close-paren", CVAR, &YgooSioSreadYDclose_paren},
  {"gobble-nested-comment", CVAR, &YgooSioSreadYgobble_nested_comment},
  {"read-from-string", CVAR, &YgooSioSreadYread_from_string},
  {"---main-1---", PVAR, NULL},
  {"read-delimited-list", CVAR, &YgooSioSreadYread_delimited_list},
  {"token-message", CVAR, &YgooSioSreadYtoken_message},
  {"reading-error", CVAR, &YgooSioSreadYreading_error},
  {"gobble-line", CVAR, &YgooSioSreadYgobble_line},
  {"sub-read-token", CVAR, &YgooSioSreadYsub_read_token},
  {"warn", CVAR, &YgooSioSreadYwarn},
  {"read-c-inline-literal", CVAR, &YgooSioSreadYread_c_inline_literal},
  {"define-sharp-macro", CVAR, &YgooSioSreadYdefine_sharp_macro},
  {"sub-read-curlies", CVAR, &YgooSioSreadYsub_read_curlies},
  {"sub-read-backslash", CVAR, &YgooSioSreadYsub_read_backslash},
  {"sub-read-list", CVAR, &YgooSioSreadYsub_read_list},
  {"*read-dispatch-vector*", CVAR, &YgooSioSreadYTread_dispatch_vectorT},
  {"flush-whitespace", CVAR, &YgooSioSreadYflush_whitespace},
  {"parse-token", CVAR, &YgooSioSreadYparse_token},
  {"sub-read-carefully", CVAR, &YgooSioSreadYsub_read_carefully},
  {"reverse-list->string", CVAR, &YgooSioSreadYreverse_list_Gstring},
  {"$close-curly", CVAR, &YgooSioSreadYDclose_curly},
  {"sub-read-vertical", CVAR, &YgooSioSreadYsub_read_vertical},
  {"reader-token?", CVAR, &YgooSioSreadYreader_tokenQ},
  {"read-string-literal", CVAR, &YgooSioSreadYread_string_literal},
  {"$strange-symbol-names", CVAR, &YgooSioSreadYDstrange_symbol_names},
  {"set-standard-syntax!", CVAR, &YgooSioSreadYset_standard_syntaxX},
  {"read-c-expression-literal", CVAR, &YgooSioSreadYread_c_expression_literal},
  {"preferred-case", CVAR, &YgooSioSreadYpreferred_case},
  {"parse-c-inline", CVAR, &YgooSioSreadYparse_c_inline},
  {"sub-read-brackets", CVAR, &YgooSioSreadYsub_read_brackets},
  {"$string-escape-chars", CVAR, &YgooSioSreadYDstring_escape_chars},
  {"get-standard-read-macro", CVAR, &YgooSioSreadYget_standard_read_macro},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"set-standard-read-macro!", NULL},
  {"read-from-string", NULL},
  {"read-delimited-list", NULL},
  {"$char-long-names", NULL},
  {"read", NULL},
  {"get-standard-read-macro", NULL},
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
