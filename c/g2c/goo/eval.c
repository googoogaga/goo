/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/eval");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/eval */

EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YevalStopYload,"eval/top","load");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYK,"goo/math","|");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yclass_props,"goo/boot","class-props");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ynew,"goo/boot","new");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yclass_of,"goo/boot","class-of");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(Ytup,"goo/boot","tup");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Ynil,"goo/boot","nil");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalStopYD,"eval/top","$");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"goo/boot","<int>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLproductG,"goo/boot","<product>");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YgooSevalY___main_0___ ();

/* FUNCTION CODES: */

P YgooSevalY___main_0___() {
  P T0;
DEFCREGS();
loop:
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSlate_macros;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_evalStop},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"type-object", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"top", &module_info_evalStop, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"load", &module_info_evalStop, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"$", &module_info_evalStop, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"load", NULL},
  {"$$", NULL},
  {"frame-var", NULL},
  {"backtrace", NULL},
  {"$$$", NULL},
  {"load-file", NULL},
  {"save-image", NULL},
  {"frame", NULL},
  {"eval", NULL},
  {"$", NULL},
  {"do-stack-frames", NULL},
  {"bt", NULL},
  {"top", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSeval;
MODULE_INFO module_info_gooSeval = {
  "goo/eval",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_evalStop (void);

/* EXPRESSION: */

extern void load_module_gooSeval (void);

void load_module_gooSeval (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_evalStop();

  (P)YgooSevalY___main_0___();

}

/* END OF GENERATED CODE. */
