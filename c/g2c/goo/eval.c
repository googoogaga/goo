/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/eval */

EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_getter,"goo/boot","prop-getter");
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
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ynil,"goo/boot","nil");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalStopYframe,"eval/top","frame");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalStopYload,"eval/top","load");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLintG,"goo/boot","<int>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YgooSevalY___main_0___ ();

/* FUNCTION CODES: */

P YgooSevalY___main_0___() {
  P T0;
loop:
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsScycle;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_evalStop},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"type-class", &module_info_gooSboot, "type-class"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"asin", &module_info_gooSmath, "asin"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"items", &module_info_gooScolsScol, "items"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<=", &module_info_gooSmag, "<="},
  {"compose", &module_info_gooSruntime, "compose"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"t=", &module_info_gooStypes, "t="},
  {"try", &module_info_gooSboot, "try"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"|", &module_info_gooSmath, "|"},
  {"do", &module_info_gooSmacros, "do"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"/", &module_info_gooSmath, "/"},
  {"dg", &module_info_gooSboot, "dg"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"out", &module_info_gooSioSport, "out"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"rep", &module_info_gooSboot, "rep"},
  {"even?", &module_info_gooSmath, "even?"},
  {"error", &module_info_gooSboot, "error"},
  {"map", &module_info_gooSmacros, "map"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"into", &module_info_gooScolsScol, "into"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"let", &module_info_gooSboot, "let"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"+", &module_info_gooSmath, "+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"while", &module_info_gooSmacros, "while"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"open", &module_info_gooSioSport, "open"},
  {"def", &module_info_gooSboot, "def"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"quote", &module_info_gooSboot, "quote"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"add", &module_info_gooScolsScol, "add"},
  {"put", &module_info_gooSioSport, "put"},
  {"round", &module_info_gooSmath, "round"},
  {"==", &module_info_gooSmacros, "=="},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"ds", &module_info_gooSboot, "ds"},
  {"nul", &module_info_gooSboot, "nul"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"&", &module_info_gooSmath, "&"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"round/", &module_info_gooSmath, "round/"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"and", &module_info_gooSmacros, "and"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"when", &module_info_gooSmacros, "when"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"bt", &module_info_evalStop, "bt"},
  {"case", &module_info_gooSmacros, "case"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"log", &module_info_gooSmath, "log"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"in", &module_info_gooSioSport, "in"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"max", &module_info_gooSmag, "max"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"dm", &module_info_gooSboot, "dm"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"head", &module_info_gooSboot, "head"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"cos", &module_info_gooSmath, "cos"},
  {"t?", &module_info_gooStypes, "t?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"loc", &module_info_gooSboot, "loc"},
  {"if", &module_info_gooSboot, "if"},
  {"always", &module_info_gooSruntime, "always"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"abs", &module_info_gooSmath, "abs"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"nil", &module_info_gooSboot, "nil"},
  {"top", &module_info_evalStop, "top"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"len", &module_info_gooStypes, "len"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"tup", &module_info_gooSboot, "tup"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"app", &module_info_gooSmacros, "app"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"lst", &module_info_gooSboot, "lst"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"export", &module_info_gooSboot, "export"},
  {"*", &module_info_gooSmath, "*"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"frame", &module_info_evalStop, "frame"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {">>", &module_info_gooSmath, ">>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"min", &module_info_gooSmag, "min"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"$e", &module_info_gooSmath, "$e"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"for", &module_info_gooSmacros, "for"},
  {"match", &module_info_gooSmacros, "match"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"seq", &module_info_gooSboot, "seq"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"dp", &module_info_gooSboot, "dp"},
  {"-", &module_info_gooSmath, "-"},
  {"find", &module_info_gooScolsScol, "find"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"<<", &module_info_gooSmath, "<<"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"pow", &module_info_gooSmath, "pow"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"as", &module_info_gooStypes, "as"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"t*", &module_info_gooStypes, "t*"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"load", &module_info_evalStop, "load"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"^", &module_info_gooSmath, "^"},
  {"df", &module_info_gooSboot, "df"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"unless", &module_info_gooSmacros, "unless"},
  {">", &module_info_gooSmag, ">"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"neg", &module_info_gooSmath, "neg"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"read", &module_info_gooSruntime, "read"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"<", &module_info_gooSmag, "<"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {">=", &module_info_gooSmag, ">="},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"new", &module_info_gooSboot, "new"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"t+", &module_info_gooStypes, "t+"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"until", &module_info_gooSmacros, "until"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"~=", &module_info_gooSmath, "~="},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"floor", &module_info_gooSmath, "floor"},
  {"dc", &module_info_gooSboot, "dc"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"1-", &module_info_gooSmath, "1-"},
  {"=", &module_info_gooSmath, "="},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"sin", &module_info_gooSmath, "sin"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"~", &module_info_gooSmath, "~"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"not", &module_info_gooSboot, "not"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"fin", &module_info_gooSboot, "fin"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"op", &module_info_gooSmacros, "op"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fun", &module_info_gooSboot, "fun"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"get", &module_info_gooSioSport, "get"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"t<", &module_info_gooStypes, "t<"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"or", &module_info_gooSmacros, "or"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"close", &module_info_gooSioSport, "close"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"set", &module_info_gooSboot, "set"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"save-image", "save-image"},
  {"bt", "bt"},
  {"do-stack-frames", "do-stack-frames"},
  {"top", "top"},
  {"frame", "frame"},
  {"eval", "eval"},
  {"backtrace", "backtrace"},
  {"load", "load"},
  {"load-file", "load-file"},
  {"frame-var", "frame-var"},
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
