/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/io/write */

EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YgooSioSwriteYwrite_params,"goo/io/write","write-params");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YgooSioSwriteYdo_display,"goo/io/write","do-display");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
DEF(YgooSioSwriteYrecurring_write_type,"goo/io/write","recurring-write-type");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YgooSioSwriteYwrite_number,"goo/io/write","write-number");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YgooSioSwriteYcharacter_name,"goo/io/write","character-name");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YgooSioSwriteYwrite_fun_guts,"goo/io/write","write-fun-guts");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLlogG,"goo/boot","<log>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ynil,"goo/boot","nil");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
DEF(YgooSioSwriteYwrite_list,"goo/io/write","write-list");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YgooSioSwriteYwrite_flat,"goo/io/write","write-flat");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YgooSioSwriteYwrite_boolean,"goo/io/write","write-boolean");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathY_,"goo/math","-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooStypesYtT,"goo/types","t*");
DEF(YgooSioSwriteYwrite_char_literal,"goo/io/write","write-char-literal");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DEF(YgooSioSwriteYwrite_map,"goo/io/write","write-map");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YgooSioSwriteYquotationQ,"goo/io/write","quotation?");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmathYN,"goo/math","~");
DEF(YgooSioSwriteYas_binding_name,"goo/io/write","as-binding-name");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPprop,"goo/boot","%prop");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YgooSioSwriteYwrite_string_literal,"goo/io/write","write-string-literal");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_77);
DEFLIT(lit_21);
DEFLIT(lit_29);
DEFLIT(lit_44);
DEFLIT(lit_84);
DEFLIT(lit_104);
DEFLIT(lit_97);
DEFLIT(lit_25);
DEFLIT(lit_111);
DEFLIT(lit_45);
DEFLIT(lit_83);
DEFLIT(lit_91);
DEFLIT(lit_61);
DEFLIT(lit_66);
DEFLIT(lit_27);
DEFLIT(lit_1);
DEFLIT(lit_109);
DEFLIT(lit_9);
DEFLIT(lit_48);
DEFLIT(lit_7);
DEFLIT(lit_30);
DEFLIT(lit_67);
DEFLIT(lit_3);
DEFLIT(lit_92);
DEFLIT(lit_107);
DEFLIT(lit_39);
DEFLIT(lit_40);
DEFLIT(lit_17);
DEFLIT(lit_14);
DEFLIT(lit_42);
DEFLIT(lit_5);
DEFLIT(lit_52);
DEFLIT(lit_53);
DEFLIT(lit_46);
DEFLIT(lit_36);
DEFLIT(lit_76);
DEFLIT(lit_43);
DEFLIT(lit_72);
DEFLIT(lit_31);
DEFLIT(lit_65);
DEFLIT(lit_4);
DEFLIT(lit_10);
DEFLIT(lit_2);
DEFLIT(lit_22);
DEFLIT(lit_101);
DEFLIT(lit_8);
DEFLIT(lit_15);
DEFLIT(lit_34);
DEFLIT(lit_23);
DEFLIT(lit_24);
DEFLIT(lit_37);
DEFLIT(lit_70);
DEFLIT(lit_95);
DEFLIT(lit_32);
DEFLIT(lit_54);
DEFLIT(lit_0);
DEFLIT(lit_112);
DEFLIT(lit_63);
DEFLIT(lit_103);
DEFLIT(lit_18);
DEFLIT(lit_49);
DEFLIT(lit_71);
DEFLIT(lit_106);
DEFLIT(lit_28);
DEFLIT(lit_88);
DEFLIT(lit_110);
DEFLIT(lit_6);
DEFLIT(lit_78);
DEFLIT(lit_20);
DEFLIT(lit_33);
DEFLIT(lit_75);
DEFLIT(lit_38);
DEFLIT(lit_80);
DEFLIT(lit_35);
DEFLIT(lit_105);
DEFLIT(lit_68);
DEFLIT(lit_89);
DEFLIT(lit_102);
DEFLIT(lit_96);
DEFLIT(lit_99);
DEFLIT(lit_69);
DEFLIT(lit_59);
DEFLIT(lit_90);
DEFLIT(lit_60);
DEFLIT(lit_98);
DEFLIT(lit_82);
DEFLIT(lit_74);
DEFLIT(lit_57);
DEFLIT(lit_12);
DEFLIT(lit_51);
DEFLIT(lit_19);
DEFLIT(lit_94);
DEFLIT(lit_58);
DEFLIT(lit_114);
DEFLIT(lit_93);
DEFLIT(lit_85);
DEFLIT(lit_108);
DEFLIT(lit_81);
DEFLIT(lit_16);
DEFLIT(lit_26);
DEFLIT(lit_79);
DEFLIT(lit_55);
DEFLIT(lit_56);
DEFLIT(lit_47);
DEFLIT(lit_73);
DEFLIT(lit_13);
DEFLIT(lit_41);
DEFLIT(lit_64);
DEFLIT(lit_87);
DEFLIT(lit_50);
DEFLIT(lit_11);
DEFLIT(lit_113);
DEFLIT(lit_100);
DEFLIT(lit_62);
DEFLIT(lit_86);

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
LOCFOR(fun_x_1382_32);
LOCFOR(fun_33);
LOCFOR(fun_write_map_34);
LOCFOR(fun_recurring_write_35);
LOCFOR(fun_recurring_write_36);
LOCFOR(fun_x_1386_37);
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
LOCFOR(fun_recurring_write_type_51);
LOCFOR(fun_recurring_write_type_52);
LOCFOR(fun_recur_53);
LOCFOR(fun_write_type_54);
LOCFOR(fun_recurring_write_55);
LOCFOR(fun_x_1390_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_59);
LOCFOR(fun_recurring_write_60);
LOCFOR(fun_recurring_write_61);
LOCFOR(fun_recurring_write_62);
LOCFOR(fun_arg_63);
LOCFOR(fun_64);
LOCFOR(fun_msg_65);
LOCFOR(fun_pe_msg_66);
LOCFOR(fun_maybe_pack_chars_67);
LOCFOR(fun_arg_68);
LOCFOR(fun_69);
LOCFOR(fun_pe_msg_70);
LOCFOR(fun_x_1400_71);
LOCFOR(fun_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
FUNFOR(YgooSruntimeYmsg_to_str);
LOCFOR(fun_loop_77);
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
    T3 = CALL4(1,VARREF(YgooSioSwriteYdo_display),FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_display_5) {
  P port_,x_;
  P recurF1401;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF1401 = T1;
  FUNINIT(recurF1401, 2,port_,recurF1401);
  T2 = CALL2(0,recurF1401,x_,YPint((P)-1));
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
  P tmpF1402;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF1402 = T1;
  if (tmpF1402 != YPfalse) {
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
  P portF1403;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  portF1403 = YPfalse;
  portF1403 = BOXFAB(portF1403);
  T3 = FUNFAB(fun_6,2,portF1403,x_);
  T4 = FUNFAB(fun_7,1,portF1403);
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
  P recurF1404;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_9,2);
  recurF1404 = T1;
  FUNINIT(recurF1404, 2,port_,recurF1404);
  T2 = CALL2(0,recurF1404,x_,YPint((P)-1));
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
  P probeF1405;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSwriteYcharacter_name),x_);
  probeF1405 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_24));
  if (probeF1405 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,probeF1405);
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
  P tmpF1407;
  P assocF1406;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooScolsSlstYassqn),char_,VARREF(YgooSioSreadYDchar_long_names),YPint((P)1));
  assocF1406 = T1;
  tmpF1407 = assocF1406;
  if (tmpF1407 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsSseqY1st),assocF1406);
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
  P tmpF1409;
  P cF1408;
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
    cF1408 = T4;
    T6 = CALL2(1,VARREF(YgooSmathYE),cF1408,YPchr((P)92));
    tmpF1409 = T6;
    if (tmpF1409 != YPfalse) {
      T7 = tmpF1409;
    } else {
      T8 = CALL2(1,VARREF(YgooSmathYE),cF1408,YPchr((P)34));
      T7 = T8;
    }
    T5 = T7;
    if (T5 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)92));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),cF1408);
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
  P loopF1411;
  P lenF1410;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  lenF1410 = T1;
  T3 = FUNSHELL(1,fun_loop_25,4);
  loopF1411 = T3;
  FUNINIT(loopF1411, 4,lenF1410,port_,x_,loopF1411);
  T4 = CALL1(0,loopF1411,YPint((P)0));
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
  P loopF1412;
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
    loopF1412 = T6;
    FUNINIT(loopF1412, 4,port_,d_,recur_,loopF1412);
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(0,loopF1412,T8,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_29) {
  P x_;
  P tmpF1415;
  P tmpF1414;
  P tmpF1413;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF1413 = T1;
  if (tmpF1413 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_35));
    tmpF1414 = T4;
    if (tmpF1414 != YPfalse) {
      T9 = CALL1(1,VARREF(Ytail),x_);
      T8 = CALL2(1,VARREF(YisaQ),T9,VARREF(YLlstG));
      tmpF1415 = T8;
      if (tmpF1415 != YPfalse) {
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
  P loopF1417;
  P zF1416;
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
    CALL2(1,VARREF(YgooSioSwriteYdisplay),port_,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_39));
  }
  T6 = CALL1(1,VARREF(YgooStypesYlen),x_);
  zF1416 = T6;
  T7 = CALL2(1,VARREF(YgooSmagYG),zF1416,YPint((P)0));
  if (T7 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T8,d_);
    T10 = FUNSHELL(1,fun_loop_30,6);
    loopF1417 = T10;
    FUNINIT(loopF1417, 6,port_,zF1416,x_,d_,recur_,loopF1417);
    T11 = CALL1(0,loopF1417,YPint((P)1));
    T9 = T11;
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
  T5 = T12;
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_x_1382_32) {
  P x_1381_,x_1380_;
  P valF1422;
  P keyF1421;
  P tup26F1420;
  P iF1419;
  P tmpF1418;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2;
LINK_STACK();
  ARG(x_1381_, 0);
  ARG(x_1380_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1381_);
  tmpF1418 = T3;
  if (tmpF1418 != YPfalse) {
    T4 = tmpF1418;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1380_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1381_);
    iF1419 = T7;
    T10 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1380_);
    T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_1380_);
    T9 = CALL2(1,VARREF(Ytup),T10,T11);
    tup26F1420 = T9;
    T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F1420,YPint((P)0));
    keyF1421 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F1420,YPint((P)1));
    valF1422 = T15;
    T16 = CALL2(1,VARREF(YgooSmagYGE),iF1419,VARREF(YgooSioSwriteYTmax_print_lengthT));
    if (T16 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_47));
      T17 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    CALL2(1,FREEREF(3),keyF1421,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_48));
    CALL2(1,FREEREF(3),valF1422,FREEREF(2));
    T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1381_);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1380_);
    a1 = T19;
    a2 = T20;
    x_1381_ = a1;
    x_1380_ = a2;
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
  P x_1382F1423;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_x_1382_32,5);
  x_1382F1423 = T1;
  FUNINIT(x_1382F1423, 5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),x_1382F1423);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(3));
  T2 = CALL2(0,x_1382F1423,T3,T5);
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
  CALL2(1,VARREF(YgooSioSwriteYdisplay),port_,T0);
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

FUNCODEDEF(fun_x_1386_37) {
  P x_1385_,x_1384_,x_1383_;
  P iF1428;
  P specF1427;
  P firstQF1426;
  P tmpF1425;
  P tmpF1424;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1385_, 0);
  ARG(x_1384_, 1);
  ARG(x_1383_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1385_);
  tmpF1424 = T3;
  if (tmpF1424 != YPfalse) {
    T4 = tmpF1424;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1384_);
    tmpF1425 = T6;
    if (tmpF1425 != YPfalse) {
      T7 = tmpF1425;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1383_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1385_);
    firstQF1426 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1384_);
    specF1427 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1383_);
    iF1428 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF1426);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    } else {
    }
    T17 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(1));
    if (T17 != YPfalse) {
      T18 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF1427);
    } else {
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),iF1428);
      T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T20);
      CALL3(1,VARREF(YgooSruntimeYmsg),FREEREF(0),LITREF(lit_56),T19);
      CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF1427);
      T21 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)41));
    }
    T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1385_);
    T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1384_);
    T25 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1383_);
    a1 = T23;
    a2 = T24;
    a3 = T25;
    x_1385_ = a1;
    x_1384_ = a2;
    x_1383_ = a3;
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
  P tmpF1433;
  P valueF1432;
  P x_1386F1431;
  P namesF1430;
  P namesF1429;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
loop:
  T1 = CALL1(1,VARREF(Yfun_names),x_);
  namesF1429 = T1;
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
  T3 = CALL1(1,VARREF(Yfun_names),x_);
  namesF1430 = T3;
  T4 = FUNSHELL(1,fun_x_1386_37,3);
  x_1386F1431 = T4;
  FUNINIT(x_1386F1431, 3,port_,namesF1430,x_1386F1431);
  T8 = fun_38;
  T9 = fun_39;
  T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T11 = CALL1(1,VARREF(Yfun_specs),x_);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T5 = CALL3(0,x_1386F1431,T6,T10,T12);
  T15 = CALL1(1,VARREF(Yfun_val),x_);
  valueF1432 = T15;
  T18 = CALL1(1,VARREF(Ynot),valueF1432);
  tmpF1433 = T18;
  if (tmpF1433 != YPfalse) {
    T19 = tmpF1433;
  } else {
    T20 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1432,VARREF(YLanyG));
    T19 = T20;
  }
  T17 = T19;
  T16 = CALL1(1,VARREF(Ynot),T17);
  if (T16 != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYmsg),port_,LITREF(lit_57));
    T21 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,valueF1432);
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
  P tmpF1435;
  P nameF1434;
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
  nameF1434 = T1;
  tmpF1435 = nameF1434;
  if (tmpF1435 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF1434);
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
  T1 = CALL1(1,VARREF(Ytype_elts),x_);
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
  T1 = CALL1(1,VARREF(Ytype_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_73));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_recurring_write_type_51) {
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

FUNCODEDEF(fun_recurring_write_type_52) {
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

FUNCODEDEF(fun_recur_53) {
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

FUNCODEDEF(fun_write_type_54) {
  P port_,x_;
  P recurF1436;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_53,2);
  recurF1436 = T1;
  FUNINIT(recurF1436, 2,port_,recurF1436);
  T2 = CALL2(0,recurF1436,x_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_55) {
  P port_,x_,d_,recur_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_76));
  T0 = CALL1(1,VARREF(Yprop_getter),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_77));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_x_1390_56) {
  P x_1389_,x_1388_;
  P getterF1440;
  P propF1439;
  P iF1438;
  P tmpF1437;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(x_1389_, 0);
  ARG(x_1388_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1389_);
  tmpF1437 = T3;
  if (tmpF1437 != YPfalse) {
    T4 = tmpF1437;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1388_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1389_);
    iF1438 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1388_);
    propF1439 = T9;
    T10 = CALL2(1,VARREF(YgooSmagYGE),iF1438,VARREF(YgooSioSwriteYTmax_print_lengthT));
    if (T10 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_82));
      T11 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    T13 = CALL1(1,VARREF(Yprop_getter),propF1439);
    getterF1440 = T13;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    T14 = CALL1(1,VARREF(Yfun_name),getterF1440);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),FREEREF(0),T14);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_83));
    T15 = CALL1(1,getterF1440,FREEREF(2));
    CALL2(1,FREEREF(4),T15,FREEREF(3));
    T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1389_);
    T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1388_);
    a1 = T17;
    a2 = T18;
    x_1389_ = a1;
    x_1388_ = a2;
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

FUNCODEDEF(fun_57) {
  P x_1390F1441;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  VARSET(YTreport_prop_unbound_errorsQT,YPfalse);
  T1 = FUNSHELL(1,fun_x_1390_56,6);
  x_1390F1441 = T1;
  FUNINIT(x_1390F1441, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),x_1390F1441);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T6 = CALL1(1,VARREF(Yobject_props),FREEREF(2));
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),T6);
  T2 = CALL2(0,x_1390F1441,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YTreport_prop_unbound_errorsQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P blow_;
  P x_1387F1442;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  x_1387F1442 = VARREF(YTreport_prop_unbound_errorsQT);
  T2 = FUNFAB(fun_57,5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_58,1,x_1387F1442);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_60) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_78));
  T1 = CALL1(1,VARREF(Yobject_class),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),port_,T0);
  T2 = FUNFAB(fun_59,4,port_,x_,d_,recur_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_84));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_61) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_85));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_62) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_86));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_63) {
  P char_,class_;
  P tmpF1445;
  P argumentF1444;
  P current_indexF1443;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
loop:
  T1 = BOXVAL(FREEREF(0));
  current_indexF1443 = T1;
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(0)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF1443,FREEREF(1));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_92),FREEREF(2),FREEREF(3));
  } else {
  }
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),current_indexF1443);
  argumentF1444 = T8;
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),class_,VARREF(YLanyG));
  tmpF1445 = T11;
  if (tmpF1445 != YPfalse) {
    T12 = tmpF1445;
  } else {
    T13 = CALL2(1,VARREF(YisaQ),argumentF1444,class_);
    T12 = T13;
  }
  T10 = T12;
  T9 = CALL1(1,VARREF(Ynot),T10);
  if (T9 != YPfalse) {
    T14 = CALL4(1,VARREF(Yerror),LITREF(lit_93),char_,class_,argumentF1444);
  } else {
  }
  T7 = argumentF1444;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P c_;
  P x_1392F1447;
  P x_1391F1446;
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
    x_1391F1446 = T2;
    x_1392F1447 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1392F1447,x_1391F1446,YPchr((P)68));
    if (T5 != YPfalse) {
      T8 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
      T6 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T7);
      T4 = T6;
    } else {
      T10 = CALL2(1,x_1392F1447,x_1391F1446,YPchr((P)66));
      if (T10 != YPfalse) {
        T13 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T12 = CALL2(1,VARREF(YgooSmathYnum_to_str),T13,YPint((P)2));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T12);
        T9 = T11;
      } else {
        T15 = CALL2(1,x_1392F1447,x_1391F1446,YPchr((P)79));
        if (T15 != YPfalse) {
          T18 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T17 = CALL2(1,VARREF(YgooSmathYnum_to_str),T18,YPint((P)8));
          T16 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T17);
          T14 = T16;
        } else {
          T20 = CALL2(1,x_1392F1447,x_1391F1446,YPchr((P)88));
          if (T20 != YPfalse) {
            T23 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T22 = CALL2(1,VARREF(YgooSmathYnum_to_str),T23,YPint((P)16));
            T21 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T22);
            T19 = T21;
          } else {
            T25 = CALL2(1,x_1392F1447,x_1391F1446,YPchr((P)67));
            if (T25 != YPfalse) {
              T27 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T26 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),T27);
              T24 = T26;
            } else {
              T29 = CALL2(1,x_1392F1447,x_1391F1446,YPchr((P)83));
              if (T29 != YPfalse) {
                T31 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T30 = CALL2(1,VARREF(YgooSioSwriteYdisplay),FREEREF(1),T31);
                T28 = T30;
              } else {
                T33 = CALL2(1,x_1392F1447,x_1391F1446,YPchr((P)61));
                if (T33 != YPfalse) {
                  T35 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T34 = CALL2(1,VARREF(YgooSioSwriteYwrite),FREEREF(1),T35);
                  T32 = T34;
                } else {
                  T37 = CALL2(1,x_1392F1447,x_1391F1446,YPchr((P)37));
                  if (T37 != YPfalse) {
                    T38 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)37));
                    T36 = T38;
                  } else {
                    T39 = CALL3(1,VARREF(Yerror),LITREF(lit_95),c_,FREEREF(3));
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

FUNCODEDEF(fun_msg_65) {
  P port_,message_,arguments_;
  P argF1451;
  P num_argumentsF1450;
  P argument_indexF1449;
  P found_percentQF1448;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
loop:
  found_percentQF1448 = YPfalse;
  found_percentQF1448 = BOXFAB(found_percentQF1448);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF1449 = YPint((P)0);
  argument_indexF1449 = BOXFAB(argument_indexF1449);
  T5 = CALL1(1,VARREF(YgooStypesYlen),arguments_);
  num_argumentsF1450 = T5;
  T6 = FUNSHELL(1,fun_arg_63,4);
  argF1451 = T6;
  FUNINIT(argF1451, 4,argument_indexF1449,num_argumentsF1450,message_,arguments_);
  T8 = FUNFAB(fun_64,4,found_percentQF1448,port_,argF1451,message_);
  T7 = CALL2(1,VARREF(YgooSmacrosYdo),T8,message_);
  T12 = BOXVAL(found_percentQF1448);
  T11 = CALL1(1,VARREF(Ynot),T12);
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T13 = CALL2(1,VARREF(Yerror),LITREF(lit_96),message_);
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

FUNCODEDEF(fun_pe_msg_66) {
  P port_expr_,message_,args_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T2 = CALL1(1,VARREF(Ylst),port_expr_);
  T3 = CALL1(1,VARREF(Ylst),message_);
  T0 = CALL5(1,VARREF(YgooSmacrosYcat),T1,T2,T3,args_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_pack_chars_67) {
  P UF1452;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(1));
    UF1452 = T3;
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
    T8 = CALL1(1,VARREF(Ylst),FREEREF(2));
    T10 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),FREEREF(0));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T9,Ynil);
    T5 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1452,T6);
    T4 = BOXVAL(FREEREF(1)) = T5;
    T11 = CALL1(1,VARREF(YgooScolsScolxYzapX),FREEREF(0));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_68) {
  P char_;
  P current_indexF1453;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  CALL0(0,FREEREF(0));
  T1 = BOXVAL(FREEREF(1));
  current_indexF1453 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(1)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF1453,FREEREF(2));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_102),FREEREF(3),FREEREF(4));
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(4),current_indexF1453);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P c_;
  P UF1462;
  P UF1461;
  P UF1460;
  P UF1459;
  P UF1458;
  P UF1457;
  P UF1456;
  P x_1396F1455;
  P x_1395F1454;
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
    x_1395F1454 = T2;
    x_1396F1455 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1396F1455,x_1395F1454,YPchr((P)68));
    if (T5 != YPfalse) {
      T7 = BOXVAL(FREEREF(1));
      UF1456 = T7;
      T11 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
      T12 = CALL1(1,VARREF(Ylst),FREEREF(2));
      T15 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
      T17 = CALL1(1,FREEREF(3),c_);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
      T13 = CALL1(1,VARREF(Ylst),T14);
      T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
      T9 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1456,T10);
      T8 = BOXVAL(FREEREF(1)) = T9;
      T6 = T8;
      T4 = T6;
    } else {
      T19 = CALL2(1,x_1396F1455,x_1395F1454,YPchr((P)66));
      if (T19 != YPfalse) {
        T21 = BOXVAL(FREEREF(1));
        UF1457 = T21;
        T25 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
        T26 = CALL1(1,VARREF(Ylst),FREEREF(2));
        T29 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
        T31 = CALL1(1,FREEREF(3),c_);
        T30 = CALL1(1,VARREF(Ylst),T31);
        T32 = CALL1(1,VARREF(Ylst),YPint((P)2));
        T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,Ynil);
        T27 = CALL1(1,VARREF(Ylst),T28);
        T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,Ynil);
        T23 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1457,T24);
        T22 = BOXVAL(FREEREF(1)) = T23;
        T20 = T22;
        T18 = T20;
      } else {
        T34 = CALL2(1,x_1396F1455,x_1395F1454,YPchr((P)79));
        if (T34 != YPfalse) {
          T36 = BOXVAL(FREEREF(1));
          UF1458 = T36;
          T40 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
          T41 = CALL1(1,VARREF(Ylst),FREEREF(2));
          T44 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
          T46 = CALL1(1,FREEREF(3),c_);
          T45 = CALL1(1,VARREF(Ylst),T46);
          T47 = CALL1(1,VARREF(Ylst),YPint((P)8));
          T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T47,Ynil);
          T42 = CALL1(1,VARREF(Ylst),T43);
          T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,Ynil);
          T38 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1458,T39);
          T37 = BOXVAL(FREEREF(1)) = T38;
          T35 = T37;
          T33 = T35;
        } else {
          T49 = CALL2(1,x_1396F1455,x_1395F1454,YPchr((P)88));
          if (T49 != YPfalse) {
            T51 = BOXVAL(FREEREF(1));
            UF1459 = T51;
            T55 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
            T56 = CALL1(1,VARREF(Ylst),FREEREF(2));
            T59 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
            T61 = CALL1(1,FREEREF(3),c_);
            T60 = CALL1(1,VARREF(Ylst),T61);
            T62 = CALL1(1,VARREF(Ylst),YPint((P)16));
            T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T60,T62,Ynil);
            T57 = CALL1(1,VARREF(Ylst),T58);
            T54 = CALL4(1,VARREF(YgooSmacrosYcat),T55,T56,T57,Ynil);
            T53 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1459,T54);
            T52 = BOXVAL(FREEREF(1)) = T53;
            T50 = T52;
            T48 = T50;
          } else {
            T64 = CALL2(1,x_1396F1455,x_1395F1454,YPchr((P)67));
            if (T64 != YPfalse) {
              T66 = BOXVAL(FREEREF(1));
              UF1460 = T66;
              T70 = CALL1(1,VARREF(Ylst),LITREF(lit_104));
              T71 = CALL1(1,VARREF(Ylst),FREEREF(2));
              T73 = CALL2(1,FREEREF(3),c_,VARREF(YLchrG));
              T72 = CALL1(1,VARREF(Ylst),T73);
              T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T71,T72,Ynil);
              T68 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1460,T69);
              T67 = BOXVAL(FREEREF(1)) = T68;
              T65 = T67;
              T63 = T65;
            } else {
              T75 = CALL2(1,x_1396F1455,x_1395F1454,YPchr((P)83));
              if (T75 != YPfalse) {
                T77 = BOXVAL(FREEREF(1));
                UF1461 = T77;
                T81 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
                T82 = CALL1(1,VARREF(Ylst),FREEREF(2));
                T84 = CALL1(1,FREEREF(3),c_);
                T83 = CALL1(1,VARREF(Ylst),T84);
                T80 = CALL4(1,VARREF(YgooSmacrosYcat),T81,T82,T83,Ynil);
                T79 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1461,T80);
                T78 = BOXVAL(FREEREF(1)) = T79;
                T76 = T78;
                T74 = T76;
              } else {
                T86 = CALL2(1,x_1396F1455,x_1395F1454,YPchr((P)61));
                if (T86 != YPfalse) {
                  T88 = BOXVAL(FREEREF(1));
                  UF1462 = T88;
                  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
                  T93 = CALL1(1,VARREF(Ylst),FREEREF(2));
                  T95 = CALL1(1,FREEREF(3),c_);
                  T94 = CALL1(1,VARREF(Ylst),T95);
                  T91 = CALL4(1,VARREF(YgooSmacrosYcat),T92,T93,T94,Ynil);
                  T90 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF1462,T91);
                  T89 = BOXVAL(FREEREF(1)) = T90;
                  T87 = T89;
                  T85 = T87;
                } else {
                  T97 = CALL2(1,x_1396F1455,x_1395F1454,YPchr((P)37));
                  if (T97 != YPfalse) {
                    T98 = CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(4),YPchr((P)37));
                    T96 = T98;
                  } else {
                    T99 = CALL3(1,VARREF(Yerror),LITREF(lit_105),c_,FREEREF(5));
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

FUNCODEDEF(fun_pe_msg_70) {
  P port_expr_,message_,args_;
  P exprsF1471;
  P argF1470;
  P maybe_pack_charsF1469;
  P packer_F1468;
  P portF1467;
  P charsF1466;
  P num_argsF1465;
  P arg_indexF1464;
  P found_percentQF1463;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
loop:
  found_percentQF1463 = YPfalse;
  found_percentQF1463 = BOXFAB(found_percentQF1463);
  check_type(YPint((P)0),VARREF(YLintG));
  arg_indexF1464 = YPint((P)0);
  arg_indexF1464 = BOXFAB(arg_indexF1464);
  T5 = CALL1(1,VARREF(YgooStypesYlen),args_);
  num_argsF1465 = T5;
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  charsF1466 = T7;
  T9 = CALL0(1,VARREF(YgooSmacrosYgensym));
  portF1467 = T9;
  T12 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F1468 = T12;
  packer_F1468 = BOXFAB(packer_F1468);
  T14 = FUNSHELL(1,fun_maybe_pack_chars_67,3);
  maybe_pack_charsF1469 = T14;
  T15 = FUNSHELL(1,fun_arg_68,5);
  argF1470 = T15;
  FUNINIT(maybe_pack_charsF1469, 3,charsF1466,packer_F1468,portF1467);
  FUNINIT(argF1470, 5,maybe_pack_charsF1469,arg_indexF1464,num_argsF1465,message_,args_);
  T16 = FUNFAB(fun_69,6,found_percentQF1463,packer_F1468,portF1467,argF1470,charsF1466,message_);
  CALL2(1,VARREF(YgooSmacrosYdo),T16,message_);
  T17 = CALL0(0,maybe_pack_charsF1469);
  T19 = BOXVAL(packer_F1468);
  T18 = CALL1(1,VARREF(YgooSpackerYpacker_res),T19);
  T11 = T18;
  exprsF1471 = T11;
  T22 = BOXVAL(found_percentQF1463);
  T21 = CALL1(1,VARREF(Ynot),T22);
  T20 = CALL1(1,VARREF(Ynot),T21);
  if (T20 != YPfalse) {
    T23 = CALL2(1,VARREF(Yerror),LITREF(lit_106),message_);
  } else {
  }
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
  T30 = CALL1(1,VARREF(Ylst),portF1467);
  T31 = CALL1(1,VARREF(Ylst),port_expr_);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,exprsF1471,Ynil);
  T10 = T24;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1400_71) {
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

FUNCODEDEF(fun_72) {
  P return_;
  P x_1399F1480;
  P x_1399F1479;
  P x_1399F1478;
  P x_1399F1477;
  P argsF1476;
  P messageF1475;
  P portF1474;
  P x_1399F1473;
  P x_1400F1472;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1400_71,1);
  x_1400F1472 = T1;
  FUNINIT(x_1400F1472, 1,return_);
  x_1399F1473 = FREEREF(0);
  portF1474 = YPfalse;
  portF1474 = BOXFAB(portF1474);
  messageF1475 = YPfalse;
  messageF1475 = BOXFAB(messageF1475);
  argsF1476 = YPfalse;
  argsF1476 = BOXFAB(argsF1476);
  T9 = CALL2(1,VARREF(YisaQ),x_1399F1473,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1399F1473,LITREF(lit_111),x_1400F1472);
    x_1399F1477 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1399F1477,x_1400F1472);
    BOXVAL(portF1474) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1399F1477);
    x_1399F1478 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1399F1478,x_1400F1472);
    BOXVAL(messageF1475) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1399F1478);
    x_1399F1479 = T17;
    BOXVAL(argsF1476) = x_1399F1479;
    x_1399F1480 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1399F1480,x_1400F1472);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1400F1472,LITREF(lit_112),x_1399F1473);
  }
  T22 = BOXVAL(portF1474);
  T23 = BOXVAL(messageF1475);
  T24 = BOXVAL(argsF1476);
  T21 = CALL3(1,VARREF(YgooSioSwriteYpe_msg),T22,T23,T24);
  T7 = T21;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_72,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
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

FUNCODEDEF(fun_75) {
  P tmpF1481;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF1481 = T1;
  if (tmpF1481 != YPfalse) {
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
  P portF1482;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
loop:
  portF1482 = YPfalse;
  portF1482 = BOXFAB(portF1482);
  T3 = FUNFAB(fun_74,3,portF1482,message_,arguments_);
  T4 = FUNFAB(fun_75,1,portF1482);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_77) {
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
  P loopF1484;
  P limF1483;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  limF1483 = T1;
  T3 = FUNSHELL(1,fun_loop_77,4);
  loopF1484 = T3;
  FUNINIT(loopF1484, 4,limF1483,port_,args_,loopF1484);
  T4 = CALL1(0,loopF1484,YPint((P)0));
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
  P T272,T273;
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
  lit_44 = YPPsym((P)"x-1382");
  lit_45 = YPPsym((P)"x-1381");
  lit_46 = YPPsym((P)"x-1380");
  lit_47 = YPsb((P)" ...");
  lit_48 = YPsb((P)": ");
  T134 = YPsig(YPPlist(2,LITREF(lit_45),LITREF(lit_46)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1382_32 = YPmet(FUNCODEREF(fun_x_1382_32),LITREF(lit_44),T134,ENVNUL,PNUL,YPfalse);
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
  lit_52 = YPPsym((P)"x-1386");
  lit_53 = YPPsym((P)"x-1385");
  lit_54 = YPPsym((P)"x-1384");
  lit_55 = YPPsym((P)"x-1383");
  lit_56 = YPsb((P)"(%s ");
  lit_57 = YPsb((P)" => ");
  T152 = YPsig(YPPlist(3,LITREF(lit_53),LITREF(lit_54),LITREF(lit_55)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1386_37 = YPmet(FUNCODEREF(fun_x_1386_37),LITREF(lit_52),T152,ENVNUL,PNUL,YPfalse);
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
  T193 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooStypesYLproductG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  lit_74 = YPPsym((P)"recurring-write-type");
  T199 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_51 = YPmet(FUNCODEREF(fun_recurring_write_type_51),LITREF(lit_74),T199,ENVNUL,PNUL,YPfalse);
  T202 = BOUNDP(YgooSioSwriteYrecurring_write_type);
  if (T202 != YPfalse) {
    T201 = VARREF(YgooSioSwriteYrecurring_write_type);
  } else {
    T201 = YPfalse;
  }
  T203 = fun_recurring_write_type_51;
  T200 = CALL2(1,VARREF(YPdefine_method),T201,T203);
  VARSET(YgooSioSwriteYrecurring_write_type,T200);
  T204 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_52 = YPmet(FUNCODEREF(fun_recurring_write_type_52),LITREF(lit_74),T204,ENVNUL,PNUL,YPfalse);
  T207 = BOUNDP(YgooSioSwriteYrecurring_write_type);
  if (T207 != YPfalse) {
    T206 = VARREF(YgooSioSwriteYrecurring_write_type);
  } else {
    T206 = YPfalse;
  }
  T208 = fun_recurring_write_type_52;
  T205 = CALL2(1,VARREF(YPdefine_method),T206,T208);
  VARSET(YgooSioSwriteYrecurring_write_type,T205);
  lit_75 = YPPsym((P)"write-type");
  T210 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_53 = YPmet(FUNCODEREF(fun_recur_53),LITREF(lit_6),T210,ENVNUL,PNUL,YPfalse);
  T209 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_type_54 = YPmet(FUNCODEREF(fun_write_type_54),LITREF(lit_75),T209,ENVNUL,PNUL,YPfalse);
  T213 = BOUNDP(YgooSioSwriteYwrite_type);
  if (T213 != YPfalse) {
    T212 = VARREF(YgooSioSwriteYwrite_type);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_write_type_54;
  T211 = CALL2(1,VARREF(YPdefine_method),T212,T214);
  VARSET(YgooSioSwriteYwrite_type,T211);
  lit_76 = YPsb((P)"#{Prop ");
  lit_77 = YPsb((P)"}");
  T215 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLpropG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_55 = YPmet(FUNCODEREF(fun_recurring_write_55),LITREF(lit_14),T215,ENVNUL,PNUL,YPfalse);
  T218 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T218 != YPfalse) {
    T217 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_recurring_write_55;
  T216 = CALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(YgooSioSwriteYrecurring_write,T216);
  lit_78 = YPsb((P)"#{");
  lit_79 = YPPsym((P)"x-1390");
  lit_80 = YPPsym((P)"x-1389");
  lit_81 = YPPsym((P)"x-1388");
  lit_82 = YPsb((P)" ...");
  lit_83 = YPsb((P)": ");
  lit_84 = YPsb((P)"}");
  T224 = YPsig(YPPlist(2,LITREF(lit_80),LITREF(lit_81)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1390_56 = YPmet(FUNCODEREF(fun_x_1390_56),LITREF(lit_79),T224,ENVNUL,PNUL,YPfalse);
  T223 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T223,ENVNUL,PNUL,YPfalse);
  T222 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T222,ENVNUL,PNUL,YPfalse);
  T221 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T221,ENVNUL,PNUL,YPfalse);
  T220 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_60 = YPmet(FUNCODEREF(fun_recurring_write_60),LITREF(lit_14),T220,ENVNUL,PNUL,YPfalse);
  T227 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T227 != YPfalse) {
    T226 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T226 = YPfalse;
  }
  T228 = fun_recurring_write_60;
  T225 = CALL2(1,VARREF(YPdefine_method),T226,T228);
  VARSET(YgooSioSwriteYrecurring_write,T225);
  lit_85 = YPsb((P)"#{End-of-file}");
  T231 = CALL0(1,VARREF(YgooSmathYeof_object));
  T230 = CALL1(1,VARREF(YgooStypesYtE),T231);
  T229 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),T230,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_61 = YPmet(FUNCODEREF(fun_recurring_write_61),LITREF(lit_14),T229,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T234 != YPfalse) {
    T233 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_recurring_write_61;
  T232 = CALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YgooSioSwriteYrecurring_write,T232);
  lit_86 = YPsb((P)"nul");
  T237 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Ynul));
  T236 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),T237,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_62 = YPmet(FUNCODEREF(fun_recurring_write_62),LITREF(lit_14),T236,ENVNUL,PNUL,YPfalse);
  T240 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T240 != YPfalse) {
    T239 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_recurring_write_62;
  T238 = CALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(YgooSioSwriteYrecurring_write,T238);
  lit_87 = YPPsym((P)"msg");
  lit_88 = YPPsym((P)"message");
  lit_89 = YPPsym((P)"arguments");
  lit_90 = YPPsym((P)"arg");
  lit_91 = YPPsym((P)"class");
  lit_92 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_93 = YPsb((P)"Msg argument for directive '%%%c' not of class %s: %=");
  lit_94 = YPPsym((P)"c");
  lit_95 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_96 = YPsb((P)"Incomplete msg directive in \"%s\"");
  T244 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_91)),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_arg_63 = YPmet(FUNCODEREF(fun_arg_63),LITREF(lit_90),T244,ENVNUL,PNUL,YPfalse);
  T243 = YPsig(YPPlist(1,LITREF(lit_94)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T243,ENVNUL,PNUL,YPfalse);
  T242 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_88),LITREF(lit_89)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_msg_65 = YPmet(FUNCODEREF(fun_msg_65),LITREF(lit_87),T242,ENVNUL,PNUL,YPfalse);
  T247 = BOUNDP(YgooSruntimeYmsg);
  if (T247 != YPfalse) {
    T246 = VARREF(YgooSruntimeYmsg);
  } else {
    T246 = YPfalse;
  }
  T248 = fun_msg_65;
  T245 = CALL2(1,VARREF(YPdefine_method),T246,T248);
  VARSET(YgooSruntimeYmsg,T245);
  lit_97 = YPPsym((P)"pe-msg");
  lit_98 = YPPsym((P)"port-expr");
  lit_99 = YPPsym((P)"args");
  T249 = YPsig(YPPlist(3,LITREF(lit_98),LITREF(lit_88),LITREF(lit_99)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pe_msg_66 = YPmet(FUNCODEREF(fun_pe_msg_66),LITREF(lit_97),T249,ENVNUL,PNUL,YPfalse);
  T252 = BOUNDP(YgooSioSwriteYpe_msg);
  if (T252 != YPfalse) {
    T251 = VARREF(YgooSioSwriteYpe_msg);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_pe_msg_66;
  T250 = CALL2(1,VARREF(YPdefine_method),T251,T253);
  VARSET(YgooSioSwriteYpe_msg,T250);
  lit_100 = YPPsym((P)"maybe-pack-chars");
  lit_101 = YPPsym((P)"puts");
  lit_102 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_103 = YPPsym((P)"num-to-str");
  lit_104 = YPPsym((P)"put");
  lit_105 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_106 = YPsb((P)"Incomplete msg directive in \"%s\"");
  lit_107 = YPPsym((P)"let");
  T257 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_maybe_pack_chars_67 = YPmet(FUNCODEREF(fun_maybe_pack_chars_67),LITREF(lit_100),T257,ENVNUL,PNUL,YPfalse);
  T256 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_arg_68 = YPmet(FUNCODEREF(fun_arg_68),LITREF(lit_90),T256,ENVNUL,PNUL,YPfalse);
  T255 = YPsig(YPPlist(1,LITREF(lit_94)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T255,ENVNUL,PNUL,YPfalse);
  T254 = YPsig(YPPlist(3,LITREF(lit_98),LITREF(lit_88),LITREF(lit_99)),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_pe_msg_70 = YPmet(FUNCODEREF(fun_pe_msg_70),LITREF(lit_97),T254,ENVNUL,PNUL,YPfalse);
  T260 = BOUNDP(YgooSioSwriteYpe_msg);
  if (T260 != YPfalse) {
    T259 = VARREF(YgooSioSwriteYpe_msg);
  } else {
    T259 = YPfalse;
  }
  T261 = fun_pe_msg_70;
  T258 = CALL2(1,VARREF(YPdefine_method),T259,T261);
  VARSET(YgooSioSwriteYpe_msg,T258);
  lit_108 = YPPsym((P)"exp");
  lit_109 = YPPsym((P)"return");
  lit_110 = YPPsym((P)"x-1400");
  lit_111 = YPPsym((P)"msg*");
  lit_112 = YPsb((P)"Match Pattern Failure");
  T264 = YPsig(YPPlist(2,LITREF(lit_87),LITREF(lit_99)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1400_71 = YPmet(FUNCODEREF(fun_x_1400_71),LITREF(lit_110),T264,ENVNUL,PNUL,YPfalse);
  T263 = YPsig(YPPlist(1,LITREF(lit_109)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T263,ENVNUL,PNUL,YPfalse);
  T262 = YPsig(YPPlist(1,LITREF(lit_108)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T262,ENVNUL,PNUL,YPfalse);
  T265 = fun_73;
  YPmacro(YPPsym((P)"goo/io/write"),YPPsym((P)"msg*"),T265);
  lit_113 = YPPsym((P)"msg-to-str");
  T268 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T268,ENVNUL,PNUL,YPfalse);
  T267 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T267,ENVNUL,PNUL,YPfalse);
  T266 = YPsig(YPPlist(2,LITREF(lit_88),LITREF(lit_89)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSruntimeYmsg_to_str = YPmet(FUNCODEREF(YgooSruntimeYmsg_to_str),LITREF(lit_113),T266,ENVNUL,PNUL,YPfalse);
  T269 = YgooSruntimeYmsg_to_str;
  VARSET(YgooSruntimeYmsg_to_str,T269);
  lit_114 = YPPsym((P)"say");
  T271 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_77 = YPmet(FUNCODEREF(fun_loop_77),LITREF(lit_28),T271,ENVNUL,PNUL,YPfalse);
  T270 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_99)),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSwriteYsay = YPmet(FUNCODEREF(YgooSioSwriteYsay),LITREF(lit_114),T270,ENVNUL,PNUL,YPfalse);
  T272 = YgooSioSwriteYsay;
  VARSET(YgooSioSwriteYsay,T272);
  T273 = YPfalse;
  return T273;
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
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;

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
  {"%i+", &module_info_gooSboot, "%i+"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"asin", &module_info_gooSmath, "asin"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"items", &module_info_gooScolsScol, "items"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<=", &module_info_gooSmag, "<="},
  {"compose", &module_info_gooSruntime, "compose"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"t=", &module_info_gooStypes, "t="},
  {"try", &module_info_gooSboot, "try"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%str", &module_info_gooSboot, "%str"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"|", &module_info_gooSmath, "|"},
  {"do", &module_info_gooSmacros, "do"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"/", &module_info_gooSmath, "/"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"out", &module_info_gooSioSport, "out"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"error", &module_info_gooSboot, "error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"map", &module_info_gooSmacros, "map"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"+", &module_info_gooSmath, "+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%get", &module_info_gooSboot, "%get"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"while", &module_info_gooSmacros, "while"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"open", &module_info_gooSioSport, "open"},
  {"def", &module_info_gooSboot, "def"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"quote", &module_info_gooSboot, "quote"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"add", &module_info_gooScolsScol, "add"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"round", &module_info_gooSmath, "round"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"&", &module_info_gooSmath, "&"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"round/", &module_info_gooSmath, "round/"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"and", &module_info_gooSmacros, "and"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"when", &module_info_gooSmacros, "when"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"case", &module_info_gooSmacros, "case"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"in", &module_info_gooSioSport, "in"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"max", &module_info_gooSmag, "max"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"@len", &module_info_gooSboot, "@len"},
  {"head", &module_info_gooSboot, "head"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%su", &module_info_gooSboot, "%su"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"cos", &module_info_gooSmath, "cos"},
  {"t?", &module_info_gooStypes, "t?"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"if", &module_info_gooSboot, "if"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dss", &module_info_gooSboot, "dss"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"always", &module_info_gooSruntime, "always"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"abs", &module_info_gooSmath, "abs"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"len", &module_info_gooStypes, "len"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"read", &module_info_gooSruntime, "read"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"acos", &module_info_gooSmath, "acos"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"app", &module_info_gooSmacros, "app"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"~=", &module_info_gooSmath, "~="},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"lst", &module_info_gooSboot, "lst"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"export", &module_info_gooSboot, "export"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"*", &module_info_gooSmath, "*"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {">>", &module_info_gooSmath, ">>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"let", &module_info_gooSboot, "let"},
  {"@+", &module_info_gooSboot, "@+"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"min", &module_info_gooSmag, "min"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"$e", &module_info_gooSmath, "$e"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"for", &module_info_gooSmacros, "for"},
  {"match", &module_info_gooSmacros, "match"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"seq", &module_info_gooSboot, "seq"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"-", &module_info_gooSmath, "-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"find", &module_info_gooScolsScol, "find"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"as", &module_info_gooStypes, "as"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"t*", &module_info_gooStypes, "t*"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"put", &module_info_gooSioSport, "put"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"^", &module_info_gooSmath, "^"},
  {"df", &module_info_gooSboot, "df"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"unless", &module_info_gooSmacros, "unless"},
  {">", &module_info_gooSmag, ">"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%put", &module_info_gooSboot, "%put"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"dg", &module_info_gooSboot, "dg"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"<", &module_info_gooSmag, "<"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"dl", &module_info_gooSboot, "dl"},
  {">=", &module_info_gooSmag, ">="},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"new", &module_info_gooSboot, "new"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"t+", &module_info_gooStypes, "t+"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"until", &module_info_gooSmacros, "until"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"floor", &module_info_gooSmath, "floor"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"1-", &module_info_gooSmath, "1-"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"=", &module_info_gooSmath, "="},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sin", &module_info_gooSmath, "sin"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"~", &module_info_gooSmath, "~"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"not", &module_info_gooSboot, "not"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"op", &module_info_gooSmacros, "op"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"get", &module_info_gooSioSport, "get"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"t<", &module_info_gooStypes, "t<"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"or", &module_info_gooSmacros, "or"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"close", &module_info_gooSioSport, "close"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"set", &module_info_gooSboot, "set"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"write-params", &YgooSioSwriteYwrite_params},
  {"write-to-string", &YgooSioSwriteYwrite_to_string},
  {"do-display", &YgooSioSwriteYdo_display},
  {"recurring-write-type", &YgooSioSwriteYrecurring_write_type},
  {"write-number", &YgooSioSwriteYwrite_number},
  {"pe-msg", &YgooSioSwriteYpe_msg},
  {"---main-0---", NULL},
  {"character-name", &YgooSioSwriteYcharacter_name},
  {"writeln", &YgooSioSwriteYwriteln},
  {"write-fun-guts", &YgooSioSwriteYwrite_fun_guts},
  {"write-type", &YgooSioSwriteYwrite_type},
  {"msg*", NULL},
  {"display", &YgooSioSwriteYdisplay},
  {"*max-print-length*", &YgooSioSwriteYTmax_print_lengthT},
  {"write-list", &YgooSioSwriteYwrite_list},
  {"write-flat", &YgooSioSwriteYwrite_flat},
  {"write-boolean", &YgooSioSwriteYwrite_boolean},
  {"*max-print-depth*", &YgooSioSwriteYTmax_print_depthT},
  {"write-char-literal", &YgooSioSwriteYwrite_char_literal},
  {"write", &YgooSioSwriteYwrite},
  {"write-map", &YgooSioSwriteYwrite_map},
  {"quotation?", &YgooSioSwriteYquotationQ},
  {"as-binding-name", &YgooSioSwriteYas_binding_name},
  {"say", &YgooSioSwriteYsay},
  {"recurring-write", &YgooSioSwriteYrecurring_write},
  {"write-string-literal", &YgooSioSwriteYwrite_string_literal},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"write-to-string", "write-to-string"},
  {"msg-to-str", "msg-to-str"},
  {"pe-msg", "pe-msg"},
  {"writeln", "writeln"},
  {"msg*", "msg*"},
  {"display", "display"},
  {"*max-print-depth*", "*max-print-depth*"},
  {"msg", "msg"},
  {"*max-print-length*", "*max-print-length*"},
  {"write", "write"},
  {"say", "say"},
  {"recurring-write", "recurring-write"},
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

}

/* END OF GENERATED CODE. */
