/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/io/write */

EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSstrYstring_join,"goo/cols/str","string-join");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSruntimeYformat_to_string,"goo/runtime","format-to-string");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
DEF(YgooSioSwriteYas_binding_name,"goo/io/write","as-binding-name");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
DEF(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(Ynul,"goo/boot","nul");
DEF(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
DEF(YgooSioSwriteYpe_format,"goo/io/write","pe-format");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YgooSioSwriteYwrite_fun_guts,"goo/io/write","write-fun-guts");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScolYlow_fillX,"goo/cols/col","low-fill!");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
DEF(YgooSioSwriteYwrite_flat,"goo/io/write","write-flat");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YgooSioSwriteYwrite_char_literal,"goo/io/write","write-char-literal");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YgooSioSwriteYrecurring_write_type,"goo/io/write","recurring-write-type");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(YgooSioSwriteYcharacter_name,"goo/io/write","character-name");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSstrYstring_split,"goo/cols/str","string-split");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Ynew,"goo/boot","new");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YgooSioSwriteYdo_display,"goo/io/write","do-display");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYlow_into,"goo/cols/col","low-into");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSassocYassocs_test_setter,"goo/cols/assoc","assocs-test-setter");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSstrYstring_repeat,"goo/cols/str","string-repeat");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPisa,"goo/boot","%isa");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYE,"goo/math","=");
DEF(YgooSioSwriteYwrite_number,"goo/io/write","write-number");
DEF(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YgooSioSwriteYwrite_list,"goo/io/write","write-list");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YgooSioSwriteYwrite_params,"goo/io/write","write-params");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSmathYT,"goo/math","*");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YgooSioSwriteYwrite_map,"goo/io/write","write-map");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YgooSioSwriteYquotationQ,"goo/io/write","quotation?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
DEF(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSvecYpop_lastX,"goo/cols/vec","pop-last!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSvecYpush_lastX,"goo/cols/vec","push-last!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(YgooSioSwriteYwrite_boolean,"goo/io/write","write-boolean");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Ylst,"goo/boot","lst");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
DEF(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YgooSioSwriteYwrite_string_literal,"goo/io/write","write-string-literal");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_109);
DEFLIT(lit_37);
DEFLIT(lit_108);
DEFLIT(lit_83);
DEFLIT(lit_82);
DEFLIT(lit_77);
DEFLIT(lit_0);
DEFLIT(lit_13);
DEFLIT(lit_1);
DEFLIT(lit_31);
DEFLIT(lit_92);
DEFLIT(lit_78);
DEFLIT(lit_110);
DEFLIT(lit_53);
DEFLIT(lit_26);
DEFLIT(lit_24);
DEFLIT(lit_3);
DEFLIT(lit_102);
DEFLIT(lit_17);
DEFLIT(lit_96);
DEFLIT(lit_45);
DEFLIT(lit_111);
DEFLIT(lit_73);
DEFLIT(lit_69);
DEFLIT(lit_84);
DEFLIT(lit_60);
DEFLIT(lit_9);
DEFLIT(lit_41);
DEFLIT(lit_36);
DEFLIT(lit_58);
DEFLIT(lit_2);
DEFLIT(lit_87);
DEFLIT(lit_42);
DEFLIT(lit_61);
DEFLIT(lit_71);
DEFLIT(lit_105);
DEFLIT(lit_21);
DEFLIT(lit_59);
DEFLIT(lit_27);
DEFLIT(lit_62);
DEFLIT(lit_72);
DEFLIT(lit_52);
DEFLIT(lit_28);
DEFLIT(lit_93);
DEFLIT(lit_91);
DEFLIT(lit_44);
DEFLIT(lit_10);
DEFLIT(lit_43);
DEFLIT(lit_30);
DEFLIT(lit_80);
DEFLIT(lit_104);
DEFLIT(lit_99);
DEFLIT(lit_51);
DEFLIT(lit_100);
DEFLIT(lit_33);
DEFLIT(lit_57);
DEFLIT(lit_103);
DEFLIT(lit_86);
DEFLIT(lit_7);
DEFLIT(lit_55);
DEFLIT(lit_14);
DEFLIT(lit_97);
DEFLIT(lit_46);
DEFLIT(lit_98);
DEFLIT(lit_22);
DEFLIT(lit_63);
DEFLIT(lit_39);
DEFLIT(lit_88);
DEFLIT(lit_90);
DEFLIT(lit_47);
DEFLIT(lit_68);
DEFLIT(lit_40);
DEFLIT(lit_20);
DEFLIT(lit_112);
DEFLIT(lit_70);
DEFLIT(lit_38);
DEFLIT(lit_12);
DEFLIT(lit_4);
DEFLIT(lit_79);
DEFLIT(lit_106);
DEFLIT(lit_48);
DEFLIT(lit_19);
DEFLIT(lit_64);
DEFLIT(lit_75);
DEFLIT(lit_32);
DEFLIT(lit_85);
DEFLIT(lit_6);
DEFLIT(lit_35);
DEFLIT(lit_49);
DEFLIT(lit_34);
DEFLIT(lit_65);
DEFLIT(lit_11);
DEFLIT(lit_101);
DEFLIT(lit_25);
DEFLIT(lit_29);
DEFLIT(lit_8);
DEFLIT(lit_67);
DEFLIT(lit_23);
DEFLIT(lit_94);
DEFLIT(lit_66);
DEFLIT(lit_76);
DEFLIT(lit_16);
DEFLIT(lit_89);
DEFLIT(lit_50);
DEFLIT(lit_95);
DEFLIT(lit_81);
DEFLIT(lit_15);
DEFLIT(lit_5);
DEFLIT(lit_54);
DEFLIT(lit_74);
DEFLIT(lit_107);
DEFLIT(lit_18);
DEFLIT(lit_56);

/* FUNCTIONS: */

LOCFOR(fun_as_binding_name_0);
LOCFOR(fun_do_display_1);
LOCFOR(fun_do_display_2);
LOCFOR(fun_do_display_3);
LOCFOR(fun_recur_4);
LOCFOR(fun_display_5);
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
LOCFOR(fun_write_boolean_21);
LOCFOR(fun_write_number_22);
LOCFOR(fun_write_char_literal_23);
LOCFOR(fun_character_name_24);
LOCFOR(fun_loop_25);
LOCFOR(fun_write_string_literal_26);
LOCFOR(fun_loop_27);
LOCFOR(fun_write_list_28);
LOCFOR(fun_quotationQ_29);
LOCFOR(fun_loop_30);
LOCFOR(fun_write_flat_31);
LOCFOR(fun_x_1392_32);
LOCFOR(fun_33);
LOCFOR(fun_write_map_34);
LOCFOR(fun_recurring_write_35);
LOCFOR(fun_recurring_write_36);
LOCFOR(fun_x_1396_37);
LOCFOR(fun_write_params_38);
LOCFOR(fun_write_fun_guts_39);
LOCFOR(fun_recurring_write_40);
LOCFOR(fun_recurring_write_41);
LOCFOR(fun_recurring_write_42);
LOCFOR(fun_recurring_write_43);
LOCFOR(fun_recurring_write_44);
LOCFOR(fun_45);
LOCFOR(fun_recurring_write_46);
LOCFOR(fun_recurring_write_type_47);
LOCFOR(fun_recurring_write_type_48);
LOCFOR(fun_recur_49);
LOCFOR(fun_write_type_50);
LOCFOR(fun_recurring_write_51);
LOCFOR(fun_x_1400_52);
LOCFOR(fun_53);
LOCFOR(fun_54);
LOCFOR(fun_55);
LOCFOR(fun_recurring_write_56);
LOCFOR(fun_recurring_write_57);
LOCFOR(fun_recurring_write_58);
LOCFOR(fun_arg_59);
LOCFOR(fun_60);
LOCFOR(fun_format_61);
LOCFOR(fun_pe_format_62);
LOCFOR(fun_maybe_pack_chars_63);
LOCFOR(fun_arg_64);
LOCFOR(fun_65);
LOCFOR(fun_pe_format_66);
LOCFOR(fun_x_1410_67);
LOCFOR(fun_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_71);
FUNFOR(YgooSruntimeYformat_to_string);
LOCFOR(fun_loop_73);
FUNFOR(YgooSioSwriteYsay);
extern P YgooSioSwriteY___main_0___ ();

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

FUNCODEDEF(fun_do_display_1) {
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

FUNCODEDEF(fun_do_display_2) {
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

FUNCODEDEF(fun_do_display_3) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYrecurring_write),4,port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recur_4) {
  P x_,d_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYGE),d_,VARREF(YgooSioSwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_8));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    T3 = CALLN(1,VARREF(YgooSioSwriteYdo_display),4,FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_display_5) {
  P port_,x_;
  P recurF1411;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF1411 = T1;
  FUNINIT(recurF1411, 2,port_,recurF1411);
  T2 = CALL2(0,recurF1411,x_,YPint((P)-1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_10));
  BOXVAL(FREEREF(0)) = T0;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSioSwriteYwrite),T2,FREEREF(1));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_7) {
  P tmpF1412;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF1412 = T1;
  if (tmpF1412 != YPfalse) {
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
  P portF1413;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  portF1413 = YPfalse;
  portF1413 = BOXFAB(portF1413);
  T3 = FUNFAB(fun_6,2,portF1413,x_);
  T4 = FUNFAB(fun_7,1,portF1413);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_recur_9) {
  P x_,d_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYGE),d_,VARREF(YgooSioSwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_12));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    T3 = CALLN(1,VARREF(YgooSioSwriteYrecurring_write),4,FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_10) {
  P port_,x_;
  P recurF1414;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_9,2);
  recurF1414 = T1;
  FUNINIT(recurF1414, 2,port_,recurF1414);
  T2 = CALL2(0,recurF1414,x_,YPint((P)-1));
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
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_15));
    T0 = T2;
  } else {
    T3 = CALLN(1,VARREF(YgooSioSwriteYwrite_list),4,port_,x_,d_,recur_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_13) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),4,port_,x_,d_,recur_);
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
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_map),4,port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_15) {
  P port_,x_,d_,recur_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  if (x_ != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSwriteYwrite_boolean),port_,LITREF(lit_16));
    T0 = T1;
  } else {
    T2 = CALL2(1,VARREF(YgooSioSwriteYwrite_boolean),port_,LITREF(lit_17));
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_16) {
  P port_,x_,d_,recur_;
  P T1,T0;
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

FUNCODEDEF(fun_recurring_write_17) {
  P port_,x_,d_,recur_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_18));
  T2 = (P)YPlu(x_);
  T1 = (P)YPib(T2);
  T0 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),T1,YPint((P)16));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_18) {
  P port_,x_,d_,recur_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YLnumG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSioSwriteYas_binding_name),LITREF(lit_19));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,T3);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSioSwriteYwrite_number),port_,x_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_19) {
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

FUNCODEDEF(fun_recurring_write_20) {
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

FUNCODEDEF(fun_write_boolean_21) {
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

FUNCODEDEF(fun_write_number_22) {
  P port_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_write_char_literal_23) {
  P port_,x_;
  P probeF1415;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSwriteYcharacter_name),x_);
  probeF1415 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_24));
  if (probeF1415 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,probeF1415);
    T2 = T3;
  } else {
    T4 = CALL2(1,VARREF(YgooSioSportYput),port_,x_);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_character_name_24) {
  P char_;
  P tmpF1417;
  P assocF1416;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooScolsSlstYassqn),char_,VARREF(YgooSioSreadYDchar_long_names),YPint((P)1));
  assocF1416 = T1;
  tmpF1417 = assocF1416;
  if (tmpF1417 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsSseqY1st),assocF1416);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_25) {
  P i_;
  P tmpF1419;
  P cF1418;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    cF1418 = T4;
    T6 = CALL2(1,VARREF(YgooSmathYE),cF1418,YPchr((P)92));
    tmpF1419 = T6;
    if (tmpF1419 != YPfalse) {
      T7 = tmpF1419;
    } else {
      T8 = CALL2(1,VARREF(YgooSmathYE),cF1418,YPchr((P)34));
      T7 = T8;
    }
    T5 = T7;
    if (T5 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)92));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),cF1418);
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

FUNCODEDEF(fun_write_string_literal_26) {
  P port_,x_;
  P loopF1421;
  P lenF1420;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  lenF1420 = T1;
  T3 = FUNSHELL(1,fun_loop_25,4);
  loopF1421 = T3;
  FUNINIT(loopF1421, 4,lenF1420,port_,x_,loopF1421);
  T4 = CALL1(0,loopF1421,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_27) {
  P l_,n_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagYGE),n_,VARREF(YgooSioSwriteYTmax_print_lengthT));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_33));
      T3 = T5;
    } else {
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
      T6 = CALL1(1,VARREF(Yhead),l_);
      CALL2(1,FREEREF(1),T6,FREEREF(2));
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

FUNCODEDEF(fun_write_list_28) {
  P port_,x_,d_,recur_;
  P loopF1422;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    T6 = FUNSHELL(1,fun_loop_27,4);
    loopF1422 = T6;
    FUNINIT(loopF1422, 4,port_,recur_,d_,loopF1422);
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(0,loopF1422,T8,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_29) {
  P x_;
  P tmpF1425;
  P tmpF1424;
  P tmpF1423;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF1423 = T1;
  if (tmpF1423 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_35));
    tmpF1424 = T4;
    if (tmpF1424 != YPfalse) {
      T9 = CALL1(1,VARREF(Ytail),x_);
      T8 = CALL2(1,VARREF(YisaQ),T9,VARREF(YLlstG));
      tmpF1425 = T8;
      if (tmpF1425 != YPfalse) {
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

FUNCODEDEF(fun_loop_30) {
  P i_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYGE),i_,VARREF(YgooSioSwriteYTmax_print_lengthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_40));
    T0 = T2;
  } else {
    T5 = CALL2(1,VARREF(YgooSmagYGE),i_,FREEREF(1));
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
      T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),i_);
      CALL2(1,FREEREF(2),T6,FREEREF(4));
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

FUNCODEDEF(fun_write_flat_31) {
  P port_,x_,d_,recur_;
  P loopF1427;
  P zF1426;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLtupG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_37));
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_38));
    T3 = CALL1(1,VARREF(Yobject_class),x_);
    T2 = CALL1(1,VARREF(Yclass_name),T3);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),port_,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_39));
  }
  T6 = CALL1(1,VARREF(YgooStypesYlen),x_);
  zF1426 = T6;
  T7 = CALL2(1,VARREF(YgooSmagYG),zF1426,YPint((P)0));
  if (T7 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T8,d_);
    T10 = FUNSHELL(1,fun_loop_30,6);
    loopF1427 = T10;
    FUNINIT(loopF1427, 6,port_,zF1426,recur_,x_,d_,loopF1427);
    T11 = CALL1(0,loopF1427,YPint((P)1));
    T9 = T11;
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
  T5 = T12;
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_x_1392_32) {
  P x_1391_,x_1390_;
  P valF1432;
  P keyF1431;
  P tup34F1430;
  P iF1429;
  P tmpF1428;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1391_, 0);
  ARG(x_1390_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1391_);
  tmpF1428 = T3;
  if (tmpF1428 != YPfalse) {
    T4 = tmpF1428;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1390_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1391_);
    iF1429 = T7;
    T10 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1390_);
    T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_1390_);
    T9 = CALL2(1,VARREF(Ytup),T10,T11);
    tup34F1430 = T9;
    T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup34F1430,YPint((P)0));
    keyF1431 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),tup34F1430,YPint((P)1));
    valF1432 = T15;
    T16 = CALL2(1,VARREF(YgooSmagYGE),iF1429,VARREF(YgooSioSwriteYTmax_print_lengthT));
    if (T16 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_47));
      T17 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    CALL2(1,FREEREF(2),keyF1431,FREEREF(3));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_48));
    CALL2(1,FREEREF(2),valF1432,FREEREF(3));
    T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1391_);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1390_);
    a1 = T19;
    a2 = T20;
    x_1391_ = a1;
    x_1390_ = a2;
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

FUNCODEDEF(fun_33) {
  P blow_;
  P x_1392F1433;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_x_1392_32,5);
  x_1392F1433 = T1;
  FUNINIT(x_1392F1433, 5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),x_1392F1433);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(3));
  T2 = CALL2(0,x_1392F1433,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_map_34) {
  P port_,x_,d_,recur_;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_42));
  T1 = CALL1(1,VARREF(Yobject_class),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),port_,T0);
  T2 = FUNFAB(fun_33,4,port_,recur_,d_,x_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)93));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_35) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_49));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_36) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_50));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1396_37) {
  P x_1395_,x_1394_,x_1393_;
  P iF1438;
  P specF1437;
  P firstQF1436;
  P tmpF1435;
  P tmpF1434;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1395_, 0);
  ARG(x_1394_, 1);
  ARG(x_1393_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1395_);
  tmpF1434 = T3;
  if (tmpF1434 != YPfalse) {
    T4 = tmpF1434;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1394_);
    tmpF1435 = T6;
    if (tmpF1435 != YPfalse) {
      T7 = tmpF1435;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1393_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1395_);
    firstQF1436 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1394_);
    specF1437 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1393_);
    iF1438 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF1436);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    } else {
    }
    T17 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(1));
    if (T17 != YPfalse) {
      T18 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF1437);
    } else {
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),iF1438);
      T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T20);
      CALL3(1,VARREF(YgooSruntimeYformat),FREEREF(0),LITREF(lit_56),T19);
      CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF1437);
      T21 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)41));
    }
    T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1395_);
    T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1394_);
    T25 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1393_);
    a1 = T23;
    a2 = T24;
    a3 = T25;
    x_1395_ = a1;
    x_1394_ = a2;
    x_1393_ = a3;
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

FUNCODEDEF(fun_write_params_38) {
  P port_,x_,recur_;
  P tmpF1443;
  P valueF1442;
  P x_1396F1441;
  P namesF1440;
  P namesF1439;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
loop:
  T1 = CALL1(1,VARREF(Yfun_names),x_);
  namesF1439 = T1;
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
  T3 = CALL1(1,VARREF(Yfun_names),x_);
  namesF1440 = T3;
  T4 = FUNSHELL(1,fun_x_1396_37,3);
  x_1396F1441 = T4;
  FUNINIT(x_1396F1441, 3,port_,namesF1440,x_1396F1441);
  T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),YPtrue,YPfalse);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T9 = CALL1(1,VARREF(Yfun_specs),x_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T11 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  T5 = CALL3(0,x_1396F1441,T6,T8,T10);
  T13 = CALL1(1,VARREF(Yfun_val),x_);
  valueF1442 = T13;
  T16 = CALL1(1,VARREF(Ynot),valueF1442);
  tmpF1443 = T16;
  if (tmpF1443 != YPfalse) {
    T17 = tmpF1443;
  } else {
    T18 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1442,VARREF(YLanyG));
    T17 = T18;
  }
  T15 = T17;
  T14 = CALL1(1,VARREF(Ynot),T15);
  if (T14 != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYformat),port_,LITREF(lit_57));
    T19 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,valueF1442);
  } else {
  }
  T20 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
  T12 = T20;
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_fun_guts_39) {
  P port_,x_,name_,recur_;
  P tmpF1445;
  P nameF1444;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(name_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_59));
  CALL2(1,VARREF(YgooSioSportYputs),port_,name_);
  T1 = CALL1(1,VARREF(Yfun_name),x_);
  nameF1444 = T1;
  tmpF1445 = nameF1444;
  if (tmpF1445 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF1444);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
  CALL3(1,VARREF(YgooSioSwriteYwrite_params),port_,x_,recur_);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_60));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_40) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_fun_guts),4,port_,x_,LITREF(lit_61),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_41) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_fun_guts),4,port_,x_,LITREF(lit_62),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_42) {
  P port_,x_,d_,recur_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_63));
  T1 = CALL1(1,VARREF(Yclass_name),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
  CALL2(1,VARREF(YgooSioSportYputs),port_,T0);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_64));
  T3 = CALL1(1,VARREF(Yclass_parents),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yclass_name),T3);
  CALL2(1,recur_,T2,d_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_65));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_recurring_write_43) {
  P port_,x_,d_,recur_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_66));
  T0 = CALL1(1,VARREF(Ytype_object),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_67));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_recurring_write_44) {
  P port_,x_,d_,recur_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_68));
  T0 = CALL1(1,VARREF(Ytype_class),x_);
  CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_69));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_45) {
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

FUNCODEDEF(fun_recurring_write_46) {
  P port_,x_,d_,recur_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_70));
  T0 = FUNFAB(fun_45,1,port_);
  T1 = CALL1(1,VARREF(Ytype_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_71));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_recurring_write_type_47) {
  P port_,x_,d_,recur_;
  P T2,T1,T0;
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

FUNCODEDEF(fun_recurring_write_type_48) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYrecurring_write),4,port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recur_49) {
  P x_,d_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYrecurring_write_type),4,FREEREF(0),x_,d_,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_type_50) {
  P port_,x_;
  P recurF1446;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_49,2);
  recurF1446 = T1;
  FUNINIT(recurF1446, 2,port_,recurF1446);
  T2 = CALL2(0,recurF1446,x_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_51) {
  P port_,x_,d_,recur_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_74));
  T0 = CALL1(1,VARREF(Yprop_getter),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_75));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_x_1400_52) {
  P x_1399_,x_1398_;
  P getterF1450;
  P propF1449;
  P iF1448;
  P tmpF1447;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1399_, 0);
  ARG(x_1398_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1399_);
  tmpF1447 = T3;
  if (tmpF1447 != YPfalse) {
    T4 = tmpF1447;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1398_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1399_);
    iF1448 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1398_);
    propF1449 = T9;
    T10 = CALL2(1,VARREF(YgooSmagYGE),iF1448,VARREF(YgooSioSwriteYTmax_print_lengthT));
    if (T10 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_80));
      T11 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    T13 = CALL1(1,VARREF(Yprop_getter),propF1449);
    getterF1450 = T13;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    T14 = CALL1(1,VARREF(Yfun_name),getterF1450);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),FREEREF(0),T14);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_81));
    T15 = CALL1(1,getterF1450,FREEREF(3));
    CALL2(1,FREEREF(2),T15,FREEREF(4));
    T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1399_);
    T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1398_);
    a1 = T17;
    a2 = T18;
    x_1399_ = a1;
    x_1398_ = a2;
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

FUNCODEDEF(fun_53) {
  P x_1400F1451;
  P T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  VARSET(YTreport_prop_unbound_errorsQT,YPfalse);
  T1 = FUNSHELL(1,fun_x_1400_52,6);
  x_1400F1451 = T1;
  FUNINIT(x_1400F1451, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),x_1400F1451);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T6 = CALL1(1,VARREF(Yobject_props),FREEREF(3));
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),T6);
  T2 = CALL2(0,x_1400F1451,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YTreport_prop_unbound_errorsQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P blow_;
  P x_1397F1452;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  x_1397F1452 = VARREF(YTreport_prop_unbound_errorsQT);
  T2 = FUNFAB(fun_53,5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_54,1,x_1397F1452);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_56) {
  P port_,x_,d_,recur_;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_76));
  T1 = CALL1(1,VARREF(Yobject_class),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),port_,T0);
  T2 = FUNFAB(fun_55,4,port_,recur_,x_,d_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_82));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_57) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_83));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_58) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_84));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_59) {
  P char_,class_;
  P tmpF1455;
  P argumentF1454;
  P current_indexF1453;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
loop:
  T1 = BOXVAL(FREEREF(0));
  current_indexF1453 = T1;
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(0)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF1453,FREEREF(1));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_90),FREEREF(2),FREEREF(3));
  } else {
  }
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),current_indexF1453);
  argumentF1454 = T8;
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),class_,VARREF(YLanyG));
  tmpF1455 = T11;
  if (tmpF1455 != YPfalse) {
    T12 = tmpF1455;
  } else {
    T13 = CALL2(1,VARREF(YisaQ),argumentF1454,class_);
    T12 = T13;
  }
  T10 = T12;
  T9 = CALL1(1,VARREF(Ynot),T10);
  if (T9 != YPfalse) {
    T14 = CALLN(1,VARREF(Yerror),4,LITREF(lit_91),char_,class_,argumentF1454);
  } else {
  }
  T7 = argumentF1454;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P c_;
  P x_1402F1457;
  P x_1401F1456;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYto_upper),c_);
    x_1401F1456 = T2;
    x_1402F1457 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1402F1457,x_1401F1456,YPchr((P)68));
    if (T5 != YPfalse) {
      T8 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
      T6 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T7);
      T4 = T6;
    } else {
      T10 = CALL2(1,x_1402F1457,x_1401F1456,YPchr((P)66));
      if (T10 != YPfalse) {
        T13 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T12 = CALL2(1,VARREF(YgooSmathYnum_to_str),T13,YPint((P)2));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T12);
        T9 = T11;
      } else {
        T15 = CALL2(1,x_1402F1457,x_1401F1456,YPchr((P)79));
        if (T15 != YPfalse) {
          T18 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T17 = CALL2(1,VARREF(YgooSmathYnum_to_str),T18,YPint((P)8));
          T16 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T17);
          T14 = T16;
        } else {
          T20 = CALL2(1,x_1402F1457,x_1401F1456,YPchr((P)88));
          if (T20 != YPfalse) {
            T23 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T22 = CALL2(1,VARREF(YgooSmathYnum_to_str),T23,YPint((P)16));
            T21 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T22);
            T19 = T21;
          } else {
            T25 = CALL2(1,x_1402F1457,x_1401F1456,YPchr((P)67));
            if (T25 != YPfalse) {
              T27 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T26 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),T27);
              T24 = T26;
            } else {
              T29 = CALL2(1,x_1402F1457,x_1401F1456,YPchr((P)83));
              if (T29 != YPfalse) {
                T31 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T30 = CALL2(1,VARREF(YgooSioSwriteYdisplay),FREEREF(1),T31);
                T28 = T30;
              } else {
                T33 = CALL2(1,x_1402F1457,x_1401F1456,YPchr((P)61));
                if (T33 != YPfalse) {
                  T35 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T34 = CALL2(1,VARREF(YgooSioSwriteYwrite),FREEREF(1),T35);
                  T32 = T34;
                } else {
                  T37 = CALL2(1,x_1402F1457,x_1401F1456,YPchr((P)37));
                  if (T37 != YPfalse) {
                    T38 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)37));
                    T36 = T38;
                  } else {
                    T39 = CALL3(1,VARREF(Yerror),LITREF(lit_93),c_,FREEREF(3));
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

FUNCODEDEF(fun_format_61) {
  P port_,message_,arguments_;
  P argF1461;
  P num_argumentsF1460;
  P argument_indexF1459;
  P found_percentQF1458;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
loop:
  found_percentQF1458 = YPfalse;
  found_percentQF1458 = BOXFAB(found_percentQF1458);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF1459 = YPint((P)0);
  argument_indexF1459 = BOXFAB(argument_indexF1459);
  T5 = CALL1(1,VARREF(YgooStypesYlen),arguments_);
  num_argumentsF1460 = T5;
  T6 = FUNSHELL(1,fun_arg_59,4);
  argF1461 = T6;
  FUNINIT(argF1461, 4,argument_indexF1459,num_argumentsF1460,message_,arguments_);
  T8 = FUNFAB(fun_60,4,found_percentQF1458,port_,argF1461,message_);
  T7 = CALL2(1,VARREF(YgooSmacrosYdo),T8,message_);
  T12 = BOXVAL(found_percentQF1458);
  T11 = CALL1(1,VARREF(Ynot),T12);
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T13 = CALL2(1,VARREF(Yerror),LITREF(lit_94),message_);
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

FUNCODEDEF(fun_pe_format_62) {
  P port_expr_,message_,args_;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T2 = CALL1(1,VARREF(Ylst),port_expr_);
  T3 = CALL1(1,VARREF(Ylst),message_);
  T0 = CALLN(1,VARREF(YgooSmacrosYcat),5,T1,T2,T3,args_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_pack_chars_63) {
  P UF1462;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(1));
    UF1462 = T3;
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
    T8 = CALL1(1,VARREF(Ylst),FREEREF(2));
    T10 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),FREEREF(0));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T6 = CALLN(1,VARREF(YgooSmacrosYcat),4,T7,T8,T9,Ynil);
    T5 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1462,T6);
    T4 = BOXVAL(FREEREF(1)) = T5;
    T11 = CALL1(1,VARREF(YgooScolsScolxYzapX),FREEREF(0));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_64) {
  P char_;
  P current_indexF1463;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  CALL0(0,FREEREF(0));
  T1 = BOXVAL(FREEREF(1));
  current_indexF1463 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(1)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF1463,FREEREF(2));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_100),FREEREF(3),FREEREF(4));
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(4),current_indexF1463);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P c_;
  P UF1472;
  P UF1471;
  P UF1470;
  P UF1469;
  P UF1468;
  P UF1467;
  P UF1466;
  P x_1406F1465;
  P x_1405F1464;
  P T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89;
  P T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73;
  P T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57;
  P T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYto_upper),c_);
    x_1405F1464 = T2;
    x_1406F1465 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1406F1465,x_1405F1464,YPchr((P)68));
    if (T5 != YPfalse) {
      T7 = BOXVAL(FREEREF(1));
      UF1466 = T7;
      T11 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
      T12 = CALL1(1,VARREF(Ylst),FREEREF(2));
      T15 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
      T17 = CALL1(1,FREEREF(3),c_);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
      T13 = CALL1(1,VARREF(Ylst),T14);
      T10 = CALLN(1,VARREF(YgooSmacrosYcat),4,T11,T12,T13,Ynil);
      T9 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1466,T10);
      T8 = BOXVAL(FREEREF(1)) = T9;
      T6 = T8;
      T4 = T6;
    } else {
      T19 = CALL2(1,x_1406F1465,x_1405F1464,YPchr((P)66));
      if (T19 != YPfalse) {
        T21 = BOXVAL(FREEREF(1));
        UF1467 = T21;
        T25 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
        T26 = CALL1(1,VARREF(Ylst),FREEREF(2));
        T29 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
        T31 = CALL1(1,FREEREF(3),c_);
        T30 = CALL1(1,VARREF(Ylst),T31);
        T32 = CALL1(1,VARREF(Ylst),YPint((P)2));
        T28 = CALLN(1,VARREF(YgooSmacrosYcat),4,T29,T30,T32,Ynil);
        T27 = CALL1(1,VARREF(Ylst),T28);
        T24 = CALLN(1,VARREF(YgooSmacrosYcat),4,T25,T26,T27,Ynil);
        T23 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1467,T24);
        T22 = BOXVAL(FREEREF(1)) = T23;
        T20 = T22;
        T18 = T20;
      } else {
        T34 = CALL2(1,x_1406F1465,x_1405F1464,YPchr((P)79));
        if (T34 != YPfalse) {
          T36 = BOXVAL(FREEREF(1));
          UF1468 = T36;
          T40 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
          T41 = CALL1(1,VARREF(Ylst),FREEREF(2));
          T44 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
          T46 = CALL1(1,FREEREF(3),c_);
          T45 = CALL1(1,VARREF(Ylst),T46);
          T47 = CALL1(1,VARREF(Ylst),YPint((P)8));
          T43 = CALLN(1,VARREF(YgooSmacrosYcat),4,T44,T45,T47,Ynil);
          T42 = CALL1(1,VARREF(Ylst),T43);
          T39 = CALLN(1,VARREF(YgooSmacrosYcat),4,T40,T41,T42,Ynil);
          T38 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1468,T39);
          T37 = BOXVAL(FREEREF(1)) = T38;
          T35 = T37;
          T33 = T35;
        } else {
          T49 = CALL2(1,x_1406F1465,x_1405F1464,YPchr((P)88));
          if (T49 != YPfalse) {
            T51 = BOXVAL(FREEREF(1));
            UF1469 = T51;
            T55 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
            T56 = CALL1(1,VARREF(Ylst),FREEREF(2));
            T59 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
            T61 = CALL1(1,FREEREF(3),c_);
            T60 = CALL1(1,VARREF(Ylst),T61);
            T62 = CALL1(1,VARREF(Ylst),YPint((P)16));
            T58 = CALLN(1,VARREF(YgooSmacrosYcat),4,T59,T60,T62,Ynil);
            T57 = CALL1(1,VARREF(Ylst),T58);
            T54 = CALLN(1,VARREF(YgooSmacrosYcat),4,T55,T56,T57,Ynil);
            T53 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1469,T54);
            T52 = BOXVAL(FREEREF(1)) = T53;
            T50 = T52;
            T48 = T50;
          } else {
            T64 = CALL2(1,x_1406F1465,x_1405F1464,YPchr((P)67));
            if (T64 != YPfalse) {
              T66 = BOXVAL(FREEREF(1));
              UF1470 = T66;
              T70 = CALL1(1,VARREF(Ylst),LITREF(lit_102));
              T71 = CALL1(1,VARREF(Ylst),FREEREF(2));
              T73 = CALL2(1,FREEREF(3),c_,VARREF(YLchrG));
              T72 = CALL1(1,VARREF(Ylst),T73);
              T69 = CALLN(1,VARREF(YgooSmacrosYcat),4,T70,T71,T72,Ynil);
              T68 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1470,T69);
              T67 = BOXVAL(FREEREF(1)) = T68;
              T65 = T67;
              T63 = T65;
            } else {
              T75 = CALL2(1,x_1406F1465,x_1405F1464,YPchr((P)83));
              if (T75 != YPfalse) {
                T77 = BOXVAL(FREEREF(1));
                UF1471 = T77;
                T81 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
                T82 = CALL1(1,VARREF(Ylst),FREEREF(2));
                T84 = CALL1(1,FREEREF(3),c_);
                T83 = CALL1(1,VARREF(Ylst),T84);
                T80 = CALLN(1,VARREF(YgooSmacrosYcat),4,T81,T82,T83,Ynil);
                T79 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1471,T80);
                T78 = BOXVAL(FREEREF(1)) = T79;
                T76 = T78;
                T74 = T76;
              } else {
                T86 = CALL2(1,x_1406F1465,x_1405F1464,YPchr((P)61));
                if (T86 != YPfalse) {
                  T88 = BOXVAL(FREEREF(1));
                  UF1472 = T88;
                  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
                  T93 = CALL1(1,VARREF(Ylst),FREEREF(2));
                  T95 = CALL1(1,FREEREF(3),c_);
                  T94 = CALL1(1,VARREF(Ylst),T95);
                  T91 = CALLN(1,VARREF(YgooSmacrosYcat),4,T92,T93,T94,Ynil);
                  T90 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1472,T91);
                  T89 = BOXVAL(FREEREF(1)) = T90;
                  T87 = T89;
                  T85 = T87;
                } else {
                  T97 = CALL2(1,x_1406F1465,x_1405F1464,YPchr((P)37));
                  if (T97 != YPfalse) {
                    T98 = CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(4),YPchr((P)37));
                    T96 = T98;
                  } else {
                    T99 = CALL3(1,VARREF(Yerror),LITREF(lit_103),c_,FREEREF(5));
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

FUNCODEDEF(fun_pe_format_66) {
  P port_expr_,message_,args_;
  P exprsF1481;
  P argF1480;
  P maybe_pack_charsF1479;
  P packer_F1478;
  P portF1477;
  P charsF1476;
  P num_argsF1475;
  P arg_indexF1474;
  P found_percentQF1473;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
loop:
  found_percentQF1473 = YPfalse;
  found_percentQF1473 = BOXFAB(found_percentQF1473);
  check_type(YPint((P)0),VARREF(YLintG));
  arg_indexF1474 = YPint((P)0);
  arg_indexF1474 = BOXFAB(arg_indexF1474);
  T5 = CALL1(1,VARREF(YgooStypesYlen),args_);
  num_argsF1475 = T5;
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  charsF1476 = T7;
  T9 = CALL0(1,VARREF(YgooSmacrosYgensym));
  portF1477 = T9;
  T12 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F1478 = T12;
  packer_F1478 = BOXFAB(packer_F1478);
  T14 = FUNSHELL(1,fun_maybe_pack_chars_63,3);
  maybe_pack_charsF1479 = T14;
  T15 = FUNSHELL(1,fun_arg_64,5);
  argF1480 = T15;
  FUNINIT(maybe_pack_charsF1479, 3,charsF1476,packer_F1478,portF1477);
  FUNINIT(argF1480, 5,maybe_pack_charsF1479,arg_indexF1474,num_argsF1475,message_,args_);
  T16 = FUNFAB(fun_65,6,found_percentQF1473,packer_F1478,portF1477,argF1480,charsF1476,message_);
  CALL2(1,VARREF(YgooSmacrosYdo),T16,message_);
  T17 = CALL0(0,maybe_pack_charsF1479);
  T19 = BOXVAL(packer_F1478);
  T18 = CALL1(1,VARREF(YgooSpackerYpacker_res),T19);
  T11 = T18;
  exprsF1481 = T11;
  T22 = BOXVAL(found_percentQF1473);
  T21 = CALL1(1,VARREF(Ynot),T22);
  T20 = CALL1(1,VARREF(Ynot),T21);
  if (T20 != YPfalse) {
    T23 = CALL2(1,VARREF(Yerror),LITREF(lit_104),message_);
  } else {
  }
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T30 = CALL1(1,VARREF(Ylst),portF1477);
  T31 = CALL1(1,VARREF(Ylst),port_expr_);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALLN(1,VARREF(YgooSmacrosYcat),4,T25,T26,exprsF1481,Ynil);
  T10 = T24;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1410_67) {
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

FUNCODEDEF(fun_68) {
  P return_;
  P x_1409F1490;
  P x_1409F1489;
  P x_1409F1488;
  P x_1409F1487;
  P argsF1486;
  P messageF1485;
  P portF1484;
  P x_1409F1483;
  P x_1410F1482;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1410_67,1);
  x_1410F1482 = T1;
  FUNINIT(x_1410F1482, 1,return_);
  x_1409F1483 = FREEREF(0);
  portF1484 = YPfalse;
  portF1484 = BOXFAB(portF1484);
  messageF1485 = YPfalse;
  messageF1485 = BOXFAB(messageF1485);
  argsF1486 = YPfalse;
  argsF1486 = BOXFAB(argsF1486);
  T9 = CALL2(1,VARREF(YisaQ),x_1409F1483,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1409F1483,LITREF(lit_109),x_1410F1482);
    x_1409F1487 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1409F1487,x_1410F1482);
    BOXVAL(portF1484) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1409F1487);
    x_1409F1488 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1409F1488,x_1410F1482);
    BOXVAL(messageF1485) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1409F1488);
    x_1409F1489 = T17;
    BOXVAL(argsF1486) = x_1409F1489;
    x_1409F1490 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1409F1490,x_1410F1482);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1410F1482,LITREF(lit_110),x_1409F1483);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T24 = BOXVAL(portF1484);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(messageF1485);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T27 = BOXVAL(argsF1486);
  T21 = CALLN(1,VARREF(YgooSmacrosYcat),5,T22,T23,T25,T27,Ynil);
  T7 = T21;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_68,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_10));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  CALLN(1,VARREF(YgooSmacrosYnapp),5,VARREF(YgooSruntimeYformat),YPfalse,T1,FREEREF(1),FREEREF(2));
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(YgooSioSportYport_contents),T3);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_71) {
  P tmpF1491;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF1491 = T1;
  if (tmpF1491 != YPfalse) {
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

FUNCODEDEF(YgooSruntimeYformat_to_string) {
  P message_,arguments_;
  P portF1492;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
loop:
  portF1492 = YPfalse;
  portF1492 = BOXFAB(portF1492);
  T3 = FUNFAB(fun_70,3,portF1492,message_,arguments_);
  T4 = FUNFAB(fun_71,1,portF1492);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_73) {
  P i_;
  P T6,T5,T4,T3,T2,T1,T0;
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
  P loopF1494;
  P limF1493;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  limF1493 = T1;
  T3 = FUNSHELL(1,fun_loop_73,4);
  loopF1494 = T3;
  FUNINIT(loopF1494, 4,limF1493,port_,args_,loopF1494);
  T4 = CALL1(0,loopF1494,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YgooSioSwriteY___main_0___() {
  P T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250;
  P T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234;
  P T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218;
  P T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202;
  P T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186;
  P T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170;
  P T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154;
  P T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138;
  P T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122;
  P T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106;
  P T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90;
  P T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74;
  P T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  VARSET(YgooSioSwriteYTmax_print_depthT,YPint((P)4));
  VARSET(YgooSioSwriteYTmax_print_lengthT,YPint((P)12));
  lit_0 = YPPsym((P)"as-binding-name");
  lit_1 = YPPsym((P)"name");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_binding_name_0 = YPmet(FUNCODEREF(fun_as_binding_name_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooSioSwriteYas_binding_name);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSioSwriteYas_binding_name);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_as_binding_name_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSioSwriteYas_binding_name,T1);
  lit_2 = YPPsym((P)"do-display");
  lit_3 = YPPsym((P)"port");
  lit_4 = YPPsym((P)"x");
  lit_5 = YPPsym((P)"d");
  lit_6 = YPPsym((P)"recur");
  T5 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_display_1 = YPmet(FUNCODEREF(fun_do_display_1),LITREF(lit_2),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YgooSioSwriteYdo_display);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooSioSwriteYdo_display);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_do_display_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooSioSwriteYdo_display,T6);
  T10 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_display_2 = YPmet(FUNCODEREF(fun_do_display_2),LITREF(lit_2),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YgooSioSwriteYdo_display);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooSioSwriteYdo_display);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_do_display_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooSioSwriteYdo_display,T11);
  T15 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_display_3 = YPmet(FUNCODEREF(fun_do_display_3),LITREF(lit_2),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YgooSioSwriteYdo_display);
  if (T18 != YPfalse) {
    T17 = VARREF(YgooSioSwriteYdo_display);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_do_display_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YgooSioSwriteYdo_display,T16);
  lit_7 = YPPsym((P)"display");
  lit_8 = YPsb((P)"*");
  T21 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_4 = YPmet(FUNCODEREF(fun_recur_4),LITREF(lit_6),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_display_5 = YPmet(FUNCODEREF(fun_display_5),LITREF(lit_7),T20,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YgooSioSwriteYdisplay);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooSioSwriteYdisplay);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_display_5;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooSioSwriteYdisplay,T22);
  lit_9 = YPPsym((P)"write-to-string");
  lit_10 = YPsb((P)"");
  T28 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_write_to_string_8 = YPmet(FUNCODEREF(fun_write_to_string_8),LITREF(lit_9),T26,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooSioSwriteYwrite_to_string);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooSioSwriteYwrite_to_string);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_write_to_string_8;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooSioSwriteYwrite_to_string,T29);
  lit_11 = YPPsym((P)"write");
  lit_12 = YPsb((P)"*");
  T34 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_9 = YPmet(FUNCODEREF(fun_recur_9),LITREF(lit_6),T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_10 = YPmet(FUNCODEREF(fun_write_10),LITREF(lit_11),T33,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YgooSioSwriteYwrite);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooSioSwriteYwrite);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_write_10;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooSioSwriteYwrite,T35);
  lit_13 = YPPsym((P)"writeln");
  T39 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_writeln_11 = YPmet(FUNCODEREF(fun_writeln_11),LITREF(lit_13),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YgooSioSwriteYwriteln);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooSioSwriteYwriteln);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_writeln_11;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooSioSwriteYwriteln,T40);
  lit_14 = YPPsym((P)"recurring-write");
  lit_15 = YPsb((P)"()");
  T44 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_12 = YPmet(FUNCODEREF(fun_recurring_write_12),LITREF(lit_14),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T47 != YPfalse) {
    T46 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_recurring_write_12;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YgooSioSwriteYrecurring_write,T45);
  T49 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_13 = YPmet(FUNCODEREF(fun_recurring_write_13),LITREF(lit_14),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T52 != YPfalse) {
    T51 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_recurring_write_13;
  T50 = CALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YgooSioSwriteYrecurring_write,T50);
  T54 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_14 = YPmet(FUNCODEREF(fun_recurring_write_14),LITREF(lit_14),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_recurring_write_14;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooSioSwriteYrecurring_write,T55);
  lit_16 = YPPsym((P)"t");
  lit_17 = YPPsym((P)"f");
  T59 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_15 = YPmet(FUNCODEREF(fun_recurring_write_15),LITREF(lit_14),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_recurring_write_15;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooSioSwriteYrecurring_write,T60);
  T64 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsymG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_16 = YPmet(FUNCODEREF(fun_recurring_write_16),LITREF(lit_14),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_recurring_write_16;
  T65 = CALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSioSwriteYrecurring_write,T65);
  lit_18 = YPsb((P)"&0x");
  T69 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlocG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_17 = YPmet(FUNCODEREF(fun_recurring_write_17),LITREF(lit_14),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_recurring_write_17;
  T70 = CALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSioSwriteYrecurring_write,T70);
  lit_19 = YPsb((P)"<num>");
  T74 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_18 = YPmet(FUNCODEREF(fun_recurring_write_18),LITREF(lit_14),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_recurring_write_18;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSioSwriteYrecurring_write,T75);
  T79 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_19 = YPmet(FUNCODEREF(fun_recurring_write_19),LITREF(lit_14),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T82 != YPfalse) {
    T81 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_recurring_write_19;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YgooSioSwriteYrecurring_write,T80);
  T84 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_20 = YPmet(FUNCODEREF(fun_recurring_write_20),LITREF(lit_14),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T87 != YPfalse) {
    T86 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_recurring_write_20;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YgooSioSwriteYrecurring_write,T85);
  lit_20 = YPPsym((P)"write-boolean");
  lit_21 = YPPsym((P)"mumble");
  T89 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_21)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_boolean_21 = YPmet(FUNCODEREF(fun_write_boolean_21),LITREF(lit_20),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YgooSioSwriteYwrite_boolean);
  if (T92 != YPfalse) {
    T91 = VARREF(YgooSioSwriteYwrite_boolean);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_write_boolean_21;
  T90 = CALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YgooSioSwriteYwrite_boolean,T90);
  lit_22 = YPPsym((P)"write-number");
  T94 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_number_22 = YPmet(FUNCODEREF(fun_write_number_22),LITREF(lit_22),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YgooSioSwriteYwrite_number);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooSioSwriteYwrite_number);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_write_number_22;
  T95 = CALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooSioSwriteYwrite_number,T95);
  lit_23 = YPPsym((P)"write-char-literal");
  lit_24 = YPsb((P)"#\\");
  T99 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_char_literal_23 = YPmet(FUNCODEREF(fun_write_char_literal_23),LITREF(lit_23),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YgooSioSwriteYwrite_char_literal);
  if (T102 != YPfalse) {
    T101 = VARREF(YgooSioSwriteYwrite_char_literal);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_write_char_literal_23;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YgooSioSwriteYwrite_char_literal,T100);
  lit_25 = YPPsym((P)"character-name");
  lit_26 = YPPsym((P)"char");
  T104 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_character_name_24 = YPmet(FUNCODEREF(fun_character_name_24),LITREF(lit_25),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YgooSioSwriteYcharacter_name);
  if (T107 != YPfalse) {
    T106 = VARREF(YgooSioSwriteYcharacter_name);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_character_name_24;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YgooSioSwriteYcharacter_name,T105);
  lit_27 = YPPsym((P)"write-string-literal");
  lit_28 = YPPsym((P)"loop");
  lit_29 = YPPsym((P)"i");
  T110 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_25 = YPmet(FUNCODEREF(fun_loop_25),LITREF(lit_28),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_string_literal_26 = YPmet(FUNCODEREF(fun_write_string_literal_26),LITREF(lit_27),T109,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YgooSioSwriteYwrite_string_literal);
  if (T113 != YPfalse) {
    T112 = VARREF(YgooSioSwriteYwrite_string_literal);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_write_string_literal_26;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YgooSioSwriteYwrite_string_literal,T111);
  lit_30 = YPPsym((P)"write-list");
  lit_31 = YPPsym((P)"l");
  lit_32 = YPPsym((P)"n");
  lit_33 = YPsb((P)" ...");
  T116 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_32)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_27 = YPmet(FUNCODEREF(fun_loop_27),LITREF(lit_28),T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_list_28 = YPmet(FUNCODEREF(fun_write_list_28),LITREF(lit_30),T115,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(YgooSioSwriteYwrite_list);
  if (T119 != YPfalse) {
    T118 = VARREF(YgooSioSwriteYwrite_list);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_write_list_28;
  T117 = CALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YgooSioSwriteYwrite_list,T117);
  lit_34 = YPPsym((P)"quotation?");
  lit_35 = YPPsym((P)"quote");
  T121 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_quotationQ_29 = YPmet(FUNCODEREF(fun_quotationQ_29),LITREF(lit_34),T121,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YgooSioSwriteYquotationQ);
  if (T124 != YPfalse) {
    T123 = VARREF(YgooSioSwriteYquotationQ);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_quotationQ_29;
  T122 = CALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YgooSioSwriteYquotationQ,T122);
  lit_36 = YPPsym((P)"write-flat");
  lit_37 = YPsb((P)"#(");
  lit_38 = YPsb((P)"$$");
  lit_39 = YPsb((P)"(");
  lit_40 = YPsb((P)" ...");
  T127 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_30 = YPmet(FUNCODEREF(fun_loop_30),LITREF(lit_28),T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_flat_31 = YPmet(FUNCODEREF(fun_write_flat_31),LITREF(lit_36),T126,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YgooSioSwriteYwrite_flat);
  if (T130 != YPfalse) {
    T129 = VARREF(YgooSioSwriteYwrite_flat);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_write_flat_31;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YgooSioSwriteYwrite_flat,T128);
  lit_41 = YPPsym((P)"write-map");
  lit_42 = YPsb((P)"#[");
  lit_43 = YPPsym((P)"blow");
  lit_44 = YPPsym((P)"x-1392");
  lit_45 = YPPsym((P)"x-1391");
  lit_46 = YPPsym((P)"x-1390");
  lit_47 = YPsb((P)" ...");
  lit_48 = YPsb((P)": ");
  T134 = YPsig(YPPlist(2,LITREF(lit_45),LITREF(lit_46)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1392_32 = YPmet(FUNCODEREF(fun_x_1392_32),LITREF(lit_44),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_map_34 = YPmet(FUNCODEREF(fun_write_map_34),LITREF(lit_41),T132,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YgooSioSwriteYwrite_map);
  if (T137 != YPfalse) {
    T136 = VARREF(YgooSioSwriteYwrite_map);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_write_map_34;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YgooSioSwriteYwrite_map,T135);
  lit_49 = YPsb((P)"#{In-port}");
  T139 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLin_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_35 = YPmet(FUNCODEREF(fun_recurring_write_35),LITREF(lit_14),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T142 != YPfalse) {
    T141 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_recurring_write_35;
  T140 = CALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YgooSioSwriteYrecurring_write,T140);
  lit_50 = YPsb((P)"#{Out-port}");
  T144 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLout_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_36 = YPmet(FUNCODEREF(fun_recurring_write_36),LITREF(lit_14),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T147 != YPfalse) {
    T146 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_recurring_write_36;
  T145 = CALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YgooSioSwriteYrecurring_write,T145);
  lit_51 = YPPsym((P)"write-params");
  lit_52 = YPPsym((P)"x-1396");
  lit_53 = YPPsym((P)"x-1395");
  lit_54 = YPPsym((P)"x-1394");
  lit_55 = YPPsym((P)"x-1393");
  lit_56 = YPsb((P)"(%s ");
  lit_57 = YPsb((P)" => ");
  T150 = YPsig(YPPlist(3,LITREF(lit_53),LITREF(lit_54),LITREF(lit_55)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1396_37 = YPmet(FUNCODEREF(fun_x_1396_37),LITREF(lit_52),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_4),LITREF(lit_6)),YPPlist(3,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_write_params_38 = YPmet(FUNCODEREF(fun_write_params_38),LITREF(lit_51),T149,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YgooSioSwriteYwrite_params);
  if (T153 != YPfalse) {
    T152 = VARREF(YgooSioSwriteYwrite_params);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_write_params_38;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YgooSioSwriteYwrite_params,T151);
  lit_58 = YPPsym((P)"write-fun-guts");
  lit_59 = YPsb((P)"#{");
  lit_60 = YPsb((P)"}");
  T155 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_1),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_fun_guts_39 = YPmet(FUNCODEREF(fun_write_fun_guts_39),LITREF(lit_58),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YgooSioSwriteYwrite_fun_guts);
  if (T158 != YPfalse) {
    T157 = VARREF(YgooSioSwriteYwrite_fun_guts);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_write_fun_guts_39;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YgooSioSwriteYwrite_fun_guts,T156);
  lit_61 = YPsb((P)"Gen");
  T160 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLgenG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_40 = YPmet(FUNCODEREF(fun_recurring_write_40),LITREF(lit_14),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T163 != YPfalse) {
    T162 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_recurring_write_40;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YgooSioSwriteYrecurring_write,T161);
  lit_62 = YPsb((P)"Met");
  T165 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLmetG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_41 = YPmet(FUNCODEREF(fun_recurring_write_41),LITREF(lit_14),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T168 != YPfalse) {
    T167 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_recurring_write_41;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YgooSioSwriteYrecurring_write,T166);
  lit_63 = YPsb((P)"#{Class ");
  lit_64 = YPsb((P)" ");
  lit_65 = YPsb((P)"}");
  T170 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_42 = YPmet(FUNCODEREF(fun_recurring_write_42),LITREF(lit_14),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T173 != YPfalse) {
    T172 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_recurring_write_42;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YgooSioSwriteYrecurring_write,T171);
  lit_66 = YPsb((P)"#{T= ");
  lit_67 = YPsb((P)"}");
  T175 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsingletonG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_43 = YPmet(FUNCODEREF(fun_recurring_write_43),LITREF(lit_14),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T178 != YPfalse) {
    T177 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_recurring_write_43;
  T176 = CALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YgooSioSwriteYrecurring_write,T176);
  lit_68 = YPsb((P)"#{T< ");
  lit_69 = YPsb((P)"}");
  T180 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsubclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_44 = YPmet(FUNCODEREF(fun_recurring_write_44),LITREF(lit_14),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T183 != YPfalse) {
    T182 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_recurring_write_44;
  T181 = CALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YgooSioSwriteYrecurring_write,T181);
  lit_70 = YPsb((P)"#{T+");
  lit_71 = YPsb((P)"}");
  T186 = YPsig(YPPlist(1,LITREF(lit_16)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T186,ENVNUL,PNUL,YPfalse);
  T185 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLunionG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_46 = YPmet(FUNCODEREF(fun_recurring_write_46),LITREF(lit_14),T185,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T189 != YPfalse) {
    T188 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_recurring_write_46;
  T187 = CALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YgooSioSwriteYrecurring_write,T187);
  lit_72 = YPPsym((P)"recurring-write-type");
  T191 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_47 = YPmet(FUNCODEREF(fun_recurring_write_type_47),LITREF(lit_72),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YgooSioSwriteYrecurring_write_type);
  if (T194 != YPfalse) {
    T193 = VARREF(YgooSioSwriteYrecurring_write_type);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_recurring_write_type_47;
  T192 = CALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YgooSioSwriteYrecurring_write_type,T192);
  T196 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_48 = YPmet(FUNCODEREF(fun_recurring_write_type_48),LITREF(lit_72),T196,ENVNUL,PNUL,YPfalse);
  T199 = BOUNDP(YgooSioSwriteYrecurring_write_type);
  if (T199 != YPfalse) {
    T198 = VARREF(YgooSioSwriteYrecurring_write_type);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_recurring_write_type_48;
  T197 = CALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YgooSioSwriteYrecurring_write_type,T197);
  lit_73 = YPPsym((P)"write-type");
  T202 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_49 = YPmet(FUNCODEREF(fun_recur_49),LITREF(lit_6),T202,ENVNUL,PNUL,YPfalse);
  T201 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_type_50 = YPmet(FUNCODEREF(fun_write_type_50),LITREF(lit_73),T201,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YgooSioSwriteYwrite_type);
  if (T205 != YPfalse) {
    T204 = VARREF(YgooSioSwriteYwrite_type);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_write_type_50;
  T203 = CALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YgooSioSwriteYwrite_type,T203);
  lit_74 = YPsb((P)"#{Prop ");
  lit_75 = YPsb((P)"}");
  T207 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLpropG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_51 = YPmet(FUNCODEREF(fun_recurring_write_51),LITREF(lit_14),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T210 != YPfalse) {
    T209 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_recurring_write_51;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YgooSioSwriteYrecurring_write,T208);
  lit_76 = YPsb((P)"#{");
  lit_77 = YPPsym((P)"x-1400");
  lit_78 = YPPsym((P)"x-1399");
  lit_79 = YPPsym((P)"x-1398");
  lit_80 = YPsb((P)" ...");
  lit_81 = YPsb((P)": ");
  lit_82 = YPsb((P)"}");
  T216 = YPsig(YPPlist(2,LITREF(lit_78),LITREF(lit_79)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1400_52 = YPmet(FUNCODEREF(fun_x_1400_52),LITREF(lit_77),T216,ENVNUL,PNUL,YPfalse);
  T215 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T215,ENVNUL,PNUL,YPfalse);
  T214 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T214,ENVNUL,PNUL,YPfalse);
  T213 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T213,ENVNUL,PNUL,YPfalse);
  T212 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_56 = YPmet(FUNCODEREF(fun_recurring_write_56),LITREF(lit_14),T212,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T219 != YPfalse) {
    T218 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_recurring_write_56;
  T217 = CALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(YgooSioSwriteYrecurring_write,T217);
  lit_83 = YPsb((P)"#{End-of-file}");
  T223 = CALL0(1,VARREF(YgooSmathYeof_object));
  T222 = CALL1(1,VARREF(YgooStypesYtE),T223);
  T221 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),T222,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_57 = YPmet(FUNCODEREF(fun_recurring_write_57),LITREF(lit_14),T221,ENVNUL,PNUL,YPfalse);
  T226 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T226 != YPfalse) {
    T225 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_recurring_write_57;
  T224 = CALL2(1,VARREF(YPdefine_method),T225,T227);
  VARSET(YgooSioSwriteYrecurring_write,T224);
  lit_84 = YPsb((P)"nul");
  T229 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Ynul));
  T228 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),T229,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_58 = YPmet(FUNCODEREF(fun_recurring_write_58),LITREF(lit_14),T228,ENVNUL,PNUL,YPfalse);
  T232 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T232 != YPfalse) {
    T231 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T231 = YPfalse;
  }
  T233 = fun_recurring_write_58;
  T230 = CALL2(1,VARREF(YPdefine_method),T231,T233);
  VARSET(YgooSioSwriteYrecurring_write,T230);
  lit_85 = YPPsym((P)"format");
  lit_86 = YPPsym((P)"message");
  lit_87 = YPPsym((P)"arguments");
  lit_88 = YPPsym((P)"arg");
  lit_89 = YPPsym((P)"class");
  lit_90 = YPsb((P)"Too few arguments for format string %=: %=");
  lit_91 = YPsb((P)"Format argument for directive '%%%c' not of class %s: %=");
  lit_92 = YPPsym((P)"c");
  lit_93 = YPsb((P)"Invalid format directive '%s' in \"%s\"");
  lit_94 = YPsb((P)"Incomplete format directive in \"%s\"");
  T236 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_89)),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_arg_59 = YPmet(FUNCODEREF(fun_arg_59),LITREF(lit_88),T236,ENVNUL,PNUL,YPfalse);
  T235 = YPsig(YPPlist(1,LITREF(lit_92)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T235,ENVNUL,PNUL,YPfalse);
  T234 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_86),LITREF(lit_87)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_format_61 = YPmet(FUNCODEREF(fun_format_61),LITREF(lit_85),T234,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YgooSruntimeYformat);
  if (T239 != YPfalse) {
    T238 = VARREF(YgooSruntimeYformat);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_format_61;
  T237 = CALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YgooSruntimeYformat,T237);
  lit_95 = YPPsym((P)"pe-format");
  lit_96 = YPPsym((P)"port-expr");
  lit_97 = YPPsym((P)"args");
  T241 = YPsig(YPPlist(3,LITREF(lit_96),LITREF(lit_86),LITREF(lit_97)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pe_format_62 = YPmet(FUNCODEREF(fun_pe_format_62),LITREF(lit_95),T241,ENVNUL,PNUL,YPfalse);
  T244 = BOUNDP(YgooSioSwriteYpe_format);
  if (T244 != YPfalse) {
    T243 = VARREF(YgooSioSwriteYpe_format);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_pe_format_62;
  T242 = CALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YgooSioSwriteYpe_format,T242);
  lit_98 = YPPsym((P)"maybe-pack-chars");
  lit_99 = YPPsym((P)"puts");
  lit_100 = YPsb((P)"Too few arguments for format string %=: %=");
  lit_101 = YPPsym((P)"num-to-str");
  lit_102 = YPPsym((P)"put");
  lit_103 = YPsb((P)"Invalid format directive '%s' in \"%s\"");
  lit_104 = YPsb((P)"Incomplete format directive in \"%s\"");
  lit_105 = YPPsym((P)"let");
  T249 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_maybe_pack_chars_63 = YPmet(FUNCODEREF(fun_maybe_pack_chars_63),LITREF(lit_98),T249,ENVNUL,PNUL,YPfalse);
  T248 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_arg_64 = YPmet(FUNCODEREF(fun_arg_64),LITREF(lit_88),T248,ENVNUL,PNUL,YPfalse);
  T247 = YPsig(YPPlist(1,LITREF(lit_92)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T247,ENVNUL,PNUL,YPfalse);
  T246 = YPsig(YPPlist(3,LITREF(lit_96),LITREF(lit_86),LITREF(lit_97)),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pe_format_66 = YPmet(FUNCODEREF(fun_pe_format_66),LITREF(lit_95),T246,ENVNUL,PNUL,YPfalse);
  T252 = BOUNDP(YgooSioSwriteYpe_format);
  if (T252 != YPfalse) {
    T251 = VARREF(YgooSioSwriteYpe_format);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_pe_format_66;
  T250 = CALL2(1,VARREF(YPdefine_method),T251,T253);
  VARSET(YgooSioSwriteYpe_format,T250);
  lit_106 = YPPsym((P)"exp");
  lit_107 = YPPsym((P)"return");
  lit_108 = YPPsym((P)"x-1410");
  lit_109 = YPPsym((P)"msg");
  lit_110 = YPsb((P)"Match Pattern Failure");
  T256 = YPsig(YPPlist(2,LITREF(lit_109),LITREF(lit_97)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1410_67 = YPmet(FUNCODEREF(fun_x_1410_67),LITREF(lit_108),T256,ENVNUL,PNUL,YPfalse);
  T255 = YPsig(YPPlist(1,LITREF(lit_107)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T255,ENVNUL,PNUL,YPfalse);
  T254 = YPsig(YPPlist(1,LITREF(lit_106)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T254,ENVNUL,PNUL,YPfalse);
  T257 = fun_69;
  YPmacro(YPPsym((P)"goo/io/write"),YPPsym((P)"msg"),T257);
  lit_111 = YPPsym((P)"format-to-string");
  T260 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T260,ENVNUL,PNUL,YPfalse);
  T259 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T259,ENVNUL,PNUL,YPfalse);
  T258 = YPsig(YPPlist(2,LITREF(lit_86),LITREF(lit_87)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSruntimeYformat_to_string = YPmet(FUNCODEREF(YgooSruntimeYformat_to_string),LITREF(lit_111),T258,ENVNUL,PNUL,YPfalse);
  T261 = YgooSruntimeYformat_to_string;
  VARSET(YgooSruntimeYformat_to_string,T261);
  lit_112 = YPPsym((P)"say");
  T263 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_73 = YPmet(FUNCODEREF(fun_loop_73),LITREF(lit_28),T263,ENVNUL,PNUL,YPfalse);
  T262 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_97)),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSwriteYsay = YPmet(FUNCODEREF(YgooSioSwriteYsay),LITREF(lit_112),T262,ENVNUL,PNUL,YPfalse);
  T264 = YgooSioSwriteYsay;
  VARSET(YgooSioSwriteYsay,T264);
  T265 = YPfalse;
  return T265;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_gooScolsSzip;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooSioSport},
  {&module_info_gooScols},
  {&module_info_gooSruntime},
  {&module_info_gooSioSread},
  {&module_info_gooSpacker},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"quote", &module_info_gooSboot, "quote"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"items", &module_info_gooScolsScol, "items"},
  {"round", &module_info_gooSmath, "round"},
  {"loc", &module_info_gooSboot, "loc"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"string-join", &module_info_gooScolsSstr, "string-join"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"len", &module_info_gooStypes, "len"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"min", &module_info_gooSmag, "min"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"find", &module_info_gooScolsScol, "find"},
  {"as", &module_info_gooStypes, "as"},
  {"format-to-string", &module_info_gooSruntime, "format-to-string"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"log", &module_info_gooSmath, "log"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"$e", &module_info_gooSmath, "$e"},
  {">", &module_info_gooSmag, ">"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"@+", &module_info_gooSboot, "@+"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"always", &module_info_gooSruntime, "always"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"~", &module_info_gooSmath, "~"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"df", &module_info_gooSboot, "df"},
  {"floor", &module_info_gooSmath, "floor"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"for", &module_info_gooSmacros, "for"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {">=", &module_info_gooSmag, ">="},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"<", &module_info_gooSmag, "<"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"dv", &module_info_gooSboot, "dv"},
  {"-", &module_info_gooSmath, "-"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"if", &module_info_gooSboot, "if"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"packed", &module_info_gooSpacker, "packed"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"get", &module_info_gooSioSport, "get"},
  {"dg", &module_info_gooSboot, "dg"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"dss", &module_info_gooSboot, "dss"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"low-fill!", &module_info_gooScolsScol, "low-fill!"},
  {"%put", &module_info_gooSboot, "%put"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"<<", &module_info_gooSmath, "<<"},
  {"not", &module_info_gooSboot, "not"},
  {"op", &module_info_gooSmacros, "op"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"asin", &module_info_gooSmath, "asin"},
  {"dc", &module_info_gooSboot, "dc"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"export", &module_info_gooSboot, "export"},
  {"<=", &module_info_gooSmag, "<="},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"into", &module_info_gooScolsScol, "into"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"even?", &module_info_gooSmath, "even?"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"head", &module_info_gooSboot, "head"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"let", &module_info_gooSboot, "let"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"or", &module_info_gooSmacros, "or"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"%im", &module_info_gooSboot, "%im"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"t*", &module_info_gooStypes, "t*"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"map", &module_info_gooSmacros, "map"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"&", &module_info_gooSmath, "&"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"atan", &module_info_gooSmath, "atan"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"while", &module_info_gooSmacros, "while"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"~=", &module_info_gooSmath, "~="},
  {"string-split", &module_info_gooScolsSstr, "string-split"},
  {"now", &module_info_gooScolsScol, "now"},
  {"mif", &module_info_gooSboot, "mif"},
  {"new", &module_info_gooSboot, "new"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {">>", &module_info_gooSmath, ">>"},
  {"low-into", &module_info_gooScolsScol, "low-into"},
  {"^", &module_info_gooSmath, "^"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"do", &module_info_gooSmacros, "do"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"push", &module_info_gooScolsSlst, "push"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"/", &module_info_gooSmath, "/"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"|", &module_info_gooSmath, "|"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"tup", &module_info_gooSboot, "tup"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"out", &module_info_gooSioSport, "out"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"assocs-test-setter", &module_info_gooScolsSassoc, "assocs-test-setter"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"string-repeat", &module_info_gooScolsSstr, "string-repeat"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"isa", &module_info_gooSboot, "isa"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"set", &module_info_gooSboot, "set"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fun", &module_info_gooSboot, "fun"},
  {"dm", &module_info_gooSboot, "dm"},
  {"close", &module_info_gooSioSport, "close"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"1-", &module_info_gooSmath, "1-"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"t?", &module_info_gooStypes, "t?"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"when", &module_info_gooSmacros, "when"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"put", &module_info_gooSioSport, "put"},
  {"round/", &module_info_gooSmath, "round/"},
  {"rem", &module_info_gooSmath, "rem"},
  {"ds", &module_info_gooSboot, "ds"},
  {"=", &module_info_gooSmath, "="},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%get", &module_info_gooSboot, "%get"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"match", &module_info_gooSmacros, "match"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"+", &module_info_gooSmath, "+"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"in", &module_info_gooSioSport, "in"},
  {"*", &module_info_gooSmath, "*"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"1+", &module_info_gooSmath, "1+"},
  {"def", &module_info_gooSboot, "def"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"seq", &module_info_gooSboot, "seq"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"try", &module_info_gooSboot, "try"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"@len", &module_info_gooSboot, "@len"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"sin", &module_info_gooSmath, "sin"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"pop-last!", &module_info_gooScolsSvec, "pop-last!"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"pow", &module_info_gooSmath, "pow"},
  {"rep", &module_info_gooSboot, "rep"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"any?", &module_info_gooStypes, "any?"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"and", &module_info_gooSmacros, "and"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"t=", &module_info_gooStypes, "t="},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"push-last!", &module_info_gooScolsSvec, "push-last!"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"app", &module_info_gooSmacros, "app"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"==", &module_info_gooSmacros, "=="},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"lst", &module_info_gooSboot, "lst"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"open", &module_info_gooSioSport, "open"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"format", &module_info_gooSruntime, "format"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"max", &module_info_gooSmag, "max"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"case", &module_info_gooSmacros, "case"},
  {"read", &module_info_gooSruntime, "read"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"error", &module_info_gooSboot, "error"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"tan", &module_info_gooSmath, "tan"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"as-binding-name", &YgooSioSwriteYas_binding_name},
  {"writeln", &YgooSioSwriteYwriteln},
  {"display", &YgooSioSwriteYdisplay},
  {"recurring-write", &YgooSioSwriteYrecurring_write},
  {"pe-format", &YgooSioSwriteYpe_format},
  {"write-fun-guts", &YgooSioSwriteYwrite_fun_guts},
  {"write-flat", &YgooSioSwriteYwrite_flat},
  {"write-char-literal", &YgooSioSwriteYwrite_char_literal},
  {"*max-print-length*", &YgooSioSwriteYTmax_print_lengthT},
  {"recurring-write-type", &YgooSioSwriteYrecurring_write_type},
  {"character-name", &YgooSioSwriteYcharacter_name},
  {"say", &YgooSioSwriteYsay},
  {"do-display", &YgooSioSwriteYdo_display},
  {"msg", NULL},
  {"---main-0---", NULL},
  {"write-number", &YgooSioSwriteYwrite_number},
  {"write-type", &YgooSioSwriteYwrite_type},
  {"write-list", &YgooSioSwriteYwrite_list},
  {"write-params", &YgooSioSwriteYwrite_params},
  {"write-map", &YgooSioSwriteYwrite_map},
  {"quotation?", &YgooSioSwriteYquotationQ},
  {"write-to-string", &YgooSioSwriteYwrite_to_string},
  {"write", &YgooSioSwriteYwrite},
  {"write-boolean", &YgooSioSwriteYwrite_boolean},
  {"*max-print-depth*", &YgooSioSwriteYTmax_print_depthT},
  {"write-string-literal", &YgooSioSwriteYwrite_string_literal},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"format-to-string", "format-to-string"},
  {"writeln", "writeln"},
  {"display", "display"},
  {"pe-format", "pe-format"},
  {"*max-print-length*", "*max-print-length*"},
  {"say", "say"},
  {"msg", "msg"},
  {"write-to-string", "write-to-string"},
  {"write", "write"},
  {"recurring-write", "recurring-write"},
  {"format", "format"},
  {"*max-print-depth*", "*max-print-depth*"},
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
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSioSport (void);
extern void load_module_gooScols (void);
extern void load_module_gooSruntime (void);
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
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooSioSport();
  load_module_gooScols();
  load_module_gooSruntime();
  load_module_gooSioSread();
  load_module_gooSpacker();

  (P)YgooSioSwriteY___main_0___();

}

/* END OF GENERATED CODE. */
