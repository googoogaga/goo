/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/io/write */

EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
DEF(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLstrG,"goo/boot","<str>");
DEF(YgooSioSwriteYquotationQ,"goo/io/write","quotation?");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooSioSwriteYwrite_number,"goo/io/write","write-number");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
DEF(YgooSioSwriteYwrite_value_type,"goo/io/write","write-value-type");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YgooSioSwriteYwrite_fun_guts,"goo/io/write","write-fun-guts");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYN,"goo/math","~");
DEF(YgooSioSwriteYcharacter_name,"goo/io/write","character-name");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYB,"goo/math","&");
DEF(YgooSioSwriteYrecurring_write_type,"goo/io/write","recurring-write-type");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
DEF(YgooSioSwriteYwrite_list,"goo/io/write","write-list");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YgooSioSwriteYas_binding_name,"goo/io/write","as-binding-name");
EXT(YLmetG,"goo/boot","<met>");
DEF(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YgooSioSwriteYwrite_flat,"goo/io/write","write-flat");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Ynot,"goo/boot","not");
DEF(YgooSioSwriteYwrite_boolean,"goo/io/write","write-boolean");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
DEF(YgooSioSwriteYdo_emit,"goo/io/write","do-emit");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYT,"goo/math","*");
DEF(YgooSioSwriteYwrite_char_literal,"goo/io/write","write-char-literal");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooSioSwriteYwrite_map,"goo/io/write","write-map");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
DEF(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
DEF(YgooSioSwriteYwrite_string_literal,"goo/io/write","write-string-literal");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
DEF(YgooSioSwriteYwrite_params,"goo/io/write","write-params");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmathYoddQ,"goo/math","odd?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_6);
DEFLIT(lit_19);
DEFLIT(lit_35);
DEFLIT(lit_7);
DEFLIT(lit_98);
DEFLIT(lit_97);
DEFLIT(lit_10);
DEFLIT(lit_58);
DEFLIT(lit_46);
DEFLIT(lit_88);
DEFLIT(lit_48);
DEFLIT(lit_83);
DEFLIT(lit_66);
DEFLIT(lit_70);
DEFLIT(lit_51);
DEFLIT(lit_47);
DEFLIT(lit_79);
DEFLIT(lit_96);
DEFLIT(lit_57);
DEFLIT(lit_42);
DEFLIT(lit_63);
DEFLIT(lit_50);
DEFLIT(lit_16);
DEFLIT(lit_89);
DEFLIT(lit_110);
DEFLIT(lit_86);
DEFLIT(lit_62);
DEFLIT(lit_53);
DEFLIT(lit_108);
DEFLIT(lit_56);
DEFLIT(lit_32);
DEFLIT(lit_105);
DEFLIT(lit_90);
DEFLIT(lit_21);
DEFLIT(lit_2);
DEFLIT(lit_45);
DEFLIT(lit_12);
DEFLIT(lit_74);
DEFLIT(lit_18);
DEFLIT(lit_87);
DEFLIT(lit_40);
DEFLIT(lit_44);
DEFLIT(lit_33);
DEFLIT(lit_27);
DEFLIT(lit_29);
DEFLIT(lit_59);
DEFLIT(lit_30);
DEFLIT(lit_92);
DEFLIT(lit_68);
DEFLIT(lit_15);
DEFLIT(lit_94);
DEFLIT(lit_109);
DEFLIT(lit_71);
DEFLIT(lit_13);
DEFLIT(lit_67);
DEFLIT(lit_82);
DEFLIT(lit_93);
DEFLIT(lit_80);
DEFLIT(lit_8);
DEFLIT(lit_37);
DEFLIT(lit_39);
DEFLIT(lit_115);
DEFLIT(lit_111);
DEFLIT(lit_117);
DEFLIT(lit_36);
DEFLIT(lit_100);
DEFLIT(lit_95);
DEFLIT(lit_43);
DEFLIT(lit_54);
DEFLIT(lit_11);
DEFLIT(lit_26);
DEFLIT(lit_104);
DEFLIT(lit_118);
DEFLIT(lit_81);
DEFLIT(lit_72);
DEFLIT(lit_17);
DEFLIT(lit_22);
DEFLIT(lit_31);
DEFLIT(lit_69);
DEFLIT(lit_38);
DEFLIT(lit_23);
DEFLIT(lit_99);
DEFLIT(lit_84);
DEFLIT(lit_78);
DEFLIT(lit_14);
DEFLIT(lit_55);
DEFLIT(lit_103);
DEFLIT(lit_76);
DEFLIT(lit_0);
DEFLIT(lit_91);
DEFLIT(lit_3);
DEFLIT(lit_1);
DEFLIT(lit_114);
DEFLIT(lit_73);
DEFLIT(lit_24);
DEFLIT(lit_4);
DEFLIT(lit_106);
DEFLIT(lit_85);
DEFLIT(lit_20);
DEFLIT(lit_5);
DEFLIT(lit_65);
DEFLIT(lit_77);
DEFLIT(lit_107);
DEFLIT(lit_9);
DEFLIT(lit_60);
DEFLIT(lit_28);
DEFLIT(lit_25);
DEFLIT(lit_52);
DEFLIT(lit_101);
DEFLIT(lit_102);
DEFLIT(lit_75);
DEFLIT(lit_61);
DEFLIT(lit_49);
DEFLIT(lit_112);
DEFLIT(lit_34);
DEFLIT(lit_64);
DEFLIT(lit_113);
DEFLIT(lit_116);
DEFLIT(lit_41);

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
LOCFOR(fun_x_3117_32);
LOCFOR(fun_33);
LOCFOR(fun_write_map_34);
LOCFOR(fun_recurring_write_35);
LOCFOR(fun_recurring_write_36);
LOCFOR(fun_x_3121_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_write_params_40);
LOCFOR(fun_write_fun_guts_41);
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
LOCFOR(fun_x_3125_59);
LOCFOR(fun_60);
LOCFOR(fun_61);
LOCFOR(fun_62);
LOCFOR(fun_recurring_write_63);
LOCFOR(fun_recurring_write_64);
LOCFOR(fun_recurring_write_65);
LOCFOR(fun_arg_66);
LOCFOR(fun_67);
LOCFOR(fun_msg_68);
LOCFOR(fun_post_69);
LOCFOR(fun_pe_msg_70);
LOCFOR(fun_maybe_pack_chars_71);
LOCFOR(fun_arg_72);
LOCFOR(fun_73);
LOCFOR(fun_pe_msg_74);
LOCFOR(fun_x_3135_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
FUNFOR(YgooSruntimeYmsg_to_str);
LOCFOR(fun_loop_81);
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
  T1 = CALL2(1,VARREF(YgooSmagYGE),d_,VARREF(YgooSioSwriteYTmax_print_depthT));
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
  P recurF7275;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF7275 = T1;
  FUNINIT(recurF7275, 2,port_,recurF7275);
  T2 = CALL2(0,recurF7275,x_,YPint((P)-1));
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
  P tmpF7276;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF7276 = T1;
  if (tmpF7276 != YPfalse) {
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
  P portF7277;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  portF7277 = YPfalse;
  portF7277 = BOXFAB(portF7277);
  T3 = FUNFAB(fun_6,2,portF7277,x_);
  T4 = FUNFAB(fun_7,1,portF7277);
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
  T1 = CALL2(1,VARREF(YgooSmagYGE),d_,VARREF(YgooSioSwriteYTmax_print_depthT));
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
  P recurF7278;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_9,2);
  recurF7278 = T1;
  FUNINIT(recurF7278, 2,port_,recurF7278);
  T2 = CALL2(0,recurF7278,x_,YPint((P)-1));
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
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_flat),port_,x_,d_,recur_);
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
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_map),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_15) {
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
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_18));
  T2 = (P)YPlu(x_);
  T1 = (P)YPib(T2);
  T0 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),T1,YPint((P)16));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_18) {
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

FUNCODEDEF(fun_write_char_literal_23) {
  P port_,x_;
  P probeF7279;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSwriteYcharacter_name),x_);
  probeF7279 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_24));
  if (probeF7279 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,probeF7279);
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
  P tmpF7281;
  P assocF7280;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooScolsSlstYassqn),char_,VARREF(YgooSioSreadYDchar_long_names),YPint((P)1));
  assocF7280 = T1;
  tmpF7281 = assocF7280;
  if (tmpF7281 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsSseqY1st),assocF7280);
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
  P tmpF7283;
  P cF7282;
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
    cF7282 = T4;
    T6 = CALL2(1,VARREF(YgooSmathYE),cF7282,YPchr((P)92));
    tmpF7283 = T6;
    if (tmpF7283 != YPfalse) {
      T7 = tmpF7283;
    } else {
      T8 = CALL2(1,VARREF(YgooSmathYE),cF7282,YPchr((P)34));
      T7 = T8;
    }
    T5 = T7;
    if (T5 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)92));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),cF7282);
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
  P loopF7285;
  P lenF7284;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  lenF7284 = T1;
  T3 = FUNSHELL(1,fun_loop_25,4);
  loopF7285 = T3;
  FUNINIT(loopF7285, 4,lenF7284,port_,x_,loopF7285);
  T4 = CALL1(0,loopF7285,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_27) {
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
    T4 = CALL2(1,VARREF(YgooSmagYGE),n_,VARREF(YgooSioSwriteYTmax_print_lengthT));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_33));
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

FUNCODEDEF(fun_write_list_28) {
  P port_,x_,d_,recur_;
  P loopF7286;
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
    T6 = FUNSHELL(1,fun_loop_27,4);
    loopF7286 = T6;
    FUNINIT(loopF7286, 4,port_,d_,recur_,loopF7286);
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(0,loopF7286,T8,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_29) {
  P x_;
  P tmpF7289;
  P tmpF7288;
  P tmpF7287;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF7287 = T1;
  if (tmpF7287 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_35));
    tmpF7288 = T4;
    if (tmpF7288 != YPfalse) {
      T9 = CALL1(1,VARREF(Ytail),x_);
      T8 = CALL2(1,VARREF(YisaQ),T9,VARREF(YLlstG));
      tmpF7289 = T8;
      if (tmpF7289 != YPfalse) {
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
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
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

FUNCODEDEF(fun_write_flat_31) {
  P port_,x_,d_,recur_;
  P loopF7291;
  P zF7290;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
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
    CALL2(1,VARREF(YgooSioSwriteYemit),port_,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_39));
  }
  T6 = CALL1(1,VARREF(YgooStypesYlen),x_);
  zF7290 = T6;
  T7 = CALL2(1,VARREF(YgooSmagYG),zF7290,YPint((P)0));
  if (T7 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T8,d_);
    T10 = FUNSHELL(1,fun_loop_30,6);
    loopF7291 = T10;
    FUNINIT(loopF7291, 6,port_,zF7290,x_,d_,recur_,loopF7291);
    T11 = CALL1(0,loopF7291,YPint((P)1));
    T9 = T11;
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
  T5 = T12;
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_x_3117_32) {
  P x_3116_,x_3115_;
  P valF7296;
  P keyF7295;
  P tup81F7294;
  P iF7293;
  P tmpF7292;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2;
LINK_STACK();
  ARG(x_3116_, 0);
  ARG(x_3115_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3116_);
  tmpF7292 = T3;
  if (tmpF7292 != YPfalse) {
    T4 = tmpF7292;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3115_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3116_);
    iF7293 = T7;
    T10 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_3115_);
    T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_3115_);
    T9 = CALL2(1,VARREF(Ytup),T10,T11);
    tup81F7294 = T9;
    T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup81F7294,YPint((P)0));
    keyF7295 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),tup81F7294,YPint((P)1));
    valF7296 = T15;
    T16 = CALL2(1,VARREF(YgooSmagYGE),iF7293,VARREF(YgooSioSwriteYTmax_print_lengthT));
    if (T16 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_47));
      T17 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    CALL2(1,FREEREF(3),keyF7295,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_48));
    CALL2(1,FREEREF(3),valF7296,FREEREF(2));
    T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3116_);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3115_);
    a1 = T19;
    a2 = T20;
    x_3116_ = a1;
    x_3115_ = a2;
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
  P x_3117F7297;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_x_3117_32,5);
  x_3117F7297 = T1;
  FUNINIT(x_3117F7297, 5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),x_3117F7297);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(3));
  T2 = CALL2(0,x_3117F7297,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_map_34) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
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
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_33,4,port_,d_,recur_,x_);
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

FUNCODEDEF(fun_x_3121_37) {
  P x_3120_,x_3119_,x_3118_;
  P iF7302;
  P specF7301;
  P firstQF7300;
  P tmpF7299;
  P tmpF7298;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_3120_, 0);
  ARG(x_3119_, 1);
  ARG(x_3118_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3120_);
  tmpF7298 = T3;
  if (tmpF7298 != YPfalse) {
    T4 = tmpF7298;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3119_);
    tmpF7299 = T6;
    if (tmpF7299 != YPfalse) {
      T7 = tmpF7299;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3118_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_3120_);
    firstQF7300 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_3119_);
    specF7301 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_3118_);
    iF7302 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF7300);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    } else {
    }
    T17 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(1));
    if (T17 != YPfalse) {
      T18 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF7301);
    } else {
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),iF7302);
      T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T20);
      CALL3(1,VARREF(YgooSruntimeYmsg),FREEREF(0),LITREF(lit_56),T19);
      CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF7301);
      T21 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)41));
    }
    T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3120_);
    T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3119_);
    T25 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3118_);
    a1 = T23;
    a2 = T24;
    a3 = T25;
    x_3120_ = a1;
    x_3119_ = a2;
    x_3118_ = a3;
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

FUNCODEDEF(fun_38) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_39) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_write_params_40) {
  P port_,x_,recur_;
  P tmpF7307;
  P valueF7306;
  P x_3121F7305;
  P namesF7304;
  P namesF7303;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
loop:
  T1 = CALL1(1,VARREF(Yfun_names),x_);
  namesF7303 = T1;
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
  T3 = CALL1(1,VARREF(Yfun_names),x_);
  namesF7304 = T3;
  T4 = FUNSHELL(1,fun_x_3121_37,3);
  x_3121F7305 = T4;
  FUNINIT(x_3121F7305, 3,port_,namesF7304,x_3121F7305);
  T8 = fun_38;
  T9 = fun_39;
  T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T11 = CALL1(1,VARREF(Yfun_specs),x_);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T5 = CALL3(0,x_3121F7305,T6,T10,T12);
  T15 = CALL1(1,VARREF(Yfun_val),x_);
  valueF7306 = T15;
  T18 = CALL1(1,VARREF(Ynot),valueF7306);
  tmpF7307 = T18;
  if (tmpF7307 != YPfalse) {
    T19 = tmpF7307;
  } else {
    T20 = CALL2(1,VARREF(YgooSmacrosYEE),valueF7306,VARREF(YLanyG));
    T19 = T20;
  }
  T17 = T19;
  T16 = CALL1(1,VARREF(Ynot),T17);
  if (T16 != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYmsg),port_,LITREF(lit_57));
    T21 = CALL2(1,VARREF(YgooSioSwriteYwrite_value_type),port_,valueF7306);
  } else {
  }
  T22 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
  T14 = T22;
  T2 = T14;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_fun_guts_41) {
  P port_,x_,name_,recur_;
  P tmpF7309;
  P nameF7308;
  P T0,T1,T2,T3,T4,T5;
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
  nameF7308 = T1;
  tmpF7309 = nameF7308;
  if (tmpF7309 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF7308);
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

FUNCODEDEF(fun_recurring_write_42) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_61),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_43) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_62),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_44) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3,T4;
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

FUNCODEDEF(fun_recurring_write_45) {
  P port_,x_,d_,recur_;
  P T0,T1;
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

FUNCODEDEF(fun_recurring_write_46) {
  P port_,x_,d_,recur_;
  P T0,T1;
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

FUNCODEDEF(fun_47) {
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

FUNCODEDEF(fun_recurring_write_48) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_70));
  T0 = FUNFAB(fun_47,1,port_);
  T1 = CALL1(1,VARREF(Yunion_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_71));
UNLINK_STACK();
  QRET(T2);
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
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_72));
  T0 = FUNFAB(fun_49,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_73));
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

FUNCODEDEF(fun_write_value_type_52) {
  P port_,x_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_75));
  T0 = FUNFAB(fun_51,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_76));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_write_value_type_53) {
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

FUNCODEDEF(fun_recurring_write_type_54) {
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

FUNCODEDEF(fun_recurring_write_type_55) {
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

FUNCODEDEF(fun_recur_56) {
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

FUNCODEDEF(fun_write_type_57) {
  P port_,x_;
  P recurF7310;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_56,2);
  recurF7310 = T1;
  FUNINIT(recurF7310, 2,port_,recurF7310);
  T2 = CALL2(0,recurF7310,x_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_58) {
  P port_,x_,d_,recur_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_79));
  T0 = CALL1(1,VARREF(Yprop_getter),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_80));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_x_3125_59) {
  P x_3124_,x_3123_;
  P getterF7314;
  P propF7313;
  P iF7312;
  P tmpF7311;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(x_3124_, 0);
  ARG(x_3123_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3124_);
  tmpF7311 = T3;
  if (tmpF7311 != YPfalse) {
    T4 = tmpF7311;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3123_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_3124_);
    iF7312 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_3123_);
    propF7313 = T9;
    T10 = CALL2(1,VARREF(YgooSmagYGE),iF7312,VARREF(YgooSioSwriteYTmax_print_lengthT));
    if (T10 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_85));
      T11 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    T13 = CALL1(1,VARREF(Yprop_getter),propF7313);
    getterF7314 = T13;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    T14 = CALL1(1,VARREF(Yfun_name),getterF7314);
    CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(0),T14);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_86));
    T15 = CALL1(1,getterF7314,FREEREF(2));
    CALL2(1,FREEREF(4),T15,FREEREF(3));
    T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3124_);
    T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3123_);
    a1 = T17;
    a2 = T18;
    x_3124_ = a1;
    x_3123_ = a2;
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

FUNCODEDEF(fun_60) {
  P x_3125F7315;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  VARSET(YTreport_prop_unbound_errorsQT,YPfalse);
  T1 = FUNSHELL(1,fun_x_3125_59,6);
  x_3125F7315 = T1;
  FUNINIT(x_3125F7315, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),x_3125F7315);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T6 = CALL1(1,VARREF(Yobject_props),FREEREF(2));
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),T6);
  T2 = CALL2(0,x_3125F7315,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YTreport_prop_unbound_errorsQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P blow_;
  P x_3122F7316;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  x_3122F7316 = VARREF(YTreport_prop_unbound_errorsQT);
  T2 = FUNFAB(fun_60,5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_61,1,x_3122F7316);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_63) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_81));
  T1 = CALL1(1,VARREF(Yobject_class),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_62,4,port_,x_,d_,recur_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_87));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_64) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_88));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_65) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_89));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_66) {
  P char_,class_;
  P tmpF7319;
  P argumentF7318;
  P current_indexF7317;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
loop:
  T1 = BOXVAL(FREEREF(0));
  current_indexF7317 = T1;
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(0)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF7317,FREEREF(1));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_95),FREEREF(2),FREEREF(3));
  } else {
  }
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),current_indexF7317);
  argumentF7318 = T8;
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),class_,VARREF(YLanyG));
  tmpF7319 = T11;
  if (tmpF7319 != YPfalse) {
    T12 = tmpF7319;
  } else {
    T13 = CALL2(1,VARREF(YisaQ),argumentF7318,class_);
    T12 = T13;
  }
  T10 = T12;
  T9 = CALL1(1,VARREF(Ynot),T10);
  if (T9 != YPfalse) {
    T14 = CALL4(1,VARREF(Yerror),LITREF(lit_96),char_,class_,argumentF7318);
  } else {
  }
  T7 = argumentF7318;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P c_;
  P x_3127F7321;
  P x_3126F7320;
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
    x_3126F7320 = T2;
    x_3127F7321 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_3127F7321,x_3126F7320,YPchr((P)68));
    if (T5 != YPfalse) {
      T8 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
      T6 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T7);
      T4 = T6;
    } else {
      T10 = CALL2(1,x_3127F7321,x_3126F7320,YPchr((P)66));
      if (T10 != YPfalse) {
        T13 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T12 = CALL2(1,VARREF(YgooSmathYnum_to_str),T13,YPint((P)2));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T12);
        T9 = T11;
      } else {
        T15 = CALL2(1,x_3127F7321,x_3126F7320,YPchr((P)79));
        if (T15 != YPfalse) {
          T18 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T17 = CALL2(1,VARREF(YgooSmathYnum_to_str),T18,YPint((P)8));
          T16 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T17);
          T14 = T16;
        } else {
          T20 = CALL2(1,x_3127F7321,x_3126F7320,YPchr((P)88));
          if (T20 != YPfalse) {
            T23 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T22 = CALL2(1,VARREF(YgooSmathYnum_to_str),T23,YPint((P)16));
            T21 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T22);
            T19 = T21;
          } else {
            T25 = CALL2(1,x_3127F7321,x_3126F7320,YPchr((P)67));
            if (T25 != YPfalse) {
              T27 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T26 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),T27);
              T24 = T26;
            } else {
              T29 = CALL2(1,x_3127F7321,x_3126F7320,YPchr((P)83));
              if (T29 != YPfalse) {
                T31 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T30 = CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T31);
                T28 = T30;
              } else {
                T33 = CALL2(1,x_3127F7321,x_3126F7320,YPchr((P)61));
                if (T33 != YPfalse) {
                  T35 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T34 = CALL2(1,VARREF(YgooSioSwriteYwrite),FREEREF(1),T35);
                  T32 = T34;
                } else {
                  T37 = CALL2(1,x_3127F7321,x_3126F7320,YPchr((P)37));
                  if (T37 != YPfalse) {
                    T38 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)37));
                    T36 = T38;
                  } else {
                    T39 = CALL3(1,VARREF(Yerror),LITREF(lit_98),c_,FREEREF(3));
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

FUNCODEDEF(fun_msg_68) {
  P port_,message_,arguments_;
  P argF7325;
  P num_argumentsF7324;
  P argument_indexF7323;
  P found_percentQF7322;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
loop:
  found_percentQF7322 = YPfalse;
  found_percentQF7322 = BOXFAB(found_percentQF7322);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF7323 = YPint((P)0);
  argument_indexF7323 = BOXFAB(argument_indexF7323);
  T5 = CALL1(1,VARREF(YgooStypesYlen),arguments_);
  num_argumentsF7324 = T5;
  T6 = FUNSHELL(1,fun_arg_66,4);
  argF7325 = T6;
  FUNINIT(argF7325, 4,argument_indexF7323,num_argumentsF7324,message_,arguments_);
  T8 = FUNFAB(fun_67,4,found_percentQF7322,port_,argF7325,message_);
  T7 = CALL2(1,VARREF(YgooSmacrosYdo),T8,message_);
  T12 = BOXVAL(found_percentQF7322);
  T11 = CALL1(1,VARREF(Ynot),T12);
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T13 = CALL2(1,VARREF(Yerror),LITREF(lit_99),message_);
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

FUNCODEDEF(fun_post_69) {
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

FUNCODEDEF(fun_pe_msg_70) {
  P port_expr_,message_,args_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T2 = CALL1(1,VARREF(Ylst),port_expr_);
  T3 = CALL1(1,VARREF(Ylst),message_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,args_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_pack_chars_71) {
  P UF7326;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(1));
    UF7326 = T3;
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
    T8 = CALL1(1,VARREF(Ylst),FREEREF(2));
    T10 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),FREEREF(0));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T9,Ynil);
    T5 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF7326,T6);
    T4 = BOXVAL(FREEREF(1)) = T5;
    T11 = CALL1(1,VARREF(YgooScolsScolxYzapX),FREEREF(0));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_72) {
  P char_;
  P current_indexF7327;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  CALL0(0,FREEREF(0));
  T1 = BOXVAL(FREEREF(1));
  current_indexF7327 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(1)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF7327,FREEREF(2));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_106),FREEREF(3),FREEREF(4));
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(4),current_indexF7327);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P c_;
  P UF7336;
  P UF7335;
  P UF7334;
  P UF7333;
  P UF7332;
  P UF7331;
  P UF7330;
  P x_3131F7329;
  P x_3130F7328;
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
    x_3130F7328 = T2;
    x_3131F7329 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_3131F7329,x_3130F7328,YPchr((P)68));
    if (T5 != YPfalse) {
      T7 = BOXVAL(FREEREF(1));
      UF7330 = T7;
      T11 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
      T12 = CALL1(1,VARREF(Ylst),FREEREF(2));
      T15 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
      T17 = CALL1(1,FREEREF(3),c_);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
      T13 = CALL1(1,VARREF(Ylst),T14);
      T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
      T9 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF7330,T10);
      T8 = BOXVAL(FREEREF(1)) = T9;
      T6 = T8;
      T4 = T6;
    } else {
      T19 = CALL2(1,x_3131F7329,x_3130F7328,YPchr((P)66));
      if (T19 != YPfalse) {
        T21 = BOXVAL(FREEREF(1));
        UF7331 = T21;
        T25 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
        T26 = CALL1(1,VARREF(Ylst),FREEREF(2));
        T29 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
        T31 = CALL1(1,FREEREF(3),c_);
        T30 = CALL1(1,VARREF(Ylst),T31);
        T32 = CALL1(1,VARREF(Ylst),YPint((P)2));
        T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,Ynil);
        T27 = CALL1(1,VARREF(Ylst),T28);
        T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,Ynil);
        T23 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF7331,T24);
        T22 = BOXVAL(FREEREF(1)) = T23;
        T20 = T22;
        T18 = T20;
      } else {
        T34 = CALL2(1,x_3131F7329,x_3130F7328,YPchr((P)79));
        if (T34 != YPfalse) {
          T36 = BOXVAL(FREEREF(1));
          UF7332 = T36;
          T40 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
          T41 = CALL1(1,VARREF(Ylst),FREEREF(2));
          T44 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
          T46 = CALL1(1,FREEREF(3),c_);
          T45 = CALL1(1,VARREF(Ylst),T46);
          T47 = CALL1(1,VARREF(Ylst),YPint((P)8));
          T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T47,Ynil);
          T42 = CALL1(1,VARREF(Ylst),T43);
          T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,Ynil);
          T38 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF7332,T39);
          T37 = BOXVAL(FREEREF(1)) = T38;
          T35 = T37;
          T33 = T35;
        } else {
          T49 = CALL2(1,x_3131F7329,x_3130F7328,YPchr((P)88));
          if (T49 != YPfalse) {
            T51 = BOXVAL(FREEREF(1));
            UF7333 = T51;
            T55 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
            T56 = CALL1(1,VARREF(Ylst),FREEREF(2));
            T59 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
            T61 = CALL1(1,FREEREF(3),c_);
            T60 = CALL1(1,VARREF(Ylst),T61);
            T62 = CALL1(1,VARREF(Ylst),YPint((P)16));
            T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T60,T62,Ynil);
            T57 = CALL1(1,VARREF(Ylst),T58);
            T54 = CALL4(1,VARREF(YgooSmacrosYcat),T55,T56,T57,Ynil);
            T53 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF7333,T54);
            T52 = BOXVAL(FREEREF(1)) = T53;
            T50 = T52;
            T48 = T50;
          } else {
            T64 = CALL2(1,x_3131F7329,x_3130F7328,YPchr((P)67));
            if (T64 != YPfalse) {
              T66 = BOXVAL(FREEREF(1));
              UF7334 = T66;
              T70 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
              T71 = CALL1(1,VARREF(Ylst),FREEREF(2));
              T73 = CALL2(1,FREEREF(3),c_,VARREF(YLchrG));
              T72 = CALL1(1,VARREF(Ylst),T73);
              T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T71,T72,Ynil);
              T68 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF7334,T69);
              T67 = BOXVAL(FREEREF(1)) = T68;
              T65 = T67;
              T63 = T65;
            } else {
              T75 = CALL2(1,x_3131F7329,x_3130F7328,YPchr((P)83));
              if (T75 != YPfalse) {
                T77 = BOXVAL(FREEREF(1));
                UF7335 = T77;
                T81 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
                T82 = CALL1(1,VARREF(Ylst),FREEREF(2));
                T84 = CALL1(1,FREEREF(3),c_);
                T83 = CALL1(1,VARREF(Ylst),T84);
                T80 = CALL4(1,VARREF(YgooSmacrosYcat),T81,T82,T83,Ynil);
                T79 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF7335,T80);
                T78 = BOXVAL(FREEREF(1)) = T79;
                T76 = T78;
                T74 = T76;
              } else {
                T86 = CALL2(1,x_3131F7329,x_3130F7328,YPchr((P)61));
                if (T86 != YPfalse) {
                  T88 = BOXVAL(FREEREF(1));
                  UF7336 = T88;
                  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
                  T93 = CALL1(1,VARREF(Ylst),FREEREF(2));
                  T95 = CALL1(1,FREEREF(3),c_);
                  T94 = CALL1(1,VARREF(Ylst),T95);
                  T91 = CALL4(1,VARREF(YgooSmacrosYcat),T92,T93,T94,Ynil);
                  T90 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF7336,T91);
                  T89 = BOXVAL(FREEREF(1)) = T90;
                  T87 = T89;
                  T85 = T87;
                } else {
                  T97 = CALL2(1,x_3131F7329,x_3130F7328,YPchr((P)37));
                  if (T97 != YPfalse) {
                    T98 = CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(4),YPchr((P)37));
                    T96 = T98;
                  } else {
                    T99 = CALL3(1,VARREF(Yerror),LITREF(lit_109),c_,FREEREF(5));
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

FUNCODEDEF(fun_pe_msg_74) {
  P port_expr_,message_,args_;
  P exprsF7345;
  P argF7344;
  P maybe_pack_charsF7343;
  P packer_F7342;
  P portF7341;
  P charsF7340;
  P num_argsF7339;
  P arg_indexF7338;
  P found_percentQF7337;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
loop:
  found_percentQF7337 = YPfalse;
  found_percentQF7337 = BOXFAB(found_percentQF7337);
  check_type(YPint((P)0),VARREF(YLintG));
  arg_indexF7338 = YPint((P)0);
  arg_indexF7338 = BOXFAB(arg_indexF7338);
  T5 = CALL1(1,VARREF(YgooStypesYlen),args_);
  num_argsF7339 = T5;
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  charsF7340 = T7;
  T9 = CALL0(1,VARREF(YgooSmacrosYgensym));
  portF7341 = T9;
  T12 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F7342 = T12;
  packer_F7342 = BOXFAB(packer_F7342);
  T14 = FUNSHELL(1,fun_maybe_pack_chars_71,3);
  maybe_pack_charsF7343 = T14;
  T15 = FUNSHELL(1,fun_arg_72,5);
  argF7344 = T15;
  FUNINIT(maybe_pack_charsF7343, 3,charsF7340,packer_F7342,portF7341);
  FUNINIT(argF7344, 5,maybe_pack_charsF7343,arg_indexF7338,num_argsF7339,message_,args_);
  T16 = FUNFAB(fun_73,6,found_percentQF7337,packer_F7342,portF7341,argF7344,charsF7340,message_);
  CALL2(1,VARREF(YgooSmacrosYdo),T16,message_);
  T17 = CALL0(0,maybe_pack_charsF7343);
  T19 = BOXVAL(packer_F7342);
  T18 = CALL1(1,VARREF(YgooSpackerYpacker_res),T19);
  T11 = T18;
  exprsF7345 = T11;
  T22 = BOXVAL(found_percentQF7337);
  T21 = CALL1(1,VARREF(Ynot),T22);
  T20 = CALL1(1,VARREF(Ynot),T21);
  if (T20 != YPfalse) {
    T23 = CALL2(1,VARREF(Yerror),LITREF(lit_110),message_);
  } else {
  }
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
  T30 = CALL1(1,VARREF(Ylst),portF7341);
  T31 = CALL1(1,VARREF(Ylst),port_expr_);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,exprsF7345,Ynil);
  T10 = T24;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_3135_75) {
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

FUNCODEDEF(fun_76) {
  P return_;
  P x_3134F7354;
  P x_3134F7353;
  P x_3134F7352;
  P x_3134F7351;
  P argsF7350;
  P messageF7349;
  P portF7348;
  P x_3134F7347;
  P x_3135F7346;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3135_75,1);
  x_3135F7346 = T1;
  FUNINIT(x_3135F7346, 1,return_);
  x_3134F7347 = FREEREF(0);
  portF7348 = YPfalse;
  portF7348 = BOXFAB(portF7348);
  messageF7349 = YPfalse;
  messageF7349 = BOXFAB(messageF7349);
  argsF7350 = YPfalse;
  argsF7350 = BOXFAB(argsF7350);
  T9 = CALL2(1,VARREF(YisaQ),x_3134F7347,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3134F7347,LITREF(lit_115),x_3135F7346);
    x_3134F7351 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3134F7351,x_3135F7346);
    BOXVAL(portF7348) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_3134F7351);
    x_3134F7352 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3134F7352,x_3135F7346);
    BOXVAL(messageF7349) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_3134F7352);
    x_3134F7353 = T17;
    BOXVAL(argsF7350) = x_3134F7353;
    x_3134F7354 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3134F7354,x_3135F7346);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_3135F7346,LITREF(lit_116),x_3134F7347);
  }
  T22 = BOXVAL(portF7348);
  T23 = BOXVAL(messageF7349);
  T24 = BOXVAL(argsF7350);
  T21 = CALL3(1,VARREF(YgooSioSwriteYpe_msg),T22,T23,T24);
  T7 = T21;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_76,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_78) {
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

FUNCODEDEF(fun_79) {
  P tmpF7355;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF7355 = T1;
  if (tmpF7355 != YPfalse) {
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
  P portF7356;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
loop:
  portF7356 = YPfalse;
  portF7356 = BOXFAB(portF7356);
  T3 = FUNFAB(fun_78,3,portF7356,message_,arguments_);
  T4 = FUNFAB(fun_79,1,portF7356);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_81) {
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
  P loopF7358;
  P limF7357;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  limF7357 = T1;
  T3 = FUNSHELL(1,fun_loop_81,4);
  loopF7358 = T3;
  FUNINIT(loopF7358, 4,limF7357,port_,args_,loopF7358);
  T4 = CALL1(0,loopF7358,YPint((P)0));
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
  P T288,T289,T290;
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
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
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
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
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
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
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
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
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
  lit_44 = YPPsym((P)"x-3117");
  lit_45 = YPPsym((P)"x-3116");
  lit_46 = YPPsym((P)"x-3115");
  lit_47 = YPsb((P)" ...");
  lit_48 = YPsb((P)": ");
  T134 = YPsig(YPPlist(2,LITREF(lit_45),LITREF(lit_46)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3117_32 = YPmet(FUNCODEREF(fun_x_3117_32),LITREF(lit_44),T134,ENVNUL,PNUL,YPfalse);
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
  lit_52 = YPPsym((P)"x-3121");
  lit_53 = YPPsym((P)"x-3120");
  lit_54 = YPPsym((P)"x-3119");
  lit_55 = YPPsym((P)"x-3118");
  lit_56 = YPsb((P)"(%s ");
  lit_57 = YPsb((P)" => ");
  T152 = YPsig(YPPlist(3,LITREF(lit_53),LITREF(lit_54),LITREF(lit_55)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_3121_37 = YPmet(FUNCODEREF(fun_x_3121_37),LITREF(lit_52),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_4)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(1,LITREF(lit_4)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_4),LITREF(lit_6)),YPPlist(3,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_write_params_40 = YPmet(FUNCODEREF(fun_write_params_40),LITREF(lit_51),T149,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YgooSioSwriteYwrite_params);
  if (T155 != YPfalse) {
    T154 = VARREF(YgooSioSwriteYwrite_params);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_write_params_40;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YgooSioSwriteYwrite_params,T153);
  lit_58 = YPPsym((P)"write-fun-guts");
  lit_59 = YPsb((P)"#{");
  lit_60 = YPsb((P)"}");
  T157 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_1),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_fun_guts_41 = YPmet(FUNCODEREF(fun_write_fun_guts_41),LITREF(lit_58),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YgooSioSwriteYwrite_fun_guts);
  if (T160 != YPfalse) {
    T159 = VARREF(YgooSioSwriteYwrite_fun_guts);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_write_fun_guts_41;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YgooSioSwriteYwrite_fun_guts,T158);
  lit_61 = YPsb((P)"Gen");
  T162 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLgenG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_42 = YPmet(FUNCODEREF(fun_recurring_write_42),LITREF(lit_14),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T165 != YPfalse) {
    T164 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_recurring_write_42;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YgooSioSwriteYrecurring_write,T163);
  lit_62 = YPsb((P)"Met");
  T167 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLmetG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_43 = YPmet(FUNCODEREF(fun_recurring_write_43),LITREF(lit_14),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T170 != YPfalse) {
    T169 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_recurring_write_43;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YgooSioSwriteYrecurring_write,T168);
  lit_63 = YPsb((P)"#{Class ");
  lit_64 = YPsb((P)" ");
  lit_65 = YPsb((P)"}");
  T172 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_44 = YPmet(FUNCODEREF(fun_recurring_write_44),LITREF(lit_14),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T175 != YPfalse) {
    T174 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_recurring_write_44;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YgooSioSwriteYrecurring_write,T173);
  lit_66 = YPsb((P)"#{T= ");
  lit_67 = YPsb((P)"}");
  T177 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsingletonG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_45 = YPmet(FUNCODEREF(fun_recurring_write_45),LITREF(lit_14),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T180 != YPfalse) {
    T179 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_recurring_write_45;
  T178 = CALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YgooSioSwriteYrecurring_write,T178);
  lit_68 = YPsb((P)"#{T< ");
  lit_69 = YPsb((P)"}");
  T182 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsubclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_46 = YPmet(FUNCODEREF(fun_recurring_write_46),LITREF(lit_14),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T185 != YPfalse) {
    T184 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_recurring_write_46;
  T183 = CALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YgooSioSwriteYrecurring_write,T183);
  lit_70 = YPsb((P)"#{T+");
  lit_71 = YPsb((P)"}");
  T188 = YPsig(YPPlist(1,LITREF(lit_16)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T188,ENVNUL,PNUL,YPfalse);
  T187 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLunionG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_48 = YPmet(FUNCODEREF(fun_recurring_write_48),LITREF(lit_14),T187,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T191 != YPfalse) {
    T190 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_recurring_write_48;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(YgooSioSwriteYrecurring_write,T189);
  lit_72 = YPsb((P)"#{T*");
  lit_73 = YPsb((P)"}");
  T194 = YPsig(YPPlist(1,LITREF(lit_16)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T194,ENVNUL,PNUL,YPfalse);
  T193 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_50 = YPmet(FUNCODEREF(fun_recurring_write_50),LITREF(lit_14),T193,ENVNUL,PNUL,YPfalse);
  T197 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T197 != YPfalse) {
    T196 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_recurring_write_50;
  T195 = CALL2(1,VARREF(YPdefine_method),T196,T198);
  VARSET(YgooSioSwriteYrecurring_write,T195);
  lit_74 = YPPsym((P)"write-value-type");
  lit_75 = YPsb((P)"(tup");
  lit_76 = YPsb((P)")");
  T200 = YPsig(YPPlist(1,LITREF(lit_16)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T200,ENVNUL,PNUL,YPfalse);
  T199 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_52 = YPmet(FUNCODEREF(fun_write_value_type_52),LITREF(lit_74),T199,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YgooSioSwriteYwrite_value_type);
  if (T203 != YPfalse) {
    T202 = VARREF(YgooSioSwriteYwrite_value_type);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_write_value_type_52;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YgooSioSwriteYwrite_value_type,T201);
  T205 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_53 = YPmet(FUNCODEREF(fun_write_value_type_53),LITREF(lit_74),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(YgooSioSwriteYwrite_value_type);
  if (T208 != YPfalse) {
    T207 = VARREF(YgooSioSwriteYwrite_value_type);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_write_value_type_53;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(YgooSioSwriteYwrite_value_type,T206);
  lit_77 = YPPsym((P)"recurring-write-type");
  T210 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_54 = YPmet(FUNCODEREF(fun_recurring_write_type_54),LITREF(lit_77),T210,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(YgooSioSwriteYrecurring_write_type);
  if (T213 != YPfalse) {
    T212 = VARREF(YgooSioSwriteYrecurring_write_type);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_recurring_write_type_54;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(YgooSioSwriteYrecurring_write_type,T211);
  T215 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_55 = YPmet(FUNCODEREF(fun_recurring_write_type_55),LITREF(lit_77),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(YgooSioSwriteYrecurring_write_type);
  if (T218 != YPfalse) {
    T217 = VARREF(YgooSioSwriteYrecurring_write_type);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_recurring_write_type_55;
  T216 = CALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(YgooSioSwriteYrecurring_write_type,T216);
  lit_78 = YPPsym((P)"write-type");
  T221 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_56 = YPmet(FUNCODEREF(fun_recur_56),LITREF(lit_6),T221,ENVNUL,PNUL,YPfalse);
  T220 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_type_57 = YPmet(FUNCODEREF(fun_write_type_57),LITREF(lit_78),T220,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(YgooSioSwriteYwrite_type);
  if (T224 != YPfalse) {
    T223 = VARREF(YgooSioSwriteYwrite_type);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_write_type_57;
  T222 = CALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(YgooSioSwriteYwrite_type,T222);
  lit_79 = YPsb((P)"#{Prop ");
  lit_80 = YPsb((P)"}");
  T226 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLpropG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_58 = YPmet(FUNCODEREF(fun_recurring_write_58),LITREF(lit_14),T226,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T229 != YPfalse) {
    T228 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_recurring_write_58;
  T227 = CALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YgooSioSwriteYrecurring_write,T227);
  lit_81 = YPsb((P)"#{");
  lit_82 = YPPsym((P)"x-3125");
  lit_83 = YPPsym((P)"x-3124");
  lit_84 = YPPsym((P)"x-3123");
  lit_85 = YPsb((P)" ...");
  lit_86 = YPsb((P)": ");
  lit_87 = YPsb((P)"}");
  T235 = YPsig(YPPlist(2,LITREF(lit_83),LITREF(lit_84)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_3125_59 = YPmet(FUNCODEREF(fun_x_3125_59),LITREF(lit_82),T235,ENVNUL,PNUL,YPfalse);
  T234 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T234,ENVNUL,PNUL,YPfalse);
  T233 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T233,ENVNUL,PNUL,YPfalse);
  T232 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T232,ENVNUL,PNUL,YPfalse);
  T231 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_63 = YPmet(FUNCODEREF(fun_recurring_write_63),LITREF(lit_14),T231,ENVNUL,PNUL,YPfalse);
  T238 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T238 != YPfalse) {
    T237 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T237 = YPfalse;
  }
  T239 = fun_recurring_write_63;
  T236 = CALL2(1,VARREF(YPdefine_method),T237,T239);
  VARSET(YgooSioSwriteYrecurring_write,T236);
  lit_88 = YPsb((P)"#{End-of-file}");
  T242 = CALL0(1,VARREF(YgooSmathYeof_object));
  T241 = CALL1(1,VARREF(YgooStypesYtE),T242);
  T240 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),T241,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_64 = YPmet(FUNCODEREF(fun_recurring_write_64),LITREF(lit_14),T240,ENVNUL,PNUL,YPfalse);
  T245 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T245 != YPfalse) {
    T244 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_recurring_write_64;
  T243 = CALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(YgooSioSwriteYrecurring_write,T243);
  lit_89 = YPsb((P)"nul");
  T248 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Ynul));
  T247 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),T248,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_65 = YPmet(FUNCODEREF(fun_recurring_write_65),LITREF(lit_14),T247,ENVNUL,PNUL,YPfalse);
  T251 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T251 != YPfalse) {
    T250 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_recurring_write_65;
  T249 = CALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(YgooSioSwriteYrecurring_write,T249);
  lit_90 = YPPsym((P)"msg");
  lit_91 = YPPsym((P)"message");
  lit_92 = YPPsym((P)"arguments");
  lit_93 = YPPsym((P)"arg");
  lit_94 = YPPsym((P)"class");
  lit_95 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_96 = YPsb((P)"Msg argument for directive '%%%c' not of class %s: %=");
  lit_97 = YPPsym((P)"c");
  lit_98 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_99 = YPsb((P)"Incomplete msg directive in \"%s\"");
  T255 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_94)),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_arg_66 = YPmet(FUNCODEREF(fun_arg_66),LITREF(lit_93),T255,ENVNUL,PNUL,YPfalse);
  T254 = YPsig(YPPlist(1,LITREF(lit_97)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T254,ENVNUL,PNUL,YPfalse);
  T253 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_91),LITREF(lit_92)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_msg_68 = YPmet(FUNCODEREF(fun_msg_68),LITREF(lit_90),T253,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(YgooSruntimeYmsg);
  if (T258 != YPfalse) {
    T257 = VARREF(YgooSruntimeYmsg);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_msg_68;
  T256 = CALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(YgooSruntimeYmsg,T256);
  lit_100 = YPPsym((P)"post");
  T260 = YPsig(YPPlist(2,LITREF(lit_91),LITREF(lit_92)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_post_69 = YPmet(FUNCODEREF(fun_post_69),LITREF(lit_100),T260,ENVNUL,PNUL,YPfalse);
  T263 = BOUNDP(YgooSioSwriteYpost);
  if (T263 != YPfalse) {
    T262 = VARREF(YgooSioSwriteYpost);
  } else {
    T262 = YPfalse;
  }
  T264 = fun_post_69;
  T261 = CALL2(1,VARREF(YPdefine_method),T262,T264);
  VARSET(YgooSioSwriteYpost,T261);
  lit_101 = YPPsym((P)"pe-msg");
  lit_102 = YPPsym((P)"port-expr");
  lit_103 = YPPsym((P)"args");
  T265 = YPsig(YPPlist(3,LITREF(lit_102),LITREF(lit_91),LITREF(lit_103)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pe_msg_70 = YPmet(FUNCODEREF(fun_pe_msg_70),LITREF(lit_101),T265,ENVNUL,PNUL,YPfalse);
  T268 = BOUNDP(YgooSioSwriteYpe_msg);
  if (T268 != YPfalse) {
    T267 = VARREF(YgooSioSwriteYpe_msg);
  } else {
    T267 = YPfalse;
  }
  T269 = fun_pe_msg_70;
  T266 = CALL2(1,VARREF(YPdefine_method),T267,T269);
  VARSET(YgooSioSwriteYpe_msg,T266);
  lit_104 = YPPsym((P)"maybe-pack-chars");
  lit_105 = YPPsym((P)"puts");
  lit_106 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_107 = YPPsym((P)"num-to-str");
  lit_108 = YPPsym((P)"put");
  lit_109 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_110 = YPsb((P)"Incomplete msg directive in \"%s\"");
  lit_111 = YPPsym((P)"let");
  T273 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_maybe_pack_chars_71 = YPmet(FUNCODEREF(fun_maybe_pack_chars_71),LITREF(lit_104),T273,ENVNUL,PNUL,YPfalse);
  T272 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_arg_72 = YPmet(FUNCODEREF(fun_arg_72),LITREF(lit_93),T272,ENVNUL,PNUL,YPfalse);
  T271 = YPsig(YPPlist(1,LITREF(lit_97)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T271,ENVNUL,PNUL,YPfalse);
  T270 = YPsig(YPPlist(3,LITREF(lit_102),LITREF(lit_91),LITREF(lit_103)),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pe_msg_74 = YPmet(FUNCODEREF(fun_pe_msg_74),LITREF(lit_101),T270,ENVNUL,PNUL,YPfalse);
  T276 = BOUNDP(YgooSioSwriteYpe_msg);
  if (T276 != YPfalse) {
    T275 = VARREF(YgooSioSwriteYpe_msg);
  } else {
    T275 = YPfalse;
  }
  T277 = fun_pe_msg_74;
  T274 = CALL2(1,VARREF(YPdefine_method),T275,T277);
  VARSET(YgooSioSwriteYpe_msg,T274);
  lit_112 = YPPsym((P)"exp");
  lit_113 = YPPsym((P)"return");
  lit_114 = YPPsym((P)"x-3135");
  lit_115 = YPPsym((P)"msg*");
  lit_116 = YPsb((P)"Match Pattern Failure");
  T280 = YPsig(YPPlist(2,LITREF(lit_90),LITREF(lit_103)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3135_75 = YPmet(FUNCODEREF(fun_x_3135_75),LITREF(lit_114),T280,ENVNUL,PNUL,YPfalse);
  T279 = YPsig(YPPlist(1,LITREF(lit_113)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T279,ENVNUL,PNUL,YPfalse);
  T278 = YPsig(YPPlist(1,LITREF(lit_112)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T278,ENVNUL,PNUL,YPfalse);
  T281 = fun_77;
  YPmacro(YPPsym((P)"goo/io/write"),YPPsym((P)"msg*"),T281);
  lit_117 = YPPsym((P)"msg-to-str");
  T288 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T287 = fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T288,ENVNUL,PNUL,YPfalse);
  T286 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T285 = fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T286,ENVNUL,PNUL,YPfalse);
  T284 = YPsig(YPPlist(2,LITREF(lit_91),LITREF(lit_92)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLstrG),Ynil);
  T283 = YgooSruntimeYmsg_to_str = YPmet(FUNCODEREF(YgooSruntimeYmsg_to_str),LITREF(lit_117),T284,ENVNUL,PNUL,YPfalse);
  T290 = YgooSruntimeYmsg_to_str;
  T289 = VARSET(YgooSruntimeYmsg_to_str,T290);
  T282 = T289;
  return T282;
}

P YgooSioSwriteY___main_1___() {
  P T0,T1,T2,T3;
loop:
  lit_118 = YPPsym((P)"say");
  T1 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_81 = YPmet(FUNCODEREF(fun_loop_81),LITREF(lit_28),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_103)),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSwriteYsay = YPmet(FUNCODEREF(YgooSioSwriteYsay),LITREF(lit_118),T0,ENVNUL,PNUL,YPfalse);
  T2 = YgooSioSwriteYsay;
  VARSET(YgooSioSwriteYsay,T2);
  T3 = YPfalse;
  return T3;
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
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;

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
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"ds", &module_info_gooSboot, "ds"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {">", &module_info_gooSmag, ">"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"set", &module_info_gooSboot, "set"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"find", &module_info_gooScolsScol, "find"},
  {"tan", &module_info_gooSmath, "tan"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"error", &module_info_gooSboot, "error"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"try", &module_info_gooSboot, "try"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"@<", &module_info_gooSboot, "@<"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"+", &module_info_gooSmath, "+"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"in", &module_info_gooSioSport, "in"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<", &module_info_gooSmag, "<"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"while", &module_info_gooSmacros, "while"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"put", &module_info_gooSioSport, "put"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"fun", &module_info_gooSboot, "fun"},
  {"tail", &module_info_gooSboot, "tail"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"==", &module_info_gooSmacros, "=="},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"%im", &module_info_gooSboot, "%im"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%su", &module_info_gooSboot, "%su"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"=", &module_info_gooSmath, "="},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"and", &module_info_gooSmacros, "and"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"when", &module_info_gooSmacros, "when"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"case", &module_info_gooSmacros, "case"},
  {"asin", &module_info_gooSmath, "asin"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%str", &module_info_gooSboot, "%str"},
  {"rem", &module_info_gooSmath, "rem"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"items", &module_info_gooScolsScol, "items"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"t<", &module_info_gooStypes, "t<"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"atan", &module_info_gooSmath, "atan"},
  {"dm", &module_info_gooSboot, "dm"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"|", &module_info_gooSmath, "|"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"~", &module_info_gooSmath, "~"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"/", &module_info_gooSmath, "/"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"if", &module_info_gooSboot, "if"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"round", &module_info_gooSmath, "round"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"mif", &module_info_gooSboot, "mif"},
  {"$e", &module_info_gooSmath, "$e"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dv", &module_info_gooSboot, "dv"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"~=", &module_info_gooSmath, "~="},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"esc", &module_info_gooSboot, "esc"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"nul", &module_info_gooSboot, "nul"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"t=", &module_info_gooStypes, "t="},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"loc", &module_info_gooSboot, "loc"},
  {"app", &module_info_gooSmacros, "app"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"close", &module_info_gooSioSport, "close"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"read", &module_info_gooSruntime, "read"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"max", &module_info_gooSmag, "max"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"add", &module_info_gooScolsScol, "add"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"&", &module_info_gooSmath, "&"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"def", &module_info_gooSboot, "def"},
  {"let", &module_info_gooSboot, "let"},
  {"logn", &module_info_gooSmath, "logn"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"export", &module_info_gooSboot, "export"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"into", &module_info_gooScolsScol, "into"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"map", &module_info_gooSmacros, "map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"head", &module_info_gooSboot, "head"},
  {"cos", &module_info_gooSmath, "cos"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"always", &module_info_gooSruntime, "always"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"for", &module_info_gooSmacros, "for"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"-", &module_info_gooSmath, "-"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"as", &module_info_gooStypes, "as"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"not", &module_info_gooSboot, "not"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"df", &module_info_gooSboot, "df"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"abs", &module_info_gooSmath, "abs"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"mod", &module_info_gooSmath, "mod"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"any?", &module_info_gooStypes, "any?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"*", &module_info_gooSmath, "*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {">=", &module_info_gooSmag, ">="},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {">>", &module_info_gooSmath, ">>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%put", &module_info_gooSboot, "%put"},
  {"until", &module_info_gooSmacros, "until"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"open", &module_info_gooSioSport, "open"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"dc", &module_info_gooSboot, "dc"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"len", &module_info_gooStypes, "len"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"out", &module_info_gooSioSport, "out"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<=", &module_info_gooSmag, "<="},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"op", &module_info_gooSmacros, "op"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"do", &module_info_gooSmacros, "do"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<<", &module_info_gooSmath, "<<"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"pow", &module_info_gooSmath, "pow"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"@len", &module_info_gooSboot, "@len"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"get", &module_info_gooSioSport, "get"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"^", &module_info_gooSmath, "^"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"or", &module_info_gooSmacros, "or"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"now", &module_info_gooScolsScol, "now"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"nil", &module_info_gooSboot, "nil"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%get", &module_info_gooSboot, "%get"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"col", &module_info_gooScolsScol, "col"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"@+", &module_info_gooSboot, "@+"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"sin", &module_info_gooSmath, "sin"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"floor", &module_info_gooSmath, "floor"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"writeln", &YgooSioSwriteYwriteln},
  {"quotation?", &YgooSioSwriteYquotationQ},
  {"write-number", &YgooSioSwriteYwrite_number},
  {"*max-print-depth*", &YgooSioSwriteYTmax_print_depthT},
  {"write-value-type", &YgooSioSwriteYwrite_value_type},
  {"say", &YgooSioSwriteYsay},
  {"write-fun-guts", &YgooSioSwriteYwrite_fun_guts},
  {"character-name", &YgooSioSwriteYcharacter_name},
  {"emit", &YgooSioSwriteYemit},
  {"recurring-write-type", &YgooSioSwriteYrecurring_write_type},
  {"write-list", &YgooSioSwriteYwrite_list},
  {"as-binding-name", &YgooSioSwriteYas_binding_name},
  {"write", &YgooSioSwriteYwrite},
  {"write-flat", &YgooSioSwriteYwrite_flat},
  {"---main-1---", NULL},
  {"write-type", &YgooSioSwriteYwrite_type},
  {"write-boolean", &YgooSioSwriteYwrite_boolean},
  {"do-emit", &YgooSioSwriteYdo_emit},
  {"recurring-write", &YgooSioSwriteYrecurring_write},
  {"post", &YgooSioSwriteYpost},
  {"write-char-literal", &YgooSioSwriteYwrite_char_literal},
  {"write-map", &YgooSioSwriteYwrite_map},
  {"write-to-string", &YgooSioSwriteYwrite_to_string},
  {"pe-msg", &YgooSioSwriteYpe_msg},
  {"---main-0---", NULL},
  {"write-string-literal", &YgooSioSwriteYwrite_string_literal},
  {"msg*", NULL},
  {"*max-print-length*", &YgooSioSwriteYTmax_print_lengthT},
  {"write-params", &YgooSioSwriteYwrite_params},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"writeln", "writeln"},
  {"*max-print-depth*", "*max-print-depth*"},
  {"say", "say"},
  {"emit", "emit"},
  {"msg-to-str", "msg-to-str"},
  {"write", "write"},
  {"msg", "msg"},
  {"recurring-write", "recurring-write"},
  {"post", "post"},
  {"write-to-string", "write-to-string"},
  {"pe-msg", "pe-msg"},
  {"msg*", "msg*"},
  {"*max-print-length*", "*max-print-length*"},
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
