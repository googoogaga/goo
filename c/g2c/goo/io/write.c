/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/write");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/write */

EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOlst,"goo/boot","@lst");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSioSwriteYwrite_params,"goo/io/write","write-params");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
DEF(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
DEF(YgooSioSwriteYwrite_char_literal,"goo/io/write","write-char-literal");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
DEF(YgooSioSwriteYdo_emit,"goo/io/write","do-emit");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
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
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
DEF(YgooSioSwriteYwrite_string_literal,"goo/io/write","write-string-literal");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
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
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
DEF(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
DYNDEF(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
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
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
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
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
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
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
DEF(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YgooSioSwriteYwrite_value_type,"goo/io/write","write-value-type");
DEF(YgooSioSwriteYrecurring_write_type,"goo/io/write","recurring-write-type");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YgooSioSwriteYquotationQ,"goo/io/write","quotation?");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSioSwriteYwrite_flat,"goo/io/write","write-flat");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YgooSioSwriteYas_binding_name,"goo/io/write","as-binding-name");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YOlit,"goo/boot","@lit");
DEF(YgooSioSwriteYwrite_number,"goo/io/write","write-number");
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
DEF(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YgooSioSwriteYcharacter_name,"goo/io/write","character-name");
DEF(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YtT,"goo/boot","t*");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yopts_count,"goo/boot","opts-count");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YgooSioSwriteYwrite_boolean,"goo/io/write","write-boolean");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSlate_macrosYTgensym_counterT,"goo/late-macros","*gensym-counter*");
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
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
DEF(YgooSioSwriteYwrite_fun_guts,"goo/io/write","write-fun-guts");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YOmap,"goo/boot","@map");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YgooSioSwriteYwrite_map,"goo/io/write","write-map");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
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
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Ynot,"goo/boot","not");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
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
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yfab_pair,"goo/boot","fab-pair");
DYNDEF(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
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
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
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
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooSmagYG,"goo/mag",">");
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
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
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
DEF(YgooSioSwriteYwrite_list,"goo/io/write","write-list");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmagYmin,"goo/mag","min");
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
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
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
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
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
DEF(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooScolsScolYadd,"goo/cols/col","add");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_95);
DEFLIT(lit_4);
DEFLIT(lit_67);
DEFLIT(lit_130);
DEFLIT(lit_122);
DEFLIT(lit_46);
DEFLIT(lit_126);
DEFLIT(lit_61);
DEFLIT(lit_147);
DEFLIT(lit_149);
DEFLIT(lit_166);
DEFLIT(lit_20);
DEFLIT(lit_55);
DEFLIT(lit_71);
DEFLIT(lit_25);
DEFLIT(lit_168);
DEFLIT(lit_165);
DEFLIT(lit_97);
DEFLIT(lit_101);
DEFLIT(lit_86);
DEFLIT(lit_81);
DEFLIT(lit_116);
DEFLIT(lit_162);
DEFLIT(lit_83);
DEFLIT(lit_19);
DEFLIT(lit_94);
DEFLIT(lit_155);
DEFLIT(lit_48);
DEFLIT(lit_65);
DEFLIT(lit_96);
DEFLIT(lit_64);
DEFLIT(lit_88);
DEFLIT(lit_40);
DEFLIT(lit_108);
DEFLIT(lit_148);
DEFLIT(lit_85);
DEFLIT(lit_15);
DEFLIT(lit_118);
DEFLIT(lit_58);
DEFLIT(lit_109);
DEFLIT(lit_59);
DEFLIT(lit_0);
DEFLIT(lit_138);
DEFLIT(lit_144);
DEFLIT(lit_78);
DEFLIT(lit_127);
DEFLIT(lit_7);
DEFLIT(lit_79);
DEFLIT(lit_151);
DEFLIT(lit_14);
DEFLIT(lit_87);
DEFLIT(lit_112);
DEFLIT(lit_9);
DEFLIT(lit_145);
DEFLIT(lit_50);
DEFLIT(lit_106);
DEFLIT(lit_156);
DEFLIT(lit_142);
DEFLIT(lit_129);
DEFLIT(lit_167);
DEFLIT(lit_27);
DEFLIT(lit_24);
DEFLIT(lit_111);
DEFLIT(lit_30);
DEFLIT(lit_12);
DEFLIT(lit_63);
DEFLIT(lit_18);
DEFLIT(lit_158);
DEFLIT(lit_159);
DEFLIT(lit_72);
DEFLIT(lit_84);
DEFLIT(lit_80);
DEFLIT(lit_136);
DEFLIT(lit_8);
DEFLIT(lit_135);
DEFLIT(lit_32);
DEFLIT(lit_153);
DEFLIT(lit_44);
DEFLIT(lit_115);
DEFLIT(lit_103);
DEFLIT(lit_38);
DEFLIT(lit_45);
DEFLIT(lit_22);
DEFLIT(lit_1);
DEFLIT(lit_154);
DEFLIT(lit_164);
DEFLIT(lit_47);
DEFLIT(lit_17);
DEFLIT(lit_120);
DEFLIT(lit_89);
DEFLIT(lit_75);
DEFLIT(lit_150);
DEFLIT(lit_157);
DEFLIT(lit_3);
DEFLIT(lit_69);
DEFLIT(lit_140);
DEFLIT(lit_31);
DEFLIT(lit_90);
DEFLIT(lit_6);
DEFLIT(lit_66);
DEFLIT(lit_23);
DEFLIT(lit_110);
DEFLIT(lit_169);
DEFLIT(lit_13);
DEFLIT(lit_132);
DEFLIT(lit_131);
DEFLIT(lit_77);
DEFLIT(lit_123);
DEFLIT(lit_33);
DEFLIT(lit_37);
DEFLIT(lit_143);
DEFLIT(lit_124);
DEFLIT(lit_73);
DEFLIT(lit_146);
DEFLIT(lit_134);
DEFLIT(lit_10);
DEFLIT(lit_93);
DEFLIT(lit_91);
DEFLIT(lit_139);
DEFLIT(lit_57);
DEFLIT(lit_121);
DEFLIT(lit_137);
DEFLIT(lit_53);
DEFLIT(lit_49);
DEFLIT(lit_133);
DEFLIT(lit_60);
DEFLIT(lit_41);
DEFLIT(lit_92);
DEFLIT(lit_68);
DEFLIT(lit_39);
DEFLIT(lit_76);
DEFLIT(lit_29);
DEFLIT(lit_119);
DEFLIT(lit_104);
DEFLIT(lit_113);
DEFLIT(lit_52);
DEFLIT(lit_62);
DEFLIT(lit_26);
DEFLIT(lit_43);
DEFLIT(lit_54);
DEFLIT(lit_117);
DEFLIT(lit_51);
DEFLIT(lit_82);
DEFLIT(lit_160);
DEFLIT(lit_100);
DEFLIT(lit_102);
DEFLIT(lit_163);
DEFLIT(lit_105);
DEFLIT(lit_42);
DEFLIT(lit_35);
DEFLIT(lit_16);
DEFLIT(lit_141);
DEFLIT(lit_125);
DEFLIT(lit_128);
DEFLIT(lit_74);
DEFLIT(lit_11);
DEFLIT(lit_2);
DEFLIT(lit_107);
DEFLIT(lit_99);
DEFLIT(lit_34);
DEFLIT(lit_56);
DEFLIT(lit_21);
DEFLIT(lit_5);
DEFLIT(lit_70);
DEFLIT(lit_114);
DEFLIT(lit_28);
DEFLIT(lit_152);
DEFLIT(lit_36);
DEFLIT(lit_161);
DEFLIT(lit_98);

/* FUNCTIONS: */

LOCFOR(fun_as_binding_name_0);
LOCFOR(fun_do_emit_1);
LOCFOR(fun_do_emit_2);
LOCFOR(fun_do_emit_3);
LOCFOR(fun_recur_4);
LOCFOR(fun_emit_5);
LOCFOR(fun_write_to_string_6);
LOCFOR(fun_recur_7);
LOCFOR(fun_write_8);
LOCFOR(fun_writeln_9);
LOCFOR(fun_recurring_write_10);
LOCFOR(fun_recurring_write_11);
LOCFOR(fun_recurring_write_12);
LOCFOR(fun_recurring_write_13);
LOCFOR(fun_recurring_write_14);
LOCFOR(fun_recurring_write_15);
LOCFOR(fun_recurring_write_16);
LOCFOR(fun_recurring_write_17);
LOCFOR(fun_recurring_write_18);
LOCFOR(fun_recurring_write_19);
LOCFOR(fun_recurring_write_20);
LOCFOR(fun_write_boolean_21);
LOCFOR(fun_write_number_22);
LOCFOR(fun_write_char_literal_23);
LOCFOR(fun_character_name_24);
LOCFOR(fun_write_string_literal_25);
LOCFOR(fun_write_list_26);
LOCFOR(fun_quotationQ_27);
LOCFOR(fun_write_flat_28);
LOCFOR(fun_29);
LOCFOR(fun_write_map_30);
LOCFOR(fun_recurring_write_31);
LOCFOR(fun_recurring_write_32);
LOCFOR(fun_recurring_write_33);
LOCFOR(fun_recurring_write_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_write_params_37);
LOCFOR(fun_write_fun_guts_38);
LOCFOR(fun_recurring_write_39);
LOCFOR(fun_recurring_write_40);
LOCFOR(fun_recurring_write_41);
LOCFOR(fun_recurring_write_42);
LOCFOR(fun_recurring_write_43);
LOCFOR(fun_recurring_write_44);
LOCFOR(fun_45);
LOCFOR(fun_recurring_write_46);
LOCFOR(fun_47);
LOCFOR(fun_recurring_write_48);
LOCFOR(fun_49);
LOCFOR(fun_write_value_type_50);
LOCFOR(fun_write_value_type_51);
LOCFOR(fun_recurring_write_type_52);
LOCFOR(fun_recurring_write_type_53);
LOCFOR(fun_recur_54);
LOCFOR(fun_write_type_55);
LOCFOR(fun_recurring_write_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_59);
LOCFOR(fun_recurring_write_60);
LOCFOR(fun_recurring_write_61);
LOCFOR(fun_arg_62);
LOCFOR(fun_63);
LOCFOR(fun_msg_64);
LOCFOR(fun_post_65);
LOCFOR(fun_maybe_pack_chars_66);
LOCFOR(fun_arg_67);
LOCFOR(fun_68);
FUNFOR(YgooSioSwriteYpe_msg);
LOCFOR(fun_x_1473_70);
LOCFOR(fun_71);
LOCFOR(fun_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
FUNFOR(YgooSconditionsYmsg_to_str);
FUNFOR(YgooSioSwriteYsay);
extern P YgooSioSwriteY___main_0___ ();
extern P YgooSioSwriteY___main_1___ ();

/* C-FORMS: */


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
  P recurF3787;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF3787 = T1;
  FUNINIT(recurF3787, 2,port_,recurF3787);
  T0 = CALL2(1,recurF3787,x_,YPint((P)-1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_to_string_6) {
  P x_;
  P portF3788;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_13));
  portF3788 = T1;
  CALL2(1,VARREF(YgooSioSwriteYwrite),portF3788,x_);
  T0 = CALL1(1,VARREF(YgooSioSportYport_contents),portF3788);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_recur_7) {
  P x_,d_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
  T1 = CALL2(1,VARREF(YgooSmagYGE),d_,DYNREF(YgooSioSwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_17));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    T3 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write),FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_8) {
  P port_,x_;
  P recurF3789;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_7,2);
  recurF3789 = T1;
  FUNINIT(recurF3789, 2,port_,recurF3789);
  T0 = CALL2(1,recurF3789,x_,YPint((P)-1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_writeln_9) {
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

LOCCODEDEF(fun_recurring_write_10) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_22));
    T0 = T2;
  } else {
    T3 = CALL4(1,VARREF(YgooSioSwriteYwrite_list),port_,x_,d_,recur_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_11) {
  P port_,x_,d_,recur_;
  P prefixF3790;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T4 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T3 = CALL1(1,VARREF(Yclass_name),T4);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T3);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_24),T2,LITREF(lit_25));
  prefixF3790 = T1;
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,prefixF3790,x_,LITREF(lit_26),d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_12) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,LITREF(lit_28),x_,LITREF(lit_29),d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_13) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,LITREF(lit_31),x_,LITREF(lit_32),d_,recur_);
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
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_map),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_15) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  if (x_ != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSwriteYwrite_boolean),port_,LITREF(lit_35));
    T0 = T1;
  } else {
    T2 = CALL2(1,VARREF(YgooSioSwriteYwrite_boolean),port_,LITREF(lit_36));
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_16) {
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

LOCCODEDEF(fun_recurring_write_17) {
  P port_,x_,d_,recur_;
  P tF3794;
  P xF3793;
  P xF3792;
  P xF3791;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_39));
  xF3791 = x_;
  T4 = (P)YPuntag_into(xF3791);
  xF3792 = T4;
  xF3793 = xF3792;
  tF3794 = (P)1;
  T3 = (P)YPiLL(xF3793,(P)2);
  T2 = (P)YPiv(T3,tF3794);
  T1 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),T2,YPint((P)16));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_18) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YLnumG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSioSwriteYas_binding_name),LITREF(lit_41));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,T3);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSioSwriteYwrite_number),port_,x_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_19) {
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

LOCCODEDEF(fun_recurring_write_20) {
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

LOCCODEDEF(fun_write_boolean_21) {
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

LOCCODEDEF(fun_write_number_22) {
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

LOCCODEDEF(fun_write_char_literal_23) {
  P port_,x_;
  P probeF3795;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T3 = CALL1(1,VARREF(YgooSioSwriteYcharacter_name),x_);
  probeF3795 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_50));
  if (probeF3795 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,probeF3795);
    T0 = T1;
  } else {
    T2 = CALL2(1,VARREF(YgooSioSportYput),port_,x_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_character_name_24) {
  P char_;
  P assocF3796;
  P T0,T1,T2;
LINK_STACK();
  ARG(char_, 0);
  T2 = CALL3(1,VARREF(YgooScolsSlstYassqn),char_,VARREF(YgooSioSreadYDchar_long_names),YPint((P)1));
  assocF3796 = T2;
  if (assocF3796 != YPfalse) {
    T1 = CALL1(1,VARREF(YgooSmacrosY1st),assocF3796);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_string_literal_25) {
  P port_,x_;
  P tmpF3800;
  P cF3799;
  P iF3798;
  P lenF3797;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
  T10 = CALL1(1,VARREF(YgooStypesYlen),x_);
  lenF3797 = T10;
  iF3798 = YPint((P)0);
  LOOP_163: {
    P a163_0;
    T1 = CALL2(1,VARREF(YgooSlogYE),iF3798,lenF3797);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
      T0 = T2;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYelt),x_,iF3798);
      cF3799 = T9;
      T5 = CALL2(1,VARREF(YgooSlogYE),cF3799,YPchr((P)92));
      tmpF3800 = T5;
      if (tmpF3800 != YPfalse) {
        T3 = tmpF3800;
      } else {
        T4 = CALL2(1,VARREF(YgooSlogYE),cF3799,YPchr((P)34));
        T3 = T4;
      }
      if (T3 != YPfalse) {
        T6 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)92));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYput),port_,cF3799);
      T8 = CALL2(1,VARREF(YgooSmathYA),iF3798,YPint((P)1));
      a163_0 = T8;
      iF3798 = a163_0;
      goto LOOP_163;
      T0 = T7;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_list_26) {
  P port_,x_,d_,recur_;
  P nF3802;
  P lF3801;
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
    lF3801 = T16;
    nF3802 = YPint((P)1);
    LOOP_164: {
      P a164_0,a164_1;
      T8 = CALL1(1,VARREF(YgooSmacrosYnulQ),lF3801);
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSmagYGE),nF3802,DYNREF(YgooSioSwriteYTmax_print_lengthT));
        if (T10 != YPfalse) {
          T11 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_57));
          T9 = T11;
        } else {
          CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
          T12 = CALL1(1,VARREF(Yhead),lF3801);
          CALL2(0,recur_,T12,d_);
          T14 = CALL1(1,VARREF(Ytail),lF3801);
          T15 = CALL2(1,VARREF(YgooSmathYA),nF3802,YPint((P)1));
          a164_0 = T14;
          a164_1 = T15;
          lF3801 = a164_0;
          nF3802 = a164_1;
          goto LOOP_164;
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

LOCCODEDEF(fun_quotationQ_27) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),x_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_60));
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

LOCCODEDEF(fun_write_flat_28) {
  P port_,prefix_,x_,suffix_,d_,recur_;
  P iF3804;
  P zF3803;
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
  zF3803 = T12;
  T0 = CALL2(1,VARREF(YgooSmagYG),zF3803,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T1,d_);
    iF3804 = YPint((P)1);
    LOOP_165: {
      P a165_0;
      T3 = CALL2(1,VARREF(YgooSmagYGE),iF3804,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T3 != YPfalse) {
        T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_63));
        T2 = T4;
      } else {
        T7 = CALL2(1,VARREF(YgooSmagYGE),iF3804,zF3803);
        T6 = CALL1(1,VARREF(Ynot),T7);
        if (T6 != YPfalse) {
          CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
          T8 = CALL2(1,VARREF(YgooSmacrosYelt),x_,iF3804);
          CALL2(1,recur_,T8,d_);
          T10 = CALL2(1,VARREF(YgooSmathYA),iF3804,YPint((P)1));
          a165_0 = T10;
          iF3804 = a165_0;
          goto LOOP_165;
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

LOCCODEDEF(fun_29) {
  P blow_;
  P valF3811;
  P keyF3810;
  P tup30F3809;
  P iF3808;
  P tmpF3807;
  P x_1455F3806;
  P x_1456F3805;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(blow_, 0);
  T17 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
  x_1456F3805 = T16;
  T18 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(0));
  x_1455F3806 = T18;
  LOOP_166: {
    P a166_0,a166_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1456F3805);
    tmpF3807 = T4;
    if (tmpF3807 != YPfalse) {
      T2 = tmpF3807;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1455F3806);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1456F3805);
      iF3808 = T15;
      T13 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1455F3806);
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1455F3806);
      T12 = CALL2(1,VARREF(Ytup),T13,T14);
      tup30F3809 = T12;
      T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F3809,YPint((P)0));
      keyF3810 = T11;
      T10 = CALL2(1,VARREF(YgooSmacrosYelt),tup30F3809,YPint((P)1));
      valF3811 = T10;
      T5 = CALL2(1,VARREF(YgooSmagYGE),iF3808,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T5 != YPfalse) {
        CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_68));
        T6 = CALL1(0,blow_,YPfalse);
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)32));
      CALL2(0,FREEREF(3),keyF3810,FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_69));
      CALL2(0,FREEREF(3),valF3811,FREEREF(2));
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1456F3805);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1455F3806);
      a166_0 = T8;
      a166_1 = T9;
      x_1456F3805 = a166_0;
      x_1455F3806 = a166_1;
      goto LOOP_166;
      T0 = T7;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_map_30) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_66));
  T1 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_29,4,x_,port_,d_,recur_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)62));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_recurring_write_31) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(YgooSioSportYport_filename),x_);
  T2 = CALL1(1,VARREF(YgooSioSportYport_line),x_);
  T0 = CALL4(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_71),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_32) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(YgooSioSportYport_filename),x_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_73),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_33) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_75));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_34) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_77));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_35) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_36) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_write_params_37) {
  P port_,x_,recur_;
  P tmpF3823;
  P valueF3822;
  P iF3821;
  P specF3820;
  P firstQF3819;
  P tmpF3818;
  P tmpF3817;
  P x_1458F3816;
  P x_1459F3815;
  P x_1460F3814;
  P namesF3813;
  P namesF3812;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
  T37 = CALL1(1,VARREF(YgooSfunYfun_names),x_);
  namesF3812 = T37;
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
  T36 = CALL1(1,VARREF(YgooSfunYfun_names),x_);
  namesF3813 = T36;
  T23 = fun_35;
  T24 = fun_36;
  T22 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T23,T24);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_1460F3814 = T21;
  T26 = CALL1(1,VARREF(YgooSfunYfun_specs),x_);
  T25 = CALL1(1,VARREF(YgooScolsScolYenum),T26);
  x_1459F3815 = T25;
  T28 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
  x_1458F3816 = T27;
  LOOP_167: {
    P a167_0,a167_1,a167_2;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1460F3814);
    tmpF3817 = T6;
    if (tmpF3817 != YPfalse) {
      T2 = tmpF3817;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1459F3815);
      tmpF3818 = T5;
      if (tmpF3818 != YPfalse) {
        T3 = tmpF3818;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1458F3816);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_1460F3814);
      firstQF3819 = T20;
      T19 = CALL1(1,VARREF(YgooScolsScolYnow),x_1459F3815);
      specF3820 = T19;
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_1458F3816);
      iF3821 = T18;
      T7 = CALL1(1,VARREF(Ynot),firstQF3819);
      if (T7 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
      } else {
      }
      T9 = CALL1(1,VARREF(YgooSmacrosYnulQ),namesF3813);
      if (T9 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,specF3820);
      } else {
        T12 = CALL2(1,VARREF(YgooSmacrosYelt),namesF3813,iF3821);
        T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T12);
        CALL3(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_82),T11);
        CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,specF3820);
        T13 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
      }
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1460F3814);
      T16 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1459F3815);
      T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1458F3816);
      a167_0 = T15;
      a167_1 = T16;
      a167_2 = T17;
      x_1460F3814 = a167_0;
      x_1459F3815 = a167_1;
      x_1458F3816 = a167_2;
      goto LOOP_167;
      T0 = T14;
    } else {
      T0 = YPfalse;
    }
  }
  T35 = CALL1(1,VARREF(YgooSfunYfun_val),x_);
  valueF3822 = T35;
  T32 = CALL1(1,VARREF(Ynot),valueF3822);
  tmpF3823 = T32;
  if (tmpF3823 != YPfalse) {
    T30 = tmpF3823;
  } else {
    T31 = CALL2(1,VARREF(YgooSmacrosYEE),valueF3822,VARREF(YLanyG));
    T30 = T31;
  }
  T29 = CALL1(1,VARREF(Ynot),T30);
  if (T29 != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_83));
    T33 = CALL2(1,VARREF(YgooSioSwriteYwrite_value_type),port_,valueF3822);
  } else {
  }
  T34 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
UNLINK_STACK();
  QRET(T34);
}

LOCCODEDEF(fun_write_fun_guts_38) {
  P port_,x_,name_,recur_;
  P nameF3824;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(name_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_86));
  CALL2(1,VARREF(YgooSioSportYputs),port_,name_);
  T3 = CALL1(1,VARREF(YgooSfunYfun_name),x_);
  nameF3824 = T3;
  if (nameF3824 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
    T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF3824);
    T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
  CALL3(1,VARREF(YgooSioSwriteYwrite_params),port_,x_,recur_);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_87));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_recurring_write_39) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_89),recur_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_40) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_91),recur_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_41) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(Ysrc_loc_line),x_);
  T2 = CALL1(1,VARREF(Ysrc_loc_file),x_);
  T0 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_93),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_42) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_95));
  T1 = CALL1(1,VARREF(Yclass_name),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
  CALL2(1,VARREF(YgooSioSportYputs),port_,T0);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_96));
  T3 = CALL1(1,VARREF(Yclass_parents),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yclass_name),T3);
  CALL2(1,recur_,T2,d_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_97));
UNLINK_STACK();
  QRET(T4);
}

LOCCODEDEF(fun_recurring_write_43) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_99));
  T0 = CALL1(1,VARREF(Ytype_object),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_100));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_recurring_write_44) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_102));
  T0 = CALL1(1,VARREF(Ytype_class),x_);
  CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_103));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_45) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_46) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_105));
  T0 = FUNFAB(fun_45,1,port_);
  T1 = CALL1(1,VARREF(Yunion_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_107));
UNLINK_STACK();
  QRET(T2);
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
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_109));
  T0 = FUNFAB(fun_47,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_111));
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

LOCCODEDEF(fun_write_value_type_50) {
  P port_,x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_114));
  T0 = FUNFAB(fun_49,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_116));
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_write_value_type_51) {
  P port_,x_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_type_52) {
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

LOCCODEDEF(fun_recurring_write_type_53) {
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

LOCCODEDEF(fun_recur_54) {
  P x_,d_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write_type),FREEREF(0),x_,d_,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_write_type_55) {
  P port_,x_;
  P recurF3825;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_54,2);
  recurF3825 = T1;
  FUNINIT(recurF3825, 2,port_,recurF3825);
  T0 = CALL2(1,recurF3825,x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_56) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_125));
  T0 = CALL1(1,VARREF(Yprop_getter),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_126));
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_57) {
  P getterF3831;
  P propF3830;
  P iF3829;
  P tmpF3828;
  P x_1463F3827;
  P x_1464F3826;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  VARSET(YgooSclassYTreport_prop_unbound_errorsQT,YPfalse);
  T16 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
  x_1464F3826 = T15;
  T18 = CALL1(1,VARREF(Yprops_of),FREEREF(0));
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_1463F3827 = T17;
  LOOP_168: {
    P a168_0,a168_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1464F3826);
    tmpF3828 = T4;
    if (tmpF3828 != YPfalse) {
      T2 = tmpF3828;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1463F3827);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1464F3826);
      iF3829 = T14;
      T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1463F3827);
      propF3830 = T13;
      T5 = CALL2(1,VARREF(YgooSmagYGE),iF3829,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T5 != YPfalse) {
        CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_131));
        T6 = CALL1(1,FREEREF(2),YPfalse);
      } else {
      }
      T12 = CALL1(1,VARREF(Yprop_getter),propF3830);
      getterF3831 = T12;
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)32));
      T7 = CALL1(1,VARREF(YgooSfunYfun_name),getterF3831);
      CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T7);
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_132));
      T8 = CALL1(1,getterF3831,FREEREF(0));
      CALL2(0,FREEREF(4),T8,FREEREF(3));
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1464F3826);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1463F3827);
      a168_0 = T10;
      a168_1 = T11;
      x_1464F3826 = a168_0;
      x_1463F3827 = a168_1;
      goto LOOP_168;
      T0 = T9;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_58) {
  P T0;
LINK_STACK();
  T0 = VARSET(YgooSclassYTreport_prop_unbound_errorsQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_59) {
  P blow_;
  P x_1462F3832;
  P T0,T1,T2;
LINK_STACK();
  ARG(blow_, 0);
  x_1462F3832 = VARREF(YgooSclassYTreport_prop_unbound_errorsQT);
  T1 = FUNFAB(fun_57,5,FREEREF(0),FREEREF(1),blow_,FREEREF(2),FREEREF(3));
  T2 = FUNFAB(fun_58,1,x_1462F3832);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recurring_write_60) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_128));
  T1 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_59,4,x_,port_,d_,recur_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_133));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_recurring_write_61) {
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

LOCCODEDEF(fun_arg_62) {
  P char_,class_;
  P tmpF3835;
  P argumentF3834;
  P current_indexF3833;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
  T11 = BOXGET(FREEREF(0));
  current_indexF3833 = T11;
  T1 = BOXGET(FREEREF(0));
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)1));
  BOXPUT(T0,FREEREF(0));
  T3 = CALL2(1,VARREF(YgooSmagYL),current_indexF3833,FREEREF(1));
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T4 = CALL3(1,VARREF(Yassert_error),LITREF(lit_140),FREEREF(2),FREEREF(3));
  } else {
  }
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),current_indexF3833);
  argumentF3834 = T10;
  T8 = CALL2(1,VARREF(YgooSmacrosYEE),class_,VARREF(YLanyG));
  tmpF3835 = T8;
  if (tmpF3835 != YPfalse) {
    T6 = tmpF3835;
  } else {
    T7 = CALL2(1,VARREF(YisaQ),argumentF3834,class_);
    T6 = T7;
  }
  T5 = CALL1(1,VARREF(Ynot),T6);
  if (T5 != YPfalse) {
    T9 = CALL4(1,VARREF(Yassert_error),LITREF(lit_141),char_,class_,argumentF3834);
  } else {
  }
UNLINK_STACK();
  QRET(argumentF3834);
}

LOCCODEDEF(fun_63) {
  P c_;
  P x_1467F3837;
  P x_1466F3836;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
LINK_STACK();
  ARG(c_, 0);
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T42 = CALL1(1,VARREF(YgooSchrYto_upper),c_);
    x_1466F3836 = T42;
    x_1467F3837 = VARREF(YgooSmacrosYEE);
    T3 = CALL2(1,x_1467F3837,x_1466F3836,YPchr((P)68));
    if (T3 != YPfalse) {
      T6 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T5);
      T2 = T4;
    } else {
      T8 = CALL2(1,x_1467F3837,x_1466F3836,YPchr((P)66));
      if (T8 != YPfalse) {
        T11 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T10 = CALL2(1,VARREF(YgooSmathYnum_to_str),T11,YPint((P)2));
        T9 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T10);
        T7 = T9;
      } else {
        T13 = CALL2(1,x_1467F3837,x_1466F3836,YPchr((P)79));
        if (T13 != YPfalse) {
          T16 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T15 = CALL2(1,VARREF(YgooSmathYnum_to_str),T16,YPint((P)8));
          T14 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T15);
          T12 = T14;
        } else {
          T18 = CALL2(1,x_1467F3837,x_1466F3836,YPchr((P)88));
          if (T18 != YPfalse) {
            T21 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T20 = CALL2(1,VARREF(YgooSmathYnum_to_str),T21,YPint((P)16));
            T19 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T20);
            T17 = T19;
          } else {
            T23 = CALL2(1,x_1467F3837,x_1466F3836,YPchr((P)67));
            if (T23 != YPfalse) {
              T25 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T24 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),T25);
              T22 = T24;
            } else {
              T27 = CALL2(1,x_1467F3837,x_1466F3836,YPchr((P)83));
              if (T27 != YPfalse) {
                T29 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T28 = CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T29);
                T26 = T28;
              } else {
                T31 = CALL2(1,x_1467F3837,x_1466F3836,YPchr((P)61));
                if (T31 != YPfalse) {
                  T33 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T32 = CALL2(1,VARREF(YgooSioSwriteYwrite),FREEREF(1),T33);
                  T30 = T32;
                } else {
                  T35 = CALL2(1,x_1467F3837,x_1466F3836,YPchr((P)84));
                  if (T35 != YPfalse) {
                    T37 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                    T36 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(1),T37);
                    T34 = T36;
                  } else {
                    T39 = CALL2(1,x_1467F3837,x_1466F3836,YPchr((P)37));
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

LOCCODEDEF(fun_msg_64) {
  P port_,message_,arguments_;
  P argF3841;
  P num_argumentsF3840;
  P argument_indexF3839;
  P found_percentQF3838;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
  found_percentQF3838 = YPfalse;
  found_percentQF3838 = BOXFAB(found_percentQF3838);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF3839 = YPint((P)0);
  argument_indexF3839 = BOXFAB(argument_indexF3839);
  T10 = CALL1(1,VARREF(YgooStypesYlen),arguments_);
  num_argumentsF3840 = T10;
  T4 = FUNSHELL(1,fun_arg_62,4);
  argF3841 = T4;
  FUNINIT(argF3841, 4,argument_indexF3839,num_argumentsF3840,message_,arguments_);
  T3 = FUNFAB(fun_63,4,found_percentQF3838,port_,argF3841,message_);
  T2 = CALL2(1,VARREF(YgooSmacrosYdo),T3,message_);
  T8 = BOXGET(found_percentQF3838);
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

LOCCODEDEF(fun_post_65) {
  P message_,arguments_;
  P T0;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
  T0 = CALL5(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg),YPfalse,VARREF(YgooSioSportYout),message_,arguments_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_maybe_pack_chars_66) {
  P UF3842;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  T2 = CALL1(1,VARREF(YgooSmacrosYnulQ),FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = BOXGET(FREEREF(1));
    UF3842 = T10;
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
    T7 = CALL1(1,VARREF(Ylst),FREEREF(2));
    T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),FREEREF(0));
    T8 = CALL1(1,VARREF(Ylst),T9);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T8,LITREF(lit_151));
    T4 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3842,T5);
    T3 = BOXPUT(T4,FREEREF(1));
    T11 = CALL1(1,VARREF(YgooScolsScolxYzapX),FREEREF(0));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_arg_67) {
  P char_;
  P current_indexF3843;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(char_, 0);
  CALL0(1,FREEREF(0));
  T6 = BOXGET(FREEREF(1));
  current_indexF3843 = T6;
  T1 = BOXGET(FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)1));
  BOXPUT(T0,FREEREF(1));
  T3 = CALL2(1,VARREF(YgooSmagYL),current_indexF3843,FREEREF(2));
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T4 = CALL3(1,VARREF(Yassert_error),LITREF(lit_153),FREEREF(3),FREEREF(4));
  } else {
  }
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(4),current_indexF3843);
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_68) {
  P c_;
  P UF3853;
  P UF3852;
  P UF3851;
  P UF3850;
  P UF3849;
  P UF3848;
  P UF3847;
  P UF3846;
  P x_1469F3845;
  P x_1468F3844;
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
    x_1468F3844 = T101;
    x_1469F3845 = VARREF(YgooSmacrosYEE);
    T3 = CALL2(1,x_1469F3845,x_1468F3844,YPchr((P)68));
    if (T3 != YPfalse) {
      T14 = BOXGET(FREEREF(1));
      UF3846 = T14;
      T7 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
      T8 = CALL1(1,VARREF(Ylst),FREEREF(2));
      T11 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
      T13 = CALL1(1,FREEREF(3),c_);
      T12 = CALL1(1,VARREF(Ylst),T13);
      T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,LITREF(lit_151));
      T9 = CALL1(1,VARREF(Ylst),T10);
      T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T9,LITREF(lit_151));
      T5 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3846,T6);
      T4 = BOXPUT(T5,FREEREF(1));
      T2 = T4;
    } else {
      T16 = CALL2(1,x_1469F3845,x_1468F3844,YPchr((P)66));
      if (T16 != YPfalse) {
        T28 = BOXGET(FREEREF(1));
        UF3847 = T28;
        T20 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
        T21 = CALL1(1,VARREF(Ylst),FREEREF(2));
        T24 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
        T26 = CALL1(1,FREEREF(3),c_);
        T25 = CALL1(1,VARREF(Ylst),T26);
        T27 = CALL1(1,VARREF(Ylst),YPint((P)2));
        T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,LITREF(lit_151));
        T22 = CALL1(1,VARREF(Ylst),T23);
        T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T22,LITREF(lit_151));
        T18 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3847,T19);
        T17 = BOXPUT(T18,FREEREF(1));
        T15 = T17;
      } else {
        T30 = CALL2(1,x_1469F3845,x_1468F3844,YPchr((P)79));
        if (T30 != YPfalse) {
          T42 = BOXGET(FREEREF(1));
          UF3848 = T42;
          T34 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
          T35 = CALL1(1,VARREF(Ylst),FREEREF(2));
          T38 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
          T40 = CALL1(1,FREEREF(3),c_);
          T39 = CALL1(1,VARREF(Ylst),T40);
          T41 = CALL1(1,VARREF(Ylst),YPint((P)8));
          T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T41,LITREF(lit_151));
          T36 = CALL1(1,VARREF(Ylst),T37);
          T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T36,LITREF(lit_151));
          T32 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3848,T33);
          T31 = BOXPUT(T32,FREEREF(1));
          T29 = T31;
        } else {
          T44 = CALL2(1,x_1469F3845,x_1468F3844,YPchr((P)88));
          if (T44 != YPfalse) {
            T56 = BOXGET(FREEREF(1));
            UF3849 = T56;
            T48 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
            T49 = CALL1(1,VARREF(Ylst),FREEREF(2));
            T52 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
            T54 = CALL1(1,FREEREF(3),c_);
            T53 = CALL1(1,VARREF(Ylst),T54);
            T55 = CALL1(1,VARREF(Ylst),YPint((P)16));
            T51 = CALL4(1,VARREF(YgooSmacrosYcat),T52,T53,T55,LITREF(lit_151));
            T50 = CALL1(1,VARREF(Ylst),T51);
            T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,LITREF(lit_151));
            T46 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3849,T47);
            T45 = BOXPUT(T46,FREEREF(1));
            T43 = T45;
          } else {
            T58 = CALL2(1,x_1469F3845,x_1468F3844,YPchr((P)67));
            if (T58 != YPfalse) {
              T66 = BOXGET(FREEREF(1));
              UF3850 = T66;
              T62 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
              T63 = CALL1(1,VARREF(Ylst),FREEREF(2));
              T65 = CALL2(1,FREEREF(3),c_,VARREF(YLchrG));
              T64 = CALL1(1,VARREF(Ylst),T65);
              T61 = CALL4(1,VARREF(YgooSmacrosYcat),T62,T63,T64,LITREF(lit_151));
              T60 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3850,T61);
              T59 = BOXPUT(T60,FREEREF(1));
              T57 = T59;
            } else {
              T68 = CALL2(1,x_1469F3845,x_1468F3844,YPchr((P)83));
              if (T68 != YPfalse) {
                T76 = BOXGET(FREEREF(1));
                UF3851 = T76;
                T72 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
                T73 = CALL1(1,VARREF(Ylst),FREEREF(2));
                T75 = CALL1(1,FREEREF(3),c_);
                T74 = CALL1(1,VARREF(Ylst),T75);
                T71 = CALL4(1,VARREF(YgooSmacrosYcat),T72,T73,T74,LITREF(lit_151));
                T70 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3851,T71);
                T69 = BOXPUT(T70,FREEREF(1));
                T67 = T69;
              } else {
                T78 = CALL2(1,x_1469F3845,x_1468F3844,YPchr((P)61));
                if (T78 != YPfalse) {
                  T86 = BOXGET(FREEREF(1));
                  UF3852 = T86;
                  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
                  T83 = CALL1(1,VARREF(Ylst),FREEREF(2));
                  T85 = CALL1(1,FREEREF(3),c_);
                  T84 = CALL1(1,VARREF(Ylst),T85);
                  T81 = CALL4(1,VARREF(YgooSmacrosYcat),T82,T83,T84,LITREF(lit_151));
                  T80 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3852,T81);
                  T79 = BOXPUT(T80,FREEREF(1));
                  T77 = T79;
                } else {
                  T88 = CALL2(1,x_1469F3845,x_1468F3844,YPchr((P)84));
                  if (T88 != YPfalse) {
                    T96 = BOXGET(FREEREF(1));
                    UF3853 = T96;
                    T92 = CALL1(1,VARREF(Ylst),LITREF(lit_121));
                    T93 = CALL1(1,VARREF(Ylst),FREEREF(2));
                    T95 = CALL1(1,FREEREF(3),c_);
                    T94 = CALL1(1,VARREF(Ylst),T95);
                    T91 = CALL4(1,VARREF(YgooSmacrosYcat),T92,T93,T94,LITREF(lit_151));
                    T90 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3853,T91);
                    T89 = BOXPUT(T90,FREEREF(1));
                    T87 = T89;
                  } else {
                    T98 = CALL2(1,x_1469F3845,x_1468F3844,YPchr((P)37));
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
  P exprsF3862;
  P argF3861;
  P maybe_pack_charsF3860;
  P packer_F3859;
  P portF3858;
  P charsF3857;
  P num_argsF3856;
  P arg_indexF3855;
  P found_percentQF3854;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
  found_percentQF3854 = YPfalse;
  found_percentQF3854 = BOXFAB(found_percentQF3854);
  check_type(YPint((P)0),VARREF(YLintG));
  arg_indexF3855 = YPint((P)0);
  arg_indexF3855 = BOXFAB(arg_indexF3855);
  T24 = CALL1(1,VARREF(YgooStypesYlen),args_);
  num_argsF3856 = T24;
  T23 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  charsF3857 = T23;
  T22 = CALL0(1,VARREF(YgooSmacrosYgensym));
  portF3858 = T22;
  T21 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F3859 = T21;
  packer_F3859 = BOXFAB(packer_F3859);
  T17 = FUNSHELL(1,fun_maybe_pack_chars_66,3);
  maybe_pack_charsF3860 = T17;
  T18 = FUNSHELL(1,fun_arg_67,5);
  argF3861 = T18;
  FUNINIT(maybe_pack_charsF3860, 3,charsF3857,packer_F3859,portF3858);
  FUNINIT(argF3861, 5,maybe_pack_charsF3860,arg_indexF3855,num_argsF3856,message_,args_);
  T15 = FUNFAB(fun_68,6,found_percentQF3854,packer_F3859,portF3858,argF3861,charsF3857,message_);
  CALL2(1,VARREF(YgooSmacrosYdo),T15,message_);
  T16 = CALL0(1,maybe_pack_charsF3860);
  T20 = BOXGET(packer_F3859);
  T19 = CALL1(1,VARREF(YgooSpackerYpacker_res),T20);
  exprsF3862 = T19;
  T4 = BOXGET(found_percentQF3854);
  T3 = CALL1(1,VARREF(Ynot),T4);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T5 = CALL2(1,VARREF(Yassert_error),LITREF(lit_158),message_);
  } else {
  }
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_159));
  T12 = CALL1(1,VARREF(Ylst),portF3858);
  T13 = CALL1(1,VARREF(Ylst),port_expr_);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T13,LITREF(lit_151));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T9 = CALL2(1,VARREF(YgooSmacrosYcat),T10,LITREF(lit_151));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,exprsF3862,LITREF(lit_151));
UNLINK_STACK();
  QRET(T6);
}

LOCCODEDEF(fun_x_1473_70) {
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

LOCCODEDEF(fun_71) {
  P return_;
  P x_1472F3871;
  P x_1472F3870;
  P x_1472F3869;
  P x_1472F3868;
  P argsF3867;
  P messageF3866;
  P portF3865;
  P x_1472F3864;
  P x_1473F3863;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T25 = FUNSHELL(0,fun_x_1473_70,2);
  x_1473F3863 = T25;
  FUNINIT(x_1473F3863, 2,FREEREF(0),return_);
  x_1472F3864 = FREEREF(0);
  portF3865 = YPfalse;
  messageF3866 = YPfalse;
  argsF3867 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1472F3864,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1472F3864,LITREF(lit_164),x_1473F3863);
    x_1472F3868 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1472F3868,x_1473F3863);
    portF3865 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1472F3868);
    x_1472F3869 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1472F3869,x_1473F3863);
    messageF3866 = T5;
    T6 = CALL1(1,VARREF(Ytail),x_1472F3869);
    x_1472F3870 = T6;
    argsF3867 = x_1472F3870;
    x_1472F3871 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1472F3871,x_1473F3863);
  } else {
    T10 = CALL2(1,x_1473F3863,LITREF(lit_165),x_1472F3864);
  }
  T13 = messageF3866;
  T12 = CALL2(1,VARREF(YisaQ),T13,VARREF(YLstrG));
  if (T12 != YPfalse) {
    T15 = portF3865;
    T16 = messageF3866;
    T17 = argsF3867;
    T14 = CALL3(1,VARREF(YgooSioSwriteYpe_msg),T15,T16,T17);
    T11 = T14;
  } else {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_136));
    T21 = portF3865;
    T20 = CALL1(1,VARREF(Ylst),T21);
    T23 = messageF3866;
    T22 = CALL1(1,VARREF(Ylst),T23);
    T24 = argsF3867;
    T18 = CALL5(1,VARREF(YgooSmacrosYcat),T19,T20,T22,T24,LITREF(lit_151));
    T11 = T18;
  }
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_72) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_71,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_73) {
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_13));
  BOXPUT(T0,FREEREF(0));
  T1 = BOXGET(FREEREF(0));
  CALL5(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg),YPfalse,T1,FREEREF(1),FREEREF(2));
  T3 = BOXGET(FREEREF(0));
  T2 = CALL1(1,VARREF(YgooSioSportYport_contents),T3);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_74) {
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
  P portF3872;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
  portF3872 = YPfalse;
  portF3872 = BOXFAB(portF3872);
  T2 = FUNFAB(fun_73,3,portF3872,message_,arguments_);
  T3 = FUNFAB(fun_74,1,portF3872);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  RET(T1);
}

FUNCODEDEF(YgooSioSwriteYsay) {
  P port_,args_;
  P iF3874;
  P limF3873;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  NARGS(args_, 1);
  T7 = CALL1(1,VARREF(YgooStypesYlen),args_);
  limF3873 = T7;
  iF3874 = YPint((P)0);
  LOOP_169: {
    P a169_0;
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),iF3874,limF3873);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooScolsScolYlow_elt),args_,iF3874);
      T3 = CALL1(1,VARREF(YgooSanyYto_str),T4);
      CALL2(1,VARREF(YgooSioSportYputs),port_,T3);
      T6 = CALL2(1,VARREF(YgooSmathYA),iF3874,YPint((P)1));
      a169_0 = T6;
      iF3874 = a169_0;
      goto LOOP_169;
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
  P T128,T129;
DEFCREGS();
  DYNDEFSET(YgooSioSwriteYTmax_print_depthT,YPint((P)4));
  DYNDEFSET(YgooSioSwriteYTmax_print_lengthT,YPint((P)12));
  lit_0 = YPPsym((P)"as-binding-name");
  lit_1 = YPPlist(1,YPPsym((P)"name"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_binding_name_0 = YPfab_met(FUNCODEREF(fun_as_binding_name_0),T0,LITREF(lit_0),LITREF(lit_1),sloc(25),YPfalse);
  T2 = VARREF_OR(YgooSioSwriteYas_binding_name,YPfalse);
  T3 = fun_as_binding_name_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSioSwriteYas_binding_name,T1);
  lit_2 = YPPsym((P)"do-emit");
  lit_3 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T4 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_1 = YPfab_met(FUNCODEREF(fun_do_emit_1),T4,LITREF(lit_2),LITREF(lit_3),sloc(28),YPfalse);
  T6 = VARREF_OR(YgooSioSwriteYdo_emit,YPfalse);
  T7 = fun_do_emit_1;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooSioSwriteYdo_emit,T5);
  lit_4 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T8 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_2 = YPfab_met(FUNCODEREF(fun_do_emit_2),T8,LITREF(lit_2),LITREF(lit_4),sloc(31),YPfalse);
  T10 = VARREF_OR(YgooSioSwriteYdo_emit,YPfalse);
  T11 = fun_do_emit_2;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooSioSwriteYdo_emit,T9);
  lit_5 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T12 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_3 = YPfab_met(FUNCODEREF(fun_do_emit_3),T12,LITREF(lit_2),LITREF(lit_5),sloc(34),YPfalse);
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
  fun_recur_4 = YPfab_met(FUNCODEREF(fun_recur_4),T17,LITREF(lit_8),LITREF(lit_9),sloc(38),YPfalse);
  T16 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_emit_5 = YPfab_met(FUNCODEREF(fun_emit_5),T16,LITREF(lit_6),LITREF(lit_7),sloc(37),YPfalse);
  T19 = VARREF_OR(YgooSioSwriteYemit,YPfalse);
  T20 = fun_emit_5;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YgooSioSwriteYemit,T18);
  lit_11 = YPPsym((P)"write-to-string");
  lit_12 = YPPlist(1,YPPsym((P)"x"));
  lit_13 = YPsb((P)"");
  T21 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_write_to_string_6 = YPfab_met(FUNCODEREF(fun_write_to_string_6),T21,LITREF(lit_11),LITREF(lit_12),sloc(43),YPfalse);
  T23 = VARREF_OR(YgooSioSwriteYwrite_to_string,YPfalse);
  T24 = fun_write_to_string_6;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YgooSioSwriteYwrite_to_string,T22);
  lit_14 = YPPsym((P)"write");
  lit_15 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_16 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  lit_17 = YPsb((P)"*");
  T26 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_7 = YPfab_met(FUNCODEREF(fun_recur_7),T26,LITREF(lit_8),LITREF(lit_16),sloc(47),YPfalse);
  T25 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_8 = YPfab_met(FUNCODEREF(fun_write_8),T25,LITREF(lit_14),LITREF(lit_15),sloc(46),YPfalse);
  T28 = VARREF_OR(YgooSioSwriteYwrite,YPfalse);
  T29 = fun_write_8;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSioSwriteYwrite,T27);
  lit_18 = YPPsym((P)"writeln");
  lit_19 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_writeln_9 = YPfab_met(FUNCODEREF(fun_writeln_9),T30,LITREF(lit_18),LITREF(lit_19),sloc(52),YPfalse);
  T32 = VARREF_OR(YgooSioSwriteYwriteln,YPfalse);
  T33 = fun_writeln_9;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooSioSwriteYwriteln,T31);
  lit_20 = YPPsym((P)"recurring-write");
  lit_21 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_22 = YPsb((P)"()");
  T34 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_10 = YPfab_met(FUNCODEREF(fun_recurring_write_10),T34,LITREF(lit_20),LITREF(lit_21),sloc(55),YPfalse);
  T36 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T37 = fun_recurring_write_10;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YgooSioSwriteYrecurring_write,T35);
  lit_23 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_24 = YPsb((P)"$$");
  lit_25 = YPsb((P)"(");
  lit_26 = YPsb((P)")");
  T38 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_11 = YPfab_met(FUNCODEREF(fun_recurring_write_11),T38,LITREF(lit_20),LITREF(lit_23),sloc(60),YPfalse);
  T40 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T41 = fun_recurring_write_11;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooSioSwriteYrecurring_write,T39);
  lit_27 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_28 = YPsb((P)"#(");
  lit_29 = YPsb((P)")");
  T42 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLtupG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_12 = YPfab_met(FUNCODEREF(fun_recurring_write_12),T42,LITREF(lit_20),LITREF(lit_27),sloc(64),YPfalse);
  T44 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T45 = fun_recurring_write_12;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooSioSwriteYrecurring_write,T43);
  lit_30 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_31 = YPsb((P)"#[");
  lit_32 = YPsb((P)"]");
  T46 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_13 = YPfab_met(FUNCODEREF(fun_recurring_write_13),T46,LITREF(lit_20),LITREF(lit_30),sloc(67),YPfalse);
  T48 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T49 = fun_recurring_write_13;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooSioSwriteYrecurring_write,T47);
  lit_33 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T50 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_14 = YPfab_met(FUNCODEREF(fun_recurring_write_14),T50,LITREF(lit_20),LITREF(lit_33),sloc(70),YPfalse);
  T52 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T53 = fun_recurring_write_14;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooSioSwriteYrecurring_write,T51);
  lit_34 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_35 = YPPsym((P)"t");
  lit_36 = YPPsym((P)"f");
  T54 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_15 = YPfab_met(FUNCODEREF(fun_recurring_write_15),T54,LITREF(lit_20),LITREF(lit_34),sloc(73),YPfalse);
  T56 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T57 = fun_recurring_write_15;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooSioSwriteYrecurring_write,T55);
  lit_37 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T58 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsymG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_16 = YPfab_met(FUNCODEREF(fun_recurring_write_16),T58,LITREF(lit_20),LITREF(lit_37),sloc(78),YPfalse);
  T60 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T61 = fun_recurring_write_16;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooSioSwriteYrecurring_write,T59);
  lit_38 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_39 = YPsb((P)"&0x");
  T62 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlocG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_17 = YPfab_met(FUNCODEREF(fun_recurring_write_17),T62,LITREF(lit_20),LITREF(lit_38),sloc(81),YPfalse);
  T64 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T65 = fun_recurring_write_17;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooSioSwriteYrecurring_write,T63);
  lit_40 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_41 = YPsb((P)"<num>");
  T66 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_18 = YPfab_met(FUNCODEREF(fun_recurring_write_18),T66,LITREF(lit_20),LITREF(lit_40),sloc(85),YPfalse);
  T68 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T69 = fun_recurring_write_18;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooSioSwriteYrecurring_write,T67);
  lit_42 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T70 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_19 = YPfab_met(FUNCODEREF(fun_recurring_write_19),T70,LITREF(lit_20),LITREF(lit_42),sloc(90),YPfalse);
  T72 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T73 = fun_recurring_write_19;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSioSwriteYrecurring_write,T71);
  lit_43 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T74 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_20 = YPfab_met(FUNCODEREF(fun_recurring_write_20),T74,LITREF(lit_20),LITREF(lit_43),sloc(93),YPfalse);
  T76 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T77 = fun_recurring_write_20;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooSioSwriteYrecurring_write,T75);
  lit_44 = YPPsym((P)"write-boolean");
  lit_45 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"mumble"));
  T78 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_boolean_21 = YPfab_met(FUNCODEREF(fun_write_boolean_21),T78,LITREF(lit_44),LITREF(lit_45),sloc(96),YPfalse);
  T80 = VARREF_OR(YgooSioSwriteYwrite_boolean,YPfalse);
  T81 = fun_write_boolean_21;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YgooSioSwriteYwrite_boolean,T79);
  lit_46 = YPPsym((P)"write-number");
  lit_47 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T82 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_number_22 = YPfab_met(FUNCODEREF(fun_write_number_22),T82,LITREF(lit_46),LITREF(lit_47),sloc(100),YPfalse);
  T84 = VARREF_OR(YgooSioSwriteYwrite_number,YPfalse);
  T85 = fun_write_number_22;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YgooSioSwriteYwrite_number,T83);
  lit_48 = YPPsym((P)"write-char-literal");
  lit_49 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_50 = YPsb((P)"#\\");
  T86 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_char_literal_23 = YPfab_met(FUNCODEREF(fun_write_char_literal_23),T86,LITREF(lit_48),LITREF(lit_49),sloc(103),YPfalse);
  T88 = VARREF_OR(YgooSioSwriteYwrite_char_literal,YPfalse);
  T89 = fun_write_char_literal_23;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YgooSioSwriteYwrite_char_literal,T87);
  lit_51 = YPPsym((P)"character-name");
  lit_52 = YPPlist(1,YPPsym((P)"char"));
  T90 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_character_name_24 = YPfab_met(FUNCODEREF(fun_character_name_24),T90,LITREF(lit_51),LITREF(lit_52),sloc(110),YPfalse);
  T92 = VARREF_OR(YgooSioSwriteYcharacter_name,YPfalse);
  T93 = fun_character_name_24;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YgooSioSwriteYcharacter_name,T91);
  lit_53 = YPPsym((P)"write-string-literal");
  lit_54 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T94 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_string_literal_25 = YPfab_met(FUNCODEREF(fun_write_string_literal_25),T94,LITREF(lit_53),LITREF(lit_54),sloc(114),YPfalse);
  T96 = VARREF_OR(YgooSioSwriteYwrite_string_literal,YPfalse);
  T97 = fun_write_string_literal_25;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YgooSioSwriteYwrite_string_literal,T95);
  lit_55 = YPPsym((P)"write-list");
  lit_56 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_57 = YPsb((P)" ...");
  T98 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_list_26 = YPfab_met(FUNCODEREF(fun_write_list_26),T98,LITREF(lit_55),LITREF(lit_56),sloc(126),YPfalse);
  T100 = VARREF_OR(YgooSioSwriteYwrite_list,YPfalse);
  T101 = fun_write_list_26;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YgooSioSwriteYwrite_list,T99);
  lit_58 = YPPsym((P)"quotation?");
  lit_59 = YPPlist(1,YPPsym((P)"x"));
  lit_60 = YPPsym((P)"quote");
  T102 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_quotationQ_27 = YPfab_met(FUNCODEREF(fun_quotationQ_27),T102,LITREF(lit_58),LITREF(lit_59),sloc(141),YPfalse);
  T104 = VARREF_OR(YgooSioSwriteYquotationQ,YPfalse);
  T105 = fun_quotationQ_27;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YgooSioSwriteYquotationQ,T103);
  lit_61 = YPPsym((P)"write-flat");
  lit_62 = YPPlist(6,YPPsym((P)"port"),YPPsym((P)"prefix"),YPPsym((P)"x"),YPPsym((P)"suffix"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_63 = YPsb((P)" ...");
  T106 = YPfab_sig(YPPlist(6,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLflatG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_write_flat_28 = YPfab_met(FUNCODEREF(fun_write_flat_28),T106,LITREF(lit_61),LITREF(lit_62),sloc(147),YPfalse);
  T108 = VARREF_OR(YgooSioSwriteYwrite_flat,YPfalse);
  T109 = fun_write_flat_28;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YgooSioSwriteYwrite_flat,T107);
  lit_64 = YPPsym((P)"write-map");
  lit_65 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_66 = YPsb((P)"#<");
  lit_67 = YPPlist(1,YPPsym((P)"blow"));
  lit_68 = YPsb((P)" ...");
  lit_69 = YPsb((P)": ");
  T111 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPfab_met(FUNCODEREF(fun_29),T111,YPfalse,LITREF(lit_67),sloc(165),YPfalse);
  T110 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_map_30 = YPfab_met(FUNCODEREF(fun_write_map_30),T110,LITREF(lit_64),LITREF(lit_65),sloc(162),YPfalse);
  T113 = VARREF_OR(YgooSioSwriteYwrite_map,YPfalse);
  T114 = fun_write_map_30;
  T112 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T113,T114);
  VARSET(YgooSioSwriteYwrite_map,T112);
  lit_70 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_71 = YPsb((P)"#{File-in-port %s %d}");
  T115 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLfile_in_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_31 = YPfab_met(FUNCODEREF(fun_recurring_write_31),T115,LITREF(lit_20),LITREF(lit_70),sloc(175),YPfalse);
  T117 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T118 = fun_recurring_write_31;
  T116 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T117,T118);
  VARSET(YgooSioSwriteYrecurring_write,T116);
  lit_72 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_73 = YPsb((P)"#{File-out-port %s}");
  T119 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLfile_out_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_32 = YPfab_met(FUNCODEREF(fun_recurring_write_32),T119,LITREF(lit_20),LITREF(lit_72),sloc(178),YPfalse);
  T121 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T122 = fun_recurring_write_32;
  T120 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T121,T122);
  VARSET(YgooSioSwriteYrecurring_write,T120);
  lit_74 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_75 = YPsb((P)"#{In-port}");
  T125 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLin_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T124 = fun_recurring_write_33 = YPfab_met(FUNCODEREF(fun_recurring_write_33),T125,LITREF(lit_20),LITREF(lit_74),sloc(181),YPfalse);
  T128 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T129 = fun_recurring_write_33;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  T126 = VARSET(YgooSioSwriteYrecurring_write,T127);
  T123 = T126;
  return T123;
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
  lit_76 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_77 = YPsb((P)"#{Out-port}");
  T0 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLout_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_34 = YPfab_met(FUNCODEREF(fun_recurring_write_34),T0,LITREF(lit_20),LITREF(lit_76),sloc(184),YPfalse);
  T2 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T3 = fun_recurring_write_34;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSioSwriteYrecurring_write,T1);
  lit_78 = YPPsym((P)"write-params");
  lit_79 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"recur"));
  lit_80 = YPPlist(1,YPPsym((P)"x"));
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  lit_82 = YPsb((P)"(%s ");
  lit_83 = YPsb((P)" => ");
  T6 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_35 = YPfab_met(FUNCODEREF(fun_35),T6,YPfalse,LITREF(lit_80),sloc(193),YPfalse);
  T5 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_36 = YPfab_met(FUNCODEREF(fun_36),T5,YPfalse,LITREF(lit_81),sloc(193),YPfalse);
  T4 = YPfab_sig(YPPlist(3,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_write_params_37 = YPfab_met(FUNCODEREF(fun_write_params_37),T4,LITREF(lit_78),LITREF(lit_79),sloc(189),YPfalse);
  T8 = VARREF_OR(YgooSioSwriteYwrite_params,YPfalse);
  T9 = fun_write_params_37;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSioSwriteYwrite_params,T7);
  lit_84 = YPPsym((P)"write-fun-guts");
  lit_85 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"name"),YPPsym((P)"recur"));
  lit_86 = YPsb((P)"#{");
  lit_87 = YPsb((P)"}");
  T10 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_fun_guts_38 = YPfab_met(FUNCODEREF(fun_write_fun_guts_38),T10,LITREF(lit_84),LITREF(lit_85),sloc(205),YPfalse);
  T12 = VARREF_OR(YgooSioSwriteYwrite_fun_guts,YPfalse);
  T13 = fun_write_fun_guts_38;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSioSwriteYwrite_fun_guts,T11);
  lit_88 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_89 = YPsb((P)"Gen");
  T14 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLgenG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_39 = YPfab_met(FUNCODEREF(fun_recurring_write_39),T14,LITREF(lit_20),LITREF(lit_88),sloc(215),YPfalse);
  T16 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T17 = fun_recurring_write_39;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooSioSwriteYrecurring_write,T15);
  lit_90 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_91 = YPsb((P)"Met");
  T18 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLmetG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_40 = YPfab_met(FUNCODEREF(fun_recurring_write_40),T18,LITREF(lit_20),LITREF(lit_90),sloc(218),YPfalse);
  T20 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T21 = fun_recurring_write_40;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YgooSioSwriteYrecurring_write,T19);
  lit_92 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_93 = YPsb((P)"<SRC-LOC %= %s>");
  T22 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsrc_locG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_41 = YPfab_met(FUNCODEREF(fun_recurring_write_41),T22,LITREF(lit_20),LITREF(lit_92),sloc(221),YPfalse);
  T24 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T25 = fun_recurring_write_41;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooSioSwriteYrecurring_write,T23);
  lit_94 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_95 = YPsb((P)"#{Class ");
  lit_96 = YPsb((P)" ");
  lit_97 = YPsb((P)"}");
  T26 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_42 = YPfab_met(FUNCODEREF(fun_recurring_write_42),T26,LITREF(lit_20),LITREF(lit_94),sloc(224),YPfalse);
  T28 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T29 = fun_recurring_write_42;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSioSwriteYrecurring_write,T27);
  lit_98 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_99 = YPsb((P)"#{T= ");
  lit_100 = YPsb((P)"}");
  T30 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsingletonG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_43 = YPfab_met(FUNCODEREF(fun_recurring_write_43),T30,LITREF(lit_20),LITREF(lit_98),sloc(231),YPfalse);
  T32 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T33 = fun_recurring_write_43;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooSioSwriteYrecurring_write,T31);
  lit_101 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_102 = YPsb((P)"#{T< ");
  lit_103 = YPsb((P)"}");
  T34 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsubclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_44 = YPfab_met(FUNCODEREF(fun_recurring_write_44),T34,LITREF(lit_20),LITREF(lit_101),sloc(236),YPfalse);
  T36 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T37 = fun_recurring_write_44;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YgooSioSwriteYrecurring_write,T35);
  lit_104 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_105 = YPsb((P)"#{T+");
  lit_106 = YPPlist(1,YPPsym((P)"t"));
  lit_107 = YPsb((P)"}");
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPfab_met(FUNCODEREF(fun_45),T39,YPfalse,LITREF(lit_106),sloc(243),YPfalse);
  T38 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLunionG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_46 = YPfab_met(FUNCODEREF(fun_recurring_write_46),T38,LITREF(lit_20),LITREF(lit_104),sloc(241),YPfalse);
  T41 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T42 = fun_recurring_write_46;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YgooSioSwriteYrecurring_write,T40);
  lit_108 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_109 = YPsb((P)"#{T*");
  lit_110 = YPPlist(1,YPPsym((P)"t"));
  lit_111 = YPsb((P)"}");
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPfab_met(FUNCODEREF(fun_47),T44,YPfalse,LITREF(lit_110),sloc(248),YPfalse);
  T43 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_48 = YPfab_met(FUNCODEREF(fun_recurring_write_48),T43,LITREF(lit_20),LITREF(lit_108),sloc(246),YPfalse);
  T46 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T47 = fun_recurring_write_48;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooSioSwriteYrecurring_write,T45);
  lit_112 = YPPsym((P)"write-value-type");
  lit_113 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_114 = YPsb((P)"(tup");
  lit_115 = YPPlist(1,YPPsym((P)"t"));
  lit_116 = YPsb((P)")");
  T49 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPfab_met(FUNCODEREF(fun_49),T49,YPfalse,LITREF(lit_115),sloc(253),YPfalse);
  T48 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_50 = YPfab_met(FUNCODEREF(fun_write_value_type_50),T48,LITREF(lit_112),LITREF(lit_113),sloc(251),YPfalse);
  T51 = VARREF_OR(YgooSioSwriteYwrite_value_type,YPfalse);
  T52 = fun_write_value_type_50;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YgooSioSwriteYwrite_value_type,T50);
  lit_117 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T53 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_51 = YPfab_met(FUNCODEREF(fun_write_value_type_51),T53,LITREF(lit_112),LITREF(lit_117),sloc(256),YPfalse);
  T55 = VARREF_OR(YgooSioSwriteYwrite_value_type,YPfalse);
  T56 = fun_write_value_type_51;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YgooSioSwriteYwrite_value_type,T54);
  lit_118 = YPPsym((P)"recurring-write-type");
  lit_119 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T57 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_52 = YPfab_met(FUNCODEREF(fun_recurring_write_type_52),T57,LITREF(lit_118),LITREF(lit_119),sloc(259),YPfalse);
  T59 = VARREF_OR(YgooSioSwriteYrecurring_write_type,YPfalse);
  T60 = fun_recurring_write_type_52;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YgooSioSwriteYrecurring_write_type,T58);
  lit_120 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T61 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_53 = YPfab_met(FUNCODEREF(fun_recurring_write_type_53),T61,LITREF(lit_118),LITREF(lit_120),sloc(262),YPfalse);
  T63 = VARREF_OR(YgooSioSwriteYrecurring_write_type,YPfalse);
  T64 = fun_recurring_write_type_53;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YgooSioSwriteYrecurring_write_type,T62);
  lit_121 = YPPsym((P)"write-type");
  lit_122 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_123 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  T66 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_54 = YPfab_met(FUNCODEREF(fun_recur_54),T66,LITREF(lit_8),LITREF(lit_123),sloc(266),YPfalse);
  T65 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_type_55 = YPfab_met(FUNCODEREF(fun_write_type_55),T65,LITREF(lit_121),LITREF(lit_122),sloc(265),YPfalse);
  T68 = VARREF_OR(YgooSioSwriteYwrite_type,YPfalse);
  T69 = fun_write_type_55;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooSioSwriteYwrite_type,T67);
  lit_124 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_125 = YPsb((P)"#{Prop ");
  lit_126 = YPsb((P)"}");
  T70 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLpropG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_56 = YPfab_met(FUNCODEREF(fun_recurring_write_56),T70,LITREF(lit_20),LITREF(lit_124),sloc(269),YPfalse);
  T72 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T73 = fun_recurring_write_56;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSioSwriteYrecurring_write,T71);
  lit_127 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_128 = YPsb((P)"#{");
  lit_129 = YPPlist(1,YPPsym((P)"blow"));
  lit_130 = Ynil;
  lit_131 = YPsb((P)" ...");
  lit_132 = YPsb((P)": ");
  lit_133 = YPsb((P)"}");
  T77 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_57 = YPfab_met(FUNCODEREF(fun_57),T77,YPfalse,LITREF(lit_130),sloc(278),YPfalse);
  T76 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_58 = YPfab_met(FUNCODEREF(fun_58),T76,YPfalse,LITREF(lit_130),sloc(278),YPfalse);
  T75 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPfab_met(FUNCODEREF(fun_59),T75,YPfalse,LITREF(lit_129),sloc(277),YPfalse);
  T74 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_60 = YPfab_met(FUNCODEREF(fun_recurring_write_60),T74,LITREF(lit_20),LITREF(lit_127),sloc(274),YPfalse);
  T79 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T80 = fun_recurring_write_60;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YgooSioSwriteYrecurring_write,T78);
  lit_134 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_135 = YPsb((P)"#{End-of-file}");
  T83 = XCALL0(1,VARREF(YgooSchrYeof_object));
  T82 = XCALL1(1,VARREF(YgooStypesYtE),T83);
  T81 = YPfab_sig(YPPlist(4,VARREF(YgooSioSportYLout_portG),T82,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_61 = YPfab_met(FUNCODEREF(fun_recurring_write_61),T81,LITREF(lit_20),LITREF(lit_134),sloc(289),YPfalse);
  T85 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T86 = fun_recurring_write_61;
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
  fun_arg_62 = YPfab_met(FUNCODEREF(fun_arg_62),T89,LITREF(lit_138),LITREF(lit_139),sloc(296),YPfalse);
  T88 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPfab_met(FUNCODEREF(fun_63),T88,YPfalse,LITREF(lit_142),sloc(307),YPfalse);
  T87 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_msg_64 = YPfab_met(FUNCODEREF(fun_msg_64),T87,LITREF(lit_136),LITREF(lit_137),sloc(292),YPfalse);
  T91 = VARREF_OR(YgooSconditionsYmsg,YPfalse);
  T92 = fun_msg_64;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YgooSconditionsYmsg,T90);
  lit_145 = YPPsym((P)"post");
  lit_146 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T93 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_post_65 = YPfab_met(FUNCODEREF(fun_post_65),T93,LITREF(lit_145),LITREF(lit_146),sloc(329),YPfalse);
  T95 = VARREF_OR(YgooSioSwriteYpost,YPfalse);
  T96 = fun_post_65;
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
  fun_maybe_pack_chars_66 = YPfab_met(FUNCODEREF(fun_maybe_pack_chars_66),T100,LITREF(lit_149),LITREF(lit_130),sloc(347),YPfalse);
  T99 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_arg_67 = YPfab_met(FUNCODEREF(fun_arg_67),T99,LITREF(lit_138),LITREF(lit_152),sloc(348),YPfalse);
  T98 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPfab_met(FUNCODEREF(fun_68),T98,YPfalse,LITREF(lit_154),sloc(355),YPfalse);
  T97 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSioSwriteYpe_msg = YPfab_met(FUNCODEREF(YgooSioSwriteYpe_msg),T97,LITREF(lit_147),LITREF(lit_148),sloc(336),YPfalse);
  T101 = YgooSioSwriteYpe_msg;
  VARSET(YgooSioSwriteYpe_msg,T101);
  lit_160 = YPPlist(1,YPPsym((P)"exp"));
  lit_161 = YPPlist(1,YPPsym((P)"return"));
  lit_162 = YPPsym((P)"x-1473");
  lit_163 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_164 = YPPsym((P)"msg*");
  lit_165 = YPsb((P)"Match Pattern Failure");
  T104 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1473_70 = YPfab_met(FUNCODEREF(fun_x_1473_70),T104,LITREF(lit_162),LITREF(lit_163),YPfalse,YPfalse);
  T103 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPfab_met(FUNCODEREF(fun_71),T103,YPfalse,LITREF(lit_161),YPfalse,YPfalse);
  T102 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPfab_met(FUNCODEREF(fun_72),T102,YPfalse,LITREF(lit_160),YPfalse,YPfalse);
  T105 = fun_72;
  YPmacro(YPPsym((P)"goo/io/write"),YPPsym((P)"msg*"),T105);
  lit_166 = YPPsym((P)"msg-to-str");
  lit_167 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T108 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_73 = YPfab_met(FUNCODEREF(fun_73),T108,YPfalse,LITREF(lit_130),sloc(388),YPfalse);
  T107 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_74 = YPfab_met(FUNCODEREF(fun_74),T107,YPfalse,LITREF(lit_130),sloc(388),YPfalse);
  T106 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSconditionsYmsg_to_str = YPfab_met(FUNCODEREF(YgooSconditionsYmsg_to_str),T106,LITREF(lit_166),LITREF(lit_167),sloc(387),YPfalse);
  T109 = YgooSconditionsYmsg_to_str;
  VARSET(YgooSconditionsYmsg_to_str,T109);
  lit_168 = YPPsym((P)"say");
  lit_169 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"args"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSwriteYsay = YPfab_met(FUNCODEREF(YgooSioSwriteYsay),T110,LITREF(lit_168),LITREF(lit_169),sloc(392),YPfalse);
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
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSlst;
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
  {">=", &module_info_gooSmag, NULL},
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
  {"packer-add", &module_info_gooSpacker, NULL},
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
  {"sin", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
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
  {"packer-fab", &module_info_gooSpacker, NULL},
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
  {"<=", &module_info_gooSmag, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
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
  {"$char-long-names", &module_info_gooSioSread, NULL},
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
  {"del!", &module_info_gooScolsScolx, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"pack", &module_info_gooSpacker, NULL},
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
  {"packer", &module_info_gooSpacker, NULL},
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
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
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
  {"^", &module_info_gooSmath, NULL},
  {"msg", &module_info_gooSconditions, NULL},
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
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
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
  {"<", &module_info_gooSmag, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
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
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
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
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"*gensym-counter*", &module_info_gooSlate_macros, NULL},
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
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
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
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
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
  {"<packer>", &module_info_gooSpacker, NULL},
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
  {"packing-as", &module_info_gooSpacker, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"port-filename", &module_info_gooSioSport, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
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
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
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
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
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
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
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
  {"max", &module_info_gooSmag, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
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
  {">", &module_info_gooSmag, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
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
  {"<simple-condition>", &module_info_gooSconditions, NULL},
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
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
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
  {"packing", &module_info_gooSpacker, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
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
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
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
  {"write-params", CVAR, &YgooSioSwriteYwrite_params},
  {"emit", CVAR, &YgooSioSwriteYemit},
  {"writeln", CVAR, &YgooSioSwriteYwriteln},
  {"write-type", CVAR, &YgooSioSwriteYwrite_type},
  {"write-char-literal", CVAR, &YgooSioSwriteYwrite_char_literal},
  {"do-emit", CVAR, &YgooSioSwriteYdo_emit},
  {"write-string-literal", CVAR, &YgooSioSwriteYwrite_string_literal},
  {"---main-0---", PVAR, NULL},
  {"post", CVAR, &YgooSioSwriteYpost},
  {"msg*", PVAR, NULL},
  {"*max-print-depth*", DVAR, &YgooSioSwriteYTmax_print_depthT},
  {"say", CVAR, &YgooSioSwriteYsay},
  {"write-value-type", CVAR, &YgooSioSwriteYwrite_value_type},
  {"recurring-write-type", CVAR, &YgooSioSwriteYrecurring_write_type},
  {"quotation?", CVAR, &YgooSioSwriteYquotationQ},
  {"write-flat", CVAR, &YgooSioSwriteYwrite_flat},
  {"as-binding-name", CVAR, &YgooSioSwriteYas_binding_name},
  {"write-number", CVAR, &YgooSioSwriteYwrite_number},
  {"write-to-string", CVAR, &YgooSioSwriteYwrite_to_string},
  {"character-name", CVAR, &YgooSioSwriteYcharacter_name},
  {"write", CVAR, &YgooSioSwriteYwrite},
  {"write-boolean", CVAR, &YgooSioSwriteYwrite_boolean},
  {"write-fun-guts", CVAR, &YgooSioSwriteYwrite_fun_guts},
  {"write-map", CVAR, &YgooSioSwriteYwrite_map},
  {"*max-print-length*", DVAR, &YgooSioSwriteYTmax_print_lengthT},
  {"recurring-write", CVAR, &YgooSioSwriteYrecurring_write},
  {"write-list", CVAR, &YgooSioSwriteYwrite_list},
  {"---main-1---", PVAR, NULL},
  {"pe-msg", CVAR, &YgooSioSwriteYpe_msg},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"emit", NULL},
  {"msg-to-str", NULL},
  {"writeln", NULL},
  {"write-type", NULL},
  {"post", NULL},
  {"msg*", NULL},
  {"*max-print-depth*", NULL},
  {"msg", NULL},
  {"write", NULL},
  {"write-to-string", NULL},
  {"*max-print-length*", NULL},
  {"recurring-write", NULL},
  {"say", NULL},
  {"pe-msg", NULL},
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
