/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/io/read */

EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooSioSreadYset_standard_syntaxX,"goo/io/read","set-standard-syntax!");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YgooSioSreadYsub_read_list,"goo/io/read","sub-read-list");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
DEF(YgooSioSreadYread_string_literal,"goo/io/read","read-string-literal");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YgooSioSreadYreading_error,"goo/io/read","reading-error");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YgooSioSreadYgobble_line,"goo/io/read","gobble-line");
DEF(YgooSioSreadYdefine_sharp_macro,"goo/io/read","define-sharp-macro");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YgooSioSreadYparse_token,"goo/io/read","parse-token");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
DEF(YgooSioSreadYTread_terminatingQ_vectorT,"goo/io/read","*read-terminating?-vector*");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YgooSioSreadYmake_reader_token,"goo/io/read","make-reader-token");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(YgooSioSreadYflush_whitespace,"goo/io/read","flush-whitespace");
DEF(YgooSioSreadYgobble_nested_comment,"goo/io/read","gobble-nested-comment");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSioSreadYsub_read_vertical,"goo/io/read","sub-read-vertical");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YgooSioSreadYDstring_escape_chars,"goo/io/read","$string-escape-chars");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YgooSioSreadYsub_read_carefully,"goo/io/read","sub-read-carefully");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
DEF(YgooSioSreadYsub_read_list_eof_error,"goo/io/read","sub-read-list-eof-error");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YgooSioSreadYDvert_sym,"goo/io/read","$vert-sym");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YgooSioSreadYmake_immutableX,"goo/io/read","make-immutable!");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YgooSioSreadYtoken_message_setter,"goo/io/read","token-message-setter");
DEF(YgooSioSreadYwarn,"goo/io/read","warn");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YgooSioSreadYDstrange_symbol_names,"goo/io/read","$strange-symbol-names");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
DEF(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
DEF(YgooSioSreadYTsharp_macrosT,"goo/io/read","*sharp-macros*");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
DEF(YgooSioSreadYpreferred_case,"goo/io/read","preferred-case");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
DEF(YgooSioSreadYsub_read_token,"goo/io/read","sub-read-token");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YtT,"goo/boot","t*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSioSreadYLreader_tokenG,"goo/io/read","<reader-token>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YgooSioSreadYDclose_paren,"goo/io/read","$close-paren");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YgooSioSreadYreader_tokenQ,"goo/io/read","reader-token?");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathY_,"goo/math","-");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YLintG,"goo/boot","<int>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooSioSreadYsub_read_constituent,"goo/io/read","sub-read-constituent");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(YgooSioSreadYDvert_proxy,"goo/io/read","$vert-proxy");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YgooSioSreadYtoken_message,"goo/io/read","token-message");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Ynew,"goo/boot","new");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYC,"goo/math","^");
DEF(YgooSioSreadYsub_read,"goo/io/read","sub-read");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YgooSioSreadYreverse_list_Gstring,"goo/io/read","reverse-list->string");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YgooSioSreadYDdot,"goo/io/read","$dot");
DEF(YgooSioSreadYTread_dispatch_vectorT,"goo/io/read","*read-dispatch-vector*");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYA,"goo/math","+");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_34);
DEFLIT(lit_45);
DEFLIT(lit_15);
DEFLIT(lit_25);
DEFLIT(lit_8);
DEFLIT(lit_29);
DEFLIT(lit_28);
DEFLIT(lit_46);
DEFLIT(lit_32);
DEFLIT(lit_24);
DEFLIT(lit_52);
DEFLIT(lit_5);
DEFLIT(lit_47);
DEFLIT(lit_54);
DEFLIT(lit_27);
DEFLIT(lit_31);
DEFLIT(lit_22);
DEFLIT(lit_40);
DEFLIT(lit_17);
DEFLIT(lit_21);
DEFLIT(lit_18);
DEFLIT(lit_42);
DEFLIT(lit_65);
DEFLIT(lit_3);
DEFLIT(lit_10);
DEFLIT(lit_57);
DEFLIT(lit_1);
DEFLIT(lit_2);
DEFLIT(lit_37);
DEFLIT(lit_20);
DEFLIT(lit_23);
DEFLIT(lit_78);
DEFLIT(lit_41);
DEFLIT(lit_7);
DEFLIT(lit_12);
DEFLIT(lit_0);
DEFLIT(lit_69);
DEFLIT(lit_61);
DEFLIT(lit_48);
DEFLIT(lit_62);
DEFLIT(lit_63);
DEFLIT(lit_35);
DEFLIT(lit_60);
DEFLIT(lit_56);
DEFLIT(lit_79);
DEFLIT(lit_66);
DEFLIT(lit_26);
DEFLIT(lit_75);
DEFLIT(lit_33);
DEFLIT(lit_6);
DEFLIT(lit_43);
DEFLIT(lit_77);
DEFLIT(lit_73);
DEFLIT(lit_72);
DEFLIT(lit_67);
DEFLIT(lit_19);
DEFLIT(lit_64);
DEFLIT(lit_44);
DEFLIT(lit_4);
DEFLIT(lit_74);
DEFLIT(lit_71);
DEFLIT(lit_76);
DEFLIT(lit_30);
DEFLIT(lit_53);
DEFLIT(lit_38);
DEFLIT(lit_11);
DEFLIT(lit_16);
DEFLIT(lit_51);
DEFLIT(lit_13);
DEFLIT(lit_70);
DEFLIT(lit_68);
DEFLIT(lit_50);
DEFLIT(lit_59);
DEFLIT(lit_14);
DEFLIT(lit_49);
DEFLIT(lit_55);
DEFLIT(lit_80);
DEFLIT(lit_9);
DEFLIT(lit_39);
DEFLIT(lit_36);
DEFLIT(lit_58);

/* FUNCTIONS: */

LOCFOR(fun_loop_0);
LOCFOR(fun_read_1);
LOCFOR(fun_2);
LOCFOR(fun_3);
LOCFOR(fun_read_from_string_4);
LOCFOR(fun_sub_read_carefully_5);
LOCFOR(fun_token_message_6);
LOCFOR(fun_token_message_setter_7);
LOCFOR(fun_make_reader_token_8);
LOCFOR(fun_reader_tokenQ_9);
LOCFOR(fun_sub_read_10);
LOCFOR(fun_11);
LOCFOR(fun_set_standard_syntaxX_12);
LOCFOR(fun_13);
LOCFOR(fun_14);
FUNFOR(YgooSioSreadYflush_whitespace);
LOCFOR(fun_loop_16);
FUNFOR(YgooSioSreadYread_delimited_list);
FUNFOR(YgooSioSreadYsub_read_constituent);
LOCFOR(fun_19);
LOCFOR(fun_set_standard_read_macroX_20);
LOCFOR(fun_get_standard_read_macro_21);
LOCFOR(fun_sub_read_vertical_22);
FUNFOR(YgooSioSreadYsub_read_list_eof_error);
LOCFOR(fun_read_next_24);
LOCFOR(fun_sub_read_list_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_loop_30);
FUNFOR(YgooSioSreadYread_string_literal);
LOCFOR(fun_32);
LOCFOR(fun_loop_33);
LOCFOR(fun_gobble_line_34);
LOCFOR(fun_define_sharp_macro_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_loop_40);
FUNFOR(YgooSioSreadYgobble_nested_comment);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_loop_47);
LOCFOR(fun_sub_read_token_48);
LOCFOR(fun_49);
LOCFOR(fun_parse_token_50);
LOCFOR(fun_reading_error_51);
LOCFOR(fun_warn_52);
LOCFOR(fun_reverse_list_Gstring_53);
LOCFOR(fun_make_immutableX_54);
extern P YgooSioSreadY___main_0___ ();
extern P YgooSioSreadY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop_0) {
  P formF1392;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
  formF1392 = T1;
  T4 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF1392);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T2 = formF1392;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),formF1392,VARREF(YgooSioSreadYDclose_paren));
    if (T6 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSioSreadYwarn),LITREF(lit_3));
      T5 = T7;
    } else {
      goto loop;
      T5 = T8;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_1) {
  P port_;
  P loopF1393;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_0,2);
  loopF1393 = T1;
  FUNINIT(loopF1393, 2,port_,loopF1393);
  T2 = CALL0(0,loopF1393);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSruntimeYread),T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_3) {
  P tmpF1394;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF1394 = T1;
  if (tmpF1394 != YPfalse) {
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

FUNCODEDEF(fun_read_from_string_4) {
  P x_;
  P portF1395;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  portF1395 = YPfalse;
  portF1395 = BOXFAB(portF1395);
  T3 = FUNFAB(fun_2,2,portF1395,x_);
  T4 = FUNFAB(fun_3,1,portF1395);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_carefully_5) {
  P port_;
  P formF1396;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF1396 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF1396);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_7));
    T2 = T4;
  } else {
    T6 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF1396);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),formF1396);
      T7 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,T8);
      T5 = T7;
    } else {
      T5 = formF1396;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_token_message_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSreadYtoken_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_token_message_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSreadYtoken_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_make_reader_token_8) {
  P message_;
  P T0;
  P a1;
LINK_STACK();
  ARG(message_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),message_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reader_tokenQ_9) {
  P form_;
  P T0;
  P a1;
LINK_STACK();
  ARG(form_, 0);
loop:
  T0 = CALL2(1,VARREF(YisaQ),form_,VARREF(YgooSioSreadYLreader_tokenG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sub_read_10) {
  P port_;
  P cF1397;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF1397 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1397);
  if (T3 != YPfalse) {
    T2 = cF1397;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF1397);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T6);
    T4 = CALL2(1,T5,cF1397,port_);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_21),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_syntaxX_12) {
  P char_,terminatingQ_,reader_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(reader_, 2);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),reader_,VARREF(YgooSioSreadYTread_dispatch_vectorT),T0);
  T2 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  T1 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),terminatingQ_,VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_13) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_14) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),FREEREF(0),VARREF(YgooSioSreadYTread_dispatch_vectorT),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYflush_whitespace) {
  P port_;
  P cF1398;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF1398 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF1398);
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),VARREF(YgooScolsSstrYascii_whitespaces),T4);
  if (T3 != YPfalse) {
    CALL1(1,VARREF(YgooSioSportYget),port_);
    T5 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
    T2 = T5;
  } else {
    T2 = cF1398;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_16) {
  P c_;
  P UF1399;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),c_,FREEREF(0));
  if (T1 != YPfalse) {
    CALL1(1,VARREF(YgooSioSportYget),FREEREF(1));
    T3 = BOXVAL(FREEREF(2));
    T2 = CALL1(1,VARREF(YgooScolsSseqYrev),T3);
    T0 = T2;
  } else {
    T4 = BOXVAL(FREEREF(2));
    UF1399 = T4;
    T7 = CALL1(1,VARREF(YgooSruntimeYread),FREEREF(1));
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,UF1399);
    T5 = BOXVAL(FREEREF(2)) = T6;
    T9 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),FREEREF(1));
    a1 = T9;
    c_ = a1;
    goto loop;
    T0 = T8;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_delimited_list) {
  P endchar_,port_;
  P loopF1401;
  P retlistF1400;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(endchar_, 0);
  ARG(port_, 1);
loop:
  retlistF1400 = VARREF(Ynil);
  retlistF1400 = BOXFAB(retlistF1400);
  T3 = FUNSHELL(1,fun_loop_16,4);
  loopF1401 = T3;
  FUNINIT(loopF1401, 4,endchar_,port_,retlistF1400,loopF1401);
  T5 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
  T4 = CALL1(0,loopF1401,T5);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYsub_read_constituent) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),c_,port_);
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSioSreadYset_standard_syntaxX),c_,YPfalse,VARREF(YgooSioSreadYsub_read_constituent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_read_macroX_20) {
  P char_,terminatingQ_,proc_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(proc_, 2);
loop:
  T0 = CALL3(1,VARREF(YgooSioSreadYset_standard_syntaxX),char_,terminatingQ_,proc_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_get_standard_read_macro_21) {
  P char_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_vertical_22) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),LITREF(lit_36),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYsub_read_list_eof_error) {
  P port_;
  P T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_next_24) {
  P c_,prev_,form_;
  P nextF1403;
  P prevF1402;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2,a3;
LINK_STACK();
  ARG(c_, 0);
  ARG(prev_, 1);
  ARG(form_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),prev_,VARREF(YgooSioSreadYDvert_proxy));
  if (T2 != YPfalse) {
    T1 = VARREF(YgooSioSreadYDvert_sym);
  } else {
    T1 = prev_;
  }
  prevF1402 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),form_);
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),FREEREF(0));
    T3 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDclose_paren));
    if (T7 != YPfalse) {
      T8 = CALL1(1,VARREF(Ylst),prevF1402);
      T6 = T8;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDvert_sym));
      if (T10 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),FREEREF(0));
        nextF1403 = T12;
        T14 = CALL2(1,VARREF(Ylst),prevF1402,nextF1403);
        T15 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,FREEREF(0));
        T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,T15);
        T11 = T13;
        T9 = T11;
      } else {
        if (YPtrue != YPfalse) {
          T19 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
          T18 = CALL3(1,FREEREF(1),c_,form_,T19);
          T17 = CALL2(1,VARREF(YgooSmacrosYpair),prevF1402,T18);
          T16 = T17;
        } else {
          T16 = YPfalse;
        }
        T9 = T16;
      }
      T6 = T9;
    }
    T3 = T6;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_list_25) {
  P c_,port_;
  P read_nextF1405;
  P formF1404;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF1404 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF1404);
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),port_);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),formF1404,VARREF(YgooSioSreadYDclose_paren));
    if (T6 != YPfalse) {
      T5 = Ynil;
    } else {
      if (YPtrue != YPfalse) {
        T9 = FUNSHELL(1,fun_read_next_24,2);
        read_nextF1405 = T9;
        FUNINIT(read_nextF1405, 2,port_,read_nextF1405);
        T11 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
        T10 = CALL3(1,read_nextF1405,c_,formF1404,T11);
        T8 = T10;
        T7 = T8;
      } else {
        T7 = YPfalse;
      }
      T5 = T7;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_paren));
}

FUNCODEDEF(fun_27) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_44),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_45),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P c_,port_;
  P keywordF1407;
  P nextF1406;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  nextF1406 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),nextF1406);
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_46));
    T3 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),nextF1406,YPchr((P)64));
    if (T7 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T6 = LITREF(lit_47);
    } else {
      T6 = LITREF(lit_48);
    }
    T3 = T6;
  }
  keywordF1407 = T3;
  T9 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T8 = CALL2(1,VARREF(Ylst),keywordF1407,T9);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_30) {
  P l_,i_;
  P ecF1411;
  P tmpF1410;
  P cF1409;
  P cF1408;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF1408 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1408);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_52));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYE),cF1408,YPchr((P)92));
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
      cF1409 = T8;
      T10 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1409);
      if (T10 != YPfalse) {
        T11 = CALL2(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_53));
        T9 = T11;
      } else {
        T14 = CALL2(1,VARREF(YgooSmathYE),cF1409,YPchr((P)92));
        tmpF1410 = T14;
        if (tmpF1410 != YPfalse) {
          T15 = tmpF1410;
        } else {
          T16 = CALL2(1,VARREF(YgooSmathYE),cF1409,YPchr((P)34));
          T15 = T16;
        }
        T13 = T15;
        if (T13 != YPfalse) {
          T18 = CALL2(1,VARREF(YgooSmacrosYpair),cF1409,l_);
          T19 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
          a1 = T18;
          a2 = T19;
          l_ = a1;
          i_ = a2;
          goto loop;
          T12 = T17;
        } else {
          T22 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF1409);
          T21 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYDstring_escape_chars),T22);
          ecF1411 = T21;
          if (ecF1411 != YPfalse) {
            T25 = CALL2(1,VARREF(YgooSmacrosYpair),ecF1411,l_);
            T26 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
            a1 = T25;
            a2 = T26;
            l_ = a1;
            i_ = a2;
            goto loop;
            T23 = T24;
          } else {
            T27 = CALL3(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_54),cF1409);
            T23 = T27;
          }
          T20 = T23;
          T12 = T20;
        }
        T9 = T12;
      }
      T7 = T9;
      T5 = T7;
    } else {
      T29 = CALL2(1,VARREF(YgooSmathYE),cF1408,YPchr((P)34));
      if (T29 != YPfalse) {
        T30 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),l_,i_);
        T28 = T30;
      } else {
        T32 = CALL2(1,VARREF(YgooSmacrosYpair),cF1408,l_);
        T33 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
        a1 = T32;
        a2 = T33;
        l_ = a1;
        i_ = a2;
        goto loop;
        T28 = T31;
      }
      T5 = T28;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_string_literal) {
  P c_,port_;
  P loopF1412;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_30,2);
  loopF1412 = T1;
  FUNINIT(loopF1412, 2,port_,loopF1412);
  T2 = CALL2(0,loopF1412,Ynil,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSreadYgobble_line),port_);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_33) {
  P cF1413;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF1413 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1413);
  if (T3 != YPfalse) {
    T2 = cF1413;
  } else {
    T5 = CALL2(1,VARREF(YgooSmathYE),cF1413,YPchr((P)10));
    if (T5 != YPfalse) {
      T4 = YPfalse;
    } else {
      goto loop;
      T4 = T6;
    }
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gobble_line_34) {
  P port_;
  P loopF1414;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_33,2);
  loopF1414 = T1;
  FUNINIT(loopF1414, 2,port_,loopF1414);
  T2 = CALL0(0,loopF1414);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_define_sharp_macro_35) {
  P c_,proc_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(proc_, 1);
loop:
  T2 = CALL2(1,VARREF(Ylst),c_,proc_);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,VARREF(YgooSioSreadYTsharp_macrosT));
  T0 = VARSET(YgooSioSreadYTsharp_macrosT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  P c_,port_;
  P probeF1417;
  P cF1416;
  P cF1415;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF1415 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1415);
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_57));
    T3 = T5;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYto_lower),cF1415);
    T3 = T6;
  }
  cF1416 = T3;
  T8 = CALL2(1,VARREF(YgooScolsSlstYassq),cF1416,VARREF(YgooSioSreadYTsharp_macrosT));
  probeF1417 = T8;
  if (probeF1417 != YPfalse) {
    T12 = CALL1(1,VARREF(Ytail),probeF1417);
    T11 = CALL1(1,VARREF(Yhead),T12);
    T10 = CALL2(1,T11,cF1416,port_);
    T9 = T10;
  } else {
    T13 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_58),cF1416);
    T9 = T13;
  }
  T7 = T9;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_38) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_39) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDvert_proxy));
}

FUNCODEDEF(fun_loop_40) {
  P found_slashQ_;
  P x_1383F1420;
  P x_1382F1419;
  P cF1418;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(found_slashQ_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF1418 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1418);
  if (T3 != YPfalse) {
    T2 = cF1418;
  } else {
    x_1382F1419 = cF1418;
    x_1383F1420 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1383F1420,x_1382F1419,YPchr((P)47));
    if (T7 != YPfalse) {
      a1 = YPtrue;
      found_slashQ_ = a1;
      goto loop;
      T6 = T8;
    } else {
      T10 = CALL2(1,x_1383F1420,x_1382F1419,YPchr((P)35));
      if (T10 != YPfalse) {
        if (found_slashQ_ != YPfalse) {
          T11 = YPfalse;
        } else {
          a1 = YPfalse;
          found_slashQ_ = a1;
          goto loop;
          T11 = T12;
        }
        T9 = T11;
      } else {
        a1 = YPfalse;
        found_slashQ_ = a1;
        goto loop;
        T9 = T13;
      }
      T6 = T9;
    }
    T5 = T6;
    T4 = T5;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYgobble_nested_comment) {
  P port_;
  P loopF1421;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_40,2);
  loopF1421 = T1;
  FUNINIT(loopF1421, 2,port_,loopF1421);
  T2 = CALL1(0,loopF1421,YPfalse);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSreadYgobble_nested_comment),port_);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P c_,port_;
  P tempF1424;
  P nameF1423;
  P cF1422;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF1422 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1422);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_62));
    T2 = T4;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYalphaQ),cF1422);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
      nameF1423 = T8;
      T12 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF1423);
      T11 = CALL1(1,VARREF(YgooStypesYlen),T12);
      T10 = CALL2(1,VARREF(YgooSmathYE),T11,YPint((P)1));
      if (T10 != YPfalse) {
        T9 = cF1422;
      } else {
        T14 = CALL2(1,VARREF(YgooScolsSlstYassq),nameF1423,VARREF(YgooSioSreadYDchar_long_names));
        tempF1424 = T14;
        if (tempF1424 != YPfalse) {
          T17 = CALL1(1,VARREF(Ytail),tempF1424);
          T16 = CALL1(1,VARREF(Yhead),T17);
          T15 = T16;
        } else {
          T18 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_63),nameF1423);
          T15 = T18;
        }
        T13 = T15;
        T9 = T13;
      }
      T7 = T9;
      T5 = T7;
    } else {
      T19 = CALL1(1,VARREF(YgooSioSportYget),port_);
      T5 = T19;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P c_,port_;
  P tmpF1426;
  P stringF1425;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),YPchr((P)35),port_);
  stringF1425 = T1;
  T3 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),stringF1425);
  tmpF1426 = T3;
  if (tmpF1426 != YPfalse) {
    T4 = tmpF1426;
  } else {
    T5 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_64),stringF1425);
    T4 = T5;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),c_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_47) {
  P l_,n_;
  P tmpF1428;
  P cF1427;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),FREEREF(0));
  cF1427 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1427);
  tmpF1428 = T4;
  if (tmpF1428 != YPfalse) {
    T5 = tmpF1428;
  } else {
    T7 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF1427);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T7);
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),l_,n_);
    T2 = T8;
  } else {
    T12 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
    T11 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),T12);
    T10 = CALL2(1,VARREF(YgooSmacrosYpair),T11,l_);
    T13 = CALL2(1,VARREF(YgooSmathYA),n_,YPint((P)1));
    a1 = T10;
    a2 = T13;
    l_ = a1;
    n_ = a2;
    goto loop;
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_token_48) {
  P c_,port_;
  P loopF1429;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_47,2);
  loopF1429 = T1;
  FUNINIT(loopF1429, 2,port_,loopF1429);
  T4 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),c_);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T2 = CALL2(0,loopF1429,T3,YPint((P)1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYE),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_token_50) {
  P string_,port_;
  P maybe_numberF1434;
  P tmpF1433;
  P tmpF1432;
  P tmpF1431;
  P cF1430;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  ARG(port_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),string_,YPint((P)0));
  cF1430 = T2;
  T4 = CALL1(1,VARREF(YgooSmathYdigitQ),cF1430);
  tmpF1431 = T4;
  if (tmpF1431 != YPfalse) {
    T5 = tmpF1431;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),cF1430,YPchr((P)43));
    tmpF1432 = T7;
    if (tmpF1432 != YPfalse) {
      T8 = tmpF1432;
    } else {
      T10 = CALL2(1,VARREF(YgooSmathYE),cF1430,YPchr((P)45));
      tmpF1433 = T10;
      if (tmpF1433 != YPfalse) {
        T11 = tmpF1433;
      } else {
        T12 = CALL2(1,VARREF(YgooSmathYE),cF1430,YPchr((P)46));
        T11 = T12;
      }
      T9 = T11;
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  T1 = T3;
  if (T1 != YPfalse) {
    T14 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),string_);
    maybe_numberF1434 = T14;
    if (maybe_numberF1434 != YPfalse) {
      T15 = maybe_numberF1434;
    } else {
      T18 = FUNFAB(fun_49,1,string_);
      T17 = CALL2(1,VARREF(YgooStypesYanyQ),T18,VARREF(YgooSioSreadYDstrange_symbol_names));
      if (T17 != YPfalse) {
        T20 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
        T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T20);
        T16 = T19;
      } else {
        T22 = CALL2(1,VARREF(YgooSmathYE),string_,LITREF(lit_70));
        if (T22 != YPfalse) {
          T21 = VARREF(YgooSioSreadYDdot);
        } else {
          T23 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_71),string_);
          T21 = T23;
        }
        T16 = T21;
      }
      T15 = T16;
    }
    T13 = T15;
    T0 = T13;
  } else {
    T25 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
    T24 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T25);
    T0 = T24;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reading_error_51) {
  P port_,message_,irritants_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(irritants_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),message_,LITREF(lit_76));
  T3 = CALL1(1,VARREF(Ylst),port_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),irritants_,T3);
  T0 = CALL2(1,VARREF(Yerror),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_warn_52) {
  P string_,irritants_and_port_;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  NARGS(irritants_and_port_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_reverse_list_Gstring_53) {
  P l_,n_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),l_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_make_immutableX_54) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

P YgooSioSreadY___main_0___() {
  P number_sharp_macroF1438;
  P vecF1437;
  P str10496F1436;
  P sub_read_whitespaceF1435;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"read");
  lit_1 = YPPsym((P)"port");
  lit_2 = YPPsym((P)"loop");
  lit_3 = YPsb((P)"discarding extraneous right parenthesis");
  T1 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_0 = YPmet(FUNCODEREF(fun_loop_0),LITREF(lit_2),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_1 = YPmet(FUNCODEREF(fun_read_1),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YgooSruntimeYread);
  if (T4 != YPfalse) {
    T3 = VARREF(YgooSruntimeYread);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_read_1;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YgooSruntimeYread,T2);
  lit_4 = YPPsym((P)"read-from-string");
  lit_5 = YPPsym((P)"x");
  T8 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T7 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_from_string_4 = YPmet(FUNCODEREF(fun_read_from_string_4),LITREF(lit_4),T6,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(YgooSioSreadYread_from_string);
  if (T11 != YPfalse) {
    T10 = VARREF(YgooSioSreadYread_from_string);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_read_from_string_4;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YgooSioSreadYread_from_string,T9);
  lit_6 = YPPsym((P)"sub-read-carefully");
  lit_7 = YPsb((P)"unexpected end of file");
  T13 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_carefully_5 = YPmet(FUNCODEREF(fun_sub_read_carefully_5),LITREF(lit_6),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YgooSioSreadYsub_read_carefully);
  if (T16 != YPfalse) {
    T15 = VARREF(YgooSioSreadYsub_read_carefully);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_sub_read_carefully_5;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YgooSioSreadYsub_read_carefully,T14);
  lit_8 = YPPsym((P)"<reader-token>");
  T19 = (P)YPpair(VARREF(YLanyG),Ynil);
  T18 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_8),T19);
  VARSET(YgooSioSreadYLreader_tokenG,T18);
  lit_9 = YPPsym((P)"token-message");
  lit_10 = YPPsym((P)"_x");
  T20 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_token_message_6 = YPmet(FUNCODEREF(fun_token_message_6),LITREF(lit_9),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YgooSioSreadYtoken_message);
  if (T23 != YPfalse) {
    T22 = VARREF(YgooSioSreadYtoken_message);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_token_message_6;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YgooSioSreadYtoken_message,T21);
  lit_11 = YPPsym((P)"token-message-setter");
  lit_12 = YPPsym((P)"_z");
  T25 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_10)),YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_token_message_setter_7 = YPmet(FUNCODEREF(fun_token_message_setter_7),LITREF(lit_11),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YgooSioSreadYtoken_message_setter);
  if (T28 != YPfalse) {
    T27 = VARREF(YgooSioSreadYtoken_message_setter);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_token_message_setter_7;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YgooSioSreadYtoken_message_setter,T26);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),VARREF(YgooSioSreadYtoken_message_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_13 = YPPsym((P)"make-reader-token");
  lit_14 = YPPsym((P)"message");
  T30 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_reader_token_8 = YPmet(FUNCODEREF(fun_make_reader_token_8),LITREF(lit_13),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YgooSioSreadYmake_reader_token);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooSioSreadYmake_reader_token);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_make_reader_token_8;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooSioSreadYmake_reader_token,T31);
  lit_15 = YPPsym((P)"reader-token?");
  lit_16 = YPPsym((P)"form");
  T35 = YPsig(YPPlist(1,LITREF(lit_16)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_reader_tokenQ_9 = YPmet(FUNCODEREF(fun_reader_tokenQ_9),LITREF(lit_15),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooSioSreadYreader_tokenQ);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooSioSreadYreader_tokenQ);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_reader_tokenQ_9;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooSioSreadYreader_tokenQ,T36);
  lit_17 = YPsb((P)"unexpected right parenthesis");
  T40 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_17));
  VARSET(YgooSioSreadYDclose_paren,T40);
  lit_18 = YPsb((P)"unexpected \" . \"");
  T41 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_18));
  VARSET(YgooSioSreadYDdot,T41);
  lit_19 = YPPsym((P)"sub-read");
  T42 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_10 = YPmet(FUNCODEREF(fun_sub_read_10),LITREF(lit_19),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YgooSioSreadYsub_read);
  if (T45 != YPfalse) {
    T44 = VARREF(YgooSioSreadYsub_read);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_sub_read_10;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YgooSioSreadYsub_read,T43);
  lit_20 = YPPsym((P)"c");
  lit_21 = YPsb((P)"illegal character read");
  T47 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T49 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T50 = fun_11;
  T48 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T49,T50);
  VARSET(YgooSioSreadYTread_dispatch_vectorT,T48);
  T52 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T51 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T52,YPtrue);
  VARSET(YgooSioSreadYTread_terminatingQ_vectorT,T51);
  lit_22 = YPPsym((P)"set-standard-syntax!");
  lit_23 = YPPsym((P)"char");
  lit_24 = YPPsym((P)"terminating?");
  lit_25 = YPPsym((P)"reader");
  T53 = YPsig(YPPlist(3,LITREF(lit_23),LITREF(lit_24),LITREF(lit_25)),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_syntaxX_12 = YPmet(FUNCODEREF(fun_set_standard_syntaxX_12),LITREF(lit_22),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooSioSreadYset_standard_syntaxX);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooSioSreadYset_standard_syntaxX);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_set_standard_syntaxX_12;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooSioSreadYset_standard_syntaxX,T54);
  T59 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T60 = fun_13;
  sub_read_whitespaceF1435 = T60;
  T62 = FUNFAB(fun_14,1,sub_read_whitespaceF1435);
  T61 = XCALL2(1,VARREF(YgooSmacrosYdo),T62,VARREF(YgooScolsSstrYascii_whitespaces));
  lit_26 = YPPsym((P)"flush-whitespace");
  T63 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYflush_whitespace = YPmet(FUNCODEREF(YgooSioSreadYflush_whitespace),LITREF(lit_26),T63,ENVNUL,PNUL,YPfalse);
  T64 = YgooSioSreadYflush_whitespace;
  VARSET(YgooSioSreadYflush_whitespace,T64);
  lit_27 = YPPsym((P)"read-delimited-list");
  lit_28 = YPPsym((P)"endchar");
  T66 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_16 = YPmet(FUNCODEREF(fun_loop_16),LITREF(lit_2),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_1)),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_delimited_list = YPmet(FUNCODEREF(YgooSioSreadYread_delimited_list),LITREF(lit_27),T65,ENVNUL,PNUL,YPfalse);
  T67 = YgooSioSreadYread_delimited_list;
  VARSET(YgooSioSreadYread_delimited_list,T67);
  lit_29 = YPPsym((P)"sub-read-constituent");
  T68 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_constituent = YPmet(FUNCODEREF(YgooSioSreadYsub_read_constituent),LITREF(lit_29),T68,ENVNUL,PNUL,YPfalse);
  T69 = YgooSioSreadYsub_read_constituent;
  VARSET(YgooSioSreadYsub_read_constituent,T69);
  lit_30 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  lit_31 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  T70 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T70,ENVNUL,PNUL,YPfalse);
  T71 = XCALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_30),LITREF(lit_31));
  str10496F1436 = T71;
  T73 = fun_19;
  T72 = XCALL2(1,VARREF(YgooSmacrosYdo),T73,str10496F1436);
  lit_32 = YPPsym((P)"set-standard-read-macro!");
  lit_33 = YPPsym((P)"proc");
  T74 = YPsig(YPPlist(3,LITREF(lit_23),LITREF(lit_24),LITREF(lit_33)),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_read_macroX_20 = YPmet(FUNCODEREF(fun_set_standard_read_macroX_20),LITREF(lit_32),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YgooSioSreadYset_standard_read_macroX);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSioSreadYset_standard_read_macroX);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_set_standard_read_macroX_20;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSioSreadYset_standard_read_macroX,T75);
  lit_34 = YPPsym((P)"get-standard-read-macro");
  T79 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_get_standard_read_macro_21 = YPmet(FUNCODEREF(fun_get_standard_read_macro_21),LITREF(lit_34),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YgooSioSreadYget_standard_read_macro);
  if (T82 != YPfalse) {
    T81 = VARREF(YgooSioSreadYget_standard_read_macro);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_get_standard_read_macro_21;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YgooSioSreadYget_standard_read_macro,T80);
  lit_35 = YPPsym((P)"sub-read-vertical");
  lit_36 = YPsb((P)"|");
  T84 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_vertical_22 = YPmet(FUNCODEREF(fun_sub_read_vertical_22),LITREF(lit_35),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YgooSioSreadYsub_read_vertical);
  if (T87 != YPfalse) {
    T86 = VARREF(YgooSioSreadYsub_read_vertical);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_sub_read_vertical_22;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YgooSioSreadYsub_read_vertical,T85);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)124),YPtrue,VARREF(YgooSioSreadYsub_read_vertical));
  lit_37 = YPsb((P)"|");
  T89 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),LITREF(lit_37));
  VARSET(YgooSioSreadYDvert_sym,T89);
  lit_38 = YPsb((P)"vert-proxy");
  T90 = XCALL1(1,VARREF(Ylst),LITREF(lit_38));
  VARSET(YgooSioSreadYDvert_proxy,T90);
  lit_39 = YPPsym((P)"sub-read-list-eof-error");
  lit_40 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T91 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_list_eof_error = YPmet(FUNCODEREF(YgooSioSreadYsub_read_list_eof_error),LITREF(lit_39),T91,ENVNUL,PNUL,YPfalse);
  T92 = YgooSioSreadYsub_read_list_eof_error;
  VARSET(YgooSioSreadYsub_read_list_eof_error,T92);
  lit_41 = YPPsym((P)"sub-read-list");
  lit_42 = YPPsym((P)"read-next");
  lit_43 = YPPsym((P)"prev");
  T94 = YPsig(YPPlist(3,LITREF(lit_20),LITREF(lit_43),LITREF(lit_16)),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_read_next_24 = YPmet(FUNCODEREF(fun_read_next_24),LITREF(lit_42),T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_list_25 = YPmet(FUNCODEREF(fun_sub_read_list_25),LITREF(lit_41),T93,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YgooSioSreadYsub_read_list);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooSioSreadYsub_read_list);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_sub_read_list_25;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooSioSreadYsub_read_list,T95);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)40),YPtrue,VARREF(YgooSioSreadYsub_read_list));
  T99 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T100 = fun_26;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T100);
  lit_44 = YPPsym((P)"quote");
  T101 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T102 = fun_27;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T102);
  lit_45 = YPPsym((P)"quasiquote");
  T103 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T104 = fun_28;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T104);
  lit_46 = YPsb((P)"end of file after ,");
  lit_47 = YPPsym((P)"unquote-splicing");
  lit_48 = YPPsym((P)"unquote");
  T105 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T106 = fun_29;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T106);
  T109 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T108 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T109,YPfalse);
  vecF1437 = T108;
  T110 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)116));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)9),vecF1437,T110);
  T111 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)102));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)12),vecF1437,T111);
  T112 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)114));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)13),vecF1437,T112);
  T113 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)110));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)10),vecF1437,T113);
  T114 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF1437);
  T107 = T114;
  VARSET(YgooSioSreadYDstring_escape_chars,T107);
  lit_49 = YPPsym((P)"read-string-literal");
  lit_50 = YPPsym((P)"l");
  lit_51 = YPPsym((P)"i");
  lit_52 = YPsb((P)"end of file within a string");
  lit_53 = YPsb((P)"end of file within a string");
  lit_54 = YPsb((P)"invalid escaped character in string");
  T116 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_51)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_30 = YPmet(FUNCODEREF(fun_loop_30),LITREF(lit_2),T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_string_literal = YPmet(FUNCODEREF(YgooSioSreadYread_string_literal),LITREF(lit_49),T115,ENVNUL,PNUL,YPfalse);
  T117 = YgooSioSreadYread_string_literal;
  VARSET(YgooSioSreadYread_string_literal,T117);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)34),YPtrue,VARREF(YgooSioSreadYread_string_literal));
  T118 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T119 = fun_32;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T119);
  lit_55 = YPPsym((P)"gobble-line");
  T121 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_33 = YPmet(FUNCODEREF(fun_loop_33),LITREF(lit_2),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gobble_line_34 = YPmet(FUNCODEREF(fun_gobble_line_34),LITREF(lit_55),T120,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YgooSioSreadYgobble_line);
  if (T124 != YPfalse) {
    T123 = VARREF(YgooSioSreadYgobble_line);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_gobble_line_34;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YgooSioSreadYgobble_line,T122);
  VARSET(YgooSioSreadYTsharp_macrosT,Ynil);
  lit_56 = YPPsym((P)"define-sharp-macro");
  T126 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_33)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_define_sharp_macro_35 = YPmet(FUNCODEREF(fun_define_sharp_macro_35),LITREF(lit_56),T126,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YgooSioSreadYdefine_sharp_macro);
  if (T129 != YPfalse) {
    T128 = VARREF(YgooSioSreadYdefine_sharp_macro);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_define_sharp_macro_35;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YgooSioSreadYdefine_sharp_macro,T127);
  lit_57 = YPsb((P)"end of file after #");
  lit_58 = YPsb((P)"unknown # syntax");
  T131 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T132 = fun_36;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T132);
  T133 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T134 = fun_37;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)102),T134);
  T135 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T136 = fun_38;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)116),T136);
  T137 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T138 = fun_39;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)124),T138);
  lit_59 = YPPsym((P)"gobble-nested-comment");
  lit_60 = YPPsym((P)"found-slash?");
  T140 = YPsig(YPPlist(1,LITREF(lit_60)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_40 = YPmet(FUNCODEREF(fun_loop_40),LITREF(lit_2),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYgobble_nested_comment = YPmet(FUNCODEREF(YgooSioSreadYgobble_nested_comment),LITREF(lit_59),T139,ENVNUL,PNUL,YPfalse);
  T141 = YgooSioSreadYgobble_nested_comment;
  VARSET(YgooSioSreadYgobble_nested_comment,T141);
  T142 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T143 = fun_42;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)47),T143);
  lit_61 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  VARSET(YgooSioSreadYDchar_long_names,LITREF(lit_61));
  lit_62 = YPsb((P)"end of file after #\\");
  lit_63 = YPsb((P)"unknown #\\ name");
  T144 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T145 = fun_43;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)92),T145);
  T146 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T147 = fun_44;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)40),T147);
  lit_64 = YPsb((P)"unsupported number syntax");
  lit_65 = YPPlist(4,YPchr((P)98),YPchr((P)111),YPchr((P)100),YPchr((P)120));
  T149 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T150 = fun_45;
  number_sharp_macroF1438 = T150;
  T152 = FUNFAB(fun_46,1,number_sharp_macroF1438);
  T151 = XCALL2(1,VARREF(YgooSmacrosYdo),T152,LITREF(lit_65));
  lit_66 = YPPsym((P)"sub-read-token");
  lit_67 = YPPsym((P)"n");
  T154 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_67)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_47 = YPmet(FUNCODEREF(fun_loop_47),LITREF(lit_2),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_token_48 = YPmet(FUNCODEREF(fun_sub_read_token_48),LITREF(lit_66),T153,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(YgooSioSreadYsub_read_token);
  if (T157 != YPfalse) {
    T156 = VARREF(YgooSioSreadYsub_read_token);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_sub_read_token_48;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YgooSioSreadYsub_read_token,T155);
  lit_68 = YPPsym((P)"parse-token");
  lit_69 = YPPsym((P)"string");
  lit_70 = YPsb((P)".");
  lit_71 = YPsb((P)"unsupported number syntax");
  T160 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_1)),YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_token_50 = YPmet(FUNCODEREF(fun_parse_token_50),LITREF(lit_68),T159,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YgooSioSreadYparse_token);
  if (T163 != YPfalse) {
    T162 = VARREF(YgooSioSreadYparse_token);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_parse_token_50;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YgooSioSreadYparse_token,T161);
  lit_72 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  VARSET(YgooSioSreadYDstrange_symbol_names,LITREF(lit_72));
  lit_73 = YPPsym((P)"t");
  T168 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),LITREF(lit_73));
  T167 = XCALL2(1,VARREF(YgooSmacrosYelt),T168,YPint((P)0));
  T166 = XCALL2(1,VARREF(YgooSmathYE),T167,YPchr((P)84));
  if (T166 != YPfalse) {
    T165 = VARREF(YgooSmathYto_upper);
  } else {
    T165 = VARREF(YgooSmathYto_lower);
  }
  VARSET(YgooSioSreadYpreferred_case,T165);
  lit_74 = YPPsym((P)"reading-error");
  lit_75 = YPPsym((P)"irritants");
  lit_76 = YPsb((P)": %=");
  T169 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_14),LITREF(lit_75)),YPPlist(2,VARREF(YgooSioSportYLportG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reading_error_51 = YPmet(FUNCODEREF(fun_reading_error_51),LITREF(lit_74),T169,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YgooSioSreadYreading_error);
  if (T172 != YPfalse) {
    T171 = VARREF(YgooSioSreadYreading_error);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_reading_error_51;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YgooSioSreadYreading_error,T170);
  lit_77 = YPPsym((P)"warn");
  lit_78 = YPPsym((P)"irritants-and-port");
  T174 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_78)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_warn_52 = YPmet(FUNCODEREF(fun_warn_52),LITREF(lit_77),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YgooSioSreadYwarn);
  if (T177 != YPfalse) {
    T176 = VARREF(YgooSioSreadYwarn);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_warn_52;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YgooSioSreadYwarn,T175);
  lit_79 = YPPsym((P)"reverse-list->string");
  T181 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_67)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  T180 = fun_reverse_list_Gstring_53 = YPmet(FUNCODEREF(fun_reverse_list_Gstring_53),LITREF(lit_79),T181,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YgooSioSreadYreverse_list_Gstring);
  if (T185 != YPfalse) {
    T184 = VARREF(YgooSioSreadYreverse_list_Gstring);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_reverse_list_Gstring_53;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  T182 = VARSET(YgooSioSreadYreverse_list_Gstring,T183);
  T179 = T182;
  return T179;
}

P YgooSioSreadY___main_1___() {
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
loop:
  lit_80 = YPPsym((P)"make-immutable!");
  T0 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_immutableX_54 = YPmet(FUNCODEREF(fun_make_immutableX_54),LITREF(lit_80),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooSioSreadYmake_immutableX);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSioSreadYmake_immutableX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_make_immutableX_54;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSioSreadYmake_immutableX,T1);
  T5 = YPfalse;
  return T5;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooSioSport},
  {&module_info_gooScols},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sin", &module_info_gooSmath, "sin"},
  {">", &module_info_gooSmag, ">"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {">=", &module_info_gooSmag, ">="},
  {"last", &module_info_gooScolsSseq, "last"},
  {"/", &module_info_gooSmath, "/"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"~=", &module_info_gooSmath, "~="},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"mod", &module_info_gooSmath, "mod"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%su", &module_info_gooSboot, "%su"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"read", &module_info_gooSruntime, "read"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"@len", &module_info_gooSboot, "@len"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<", &module_info_gooSmag, "<"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"@<", &module_info_gooSboot, "@<"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"=", &module_info_gooSmath, "="},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"when", &module_info_gooSmacros, "when"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<=", &module_info_gooSmag, "<="},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"|", &module_info_gooSmath, "|"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"not", &module_info_gooSboot, "not"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"def", &module_info_gooSboot, "def"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"into", &module_info_gooScolsScol, "into"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"*", &module_info_gooSmath, "*"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"for", &module_info_gooSmacros, "for"},
  {"floor", &module_info_gooSmath, "floor"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"log", &module_info_gooSmath, "log"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"nul", &module_info_gooSboot, "nul"},
  {"df", &module_info_gooSboot, "df"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"col", &module_info_gooScolsScol, "col"},
  {"t=", &module_info_gooStypes, "t="},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"dg", &module_info_gooSboot, "dg"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"dm", &module_info_gooSboot, "dm"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"if", &module_info_gooSboot, "if"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"1-", &module_info_gooSmath, "1-"},
  {"t+", &module_info_gooStypes, "t+"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"~", &module_info_gooSmath, "~"},
  {"in", &module_info_gooSioSport, "in"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"head", &module_info_gooSboot, "head"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"round", &module_info_gooSmath, "round"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"ct", &module_info_gooSboot, "ct"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"gets", &module_info_gooSioSport, "gets"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%time", &module_info_gooSboot, "%time"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"out", &module_info_gooSioSport, "out"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"set", &module_info_gooSboot, "set"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"lst", &module_info_gooSboot, "lst"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"try", &module_info_gooSboot, "try"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"~==", &module_info_gooSmath, "~=="},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"always", &module_info_gooSruntime, "always"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"-", &module_info_gooSmath, "-"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"put", &module_info_gooSioSport, "put"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"use", &module_info_gooSboot, "use"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"rem", &module_info_gooSmath, "rem"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"&", &module_info_gooSmath, "&"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%get", &module_info_gooSboot, "%get"},
  {"map", &module_info_gooSmacros, "map"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"cos", &module_info_gooSmath, "cos"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"op", &module_info_gooSmacros, "op"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"atan", &module_info_gooSmath, "atan"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {">>", &module_info_gooSmath, ">>"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"1+", &module_info_gooSmath, "1+"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"round/", &module_info_gooSmath, "round/"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"close", &module_info_gooSioSport, "close"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"loc", &module_info_gooSboot, "loc"},
  {"max", &module_info_gooSmag, "max"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"app", &module_info_gooSmacros, "app"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"export", &module_info_gooSboot, "export"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"or", &module_info_gooSmacros, "or"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%im", &module_info_gooSboot, "%im"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"open", &module_info_gooSioSport, "open"},
  {"min", &module_info_gooSmag, "min"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"^", &module_info_gooSmath, "^"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%str", &module_info_gooSboot, "%str"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"get", &module_info_gooSioSport, "get"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"==", &module_info_gooSmacros, "=="},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"match", &module_info_gooSmacros, "match"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"fun", &module_info_gooSboot, "fun"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"nil", &module_info_gooSboot, "nil"},
  {"case", &module_info_gooSmacros, "case"},
  {"do", &module_info_gooSmacros, "do"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"esc", &module_info_gooSboot, "esc"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"+", &module_info_gooSmath, "+"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"set-standard-syntax!", CVAR, &YgooSioSreadYset_standard_syntaxX},
  {"sub-read-list", CVAR, &YgooSioSreadYsub_read_list},
  {"read-string-literal", CVAR, &YgooSioSreadYread_string_literal},
  {"reading-error", CVAR, &YgooSioSreadYreading_error},
  {"gobble-line", CVAR, &YgooSioSreadYgobble_line},
  {"define-sharp-macro", CVAR, &YgooSioSreadYdefine_sharp_macro},
  {"parse-token", CVAR, &YgooSioSreadYparse_token},
  {"*read-terminating?-vector*", CVAR, &YgooSioSreadYTread_terminatingQ_vectorT},
  {"make-reader-token", CVAR, &YgooSioSreadYmake_reader_token},
  {"flush-whitespace", CVAR, &YgooSioSreadYflush_whitespace},
  {"gobble-nested-comment", CVAR, &YgooSioSreadYgobble_nested_comment},
  {"sub-read-vertical", CVAR, &YgooSioSreadYsub_read_vertical},
  {"$string-escape-chars", CVAR, &YgooSioSreadYDstring_escape_chars},
  {"sub-read-carefully", CVAR, &YgooSioSreadYsub_read_carefully},
  {"sub-read-list-eof-error", CVAR, &YgooSioSreadYsub_read_list_eof_error},
  {"get-standard-read-macro", CVAR, &YgooSioSreadYget_standard_read_macro},
  {"$vert-sym", CVAR, &YgooSioSreadYDvert_sym},
  {"make-immutable!", CVAR, &YgooSioSreadYmake_immutableX},
  {"token-message-setter", CVAR, &YgooSioSreadYtoken_message_setter},
  {"warn", CVAR, &YgooSioSreadYwarn},
  {"$strange-symbol-names", CVAR, &YgooSioSreadYDstrange_symbol_names},
  {"$char-long-names", CVAR, &YgooSioSreadYDchar_long_names},
  {"*sharp-macros*", CVAR, &YgooSioSreadYTsharp_macrosT},
  {"read-from-string", CVAR, &YgooSioSreadYread_from_string},
  {"preferred-case", CVAR, &YgooSioSreadYpreferred_case},
  {"sub-read-token", CVAR, &YgooSioSreadYsub_read_token},
  {"set-standard-read-macro!", CVAR, &YgooSioSreadYset_standard_read_macroX},
  {"<reader-token>", CVAR, &YgooSioSreadYLreader_tokenG},
  {"$close-paren", CVAR, &YgooSioSreadYDclose_paren},
  {"reader-token?", CVAR, &YgooSioSreadYreader_tokenQ},
  {"sub-read-constituent", CVAR, &YgooSioSreadYsub_read_constituent},
  {"$vert-proxy", CVAR, &YgooSioSreadYDvert_proxy},
  {"token-message", CVAR, &YgooSioSreadYtoken_message},
  {"---main-1---", PVAR, NULL},
  {"sub-read", CVAR, &YgooSioSreadYsub_read},
  {"reverse-list->string", CVAR, &YgooSioSreadYreverse_list_Gstring},
  {"$dot", CVAR, &YgooSioSreadYDdot},
  {"*read-dispatch-vector*", CVAR, &YgooSioSreadYTread_dispatch_vectorT},
  {"---main-0---", PVAR, NULL},
  {"read-delimited-list", CVAR, &YgooSioSreadYread_delimited_list},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"read", "read"},
  {"get-standard-read-macro", "get-standard-read-macro"},
  {"$char-long-names", "$char-long-names"},
  {"read-from-string", "read-from-string"},
  {"set-standard-read-macro!", "set-standard-read-macro!"},
  {"read-delimited-list", "read-delimited-list"},
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
extern void load_module_gooSmacros (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSioSport (void);
extern void load_module_gooScols (void);

/* EXPRESSION: */

extern void load_module_gooSioSread (void);

void load_module_gooSioSread (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooSioSport();
  load_module_gooScols();

  (P)YgooSioSreadY___main_0___();
  (P)YgooSioSreadY___main_1___();

}

/* END OF GENERATED CODE. */
