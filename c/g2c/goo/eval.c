/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/eval */

EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalStopYload,"eval/top","load");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalStopYtop,"eval/top","top");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynul,"goo/boot","nul");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfab_class,"goo/boot","fab-class");

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
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_evalStop},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"sin", &module_info_gooSmath, "sin"},
  {"frame", &module_info_evalStop, "frame"},
  {"~", &module_info_gooSmath, "~"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"not", &module_info_gooSboot, "not"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"fin", &module_info_gooSboot, "fin"},
  {"op", &module_info_gooSmacros, "op"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"now", &module_info_gooScolsScol, "now"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"t<", &module_info_gooStypes, "t<"},
  {"tan", &module_info_gooSmath, "tan"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"or", &module_info_gooSmacros, "or"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"set", &module_info_gooSboot, "set"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"asin", &module_info_gooSmath, "asin"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"items", &module_info_gooScolsScol, "items"},
  {"load", &module_info_evalStop, "load"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<=", &module_info_gooSmag, "<="},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"top", &module_info_evalStop, "top"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"t=", &module_info_gooStypes, "t="},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"put", &module_info_gooSioSport, "put"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"packed", &module_info_gooSpacker, "packed"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"|", &module_info_gooSmath, "|"},
  {"do", &module_info_gooSmacros, "do"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"/", &module_info_gooSmath, "/"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"nul", &module_info_gooSboot, "nul"},
  {"try", &module_info_gooSboot, "try"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"use", &module_info_gooSboot, "use"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"error", &module_info_gooSboot, "error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"map", &module_info_gooSmacros, "map"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"into", &module_info_gooScolsScol, "into"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"+", &module_info_gooSmath, "+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"esc", &module_info_gooSboot, "esc"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"while", &module_info_gooSmacros, "while"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"floor", &module_info_gooSmath, "floor"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"add", &module_info_gooScolsScol, "add"},
  {"round", &module_info_gooSmath, "round"},
  {"==", &module_info_gooSmacros, "=="},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"rep", &module_info_gooSboot, "rep"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"ds", &module_info_gooSboot, "ds"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"get", &module_info_gooSioSport, "get"},
  {"&", &module_info_gooSmath, "&"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"round/", &module_info_gooSmath, "round/"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"and", &module_info_gooSmacros, "and"},
  {"when", &module_info_gooSmacros, "when"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"case", &module_info_gooSmacros, "case"},
  {"logn", &module_info_gooSmath, "logn"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"log", &module_info_gooSmath, "log"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"in", &module_info_gooSioSport, "in"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"max", &module_info_gooSmag, "max"},
  {"ct", &module_info_gooSboot, "ct"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"head", &module_info_gooSboot, "head"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"close", &module_info_gooSioSport, "close"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"def", &module_info_gooSboot, "def"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"read", &module_info_gooSruntime, "read"},
  {"cos", &module_info_gooSmath, "cos"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"t?", &module_info_gooStypes, "t?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"if", &module_info_gooSboot, "if"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"abs", &module_info_gooSmath, "abs"},
  {"$e", &module_info_gooSmath, "$e"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"mod", &module_info_gooSmath, "mod"},
  {"any?", &module_info_gooStypes, "any?"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"len", &module_info_gooStypes, "len"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"tup", &module_info_gooSboot, "tup"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"app", &module_info_gooSmacros, "app"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"loc", &module_info_gooSboot, "loc"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"always", &module_info_gooSruntime, "always"},
  {"lst", &module_info_gooSboot, "lst"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"export", &module_info_gooSboot, "export"},
  {"*", &module_info_gooSmath, "*"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {">>", &module_info_gooSmath, ">>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"min", &module_info_gooSmag, "min"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"for", &module_info_gooSmacros, "for"},
  {"match", &module_info_gooSmacros, "match"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"seq", &module_info_gooSboot, "seq"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"dp", &module_info_gooSboot, "dp"},
  {"-", &module_info_gooSmath, "-"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"find", &module_info_gooScolsScol, "find"},
  {"bt", &module_info_evalStop, "bt"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"<<", &module_info_gooSmath, "<<"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"pow", &module_info_gooSmath, "pow"},
  {"nil", &module_info_gooSboot, "nil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"as", &module_info_gooStypes, "as"},
  {"t*", &module_info_gooStypes, "t*"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"^", &module_info_gooSmath, "^"},
  {"df", &module_info_gooSboot, "df"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {">", &module_info_gooSmag, ">"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"open", &module_info_gooSioSport, "open"},
  {"neg", &module_info_gooSmath, "neg"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"dg", &module_info_gooSboot, "dg"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"out", &module_info_gooSioSport, "out"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"<", &module_info_gooSmag, "<"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {">=", &module_info_gooSmag, ">="},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"new", &module_info_gooSboot, "new"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"until", &module_info_gooSmacros, "until"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"~=", &module_info_gooSmath, "~="},
  {"puts", &module_info_gooSioSport, "puts"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dc", &module_info_gooSboot, "dc"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"1-", &module_info_gooSmath, "1-"},
  {"=", &module_info_gooSmath, "="},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"frame", "frame"},
  {"backtrace", "backtrace"},
  {"load", "load"},
  {"top", "top"},
  {"save-image", "save-image"},
  {"frame-var", "frame-var"},
  {"do-stack-frames", "do-stack-frames"},
  {"load-file", "load-file"},
  {"bt", "bt"},
  {"eval", "eval"},
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
