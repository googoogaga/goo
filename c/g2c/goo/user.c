/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/user");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/user */

EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalStopYload,"eval/top","load");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalStopYbt,"eval/top","bt");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalStopYD,"eval/top","$");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YsubtypeQ,"goo/boot","subtype?");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ynot,"goo/boot","not");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSlogYNEE,"goo/log","~==");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
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
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YgooSuserY___main_0___ ();

/* FUNCTION CODES: */

P YgooSuserY___main_0___() {
  P T0;
DEFCREGS();
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSeval;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSloc;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSeval},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"log", &module_info_gooSmath, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"top", &module_info_evalStop, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {">", &module_info_gooSmag, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"load", &module_info_evalStop, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"$", &module_info_evalStop, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSuser;
MODULE_INFO module_info_gooSuser = {
  "goo/user",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSeval (void);

/* EXPRESSION: */

extern void load_module_gooSuser (void);

void load_module_gooSuser (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSeval();

  (P)YgooSuserY___main_0___();

}

/* END OF GENERATED CODE. */
