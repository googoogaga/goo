/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/io/write */

EXT(YLoptsG,"goo/boot","<opts>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
DEF(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yerror,"goo/boot","error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYmodA,"goo/math","mod+");
DYNDEF(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Ytup,"goo/boot","tup");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooSioSwriteYwrite_fun_guts,"goo/io/write","write-fun-guts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YgooSioSwriteYwrite_boolean,"goo/io/write","write-boolean");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yobject_class,"goo/boot","object-class");
DEF(YgooSioSwriteYwrite_map,"goo/io/write","write-map");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(YgooSioSwriteYdo_emit,"goo/io/write","do-emit");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
DEF(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YgooSioSwriteYwrite_number,"goo/io/write","write-number");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YgooSioSwriteYwrite_params,"goo/io/write","write-params");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YgooSioSwriteYcharacter_name,"goo/io/write","character-name");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DYNDEF(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYmod_,"goo/math","mod-");
DEF(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YgooSioSwriteYrecurring_write_type,"goo/io/write","recurring-write-type");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yhead,"goo/boot","head");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YgooSioSwriteYwrite_char_literal,"goo/io/write","write-char-literal");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YgooSioSwriteYas_binding_name,"goo/io/write","as-binding-name");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YgooSioSwriteYwrite_list,"goo/io/write","write-list");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
DEF(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ynot,"goo/boot","not");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooSioSwriteYwrite_flat,"goo/io/write","write-flat");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YOlst,"goo/boot","@lst");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YgooSioSwriteYwrite_value_type,"goo/io/write","write-value-type");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
DEF(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ynew,"goo/boot","new");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YgooSioSwriteYwrite_string_literal,"goo/io/write","write-string-literal");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YgooSioSwriteYquotationQ,"goo/io/write","quotation?");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_105);
DEFLIT(lit_43);
DEFLIT(lit_27);
DEFLIT(lit_67);
DEFLIT(lit_59);
DEFLIT(lit_76);
DEFLIT(lit_51);
DEFLIT(lit_95);
DEFLIT(lit_84);
DEFLIT(lit_3);
DEFLIT(lit_30);
DEFLIT(lit_41);
DEFLIT(lit_38);
DEFLIT(lit_107);
DEFLIT(lit_85);
DEFLIT(lit_118);
DEFLIT(lit_23);
DEFLIT(lit_60);
DEFLIT(lit_61);
DEFLIT(lit_49);
DEFLIT(lit_104);
DEFLIT(lit_68);
DEFLIT(lit_5);
DEFLIT(lit_75);
DEFLIT(lit_7);
DEFLIT(lit_39);
DEFLIT(lit_100);
DEFLIT(lit_36);
DEFLIT(lit_57);
DEFLIT(lit_117);
DEFLIT(lit_112);
DEFLIT(lit_42);
DEFLIT(lit_79);
DEFLIT(lit_54);
DEFLIT(lit_28);
DEFLIT(lit_24);
DEFLIT(lit_110);
DEFLIT(lit_55);
DEFLIT(lit_109);
DEFLIT(lit_46);
DEFLIT(lit_35);
DEFLIT(lit_97);
DEFLIT(lit_0);
DEFLIT(lit_78);
DEFLIT(lit_31);
DEFLIT(lit_16);
DEFLIT(lit_91);
DEFLIT(lit_70);
DEFLIT(lit_18);
DEFLIT(lit_10);
DEFLIT(lit_2);
DEFLIT(lit_22);
DEFLIT(lit_64);
DEFLIT(lit_119);
DEFLIT(lit_34);
DEFLIT(lit_96);
DEFLIT(lit_1);
DEFLIT(lit_17);
DEFLIT(lit_45);
DEFLIT(lit_6);
DEFLIT(lit_103);
DEFLIT(lit_66);
DEFLIT(lit_101);
DEFLIT(lit_15);
DEFLIT(lit_65);
DEFLIT(lit_123);
DEFLIT(lit_8);
DEFLIT(lit_86);
DEFLIT(lit_102);
DEFLIT(lit_89);
DEFLIT(lit_114);
DEFLIT(lit_71);
DEFLIT(lit_9);
DEFLIT(lit_124);
DEFLIT(lit_20);
DEFLIT(lit_11);
DEFLIT(lit_74);
DEFLIT(lit_19);
DEFLIT(lit_90);
DEFLIT(lit_72);
DEFLIT(lit_58);
DEFLIT(lit_73);
DEFLIT(lit_80);
DEFLIT(lit_81);
DEFLIT(lit_32);
DEFLIT(lit_69);
DEFLIT(lit_53);
DEFLIT(lit_48);
DEFLIT(lit_62);
DEFLIT(lit_12);
DEFLIT(lit_29);
DEFLIT(lit_77);
DEFLIT(lit_94);
DEFLIT(lit_33);
DEFLIT(lit_50);
DEFLIT(lit_56);
DEFLIT(lit_120);
DEFLIT(lit_26);
DEFLIT(lit_115);
DEFLIT(lit_25);
DEFLIT(lit_44);
DEFLIT(lit_99);
DEFLIT(lit_40);
DEFLIT(lit_116);
DEFLIT(lit_87);
DEFLIT(lit_83);
DEFLIT(lit_13);
DEFLIT(lit_121);
DEFLIT(lit_111);
DEFLIT(lit_93);
DEFLIT(lit_113);
DEFLIT(lit_47);
DEFLIT(lit_37);
DEFLIT(lit_21);
DEFLIT(lit_98);
DEFLIT(lit_14);
DEFLIT(lit_63);
DEFLIT(lit_106);
DEFLIT(lit_122);
DEFLIT(lit_92);
DEFLIT(lit_88);
DEFLIT(lit_52);
DEFLIT(lit_82);
DEFLIT(lit_108);
DEFLIT(lit_4);

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
LOCFOR(fun_x_1386_34);
LOCFOR(fun_35);
LOCFOR(fun_write_map_36);
LOCFOR(fun_recurring_write_37);
LOCFOR(fun_recurring_write_38);
LOCFOR(fun_x_1390_39);
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
LOCFOR(fun_x_1394_61);
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
LOCFOR(fun_x_1404_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
FUNFOR(YgooSruntimeYmsg_to_str);
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
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_8));
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
  P recurF1439;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF1439 = T1;
  FUNINIT(recurF1439, 2,port_,recurF1439);
  T2 = CALL2(0,recurF1439,x_,YPint((P)-1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P T0,T1,T2;
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
  P tmpF1440;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF1440 = T1;
  if (tmpF1440 != YPfalse) {
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
  P portF1441;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  portF1441 = YPfalse;
  portF1441 = BOXFAB(portF1441);
  T3 = FUNFAB(fun_6,2,portF1441,x_);
  T4 = FUNFAB(fun_7,1,portF1441);
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
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_12));
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
  P recurF1442;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_9,2);
  recurF1442 = T1;
  FUNINIT(recurF1442, 2,port_,recurF1442);
  T2 = CALL2(0,recurF1442,x_,YPint((P)-1));
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
    T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_15));
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
  P prefixF1443;
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
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_16),T2,LITREF(lit_17));
  prefixF1443 = T1;
  T5 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,prefixF1443,x_,LITREF(lit_18),d_,recur_);
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
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,LITREF(lit_19),x_,LITREF(lit_20),d_,recur_);
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
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,LITREF(lit_21),x_,LITREF(lit_22),d_,recur_);
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
    T1 = CALL2(1,VARREF(YgooSioSwriteYwrite_boolean),port_,LITREF(lit_23));
    T0 = T1;
  } else {
    T2 = CALL2(1,VARREF(YgooSioSwriteYwrite_boolean),port_,LITREF(lit_24));
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
  P T0,T1,T2,T3;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_25));
  T3 = (P)YPlu(x_);
  T2 = (P)YPib(T3);
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
    T3 = CALL1(1,VARREF(YgooSioSwriteYas_binding_name),LITREF(lit_26));
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
  P probeF1444;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSwriteYcharacter_name),x_);
  probeF1444 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_31));
  if (probeF1444 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,probeF1444);
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
  P tmpF1446;
  P assocF1445;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooScolsSlstYassqn),char_,VARREF(YgooSioSreadYDchar_long_names),YPint((P)1));
  assocF1445 = T1;
  tmpF1446 = assocF1445;
  if (tmpF1446 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsSseqY1st),assocF1445);
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
  P tmpF1448;
  P cF1447;
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
    cF1447 = T4;
    T6 = CALL2(1,VARREF(YgooSmathYE),cF1447,YPchr((P)92));
    tmpF1448 = T6;
    if (tmpF1448 != YPfalse) {
      T7 = tmpF1448;
    } else {
      T8 = CALL2(1,VARREF(YgooSmathYE),cF1447,YPchr((P)34));
      T7 = T8;
    }
    T5 = T7;
    if (T5 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)92));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),cF1447);
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
  P loopF1450;
  P lenF1449;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  lenF1449 = T1;
  T3 = FUNSHELL(1,fun_loop_27,4);
  loopF1450 = T3;
  FUNINIT(loopF1450, 4,lenF1449,port_,x_,loopF1450);
  T4 = CALL1(0,loopF1450,YPint((P)0));
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
      T5 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_40));
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
  P loopF1451;
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
    loopF1451 = T6;
    FUNINIT(loopF1451, 4,port_,d_,recur_,loopF1451);
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(0,loopF1451,T8,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_31) {
  P x_;
  P tmpF1454;
  P tmpF1453;
  P tmpF1452;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF1452 = T1;
  if (tmpF1452 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_42));
    tmpF1453 = T4;
    if (tmpF1453 != YPfalse) {
      T9 = CALL1(1,VARREF(Ytail),x_);
      T8 = CALL2(1,VARREF(YisaQ),T9,VARREF(YLlstG));
      tmpF1454 = T8;
      if (tmpF1454 != YPfalse) {
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
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_46));
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
  P loopF1456;
  P zF1455;
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
  zF1455 = T1;
  T2 = CALL2(1,VARREF(YgooSmagYG),zF1455,YPint((P)0));
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T3,d_);
    T5 = FUNSHELL(1,fun_loop_32,6);
    loopF1456 = T5;
    FUNINIT(loopF1456, 6,port_,zF1455,x_,d_,recur_,loopF1456);
    T6 = CALL1(0,loopF1456,YPint((P)1));
    T4 = T6;
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSioSportYputs),port_,suffix_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1386_34) {
  P x_1385_,x_1384_;
  P valF1461;
  P keyF1460;
  P tup26F1459;
  P iF1458;
  P tmpF1457;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2;
LINK_STACK();
  ARG(x_1385_, 0);
  ARG(x_1384_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1385_);
  tmpF1457 = T3;
  if (tmpF1457 != YPfalse) {
    T4 = tmpF1457;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1384_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1385_);
    iF1458 = T7;
    T10 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1384_);
    T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_1384_);
    T9 = CALL2(1,VARREF(Ytup),T10,T11);
    tup26F1459 = T9;
    T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F1459,YPint((P)0));
    keyF1460 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F1459,YPint((P)1));
    valF1461 = T15;
    T16 = CALL2(1,VARREF(YgooSmagYGE),iF1458,DYNREF(YgooSioSwriteYTmax_print_lengthT));
    if (T16 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_53));
      T17 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    CALL2(1,FREEREF(3),keyF1460,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_54));
    CALL2(1,FREEREF(3),valF1461,FREEREF(2));
    T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1385_);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1384_);
    a1 = T19;
    a2 = T20;
    x_1385_ = a1;
    x_1384_ = a2;
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
  P x_1386F1462;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_x_1386_34,5);
  x_1386F1462 = T1;
  FUNINIT(x_1386F1462, 5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),x_1386F1462);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(3));
  T2 = CALL2(0,x_1386F1462,T3,T5);
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
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_48));
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
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_55));
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
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_56));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1390_39) {
  P x_1389_,x_1388_,x_1387_;
  P iF1467;
  P specF1466;
  P firstQF1465;
  P tmpF1464;
  P tmpF1463;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1389_, 0);
  ARG(x_1388_, 1);
  ARG(x_1387_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1389_);
  tmpF1463 = T3;
  if (tmpF1463 != YPfalse) {
    T4 = tmpF1463;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1388_);
    tmpF1464 = T6;
    if (tmpF1464 != YPfalse) {
      T7 = tmpF1464;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1387_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1389_);
    firstQF1465 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1388_);
    specF1466 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1387_);
    iF1467 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF1465);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    } else {
    }
    T17 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(1));
    if (T17 != YPfalse) {
      T18 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF1466);
    } else {
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),iF1467);
      T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T20);
      CALL3(1,VARREF(YgooSruntimeYmsg),FREEREF(0),LITREF(lit_62),T19);
      CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF1466);
      T21 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)41));
    }
    T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1389_);
    T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1388_);
    T25 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1387_);
    a1 = T23;
    a2 = T24;
    a3 = T25;
    x_1389_ = a1;
    x_1388_ = a2;
    x_1387_ = a3;
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
  P tmpF1472;
  P valueF1471;
  P x_1390F1470;
  P namesF1469;
  P namesF1468;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
loop:
  T1 = CALL1(1,VARREF(Yfun_names),x_);
  namesF1468 = T1;
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
  T3 = CALL1(1,VARREF(Yfun_names),x_);
  namesF1469 = T3;
  T4 = FUNSHELL(1,fun_x_1390_39,3);
  x_1390F1470 = T4;
  FUNINIT(x_1390F1470, 3,port_,namesF1469,x_1390F1470);
  T8 = fun_40;
  T9 = fun_41;
  T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T11 = CALL1(1,VARREF(Yfun_specs),x_);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T5 = CALL3(0,x_1390F1470,T6,T10,T12);
  T15 = CALL1(1,VARREF(Yfun_val),x_);
  valueF1471 = T15;
  T18 = CALL1(1,VARREF(Ynot),valueF1471);
  tmpF1472 = T18;
  if (tmpF1472 != YPfalse) {
    T19 = tmpF1472;
  } else {
    T20 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1471,VARREF(YLanyG));
    T19 = T20;
  }
  T17 = T19;
  T16 = CALL1(1,VARREF(Ynot),T17);
  if (T16 != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYmsg),port_,LITREF(lit_63));
    T21 = CALL2(1,VARREF(YgooSioSwriteYwrite_value_type),port_,valueF1471);
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
  P tmpF1474;
  P nameF1473;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(name_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_65));
  CALL2(1,VARREF(YgooSioSportYputs),port_,name_);
  T1 = CALL1(1,VARREF(Yfun_name),x_);
  nameF1473 = T1;
  tmpF1474 = nameF1473;
  if (tmpF1474 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF1473);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
  CALL3(1,VARREF(YgooSioSwriteYwrite_params),port_,x_,recur_);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_66));
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
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_67),recur_);
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
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_68),recur_);
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
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_69));
  T1 = CALL1(1,VARREF(Yclass_name),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
  CALL2(1,VARREF(YgooSioSportYputs),port_,T0);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_70));
  T3 = CALL1(1,VARREF(Yclass_parents),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yclass_name),T3);
  CALL2(1,recur_,T2,d_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_71));
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
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_72));
  T0 = CALL1(1,VARREF(Ytype_object),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_73));
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
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_74));
  T0 = CALL1(1,VARREF(Ytype_class),x_);
  CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_75));
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
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_76));
  T0 = FUNFAB(fun_49,1,port_);
  T1 = CALL1(1,VARREF(Yunion_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_77));
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
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_78));
  T0 = FUNFAB(fun_51,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_79));
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
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_81));
  T0 = FUNFAB(fun_53,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_82));
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
  P recurF1475;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_58,2);
  recurF1475 = T1;
  FUNINIT(recurF1475, 2,port_,recurF1475);
  T2 = CALL2(0,recurF1475,x_,YPint((P)0));
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
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_85));
  T0 = CALL1(1,VARREF(Yprop_getter),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_86));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_x_1394_61) {
  P x_1393_,x_1392_;
  P getterF1479;
  P propF1478;
  P iF1477;
  P tmpF1476;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(x_1393_, 0);
  ARG(x_1392_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1393_);
  tmpF1476 = T3;
  if (tmpF1476 != YPfalse) {
    T4 = tmpF1476;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1392_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1393_);
    iF1477 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1392_);
    propF1478 = T9;
    T10 = CALL2(1,VARREF(YgooSmagYGE),iF1477,DYNREF(YgooSioSwriteYTmax_print_lengthT));
    if (T10 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_91));
      T11 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    T13 = CALL1(1,VARREF(Yprop_getter),propF1478);
    getterF1479 = T13;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    T14 = CALL1(1,VARREF(Yfun_name),getterF1479);
    CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(0),T14);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_92));
    T15 = CALL1(1,getterF1479,FREEREF(2));
    CALL2(1,FREEREF(4),T15,FREEREF(3));
    T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1393_);
    T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1392_);
    a1 = T17;
    a2 = T18;
    x_1393_ = a1;
    x_1392_ = a2;
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
  P x_1394F1480;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  VARSET(YTreport_prop_unbound_errorsQT,YPfalse);
  T1 = FUNSHELL(1,fun_x_1394_61,6);
  x_1394F1480 = T1;
  FUNINIT(x_1394F1480, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),x_1394F1480);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T6 = CALL1(1,VARREF(Yobject_props),FREEREF(2));
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),T6);
  T2 = CALL2(0,x_1394F1480,T3,T5);
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
  P x_1391F1481;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  x_1391F1481 = VARREF(YTreport_prop_unbound_errorsQT);
  T2 = FUNFAB(fun_62,5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_63,1,x_1391F1481);
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
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_87));
  T1 = CALL1(1,VARREF(Yobject_class),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_64,4,port_,x_,d_,recur_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_93));
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
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_94));
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
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_95));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_68) {
  P char_,class_;
  P tmpF1484;
  P argumentF1483;
  P current_indexF1482;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
loop:
  T1 = BOXVAL(FREEREF(0));
  current_indexF1482 = T1;
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(0)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF1482,FREEREF(1));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_101),FREEREF(2),FREEREF(3));
  } else {
  }
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),current_indexF1482);
  argumentF1483 = T8;
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),class_,VARREF(YLanyG));
  tmpF1484 = T11;
  if (tmpF1484 != YPfalse) {
    T12 = tmpF1484;
  } else {
    T13 = CALL2(1,VARREF(YisaQ),argumentF1483,class_);
    T12 = T13;
  }
  T10 = T12;
  T9 = CALL1(1,VARREF(Ynot),T10);
  if (T9 != YPfalse) {
    T14 = CALL4(1,VARREF(Yerror),LITREF(lit_102),char_,class_,argumentF1483);
  } else {
  }
  T7 = argumentF1483;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P c_;
  P x_1396F1486;
  P x_1395F1485;
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
    x_1395F1485 = T2;
    x_1396F1486 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1396F1486,x_1395F1485,YPchr((P)68));
    if (T5 != YPfalse) {
      T8 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
      T6 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T7);
      T4 = T6;
    } else {
      T10 = CALL2(1,x_1396F1486,x_1395F1485,YPchr((P)66));
      if (T10 != YPfalse) {
        T13 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T12 = CALL2(1,VARREF(YgooSmathYnum_to_str),T13,YPint((P)2));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T12);
        T9 = T11;
      } else {
        T15 = CALL2(1,x_1396F1486,x_1395F1485,YPchr((P)79));
        if (T15 != YPfalse) {
          T18 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T17 = CALL2(1,VARREF(YgooSmathYnum_to_str),T18,YPint((P)8));
          T16 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T17);
          T14 = T16;
        } else {
          T20 = CALL2(1,x_1396F1486,x_1395F1485,YPchr((P)88));
          if (T20 != YPfalse) {
            T23 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T22 = CALL2(1,VARREF(YgooSmathYnum_to_str),T23,YPint((P)16));
            T21 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T22);
            T19 = T21;
          } else {
            T25 = CALL2(1,x_1396F1486,x_1395F1485,YPchr((P)67));
            if (T25 != YPfalse) {
              T27 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T26 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),T27);
              T24 = T26;
            } else {
              T29 = CALL2(1,x_1396F1486,x_1395F1485,YPchr((P)83));
              if (T29 != YPfalse) {
                T31 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T30 = CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T31);
                T28 = T30;
              } else {
                T33 = CALL2(1,x_1396F1486,x_1395F1485,YPchr((P)61));
                if (T33 != YPfalse) {
                  T35 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T34 = CALL2(1,VARREF(YgooSioSwriteYwrite),FREEREF(1),T35);
                  T32 = T34;
                } else {
                  T37 = CALL2(1,x_1396F1486,x_1395F1485,YPchr((P)37));
                  if (T37 != YPfalse) {
                    T38 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)37));
                    T36 = T38;
                  } else {
                    T39 = CALL3(1,VARREF(Yerror),LITREF(lit_104),c_,FREEREF(3));
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
  P argF1490;
  P num_argumentsF1489;
  P argument_indexF1488;
  P found_percentQF1487;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
loop:
  found_percentQF1487 = YPfalse;
  found_percentQF1487 = BOXFAB(found_percentQF1487);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF1488 = YPint((P)0);
  argument_indexF1488 = BOXFAB(argument_indexF1488);
  T5 = CALL1(1,VARREF(YgooStypesYlen),arguments_);
  num_argumentsF1489 = T5;
  T6 = FUNSHELL(1,fun_arg_68,4);
  argF1490 = T6;
  FUNINIT(argF1490, 4,argument_indexF1488,num_argumentsF1489,message_,arguments_);
  T8 = FUNFAB(fun_69,4,found_percentQF1487,port_,argF1490,message_);
  T7 = CALL2(1,VARREF(YgooSmacrosYdo),T8,message_);
  T12 = BOXVAL(found_percentQF1487);
  T11 = CALL1(1,VARREF(Ynot),T12);
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T13 = CALL2(1,VARREF(Yerror),LITREF(lit_105),message_);
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
  T0 = CALL5(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSruntimeYmsg),YPfalse,VARREF(YgooSioSportYout),message_,arguments_);
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
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T2 = CALL1(1,VARREF(Ylst),port_expr_);
  T3 = CALL1(1,VARREF(Ylst),message_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,args_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_pack_chars_73) {
  P UF1491;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(1));
    UF1491 = T3;
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
    T8 = CALL1(1,VARREF(Ylst),FREEREF(2));
    T10 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),FREEREF(0));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T9,Ynil);
    T5 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1491,T6);
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
  P current_indexF1492;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  CALL0(0,FREEREF(0));
  T1 = BOXVAL(FREEREF(1));
  current_indexF1492 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(1)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF1492,FREEREF(2));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_112),FREEREF(3),FREEREF(4));
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(4),current_indexF1492);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P c_;
  P UF1501;
  P UF1500;
  P UF1499;
  P UF1498;
  P UF1497;
  P UF1496;
  P UF1495;
  P x_1400F1494;
  P x_1399F1493;
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
    x_1399F1493 = T2;
    x_1400F1494 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1400F1494,x_1399F1493,YPchr((P)68));
    if (T5 != YPfalse) {
      T7 = BOXVAL(FREEREF(1));
      UF1495 = T7;
      T11 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
      T12 = CALL1(1,VARREF(Ylst),FREEREF(2));
      T15 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
      T17 = CALL1(1,FREEREF(3),c_);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
      T13 = CALL1(1,VARREF(Ylst),T14);
      T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
      T9 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1495,T10);
      T8 = BOXVAL(FREEREF(1)) = T9;
      T6 = T8;
      T4 = T6;
    } else {
      T19 = CALL2(1,x_1400F1494,x_1399F1493,YPchr((P)66));
      if (T19 != YPfalse) {
        T21 = BOXVAL(FREEREF(1));
        UF1496 = T21;
        T25 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
        T26 = CALL1(1,VARREF(Ylst),FREEREF(2));
        T29 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
        T31 = CALL1(1,FREEREF(3),c_);
        T30 = CALL1(1,VARREF(Ylst),T31);
        T32 = CALL1(1,VARREF(Ylst),YPint((P)2));
        T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,Ynil);
        T27 = CALL1(1,VARREF(Ylst),T28);
        T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,Ynil);
        T23 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1496,T24);
        T22 = BOXVAL(FREEREF(1)) = T23;
        T20 = T22;
        T18 = T20;
      } else {
        T34 = CALL2(1,x_1400F1494,x_1399F1493,YPchr((P)79));
        if (T34 != YPfalse) {
          T36 = BOXVAL(FREEREF(1));
          UF1497 = T36;
          T40 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
          T41 = CALL1(1,VARREF(Ylst),FREEREF(2));
          T44 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
          T46 = CALL1(1,FREEREF(3),c_);
          T45 = CALL1(1,VARREF(Ylst),T46);
          T47 = CALL1(1,VARREF(Ylst),YPint((P)8));
          T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T47,Ynil);
          T42 = CALL1(1,VARREF(Ylst),T43);
          T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,Ynil);
          T38 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1497,T39);
          T37 = BOXVAL(FREEREF(1)) = T38;
          T35 = T37;
          T33 = T35;
        } else {
          T49 = CALL2(1,x_1400F1494,x_1399F1493,YPchr((P)88));
          if (T49 != YPfalse) {
            T51 = BOXVAL(FREEREF(1));
            UF1498 = T51;
            T55 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
            T56 = CALL1(1,VARREF(Ylst),FREEREF(2));
            T59 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
            T61 = CALL1(1,FREEREF(3),c_);
            T60 = CALL1(1,VARREF(Ylst),T61);
            T62 = CALL1(1,VARREF(Ylst),YPint((P)16));
            T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T60,T62,Ynil);
            T57 = CALL1(1,VARREF(Ylst),T58);
            T54 = CALL4(1,VARREF(YgooSmacrosYcat),T55,T56,T57,Ynil);
            T53 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1498,T54);
            T52 = BOXVAL(FREEREF(1)) = T53;
            T50 = T52;
            T48 = T50;
          } else {
            T64 = CALL2(1,x_1400F1494,x_1399F1493,YPchr((P)67));
            if (T64 != YPfalse) {
              T66 = BOXVAL(FREEREF(1));
              UF1499 = T66;
              T70 = CALL1(1,VARREF(Ylst),LITREF(lit_114));
              T71 = CALL1(1,VARREF(Ylst),FREEREF(2));
              T73 = CALL2(1,FREEREF(3),c_,VARREF(YLchrG));
              T72 = CALL1(1,VARREF(Ylst),T73);
              T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T71,T72,Ynil);
              T68 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1499,T69);
              T67 = BOXVAL(FREEREF(1)) = T68;
              T65 = T67;
              T63 = T65;
            } else {
              T75 = CALL2(1,x_1400F1494,x_1399F1493,YPchr((P)83));
              if (T75 != YPfalse) {
                T77 = BOXVAL(FREEREF(1));
                UF1500 = T77;
                T81 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
                T82 = CALL1(1,VARREF(Ylst),FREEREF(2));
                T84 = CALL1(1,FREEREF(3),c_);
                T83 = CALL1(1,VARREF(Ylst),T84);
                T80 = CALL4(1,VARREF(YgooSmacrosYcat),T81,T82,T83,Ynil);
                T79 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1500,T80);
                T78 = BOXVAL(FREEREF(1)) = T79;
                T76 = T78;
                T74 = T76;
              } else {
                T86 = CALL2(1,x_1400F1494,x_1399F1493,YPchr((P)61));
                if (T86 != YPfalse) {
                  T88 = BOXVAL(FREEREF(1));
                  UF1501 = T88;
                  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
                  T93 = CALL1(1,VARREF(Ylst),FREEREF(2));
                  T95 = CALL1(1,FREEREF(3),c_);
                  T94 = CALL1(1,VARREF(Ylst),T95);
                  T91 = CALL4(1,VARREF(YgooSmacrosYcat),T92,T93,T94,Ynil);
                  T90 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1501,T91);
                  T89 = BOXVAL(FREEREF(1)) = T90;
                  T87 = T89;
                  T85 = T87;
                } else {
                  T97 = CALL2(1,x_1400F1494,x_1399F1493,YPchr((P)37));
                  if (T97 != YPfalse) {
                    T98 = CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(4),YPchr((P)37));
                    T96 = T98;
                  } else {
                    T99 = CALL3(1,VARREF(Yerror),LITREF(lit_115),c_,FREEREF(5));
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
  P exprsF1510;
  P argF1509;
  P maybe_pack_charsF1508;
  P packer_F1507;
  P portF1506;
  P charsF1505;
  P num_argsF1504;
  P arg_indexF1503;
  P found_percentQF1502;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
loop:
  found_percentQF1502 = YPfalse;
  found_percentQF1502 = BOXFAB(found_percentQF1502);
  check_type(YPint((P)0),VARREF(YLintG));
  arg_indexF1503 = YPint((P)0);
  arg_indexF1503 = BOXFAB(arg_indexF1503);
  T5 = CALL1(1,VARREF(YgooStypesYlen),args_);
  num_argsF1504 = T5;
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  charsF1505 = T7;
  T9 = CALL0(1,VARREF(YgooSmacrosYgensym));
  portF1506 = T9;
  T12 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F1507 = T12;
  packer_F1507 = BOXFAB(packer_F1507);
  T14 = FUNSHELL(1,fun_maybe_pack_chars_73,3);
  maybe_pack_charsF1508 = T14;
  T15 = FUNSHELL(1,fun_arg_74,5);
  argF1509 = T15;
  FUNINIT(maybe_pack_charsF1508, 3,charsF1505,packer_F1507,portF1506);
  FUNINIT(argF1509, 5,maybe_pack_charsF1508,arg_indexF1503,num_argsF1504,message_,args_);
  T16 = FUNFAB(fun_75,6,found_percentQF1502,packer_F1507,portF1506,argF1509,charsF1505,message_);
  CALL2(1,VARREF(YgooSmacrosYdo),T16,message_);
  T17 = CALL0(0,maybe_pack_charsF1508);
  T19 = BOXVAL(packer_F1507);
  T18 = CALL1(1,VARREF(YgooSpackerYpacker_res),T19);
  T11 = T18;
  exprsF1510 = T11;
  T22 = BOXVAL(found_percentQF1502);
  T21 = CALL1(1,VARREF(Ynot),T22);
  T20 = CALL1(1,VARREF(Ynot),T21);
  if (T20 != YPfalse) {
    T23 = CALL2(1,VARREF(Yerror),LITREF(lit_116),message_);
  } else {
  }
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T30 = CALL1(1,VARREF(Ylst),portF1506);
  T31 = CALL1(1,VARREF(Ylst),port_expr_);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,exprsF1510,Ynil);
  T10 = T24;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1404_77) {
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

FUNCODEDEF(fun_78) {
  P return_;
  P x_1403F1519;
  P x_1403F1518;
  P x_1403F1517;
  P x_1403F1516;
  P argsF1515;
  P messageF1514;
  P portF1513;
  P x_1403F1512;
  P x_1404F1511;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1404_77,1);
  x_1404F1511 = T1;
  FUNINIT(x_1404F1511, 1,return_);
  x_1403F1512 = FREEREF(0);
  portF1513 = YPfalse;
  portF1513 = BOXFAB(portF1513);
  messageF1514 = YPfalse;
  messageF1514 = BOXFAB(messageF1514);
  argsF1515 = YPfalse;
  argsF1515 = BOXFAB(argsF1515);
  T9 = CALL2(1,VARREF(YisaQ),x_1403F1512,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1403F1512,LITREF(lit_121),x_1404F1511);
    x_1403F1516 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1403F1516,x_1404F1511);
    BOXVAL(portF1513) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1403F1516);
    x_1403F1517 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1403F1517,x_1404F1511);
    BOXVAL(messageF1514) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1403F1517);
    x_1403F1518 = T17;
    BOXVAL(argsF1515) = x_1403F1518;
    x_1403F1519 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1403F1519,x_1404F1511);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1404F1511,LITREF(lit_122),x_1403F1512);
  }
  T22 = BOXVAL(portF1513);
  T23 = BOXVAL(messageF1514);
  T24 = BOXVAL(argsF1515);
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
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_10));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  CALL5(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSruntimeYmsg),YPfalse,T1,FREEREF(1),FREEREF(2));
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(YgooSioSportYport_contents),T3);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_81) {
  P tmpF1520;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF1520 = T1;
  if (tmpF1520 != YPfalse) {
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

FUNCODEDEF(YgooSruntimeYmsg_to_str) {
  P message_,arguments_;
  P portF1521;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
loop:
  portF1521 = YPfalse;
  portF1521 = BOXFAB(portF1521);
  T3 = FUNFAB(fun_80,3,portF1521,message_,arguments_);
  T4 = FUNFAB(fun_81,1,portF1521);
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
  P loopF1523;
  P limF1522;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  limF1522 = T1;
  T3 = FUNSHELL(1,fun_loop_83,4);
  loopF1523 = T3;
  FUNINIT(loopF1523, 4,limF1522,port_,args_,loopF1523);
  T4 = CALL1(0,loopF1523,YPint((P)0));
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
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283,T284,T285,T286,T287;
  P T288,T289,T290,T291,T292,T293;
DEFCREGS();
loop:
  DYNDEFSET(YgooSioSwriteYTmax_print_depthT,YPint((P)4));
  DYNDEFSET(YgooSioSwriteYTmax_print_lengthT,YPint((P)12));
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
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSioSwriteYas_binding_name,T1);
  lit_2 = YPPsym((P)"do-emit");
  lit_3 = YPPsym((P)"port");
  lit_4 = YPPsym((P)"x");
  lit_5 = YPPsym((P)"d");
  lit_6 = YPPsym((P)"recur");
  T5 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T10 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T15 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  lit_7 = YPPsym((P)"emit");
  lit_8 = YPsb((P)"*");
  T21 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_4 = YPmet(FUNCODEREF(fun_recur_4),LITREF(lit_6),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_emit_5 = YPmet(FUNCODEREF(fun_emit_5),LITREF(lit_7),T20,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YgooSioSwriteYemit);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooSioSwriteYemit);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_emit_5;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooSioSwriteYemit,T22);
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
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
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
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
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
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
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
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YgooSioSwriteYrecurring_write,T45);
  lit_16 = YPsb((P)"$$");
  lit_17 = YPsb((P)"(");
  lit_18 = YPsb((P)")");
  T49 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_13 = YPmet(FUNCODEREF(fun_recurring_write_13),LITREF(lit_14),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T52 != YPfalse) {
    T51 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_recurring_write_13;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YgooSioSwriteYrecurring_write,T50);
  lit_19 = YPsb((P)"#(");
  lit_20 = YPsb((P)")");
  T54 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLtupG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_14 = YPmet(FUNCODEREF(fun_recurring_write_14),LITREF(lit_14),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_recurring_write_14;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooSioSwriteYrecurring_write,T55);
  lit_21 = YPsb((P)"#[");
  lit_22 = YPsb((P)"]");
  T59 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_15 = YPmet(FUNCODEREF(fun_recurring_write_15),LITREF(lit_14),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_recurring_write_15;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooSioSwriteYrecurring_write,T60);
  T64 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_16 = YPmet(FUNCODEREF(fun_recurring_write_16),LITREF(lit_14),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_recurring_write_16;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSioSwriteYrecurring_write,T65);
  lit_23 = YPPsym((P)"t");
  lit_24 = YPPsym((P)"f");
  T69 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_17 = YPmet(FUNCODEREF(fun_recurring_write_17),LITREF(lit_14),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_recurring_write_17;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSioSwriteYrecurring_write,T70);
  T74 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsymG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_18 = YPmet(FUNCODEREF(fun_recurring_write_18),LITREF(lit_14),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_recurring_write_18;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSioSwriteYrecurring_write,T75);
  lit_25 = YPsb((P)"&0x");
  T79 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlocG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_19 = YPmet(FUNCODEREF(fun_recurring_write_19),LITREF(lit_14),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T82 != YPfalse) {
    T81 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_recurring_write_19;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YgooSioSwriteYrecurring_write,T80);
  lit_26 = YPsb((P)"<num>");
  T84 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_20 = YPmet(FUNCODEREF(fun_recurring_write_20),LITREF(lit_14),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T87 != YPfalse) {
    T86 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_recurring_write_20;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YgooSioSwriteYrecurring_write,T85);
  T89 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_21 = YPmet(FUNCODEREF(fun_recurring_write_21),LITREF(lit_14),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T92 != YPfalse) {
    T91 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_recurring_write_21;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YgooSioSwriteYrecurring_write,T90);
  T94 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_22 = YPmet(FUNCODEREF(fun_recurring_write_22),LITREF(lit_14),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_recurring_write_22;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooSioSwriteYrecurring_write,T95);
  lit_27 = YPPsym((P)"write-boolean");
  lit_28 = YPPsym((P)"mumble");
  T99 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_28)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_boolean_23 = YPmet(FUNCODEREF(fun_write_boolean_23),LITREF(lit_27),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YgooSioSwriteYwrite_boolean);
  if (T102 != YPfalse) {
    T101 = VARREF(YgooSioSwriteYwrite_boolean);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_write_boolean_23;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YgooSioSwriteYwrite_boolean,T100);
  lit_29 = YPPsym((P)"write-number");
  T104 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_number_24 = YPmet(FUNCODEREF(fun_write_number_24),LITREF(lit_29),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YgooSioSwriteYwrite_number);
  if (T107 != YPfalse) {
    T106 = VARREF(YgooSioSwriteYwrite_number);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_write_number_24;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YgooSioSwriteYwrite_number,T105);
  lit_30 = YPPsym((P)"write-char-literal");
  lit_31 = YPsb((P)"#\\");
  T109 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_char_literal_25 = YPmet(FUNCODEREF(fun_write_char_literal_25),LITREF(lit_30),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YgooSioSwriteYwrite_char_literal);
  if (T112 != YPfalse) {
    T111 = VARREF(YgooSioSwriteYwrite_char_literal);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_write_char_literal_25;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YgooSioSwriteYwrite_char_literal,T110);
  lit_32 = YPPsym((P)"character-name");
  lit_33 = YPPsym((P)"char");
  T114 = YPsig(YPPlist(1,LITREF(lit_33)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_character_name_26 = YPmet(FUNCODEREF(fun_character_name_26),LITREF(lit_32),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YgooSioSwriteYcharacter_name);
  if (T117 != YPfalse) {
    T116 = VARREF(YgooSioSwriteYcharacter_name);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_character_name_26;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YgooSioSwriteYcharacter_name,T115);
  lit_34 = YPPsym((P)"write-string-literal");
  lit_35 = YPPsym((P)"loop");
  lit_36 = YPPsym((P)"i");
  T120 = YPsig(YPPlist(1,LITREF(lit_36)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_27 = YPmet(FUNCODEREF(fun_loop_27),LITREF(lit_35),T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_string_literal_28 = YPmet(FUNCODEREF(fun_write_string_literal_28),LITREF(lit_34),T119,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YgooSioSwriteYwrite_string_literal);
  if (T123 != YPfalse) {
    T122 = VARREF(YgooSioSwriteYwrite_string_literal);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_write_string_literal_28;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YgooSioSwriteYwrite_string_literal,T121);
  lit_37 = YPPsym((P)"write-list");
  lit_38 = YPPsym((P)"l");
  lit_39 = YPPsym((P)"n");
  lit_40 = YPsb((P)" ...");
  T126 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_39)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_29 = YPmet(FUNCODEREF(fun_loop_29),LITREF(lit_35),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_list_30 = YPmet(FUNCODEREF(fun_write_list_30),LITREF(lit_37),T125,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YgooSioSwriteYwrite_list);
  if (T129 != YPfalse) {
    T128 = VARREF(YgooSioSwriteYwrite_list);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_write_list_30;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YgooSioSwriteYwrite_list,T127);
  lit_41 = YPPsym((P)"quotation?");
  lit_42 = YPPsym((P)"quote");
  T131 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_quotationQ_31 = YPmet(FUNCODEREF(fun_quotationQ_31),LITREF(lit_41),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YgooSioSwriteYquotationQ);
  if (T134 != YPfalse) {
    T133 = VARREF(YgooSioSwriteYquotationQ);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_quotationQ_31;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YgooSioSwriteYquotationQ,T132);
  lit_43 = YPPsym((P)"write-flat");
  lit_44 = YPPsym((P)"prefix");
  lit_45 = YPPsym((P)"suffix");
  lit_46 = YPsb((P)" ...");
  T137 = YPsig(YPPlist(1,LITREF(lit_36)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_32 = YPmet(FUNCODEREF(fun_loop_32),LITREF(lit_35),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(6,LITREF(lit_3),LITREF(lit_44),LITREF(lit_4),LITREF(lit_45),LITREF(lit_5),LITREF(lit_6)),YPPlist(6,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLflatG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_write_flat_33 = YPmet(FUNCODEREF(fun_write_flat_33),LITREF(lit_43),T136,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YgooSioSwriteYwrite_flat);
  if (T140 != YPfalse) {
    T139 = VARREF(YgooSioSwriteYwrite_flat);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_write_flat_33;
  T138 = XCALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YgooSioSwriteYwrite_flat,T138);
  lit_47 = YPPsym((P)"write-map");
  lit_48 = YPsb((P)"#<");
  lit_49 = YPPsym((P)"blow");
  lit_50 = YPPsym((P)"x-1386");
  lit_51 = YPPsym((P)"x-1385");
  lit_52 = YPPsym((P)"x-1384");
  lit_53 = YPsb((P)" ...");
  lit_54 = YPsb((P)": ");
  T144 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1386_34 = YPmet(FUNCODEREF(fun_x_1386_34),LITREF(lit_50),T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_map_36 = YPmet(FUNCODEREF(fun_write_map_36),LITREF(lit_47),T142,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YgooSioSwriteYwrite_map);
  if (T147 != YPfalse) {
    T146 = VARREF(YgooSioSwriteYwrite_map);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_write_map_36;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YgooSioSwriteYwrite_map,T145);
  lit_55 = YPsb((P)"#{In-port}");
  T149 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLin_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_37 = YPmet(FUNCODEREF(fun_recurring_write_37),LITREF(lit_14),T149,ENVNUL,PNUL,YPfalse);
  T152 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T152 != YPfalse) {
    T151 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_recurring_write_37;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YgooSioSwriteYrecurring_write,T150);
  lit_56 = YPsb((P)"#{Out-port}");
  T154 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLout_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_38 = YPmet(FUNCODEREF(fun_recurring_write_38),LITREF(lit_14),T154,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T157 != YPfalse) {
    T156 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_recurring_write_38;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YgooSioSwriteYrecurring_write,T155);
  lit_57 = YPPsym((P)"write-params");
  lit_58 = YPPsym((P)"x-1390");
  lit_59 = YPPsym((P)"x-1389");
  lit_60 = YPPsym((P)"x-1388");
  lit_61 = YPPsym((P)"x-1387");
  lit_62 = YPsb((P)"(%s ");
  lit_63 = YPsb((P)" => ");
  T162 = YPsig(YPPlist(3,LITREF(lit_59),LITREF(lit_60),LITREF(lit_61)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1390_39 = YPmet(FUNCODEREF(fun_x_1390_39),LITREF(lit_58),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_4)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_4)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_4),LITREF(lit_6)),YPPlist(3,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_write_params_42 = YPmet(FUNCODEREF(fun_write_params_42),LITREF(lit_57),T159,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YgooSioSwriteYwrite_params);
  if (T165 != YPfalse) {
    T164 = VARREF(YgooSioSwriteYwrite_params);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_write_params_42;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YgooSioSwriteYwrite_params,T163);
  lit_64 = YPPsym((P)"write-fun-guts");
  lit_65 = YPsb((P)"#{");
  lit_66 = YPsb((P)"}");
  T167 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_1),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_fun_guts_43 = YPmet(FUNCODEREF(fun_write_fun_guts_43),LITREF(lit_64),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YgooSioSwriteYwrite_fun_guts);
  if (T170 != YPfalse) {
    T169 = VARREF(YgooSioSwriteYwrite_fun_guts);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_write_fun_guts_43;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YgooSioSwriteYwrite_fun_guts,T168);
  lit_67 = YPsb((P)"Gen");
  T172 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLgenG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_44 = YPmet(FUNCODEREF(fun_recurring_write_44),LITREF(lit_14),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T175 != YPfalse) {
    T174 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_recurring_write_44;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YgooSioSwriteYrecurring_write,T173);
  lit_68 = YPsb((P)"Met");
  T177 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLmetG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_45 = YPmet(FUNCODEREF(fun_recurring_write_45),LITREF(lit_14),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T180 != YPfalse) {
    T179 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_recurring_write_45;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YgooSioSwriteYrecurring_write,T178);
  lit_69 = YPsb((P)"#{Class ");
  lit_70 = YPsb((P)" ");
  lit_71 = YPsb((P)"}");
  T182 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_46 = YPmet(FUNCODEREF(fun_recurring_write_46),LITREF(lit_14),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T185 != YPfalse) {
    T184 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_recurring_write_46;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YgooSioSwriteYrecurring_write,T183);
  lit_72 = YPsb((P)"#{T= ");
  lit_73 = YPsb((P)"}");
  T187 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsingletonG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_47 = YPmet(FUNCODEREF(fun_recurring_write_47),LITREF(lit_14),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T190 != YPfalse) {
    T189 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_recurring_write_47;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YgooSioSwriteYrecurring_write,T188);
  lit_74 = YPsb((P)"#{T< ");
  lit_75 = YPsb((P)"}");
  T192 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsubclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_48 = YPmet(FUNCODEREF(fun_recurring_write_48),LITREF(lit_14),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T195 != YPfalse) {
    T194 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_recurring_write_48;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YgooSioSwriteYrecurring_write,T193);
  lit_76 = YPsb((P)"#{T+");
  lit_77 = YPsb((P)"}");
  T198 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T198,ENVNUL,PNUL,YPfalse);
  T197 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLunionG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_50 = YPmet(FUNCODEREF(fun_recurring_write_50),LITREF(lit_14),T197,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T201 != YPfalse) {
    T200 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_recurring_write_50;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YgooSioSwriteYrecurring_write,T199);
  lit_78 = YPsb((P)"#{T*");
  lit_79 = YPsb((P)"}");
  T204 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T204,ENVNUL,PNUL,YPfalse);
  T203 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_52 = YPmet(FUNCODEREF(fun_recurring_write_52),LITREF(lit_14),T203,ENVNUL,PNUL,YPfalse);
  T207 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T207 != YPfalse) {
    T206 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T206 = YPfalse;
  }
  T208 = fun_recurring_write_52;
  T205 = XCALL2(1,VARREF(YPdefine_method),T206,T208);
  VARSET(YgooSioSwriteYrecurring_write,T205);
  lit_80 = YPPsym((P)"write-value-type");
  lit_81 = YPsb((P)"(tup");
  lit_82 = YPsb((P)")");
  T210 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T210,ENVNUL,PNUL,YPfalse);
  T209 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_54 = YPmet(FUNCODEREF(fun_write_value_type_54),LITREF(lit_80),T209,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(YgooSioSwriteYwrite_value_type);
  if (T213 != YPfalse) {
    T212 = VARREF(YgooSioSwriteYwrite_value_type);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_write_value_type_54;
  T211 = XCALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(YgooSioSwriteYwrite_value_type,T211);
  T215 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_55 = YPmet(FUNCODEREF(fun_write_value_type_55),LITREF(lit_80),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(YgooSioSwriteYwrite_value_type);
  if (T218 != YPfalse) {
    T217 = VARREF(YgooSioSwriteYwrite_value_type);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_write_value_type_55;
  T216 = XCALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(YgooSioSwriteYwrite_value_type,T216);
  lit_83 = YPPsym((P)"recurring-write-type");
  T220 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_56 = YPmet(FUNCODEREF(fun_recurring_write_type_56),LITREF(lit_83),T220,ENVNUL,PNUL,YPfalse);
  T223 = BOUNDP(YgooSioSwriteYrecurring_write_type);
  if (T223 != YPfalse) {
    T222 = VARREF(YgooSioSwriteYrecurring_write_type);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_recurring_write_type_56;
  T221 = XCALL2(1,VARREF(YPdefine_method),T222,T224);
  VARSET(YgooSioSwriteYrecurring_write_type,T221);
  T225 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_57 = YPmet(FUNCODEREF(fun_recurring_write_type_57),LITREF(lit_83),T225,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YgooSioSwriteYrecurring_write_type);
  if (T228 != YPfalse) {
    T227 = VARREF(YgooSioSwriteYrecurring_write_type);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_recurring_write_type_57;
  T226 = XCALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YgooSioSwriteYrecurring_write_type,T226);
  lit_84 = YPPsym((P)"write-type");
  T231 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_58 = YPmet(FUNCODEREF(fun_recur_58),LITREF(lit_6),T231,ENVNUL,PNUL,YPfalse);
  T230 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_type_59 = YPmet(FUNCODEREF(fun_write_type_59),LITREF(lit_84),T230,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(YgooSioSwriteYwrite_type);
  if (T234 != YPfalse) {
    T233 = VARREF(YgooSioSwriteYwrite_type);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_write_type_59;
  T232 = XCALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YgooSioSwriteYwrite_type,T232);
  lit_85 = YPsb((P)"#{Prop ");
  lit_86 = YPsb((P)"}");
  T236 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLpropG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_60 = YPmet(FUNCODEREF(fun_recurring_write_60),LITREF(lit_14),T236,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T239 != YPfalse) {
    T238 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_recurring_write_60;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YgooSioSwriteYrecurring_write,T237);
  lit_87 = YPsb((P)"#{");
  lit_88 = YPPsym((P)"x-1394");
  lit_89 = YPPsym((P)"x-1393");
  lit_90 = YPPsym((P)"x-1392");
  lit_91 = YPsb((P)" ...");
  lit_92 = YPsb((P)": ");
  lit_93 = YPsb((P)"}");
  T245 = YPsig(YPPlist(2,LITREF(lit_89),LITREF(lit_90)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1394_61 = YPmet(FUNCODEREF(fun_x_1394_61),LITREF(lit_88),T245,ENVNUL,PNUL,YPfalse);
  T244 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T244,ENVNUL,PNUL,YPfalse);
  T243 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T243,ENVNUL,PNUL,YPfalse);
  T242 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T242,ENVNUL,PNUL,YPfalse);
  T241 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_65 = YPmet(FUNCODEREF(fun_recurring_write_65),LITREF(lit_14),T241,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T248 != YPfalse) {
    T247 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_recurring_write_65;
  T246 = XCALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(YgooSioSwriteYrecurring_write,T246);
  lit_94 = YPsb((P)"#{End-of-file}");
  T252 = XCALL0(1,VARREF(YgooSmathYeof_object));
  T251 = XCALL1(1,VARREF(YgooStypesYtE),T252);
  T250 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),T251,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_66 = YPmet(FUNCODEREF(fun_recurring_write_66),LITREF(lit_14),T250,ENVNUL,PNUL,YPfalse);
  T255 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T255 != YPfalse) {
    T254 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T254 = YPfalse;
  }
  T256 = fun_recurring_write_66;
  T253 = XCALL2(1,VARREF(YPdefine_method),T254,T256);
  VARSET(YgooSioSwriteYrecurring_write,T253);
  lit_95 = YPsb((P)"nul");
  T258 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(Ynul));
  T257 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),T258,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_67 = YPmet(FUNCODEREF(fun_recurring_write_67),LITREF(lit_14),T257,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T261 != YPfalse) {
    T260 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_recurring_write_67;
  T259 = XCALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(YgooSioSwriteYrecurring_write,T259);
  lit_96 = YPPsym((P)"msg");
  lit_97 = YPPsym((P)"message");
  lit_98 = YPPsym((P)"arguments");
  lit_99 = YPPsym((P)"arg");
  lit_100 = YPPsym((P)"class");
  lit_101 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_102 = YPsb((P)"Msg argument for directive '%%%c' not of class %s: %=");
  lit_103 = YPPsym((P)"c");
  lit_104 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_105 = YPsb((P)"Incomplete msg directive in \"%s\"");
  T265 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_100)),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_arg_68 = YPmet(FUNCODEREF(fun_arg_68),LITREF(lit_99),T265,ENVNUL,PNUL,YPfalse);
  T264 = YPsig(YPPlist(1,LITREF(lit_103)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T264,ENVNUL,PNUL,YPfalse);
  T263 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_97),LITREF(lit_98)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_msg_70 = YPmet(FUNCODEREF(fun_msg_70),LITREF(lit_96),T263,ENVNUL,PNUL,YPfalse);
  T268 = BOUNDP(YgooSruntimeYmsg);
  if (T268 != YPfalse) {
    T267 = VARREF(YgooSruntimeYmsg);
  } else {
    T267 = YPfalse;
  }
  T269 = fun_msg_70;
  T266 = XCALL2(1,VARREF(YPdefine_method),T267,T269);
  VARSET(YgooSruntimeYmsg,T266);
  lit_106 = YPPsym((P)"post");
  T270 = YPsig(YPPlist(2,LITREF(lit_97),LITREF(lit_98)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_post_71 = YPmet(FUNCODEREF(fun_post_71),LITREF(lit_106),T270,ENVNUL,PNUL,YPfalse);
  T273 = BOUNDP(YgooSioSwriteYpost);
  if (T273 != YPfalse) {
    T272 = VARREF(YgooSioSwriteYpost);
  } else {
    T272 = YPfalse;
  }
  T274 = fun_post_71;
  T271 = XCALL2(1,VARREF(YPdefine_method),T272,T274);
  VARSET(YgooSioSwriteYpost,T271);
  lit_107 = YPPsym((P)"pe-msg");
  lit_108 = YPPsym((P)"port-expr");
  lit_109 = YPPsym((P)"args");
  T275 = YPsig(YPPlist(3,LITREF(lit_108),LITREF(lit_97),LITREF(lit_109)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pe_msg_72 = YPmet(FUNCODEREF(fun_pe_msg_72),LITREF(lit_107),T275,ENVNUL,PNUL,YPfalse);
  T278 = BOUNDP(YgooSioSwriteYpe_msg);
  if (T278 != YPfalse) {
    T277 = VARREF(YgooSioSwriteYpe_msg);
  } else {
    T277 = YPfalse;
  }
  T279 = fun_pe_msg_72;
  T276 = XCALL2(1,VARREF(YPdefine_method),T277,T279);
  VARSET(YgooSioSwriteYpe_msg,T276);
  lit_110 = YPPsym((P)"maybe-pack-chars");
  lit_111 = YPPsym((P)"puts");
  lit_112 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_113 = YPPsym((P)"num-to-str");
  lit_114 = YPPsym((P)"put");
  lit_115 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_116 = YPsb((P)"Incomplete msg directive in \"%s\"");
  lit_117 = YPPsym((P)"let");
  T288 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T287 = fun_maybe_pack_chars_73 = YPmet(FUNCODEREF(fun_maybe_pack_chars_73),LITREF(lit_110),T288,ENVNUL,PNUL,YPfalse);
  T286 = YPsig(YPPlist(1,LITREF(lit_33)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T285 = fun_arg_74 = YPmet(FUNCODEREF(fun_arg_74),LITREF(lit_99),T286,ENVNUL,PNUL,YPfalse);
  T284 = YPsig(YPPlist(1,LITREF(lit_103)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T283 = fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T284,ENVNUL,PNUL,YPfalse);
  T282 = YPsig(YPPlist(3,LITREF(lit_108),LITREF(lit_97),LITREF(lit_109)),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T281 = fun_pe_msg_76 = YPmet(FUNCODEREF(fun_pe_msg_76),LITREF(lit_107),T282,ENVNUL,PNUL,YPfalse);
  T292 = BOUNDP(YgooSioSwriteYpe_msg);
  if (T292 != YPfalse) {
    T291 = VARREF(YgooSioSwriteYpe_msg);
  } else {
    T291 = YPfalse;
  }
  T293 = fun_pe_msg_76;
  T290 = XCALL2(1,VARREF(YPdefine_method),T291,T293);
  T289 = VARSET(YgooSioSwriteYpe_msg,T290);
  T280 = T289;
  return T280;
}

P YgooSioSwriteY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
DEFCREGS();
loop:
  lit_118 = YPPsym((P)"exp");
  lit_119 = YPPsym((P)"return");
  lit_120 = YPPsym((P)"x-1404");
  lit_121 = YPPsym((P)"msg*");
  lit_122 = YPsb((P)"Match Pattern Failure");
  T2 = YPsig(YPPlist(2,LITREF(lit_96),LITREF(lit_109)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1404_77 = YPmet(FUNCODEREF(fun_x_1404_77),LITREF(lit_120),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(1,LITREF(lit_119)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_118)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_79;
  YPmacro(YPPsym((P)"goo/io/write"),YPPsym((P)"msg*"),T3);
  lit_123 = YPPsym((P)"msg-to-str");
  T6 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(YPPlist(2,LITREF(lit_97),LITREF(lit_98)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSruntimeYmsg_to_str = YPmet(FUNCODEREF(YgooSruntimeYmsg_to_str),LITREF(lit_123),T4,ENVNUL,PNUL,YPfalse);
  T7 = YgooSruntimeYmsg_to_str;
  VARSET(YgooSruntimeYmsg_to_str,T7);
  lit_124 = YPPsym((P)"say");
  T9 = YPsig(YPPlist(1,LITREF(lit_36)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_83 = YPmet(FUNCODEREF(fun_loop_83),LITREF(lit_35),T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_109)),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSwriteYsay = YPmet(FUNCODEREF(YgooSioSwriteYsay),LITREF(lit_124),T8,ENVNUL,PNUL,YPfalse);
  T10 = YgooSioSwriteYsay;
  VARSET(YgooSioSwriteYsay,T10);
  T11 = YPfalse;
  return T11;
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
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSpacker},
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
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"set-standard-read-macro!", &module_info_gooSioSread, "set-standard-read-macro!"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"until", &module_info_gooSmacros, "until"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%str", &module_info_gooSboot, "%str"},
  {"close", &module_info_gooSioSport, "close"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"error", &module_info_gooSboot, "error"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"out", &module_info_gooSioSport, "out"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"min", &module_info_gooSmag, "min"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"when", &module_info_gooSmacros, "when"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"dv", &module_info_gooSboot, "dv"},
  {"atan", &module_info_gooSmath, "atan"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"set", &module_info_gooSboot, "set"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"col", &module_info_gooScolsScol, "col"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"1-", &module_info_gooSmath, "1-"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"mif", &module_info_gooSboot, "mif"},
  {"as", &module_info_gooStypes, "as"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {">=", &module_info_gooSmag, ">="},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"def", &module_info_gooSboot, "def"},
  {"len", &module_info_gooStypes, "len"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"if", &module_info_gooSboot, "if"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%su", &module_info_gooSboot, "%su"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"logn", &module_info_gooSmath, "logn"},
  {"always", &module_info_gooSruntime, "always"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"open", &module_info_gooSioSport, "open"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"range", &module_info_gooScolsSrange, "range"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"match", &module_info_gooSmacros, "match"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%im", &module_info_gooSboot, "%im"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"and", &module_info_gooSmacros, "and"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<=", &module_info_gooSmag, "<="},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"op", &module_info_gooSmacros, "op"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"~", &module_info_gooSmath, "~"},
  {"get-standard-read-macro", &module_info_gooSioSread, "get-standard-read-macro"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"let", &module_info_gooSboot, "let"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"add", &module_info_gooScolsScol, "add"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"while", &module_info_gooSmacros, "while"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"|", &module_info_gooSmath, "|"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"use", &module_info_gooSboot, "use"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"seq", &module_info_gooSboot, "seq"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"~=", &module_info_gooSmath, "~="},
  {"find", &module_info_gooScolsScol, "find"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%put", &module_info_gooSboot, "%put"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"into", &module_info_gooScolsScol, "into"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"read", &module_info_gooSruntime, "read"},
  {"acos", &module_info_gooSmath, "acos"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"for", &module_info_gooSmacros, "for"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"-", &module_info_gooSmath, "-"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"or", &module_info_gooSmacros, "or"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"head", &module_info_gooSboot, "head"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"+", &module_info_gooSmath, "+"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"export", &module_info_gooSboot, "export"},
  {"map", &module_info_gooSmacros, "map"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"try", &module_info_gooSboot, "try"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"app", &module_info_gooSmacros, "app"},
  {"1+", &module_info_gooSmath, "1+"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"items", &module_info_gooScolsScol, "items"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"sin", &module_info_gooSmath, "sin"},
  {"div", &module_info_gooSmath, "div"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"@<", &module_info_gooSboot, "@<"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dl", &module_info_gooSboot, "dl"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {">>", &module_info_gooSmath, ">>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"&", &module_info_gooSmath, "&"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"t?", &module_info_gooStypes, "t?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"in", &module_info_gooSioSport, "in"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {">", &module_info_gooSmag, ">"},
  {"==", &module_info_gooSmacros, "=="},
  {"peek", &module_info_gooSioSport, "peek"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"round", &module_info_gooSmath, "round"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"fin", &module_info_gooSboot, "fin"},
  {"any?", &module_info_gooStypes, "any?"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<", &module_info_gooSmag, "<"},
  {"case", &module_info_gooSmacros, "case"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"t<", &module_info_gooStypes, "t<"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"=", &module_info_gooSmath, "="},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@==", &module_info_gooSboot, "@=="},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"/", &module_info_gooSmath, "/"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"asin", &module_info_gooSmath, "asin"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"neg", &module_info_gooSmath, "neg"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"not", &module_info_gooSboot, "not"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"t=", &module_info_gooStypes, "t="},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"%get", &module_info_gooSboot, "%get"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"get", &module_info_gooSioSport, "get"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"log", &module_info_gooSmath, "log"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"rem", &module_info_gooSmath, "rem"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"read-delimited-list", &module_info_gooSioSread, "read-delimited-list"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"df", &module_info_gooSboot, "df"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"^", &module_info_gooSmath, "^"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"t+", &module_info_gooStypes, "t+"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"~==", &module_info_gooSmath, "~=="},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%time", &module_info_gooSboot, "%time"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"put", &module_info_gooSioSport, "put"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"dg", &module_info_gooSboot, "dg"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"even?", &module_info_gooSmath, "even?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"dc", &module_info_gooSboot, "dc"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"tan", &module_info_gooSmath, "tan"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"floor", &module_info_gooSmath, "floor"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"@+", &module_info_gooSboot, "@+"},
  {"max", &module_info_gooSmag, "max"},
  {"*", &module_info_gooSmath, "*"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"nul", &module_info_gooSboot, "nul"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"pe-msg", CVAR, &YgooSioSwriteYpe_msg},
  {"msg*", PVAR, NULL},
  {"*max-print-length*", DVAR, &YgooSioSwriteYTmax_print_lengthT},
  {"---main-1---", PVAR, NULL},
  {"write-fun-guts", CVAR, &YgooSioSwriteYwrite_fun_guts},
  {"write-boolean", CVAR, &YgooSioSwriteYwrite_boolean},
  {"write-map", CVAR, &YgooSioSwriteYwrite_map},
  {"do-emit", CVAR, &YgooSioSwriteYdo_emit},
  {"write-to-string", CVAR, &YgooSioSwriteYwrite_to_string},
  {"writeln", CVAR, &YgooSioSwriteYwriteln},
  {"write-number", CVAR, &YgooSioSwriteYwrite_number},
  {"write-params", CVAR, &YgooSioSwriteYwrite_params},
  {"character-name", CVAR, &YgooSioSwriteYcharacter_name},
  {"post", CVAR, &YgooSioSwriteYpost},
  {"*max-print-depth*", DVAR, &YgooSioSwriteYTmax_print_depthT},
  {"say", CVAR, &YgooSioSwriteYsay},
  {"write", CVAR, &YgooSioSwriteYwrite},
  {"recurring-write-type", CVAR, &YgooSioSwriteYrecurring_write_type},
  {"---main-0---", PVAR, NULL},
  {"write-char-literal", CVAR, &YgooSioSwriteYwrite_char_literal},
  {"as-binding-name", CVAR, &YgooSioSwriteYas_binding_name},
  {"write-list", CVAR, &YgooSioSwriteYwrite_list},
  {"recurring-write", CVAR, &YgooSioSwriteYrecurring_write},
  {"write-type", CVAR, &YgooSioSwriteYwrite_type},
  {"write-flat", CVAR, &YgooSioSwriteYwrite_flat},
  {"write-value-type", CVAR, &YgooSioSwriteYwrite_value_type},
  {"emit", CVAR, &YgooSioSwriteYemit},
  {"write-string-literal", CVAR, &YgooSioSwriteYwrite_string_literal},
  {"quotation?", CVAR, &YgooSioSwriteYquotationQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"pe-msg", "pe-msg"},
  {"msg*", "msg*"},
  {"*max-print-length*", "*max-print-length*"},
  {"post", "post"},
  {"*max-print-depth*", "*max-print-depth*"},
  {"say", "say"},
  {"write", "write"},
  {"msg", "msg"},
  {"msg-to-str", "msg-to-str"},
  {"write-to-string", "write-to-string"},
  {"recurring-write", "recurring-write"},
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
  load_module_gooSioSread();
  load_module_gooSpacker();

  (P)YgooSioSwriteY___main_0___();
  (P)YgooSioSwriteY___main_1___();

}

/* END OF GENERATED CODE. */
