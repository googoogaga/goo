/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/io/write */

EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YgooSioSwriteYquotationQ,"goo/io/write","quotation?");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
DEF(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YgooSioSwriteYdo_emit,"goo/io/write","do-emit");
DEF(YgooSioSwriteYwrite_value_type,"goo/io/write","write-value-type");
DEF(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSruntimeYstack_overflow_error,"goo/runtime","stack-overflow-error");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
DEF(YgooSioSwriteYwrite_boolean,"goo/io/write","write-boolean");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YgooSioSwriteYcharacter_name,"goo/io/write","character-name");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YPprop,"goo/boot","%prop");
DEF(YgooSioSwriteYwrite_map,"goo/io/write","write-map");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYK,"goo/math","|");
DEF(YgooSioSwriteYas_binding_name,"goo/io/write","as-binding-name");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooSioSwriteYwrite_char_literal,"goo/io/write","write-char-literal");
DEF(YgooSioSwriteYrecurring_write_type,"goo/io/write","recurring-write-type");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YgooSioSwriteYwrite_list,"goo/io/write","write-list");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooSioSwriteYwrite_fun_guts,"goo/io/write","write-fun-guts");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YgooSioSwriteYwrite_params,"goo/io/write","write-params");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLmetG,"goo/boot","<met>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSioSportYput,"goo/io/port","put");
DEF(YgooSioSwriteYwrite_number,"goo/io/write","write-number");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DYNDEF(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YgooSioSwriteYwrite_flat,"goo/io/write","write-flat");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YgooSioSwriteYwrite_string_literal,"goo/io/write","write-string-literal");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DYNDEF(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYNE,"goo/math","~=");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_74);
DEFLIT(lit_123);
DEFLIT(lit_65);
DEFLIT(lit_98);
DEFLIT(lit_81);
DEFLIT(lit_101);
DEFLIT(lit_76);
DEFLIT(lit_118);
DEFLIT(lit_111);
DEFLIT(lit_96);
DEFLIT(lit_28);
DEFLIT(lit_23);
DEFLIT(lit_75);
DEFLIT(lit_21);
DEFLIT(lit_38);
DEFLIT(lit_9);
DEFLIT(lit_44);
DEFLIT(lit_106);
DEFLIT(lit_24);
DEFLIT(lit_32);
DEFLIT(lit_97);
DEFLIT(lit_67);
DEFLIT(lit_33);
DEFLIT(lit_82);
DEFLIT(lit_120);
DEFLIT(lit_103);
DEFLIT(lit_20);
DEFLIT(lit_89);
DEFLIT(lit_91);
DEFLIT(lit_12);
DEFLIT(lit_31);
DEFLIT(lit_35);
DEFLIT(lit_15);
DEFLIT(lit_121);
DEFLIT(lit_4);
DEFLIT(lit_61);
DEFLIT(lit_47);
DEFLIT(lit_43);
DEFLIT(lit_56);
DEFLIT(lit_77);
DEFLIT(lit_18);
DEFLIT(lit_27);
DEFLIT(lit_3);
DEFLIT(lit_110);
DEFLIT(lit_78);
DEFLIT(lit_116);
DEFLIT(lit_11);
DEFLIT(lit_122);
DEFLIT(lit_10);
DEFLIT(lit_71);
DEFLIT(lit_63);
DEFLIT(lit_105);
DEFLIT(lit_83);
DEFLIT(lit_90);
DEFLIT(lit_6);
DEFLIT(lit_30);
DEFLIT(lit_14);
DEFLIT(lit_62);
DEFLIT(lit_69);
DEFLIT(lit_107);
DEFLIT(lit_85);
DEFLIT(lit_53);
DEFLIT(lit_94);
DEFLIT(lit_57);
DEFLIT(lit_22);
DEFLIT(lit_46);
DEFLIT(lit_39);
DEFLIT(lit_48);
DEFLIT(lit_108);
DEFLIT(lit_55);
DEFLIT(lit_2);
DEFLIT(lit_45);
DEFLIT(lit_50);
DEFLIT(lit_37);
DEFLIT(lit_79);
DEFLIT(lit_99);
DEFLIT(lit_17);
DEFLIT(lit_119);
DEFLIT(lit_92);
DEFLIT(lit_58);
DEFLIT(lit_117);
DEFLIT(lit_70);
DEFLIT(lit_115);
DEFLIT(lit_93);
DEFLIT(lit_7);
DEFLIT(lit_88);
DEFLIT(lit_104);
DEFLIT(lit_36);
DEFLIT(lit_19);
DEFLIT(lit_102);
DEFLIT(lit_109);
DEFLIT(lit_49);
DEFLIT(lit_68);
DEFLIT(lit_26);
DEFLIT(lit_51);
DEFLIT(lit_60);
DEFLIT(lit_86);
DEFLIT(lit_113);
DEFLIT(lit_54);
DEFLIT(lit_72);
DEFLIT(lit_100);
DEFLIT(lit_84);
DEFLIT(lit_42);
DEFLIT(lit_124);
DEFLIT(lit_29);
DEFLIT(lit_13);
DEFLIT(lit_8);
DEFLIT(lit_114);
DEFLIT(lit_95);
DEFLIT(lit_40);
DEFLIT(lit_87);
DEFLIT(lit_52);
DEFLIT(lit_64);
DEFLIT(lit_16);
DEFLIT(lit_41);
DEFLIT(lit_25);
DEFLIT(lit_1);
DEFLIT(lit_112);
DEFLIT(lit_59);
DEFLIT(lit_73);
DEFLIT(lit_66);
DEFLIT(lit_0);
DEFLIT(lit_34);
DEFLIT(lit_5);
DEFLIT(lit_80);

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
LOCFOR(fun_x_1399_34);
LOCFOR(fun_35);
LOCFOR(fun_write_map_36);
LOCFOR(fun_recurring_write_37);
LOCFOR(fun_recurring_write_38);
LOCFOR(fun_x_1403_39);
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
LOCFOR(fun_x_1407_61);
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
LOCFOR(fun_x_1417_77);
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
  P recurF2196;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF2196 = T1;
  FUNINIT(recurF2196, 2,port_,recurF2196);
  T2 = CALL2(0,recurF2196,x_,YPint((P)-1));
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
  P tmpF2197;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2197 = T1;
  if (tmpF2197 != YPfalse) {
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
  P portF2198;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  portF2198 = YPfalse;
  portF2198 = BOXFAB(portF2198);
  T3 = FUNFAB(fun_6,2,portF2198,x_);
  T4 = FUNFAB(fun_7,1,portF2198);
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
  P recurF2199;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_9,2);
  recurF2199 = T1;
  FUNINIT(recurF2199, 2,port_,recurF2199);
  T2 = CALL2(0,recurF2199,x_,YPint((P)-1));
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
  P prefixF2200;
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
  prefixF2200 = T1;
  T5 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,prefixF2200,x_,LITREF(lit_18),d_,recur_);
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
  P tF2204;
  P xF2203;
  P xF2202;
  P xF2201;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_25));
  xF2201 = x_;
  T4 = (P)YPuntag_into(xF2201);
  T3 = T4;
  xF2202 = T3;
  xF2203 = xF2202;
  tF2204 = (P)1;
  T7 = (P)YPiLL(xF2203,(P)2);
  T6 = (P)YPiv(T7,tF2204);
  T5 = T6;
  T2 = T5;
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
  P probeF2205;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSwriteYcharacter_name),x_);
  probeF2205 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_31));
  if (probeF2205 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,probeF2205);
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
  P tmpF2207;
  P assocF2206;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooScolsSlstYassqn),char_,VARREF(YgooSioSreadYDchar_long_names),YPint((P)1));
  assocF2206 = T1;
  tmpF2207 = assocF2206;
  if (tmpF2207 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosY1st),assocF2206);
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
  P tmpF2209;
  P cF2208;
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
    cF2208 = T4;
    T6 = CALL2(1,VARREF(YgooSmathYE),cF2208,YPchr((P)92));
    tmpF2209 = T6;
    if (tmpF2209 != YPfalse) {
      T7 = tmpF2209;
    } else {
      T8 = CALL2(1,VARREF(YgooSmathYE),cF2208,YPchr((P)34));
      T7 = T8;
    }
    T5 = T7;
    if (T5 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)92));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),cF2208);
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
  P loopF2211;
  P lenF2210;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  lenF2210 = T1;
  T3 = FUNSHELL(1,fun_loop_27,4);
  loopF2211 = T3;
  FUNINIT(loopF2211, 4,lenF2210,port_,x_,loopF2211);
  T4 = CALL1(0,loopF2211,YPint((P)0));
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
  P loopF2212;
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
    loopF2212 = T6;
    FUNINIT(loopF2212, 4,port_,d_,recur_,loopF2212);
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(0,loopF2212,T8,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_31) {
  P x_;
  P tmpF2215;
  P tmpF2214;
  P tmpF2213;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF2213 = T1;
  if (tmpF2213 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_42));
    tmpF2214 = T4;
    if (tmpF2214 != YPfalse) {
      T9 = CALL1(1,VARREF(Ytail),x_);
      T8 = CALL2(1,VARREF(YisaQ),T9,VARREF(YLlstG));
      tmpF2215 = T8;
      if (tmpF2215 != YPfalse) {
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
  P loopF2217;
  P zF2216;
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
  zF2216 = T1;
  T2 = CALL2(1,VARREF(YgooSmagYG),zF2216,YPint((P)0));
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T3,d_);
    T5 = FUNSHELL(1,fun_loop_32,6);
    loopF2217 = T5;
    FUNINIT(loopF2217, 6,port_,zF2216,x_,d_,recur_,loopF2217);
    T6 = CALL1(0,loopF2217,YPint((P)1));
    T4 = T6;
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSioSportYputs),port_,suffix_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1399_34) {
  P x_1398_,x_1397_;
  P valF2222;
  P keyF2221;
  P tup26F2220;
  P iF2219;
  P tmpF2218;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2;
LINK_STACK();
  ARG(x_1398_, 0);
  ARG(x_1397_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1398_);
  tmpF2218 = T3;
  if (tmpF2218 != YPfalse) {
    T4 = tmpF2218;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1397_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1398_);
    iF2219 = T7;
    T10 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1397_);
    T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_1397_);
    T9 = CALL2(1,VARREF(Ytup),T10,T11);
    tup26F2220 = T9;
    T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2220,YPint((P)0));
    keyF2221 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2220,YPint((P)1));
    valF2222 = T15;
    T16 = CALL2(1,VARREF(YgooSmagYGE),iF2219,DYNREF(YgooSioSwriteYTmax_print_lengthT));
    if (T16 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_53));
      T17 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    CALL2(1,FREEREF(3),keyF2221,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_54));
    CALL2(1,FREEREF(3),valF2222,FREEREF(2));
    T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1398_);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1397_);
    a1 = T19;
    a2 = T20;
    x_1398_ = a1;
    x_1397_ = a2;
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
  P x_1399F2223;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_x_1399_34,5);
  x_1399F2223 = T1;
  FUNINIT(x_1399F2223, 5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),x_1399F2223);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(3));
  T2 = CALL2(0,x_1399F2223,T3,T5);
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

FUNCODEDEF(fun_x_1403_39) {
  P x_1402_,x_1401_,x_1400_;
  P iF2228;
  P specF2227;
  P firstQF2226;
  P tmpF2225;
  P tmpF2224;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1402_, 0);
  ARG(x_1401_, 1);
  ARG(x_1400_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1402_);
  tmpF2224 = T3;
  if (tmpF2224 != YPfalse) {
    T4 = tmpF2224;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1401_);
    tmpF2225 = T6;
    if (tmpF2225 != YPfalse) {
      T7 = tmpF2225;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1400_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1402_);
    firstQF2226 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1401_);
    specF2227 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1400_);
    iF2228 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF2226);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    } else {
    }
    T17 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(1));
    if (T17 != YPfalse) {
      T18 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF2227);
    } else {
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),iF2228);
      T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T20);
      CALL3(1,VARREF(YgooSruntimeYmsg),FREEREF(0),LITREF(lit_62),T19);
      CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF2227);
      T21 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)41));
    }
    T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1402_);
    T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1401_);
    T25 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1400_);
    a1 = T23;
    a2 = T24;
    a3 = T25;
    x_1402_ = a1;
    x_1401_ = a2;
    x_1400_ = a3;
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
  P tmpF2233;
  P valueF2232;
  P x_1403F2231;
  P namesF2230;
  P namesF2229;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
loop:
  T1 = CALL1(1,VARREF(Yfun_names),x_);
  namesF2229 = T1;
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
  T3 = CALL1(1,VARREF(Yfun_names),x_);
  namesF2230 = T3;
  T4 = FUNSHELL(1,fun_x_1403_39,3);
  x_1403F2231 = T4;
  FUNINIT(x_1403F2231, 3,port_,namesF2230,x_1403F2231);
  T8 = fun_40;
  T9 = fun_41;
  T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T11 = CALL1(1,VARREF(Yfun_specs),x_);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T5 = CALL3(0,x_1403F2231,T6,T10,T12);
  T15 = CALL1(1,VARREF(Yfun_val),x_);
  valueF2232 = T15;
  T18 = CALL1(1,VARREF(Ynot),valueF2232);
  tmpF2233 = T18;
  if (tmpF2233 != YPfalse) {
    T19 = tmpF2233;
  } else {
    T20 = CALL2(1,VARREF(YgooSmacrosYEE),valueF2232,VARREF(YLanyG));
    T19 = T20;
  }
  T17 = T19;
  T16 = CALL1(1,VARREF(Ynot),T17);
  if (T16 != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYmsg),port_,LITREF(lit_63));
    T21 = CALL2(1,VARREF(YgooSioSwriteYwrite_value_type),port_,valueF2232);
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
  P tmpF2235;
  P nameF2234;
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
  nameF2234 = T1;
  tmpF2235 = nameF2234;
  if (tmpF2235 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF2234);
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
  P recurF2236;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_58,2);
  recurF2236 = T1;
  FUNINIT(recurF2236, 2,port_,recurF2236);
  T2 = CALL2(0,recurF2236,x_,YPint((P)0));
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

FUNCODEDEF(fun_x_1407_61) {
  P x_1406_,x_1405_;
  P getterF2240;
  P propF2239;
  P iF2238;
  P tmpF2237;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(x_1406_, 0);
  ARG(x_1405_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1406_);
  tmpF2237 = T3;
  if (tmpF2237 != YPfalse) {
    T4 = tmpF2237;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1405_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1406_);
    iF2238 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1405_);
    propF2239 = T9;
    T10 = CALL2(1,VARREF(YgooSmagYGE),iF2238,DYNREF(YgooSioSwriteYTmax_print_lengthT));
    if (T10 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_91));
      T11 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    T13 = CALL1(1,VARREF(Yprop_getter),propF2239);
    getterF2240 = T13;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    T14 = CALL1(1,VARREF(Yfun_name),getterF2240);
    CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(0),T14);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_92));
    T15 = CALL1(1,getterF2240,FREEREF(2));
    CALL2(1,FREEREF(4),T15,FREEREF(3));
    T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1406_);
    T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1405_);
    a1 = T17;
    a2 = T18;
    x_1406_ = a1;
    x_1405_ = a2;
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
  P x_1407F2241;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  VARSET(YTreport_prop_unbound_errorsQT,YPfalse);
  T1 = FUNSHELL(1,fun_x_1407_61,6);
  x_1407F2241 = T1;
  FUNINIT(x_1407F2241, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),x_1407F2241);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T6 = CALL1(1,VARREF(Yobject_props),FREEREF(2));
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),T6);
  T2 = CALL2(0,x_1407F2241,T3,T5);
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
  P x_1404F2242;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  x_1404F2242 = VARREF(YTreport_prop_unbound_errorsQT);
  T2 = FUNFAB(fun_62,5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_63,1,x_1404F2242);
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
  P tmpF2245;
  P argumentF2244;
  P current_indexF2243;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
loop:
  T1 = BOXVAL(FREEREF(0));
  current_indexF2243 = T1;
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(0)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF2243,FREEREF(1));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_101),FREEREF(2),FREEREF(3));
  } else {
  }
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),current_indexF2243);
  argumentF2244 = T8;
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),class_,VARREF(YLanyG));
  tmpF2245 = T11;
  if (tmpF2245 != YPfalse) {
    T12 = tmpF2245;
  } else {
    T13 = CALL2(1,VARREF(YisaQ),argumentF2244,class_);
    T12 = T13;
  }
  T10 = T12;
  T9 = CALL1(1,VARREF(Ynot),T10);
  if (T9 != YPfalse) {
    T14 = CALL4(1,VARREF(Yerror),LITREF(lit_102),char_,class_,argumentF2244);
  } else {
  }
  T7 = argumentF2244;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P c_;
  P x_1409F2247;
  P x_1408F2246;
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
    x_1408F2246 = T2;
    x_1409F2247 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1409F2247,x_1408F2246,YPchr((P)68));
    if (T5 != YPfalse) {
      T8 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
      T6 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T7);
      T4 = T6;
    } else {
      T10 = CALL2(1,x_1409F2247,x_1408F2246,YPchr((P)66));
      if (T10 != YPfalse) {
        T13 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T12 = CALL2(1,VARREF(YgooSmathYnum_to_str),T13,YPint((P)2));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T12);
        T9 = T11;
      } else {
        T15 = CALL2(1,x_1409F2247,x_1408F2246,YPchr((P)79));
        if (T15 != YPfalse) {
          T18 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T17 = CALL2(1,VARREF(YgooSmathYnum_to_str),T18,YPint((P)8));
          T16 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T17);
          T14 = T16;
        } else {
          T20 = CALL2(1,x_1409F2247,x_1408F2246,YPchr((P)88));
          if (T20 != YPfalse) {
            T23 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T22 = CALL2(1,VARREF(YgooSmathYnum_to_str),T23,YPint((P)16));
            T21 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T22);
            T19 = T21;
          } else {
            T25 = CALL2(1,x_1409F2247,x_1408F2246,YPchr((P)67));
            if (T25 != YPfalse) {
              T27 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T26 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),T27);
              T24 = T26;
            } else {
              T29 = CALL2(1,x_1409F2247,x_1408F2246,YPchr((P)83));
              if (T29 != YPfalse) {
                T31 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T30 = CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T31);
                T28 = T30;
              } else {
                T33 = CALL2(1,x_1409F2247,x_1408F2246,YPchr((P)61));
                if (T33 != YPfalse) {
                  T35 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T34 = CALL2(1,VARREF(YgooSioSwriteYwrite),FREEREF(1),T35);
                  T32 = T34;
                } else {
                  T37 = CALL2(1,x_1409F2247,x_1408F2246,YPchr((P)37));
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
  P argF2251;
  P num_argumentsF2250;
  P argument_indexF2249;
  P found_percentQF2248;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
loop:
  found_percentQF2248 = YPfalse;
  found_percentQF2248 = BOXFAB(found_percentQF2248);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF2249 = YPint((P)0);
  argument_indexF2249 = BOXFAB(argument_indexF2249);
  T5 = CALL1(1,VARREF(YgooStypesYlen),arguments_);
  num_argumentsF2250 = T5;
  T6 = FUNSHELL(1,fun_arg_68,4);
  argF2251 = T6;
  FUNINIT(argF2251, 4,argument_indexF2249,num_argumentsF2250,message_,arguments_);
  T8 = FUNFAB(fun_69,4,found_percentQF2248,port_,argF2251,message_);
  T7 = CALL2(1,VARREF(YgooSmacrosYdo),T8,message_);
  T12 = BOXVAL(found_percentQF2248);
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
  P UF2252;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(1));
    UF2252 = T3;
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
    T8 = CALL1(1,VARREF(Ylst),FREEREF(2));
    T10 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),FREEREF(0));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T9,Ynil);
    T5 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2252,T6);
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
  P current_indexF2253;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  CALL0(0,FREEREF(0));
  T1 = BOXVAL(FREEREF(1));
  current_indexF2253 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(1)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagYL),current_indexF2253,FREEREF(2));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_112),FREEREF(3),FREEREF(4));
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(4),current_indexF2253);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P c_;
  P UF2262;
  P UF2261;
  P UF2260;
  P UF2259;
  P UF2258;
  P UF2257;
  P UF2256;
  P x_1413F2255;
  P x_1412F2254;
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
    x_1412F2254 = T2;
    x_1413F2255 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1413F2255,x_1412F2254,YPchr((P)68));
    if (T5 != YPfalse) {
      T7 = BOXVAL(FREEREF(1));
      UF2256 = T7;
      T11 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
      T12 = CALL1(1,VARREF(Ylst),FREEREF(2));
      T15 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
      T17 = CALL1(1,FREEREF(3),c_);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
      T13 = CALL1(1,VARREF(Ylst),T14);
      T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,Ynil);
      T9 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2256,T10);
      T8 = BOXVAL(FREEREF(1)) = T9;
      T6 = T8;
      T4 = T6;
    } else {
      T19 = CALL2(1,x_1413F2255,x_1412F2254,YPchr((P)66));
      if (T19 != YPfalse) {
        T21 = BOXVAL(FREEREF(1));
        UF2257 = T21;
        T25 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
        T26 = CALL1(1,VARREF(Ylst),FREEREF(2));
        T29 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
        T31 = CALL1(1,FREEREF(3),c_);
        T30 = CALL1(1,VARREF(Ylst),T31);
        T32 = CALL1(1,VARREF(Ylst),YPint((P)2));
        T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,Ynil);
        T27 = CALL1(1,VARREF(Ylst),T28);
        T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,Ynil);
        T23 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2257,T24);
        T22 = BOXVAL(FREEREF(1)) = T23;
        T20 = T22;
        T18 = T20;
      } else {
        T34 = CALL2(1,x_1413F2255,x_1412F2254,YPchr((P)79));
        if (T34 != YPfalse) {
          T36 = BOXVAL(FREEREF(1));
          UF2258 = T36;
          T40 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
          T41 = CALL1(1,VARREF(Ylst),FREEREF(2));
          T44 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
          T46 = CALL1(1,FREEREF(3),c_);
          T45 = CALL1(1,VARREF(Ylst),T46);
          T47 = CALL1(1,VARREF(Ylst),YPint((P)8));
          T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T47,Ynil);
          T42 = CALL1(1,VARREF(Ylst),T43);
          T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,Ynil);
          T38 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2258,T39);
          T37 = BOXVAL(FREEREF(1)) = T38;
          T35 = T37;
          T33 = T35;
        } else {
          T49 = CALL2(1,x_1413F2255,x_1412F2254,YPchr((P)88));
          if (T49 != YPfalse) {
            T51 = BOXVAL(FREEREF(1));
            UF2259 = T51;
            T55 = CALL1(1,VARREF(Ylst),LITREF(lit_111));
            T56 = CALL1(1,VARREF(Ylst),FREEREF(2));
            T59 = CALL1(1,VARREF(Ylst),LITREF(lit_113));
            T61 = CALL1(1,FREEREF(3),c_);
            T60 = CALL1(1,VARREF(Ylst),T61);
            T62 = CALL1(1,VARREF(Ylst),YPint((P)16));
            T58 = CALL4(1,VARREF(YgooSmacrosYcat),T59,T60,T62,Ynil);
            T57 = CALL1(1,VARREF(Ylst),T58);
            T54 = CALL4(1,VARREF(YgooSmacrosYcat),T55,T56,T57,Ynil);
            T53 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2259,T54);
            T52 = BOXVAL(FREEREF(1)) = T53;
            T50 = T52;
            T48 = T50;
          } else {
            T64 = CALL2(1,x_1413F2255,x_1412F2254,YPchr((P)67));
            if (T64 != YPfalse) {
              T66 = BOXVAL(FREEREF(1));
              UF2260 = T66;
              T70 = CALL1(1,VARREF(Ylst),LITREF(lit_114));
              T71 = CALL1(1,VARREF(Ylst),FREEREF(2));
              T73 = CALL2(1,FREEREF(3),c_,VARREF(YLchrG));
              T72 = CALL1(1,VARREF(Ylst),T73);
              T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T71,T72,Ynil);
              T68 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2260,T69);
              T67 = BOXVAL(FREEREF(1)) = T68;
              T65 = T67;
              T63 = T65;
            } else {
              T75 = CALL2(1,x_1413F2255,x_1412F2254,YPchr((P)83));
              if (T75 != YPfalse) {
                T77 = BOXVAL(FREEREF(1));
                UF2261 = T77;
                T81 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
                T82 = CALL1(1,VARREF(Ylst),FREEREF(2));
                T84 = CALL1(1,FREEREF(3),c_);
                T83 = CALL1(1,VARREF(Ylst),T84);
                T80 = CALL4(1,VARREF(YgooSmacrosYcat),T81,T82,T83,Ynil);
                T79 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2261,T80);
                T78 = BOXVAL(FREEREF(1)) = T79;
                T76 = T78;
                T74 = T76;
              } else {
                T86 = CALL2(1,x_1413F2255,x_1412F2254,YPchr((P)61));
                if (T86 != YPfalse) {
                  T88 = BOXVAL(FREEREF(1));
                  UF2262 = T88;
                  T92 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
                  T93 = CALL1(1,VARREF(Ylst),FREEREF(2));
                  T95 = CALL1(1,FREEREF(3),c_);
                  T94 = CALL1(1,VARREF(Ylst),T95);
                  T91 = CALL4(1,VARREF(YgooSmacrosYcat),T92,T93,T94,Ynil);
                  T90 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2262,T91);
                  T89 = BOXVAL(FREEREF(1)) = T90;
                  T87 = T89;
                  T85 = T87;
                } else {
                  T97 = CALL2(1,x_1413F2255,x_1412F2254,YPchr((P)37));
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
  P exprsF2271;
  P argF2270;
  P maybe_pack_charsF2269;
  P packer_F2268;
  P portF2267;
  P charsF2266;
  P num_argsF2265;
  P arg_indexF2264;
  P found_percentQF2263;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
loop:
  found_percentQF2263 = YPfalse;
  found_percentQF2263 = BOXFAB(found_percentQF2263);
  check_type(YPint((P)0),VARREF(YLintG));
  arg_indexF2264 = YPint((P)0);
  arg_indexF2264 = BOXFAB(arg_indexF2264);
  T5 = CALL1(1,VARREF(YgooStypesYlen),args_);
  num_argsF2265 = T5;
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  charsF2266 = T7;
  T9 = CALL0(1,VARREF(YgooSmacrosYgensym));
  portF2267 = T9;
  T12 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F2268 = T12;
  packer_F2268 = BOXFAB(packer_F2268);
  T14 = FUNSHELL(1,fun_maybe_pack_chars_73,3);
  maybe_pack_charsF2269 = T14;
  T15 = FUNSHELL(1,fun_arg_74,5);
  argF2270 = T15;
  FUNINIT(maybe_pack_charsF2269, 3,charsF2266,packer_F2268,portF2267);
  FUNINIT(argF2270, 5,maybe_pack_charsF2269,arg_indexF2264,num_argsF2265,message_,args_);
  T16 = FUNFAB(fun_75,6,found_percentQF2263,packer_F2268,portF2267,argF2270,charsF2266,message_);
  CALL2(1,VARREF(YgooSmacrosYdo),T16,message_);
  T17 = CALL0(0,maybe_pack_charsF2269);
  T19 = BOXVAL(packer_F2268);
  T18 = CALL1(1,VARREF(YgooSpackerYpacker_res),T19);
  T11 = T18;
  exprsF2271 = T11;
  T22 = BOXVAL(found_percentQF2263);
  T21 = CALL1(1,VARREF(Ynot),T22);
  T20 = CALL1(1,VARREF(Ynot),T21);
  if (T20 != YPfalse) {
    T23 = CALL2(1,VARREF(Yerror),LITREF(lit_116),message_);
  } else {
  }
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_117));
  T30 = CALL1(1,VARREF(Ylst),portF2267);
  T31 = CALL1(1,VARREF(Ylst),port_expr_);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,exprsF2271,Ynil);
  T10 = T24;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1417_77) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_121));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  P return_;
  P x_1416F2280;
  P x_1416F2279;
  P x_1416F2278;
  P x_1416F2277;
  P argsF2276;
  P messageF2275;
  P portF2274;
  P x_1416F2273;
  P x_1417F2272;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1417_77,1);
  x_1417F2272 = T1;
  FUNINIT(x_1417F2272, 1,return_);
  x_1416F2273 = FREEREF(0);
  portF2274 = YPfalse;
  portF2274 = BOXFAB(portF2274);
  messageF2275 = YPfalse;
  messageF2275 = BOXFAB(messageF2275);
  argsF2276 = YPfalse;
  argsF2276 = BOXFAB(argsF2276);
  T9 = CALL2(1,VARREF(YisaQ),x_1416F2273,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1416F2273,LITREF(lit_121),x_1417F2272);
    x_1416F2277 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1416F2277,x_1417F2272);
    BOXVAL(portF2274) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1416F2277);
    x_1416F2278 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1416F2278,x_1417F2272);
    BOXVAL(messageF2275) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1416F2278);
    x_1416F2279 = T17;
    BOXVAL(argsF2276) = x_1416F2279;
    x_1416F2280 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1416F2280,x_1417F2272);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1417F2272,LITREF(lit_122),x_1416F2273);
  }
  T22 = BOXVAL(portF2274);
  T23 = BOXVAL(messageF2275);
  T24 = BOXVAL(argsF2276);
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
  P tmpF2281;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2281 = T1;
  if (tmpF2281 != YPfalse) {
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
  P portF2282;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
loop:
  portF2282 = YPfalse;
  portF2282 = BOXFAB(portF2282);
  T3 = FUNFAB(fun_80,3,portF2282,message_,arguments_);
  T4 = FUNFAB(fun_81,1,portF2282);
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
  P loopF2284;
  P limF2283;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),args_);
  limF2283 = T1;
  T3 = FUNSHELL(1,fun_loop_83,4);
  loopF2284 = T3;
  FUNINIT(loopF2284, 4,limF2283,port_,args_,loopF2284);
  T4 = CALL1(0,loopF2284,YPint((P)0));
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
  lit_50 = YPPsym((P)"x-1399");
  lit_51 = YPPsym((P)"x-1398");
  lit_52 = YPPsym((P)"x-1397");
  lit_53 = YPsb((P)" ...");
  lit_54 = YPsb((P)": ");
  T144 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1399_34 = YPmet(FUNCODEREF(fun_x_1399_34),LITREF(lit_50),T144,ENVNUL,PNUL,YPfalse);
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
  lit_58 = YPPsym((P)"x-1403");
  lit_59 = YPPsym((P)"x-1402");
  lit_60 = YPPsym((P)"x-1401");
  lit_61 = YPPsym((P)"x-1400");
  lit_62 = YPsb((P)"(%s ");
  lit_63 = YPsb((P)" => ");
  T162 = YPsig(YPPlist(3,LITREF(lit_59),LITREF(lit_60),LITREF(lit_61)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1403_39 = YPmet(FUNCODEREF(fun_x_1403_39),LITREF(lit_58),T162,ENVNUL,PNUL,YPfalse);
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
  lit_88 = YPPsym((P)"x-1407");
  lit_89 = YPPsym((P)"x-1406");
  lit_90 = YPPsym((P)"x-1405");
  lit_91 = YPsb((P)" ...");
  lit_92 = YPsb((P)": ");
  lit_93 = YPsb((P)"}");
  T245 = YPsig(YPPlist(2,LITREF(lit_89),LITREF(lit_90)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1407_61 = YPmet(FUNCODEREF(fun_x_1407_61),LITREF(lit_88),T245,ENVNUL,PNUL,YPfalse);
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
  lit_120 = YPPsym((P)"x-1417");
  lit_121 = YPPsym((P)"msg*");
  lit_122 = YPsb((P)"Match Pattern Failure");
  T2 = YPsig(YPPlist(2,LITREF(lit_96),LITREF(lit_109)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1417_77 = YPmet(FUNCODEREF(fun_x_1417_77),LITREF(lit_120),T2,ENVNUL,PNUL,YPfalse);
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
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsStab;
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
  {"open", &module_info_gooSioSport, "open"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"min", &module_info_gooSmag, "min"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"@len", &module_info_gooSboot, "@len"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"ct", &module_info_gooSboot, "ct"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"@+", &module_info_gooSboot, "@+"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"rem", &module_info_gooSmath, "rem"},
  {"^", &module_info_gooSmath, "^"},
  {">", &module_info_gooSmag, ">"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"app", &module_info_gooSmacros, "app"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"neg", &module_info_gooSmath, "neg"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"port-handle", &module_info_gooSioSport, "port-handle"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<", &module_info_gooSmag, "<"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {">=", &module_info_gooSmag, ">="},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"round/", &module_info_gooSmath, "round/"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"del", &module_info_gooScolsScol, "del"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"new", &module_info_gooSboot, "new"},
  {"=", &module_info_gooSmath, "="},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"sin", &module_info_gooSmath, "sin"},
  {"~==", &module_info_gooSmath, "~=="},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"stack-overflow-error", &module_info_gooSruntime, "stack-overflow-error"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"get-standard-read-macro", &module_info_gooSioSread, "get-standard-read-macro"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"add", &module_info_gooScolsScol, "add"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"for", &module_info_gooSmacros, "for"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"even?", &module_info_gooSmath, "even?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"tail", &module_info_gooSboot, "tail"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%put", &module_info_gooSboot, "%put"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%enable-stack-checks", &module_info_gooSboot, "%enable-stack-checks"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"+", &module_info_gooSmath, "+"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use", &module_info_gooSboot, "use"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"dm", &module_info_gooSboot, "dm"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"def", &module_info_gooSboot, "def"},
  {"while", &module_info_gooSmacros, "while"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"df", &module_info_gooSboot, "df"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"not", &module_info_gooSboot, "not"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"|", &module_info_gooSmath, "|"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"pow", &module_info_gooSmath, "pow"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"set-standard-read-macro!", &module_info_gooSioSread, "set-standard-read-macro!"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"dl", &module_info_gooSboot, "dl"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"mod", &module_info_gooSmath, "mod"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"read-delimited-list", &module_info_gooSioSread, "read-delimited-list"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"<<", &module_info_gooSmath, "<<"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"col", &module_info_gooScolsScol, "col"},
  {"log", &module_info_gooSmath, "log"},
  {"read", &module_info_gooSruntime, "read"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"lst", &module_info_gooSboot, "lst"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"in", &module_info_gooSioSport, "in"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"as", &module_info_gooStypes, "as"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"head", &module_info_gooSboot, "head"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@<", &module_info_gooSboot, "@<"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"round", &module_info_gooSmath, "round"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"error", &module_info_gooSboot, "error"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"out", &module_info_gooSioSport, "out"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"quote", &module_info_gooSboot, "quote"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"~", &module_info_gooSmath, "~"},
  {"tan", &module_info_gooSmath, "tan"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"/", &module_info_gooSmath, "/"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"op", &module_info_gooSmacros, "op"},
  {"div", &module_info_gooSmath, "div"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"if", &module_info_gooSboot, "if"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"get", &module_info_gooSioSport, "get"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"always", &module_info_gooSruntime, "always"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fin", &module_info_gooSboot, "fin"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"items", &module_info_gooScolsScol, "items"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"$e", &module_info_gooSmath, "$e"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%get", &module_info_gooSboot, "%get"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"try", &module_info_gooSboot, "try"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"export", &module_info_gooSboot, "export"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"tup", &module_info_gooSboot, "tup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"let", &module_info_gooSboot, "let"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"cat", &module_info_gooSmacros, "cat"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"last", &module_info_gooSmacros, "last"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"put", &module_info_gooSioSport, "put"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"mif", &module_info_gooSboot, "mif"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"set", &module_info_gooSboot, "set"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"@==", &module_info_gooSboot, "@=="},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"==", &module_info_gooSmacros, "=="},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"&", &module_info_gooSmath, "&"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*", &module_info_gooSmath, "*"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"loc", &module_info_gooSboot, "loc"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"now", &module_info_gooScolsScol, "now"},
  {"t<", &module_info_gooStypes, "t<"},
  {"cos", &module_info_gooSmath, "cos"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"case", &module_info_gooSmacros, "case"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"close", &module_info_gooSioSport, "close"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"floor", &module_info_gooSmath, "floor"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"map", &module_info_gooSmacros, "map"},
  {"-", &module_info_gooSmath, "-"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"match", &module_info_gooSmacros, "match"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%time", &module_info_gooSboot, "%time"},
  {">>", &module_info_gooSmath, ">>"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan", &module_info_gooSmath, "atan"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"nul", &module_info_gooSboot, "nul"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"max", &module_info_gooSmag, "max"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"abs", &module_info_gooSmath, "abs"},
  {"port-handle-setter", &module_info_gooSioSport, "port-handle-setter"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"when", &module_info_gooSmacros, "when"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"1-", &module_info_gooSmath, "1-"},
  {"len", &module_info_gooStypes, "len"},
  {"~=", &module_info_gooSmath, "~="},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"recurring-write", CVAR, &YgooSioSwriteYrecurring_write},
  {"msg*", PVAR, NULL},
  {"quotation?", CVAR, &YgooSioSwriteYquotationQ},
  {"post", CVAR, &YgooSioSwriteYpost},
  {"writeln", CVAR, &YgooSioSwriteYwriteln},
  {"do-emit", CVAR, &YgooSioSwriteYdo_emit},
  {"write-value-type", CVAR, &YgooSioSwriteYwrite_value_type},
  {"write-type", CVAR, &YgooSioSwriteYwrite_type},
  {"write-boolean", CVAR, &YgooSioSwriteYwrite_boolean},
  {"character-name", CVAR, &YgooSioSwriteYcharacter_name},
  {"write-map", CVAR, &YgooSioSwriteYwrite_map},
  {"---main-1---", PVAR, NULL},
  {"as-binding-name", CVAR, &YgooSioSwriteYas_binding_name},
  {"say", CVAR, &YgooSioSwriteYsay},
  {"write", CVAR, &YgooSioSwriteYwrite},
  {"write-char-literal", CVAR, &YgooSioSwriteYwrite_char_literal},
  {"recurring-write-type", CVAR, &YgooSioSwriteYrecurring_write_type},
  {"write-list", CVAR, &YgooSioSwriteYwrite_list},
  {"write-to-string", CVAR, &YgooSioSwriteYwrite_to_string},
  {"write-fun-guts", CVAR, &YgooSioSwriteYwrite_fun_guts},
  {"write-params", CVAR, &YgooSioSwriteYwrite_params},
  {"---main-0---", PVAR, NULL},
  {"write-number", CVAR, &YgooSioSwriteYwrite_number},
  {"*max-print-length*", DVAR, &YgooSioSwriteYTmax_print_lengthT},
  {"write-flat", CVAR, &YgooSioSwriteYwrite_flat},
  {"write-string-literal", CVAR, &YgooSioSwriteYwrite_string_literal},
  {"*max-print-depth*", DVAR, &YgooSioSwriteYTmax_print_depthT},
  {"emit", CVAR, &YgooSioSwriteYemit},
  {"pe-msg", CVAR, &YgooSioSwriteYpe_msg},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"msg*", "msg*"},
  {"post", "post"},
  {"writeln", "writeln"},
  {"write", "write"},
  {"say", "say"},
  {"write-to-string", "write-to-string"},
  {"msg-to-str", "msg-to-str"},
  {"recurring-write", "recurring-write"},
  {"msg", "msg"},
  {"*max-print-length*", "*max-print-length*"},
  {"pe-msg", "pe-msg"},
  {"*max-print-depth*", "*max-print-depth*"},
  {"emit", "emit"},
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
