/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/eval */

EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Ynot,"goo/boot","not");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalStopYload,"eval/top","load");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YtT,"goo/boot","t*");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YLseqIG,"goo/boot","<seq.>");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ynew,"goo/boot","new");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");

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
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_evalStop},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"del", &module_info_gooScolsScol, "del"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"match", &module_info_gooSmacros, "match"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"do", &module_info_gooSmacros, "do"},
  {"loc", &module_info_gooSboot, "loc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"fun", &module_info_gooSboot, "fun"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"case", &module_info_gooSmacros, "case"},
  {"+", &module_info_gooSmath, "+"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nil", &module_info_gooSboot, "nil"},
  {">", &module_info_gooSmag, ">"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"sin", &module_info_gooSmath, "sin"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"max", &module_info_gooSmag, "max"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"mod", &module_info_gooSmath, "mod"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"<", &module_info_gooSmag, "<"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"=", &module_info_gooSmath, "="},
  {"~==", &module_info_gooSmath, "~=="},
  {"ct", &module_info_gooSboot, "ct"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"when", &module_info_gooSmacros, "when"},
  {"nul", &module_info_gooSboot, "nul"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"tail", &module_info_gooSboot, "tail"},
  {"min", &module_info_gooSmag, "min"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"|", &module_info_gooSmath, "|"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"not", &module_info_gooSboot, "not"},
  {"read", &module_info_gooSruntime, "read"},
  {">=", &module_info_gooSmag, ">="},
  {"round", &module_info_gooSmath, "round"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"/", &module_info_gooSmath, "/"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"~=", &module_info_gooSmath, "~="},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"t?", &module_info_gooStypes, "t?"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"for", &module_info_gooSmacros, "for"},
  {"log", &module_info_gooSmath, "log"},
  {"use", &module_info_gooSboot, "use"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<=", &module_info_gooSmag, "<="},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"error", &module_info_gooSboot, "error"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"asin", &module_info_gooSmath, "asin"},
  {"dp", &module_info_gooSboot, "dp"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"quote", &module_info_gooSboot, "quote"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"col", &module_info_gooScolsScol, "col"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"top", &module_info_evalStop, "top"},
  {"df", &module_info_gooSboot, "df"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"t=", &module_info_gooStypes, "t="},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dg", &module_info_gooSboot, "dg"},
  {"ds", &module_info_gooSboot, "ds"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"dm", &module_info_gooSboot, "dm"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"def", &module_info_gooSboot, "def"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"t+", &module_info_gooStypes, "t+"},
  {"in", &module_info_gooSioSport, "in"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"head", &module_info_gooSboot, "head"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"load", &module_info_evalStop, "load"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*", &module_info_gooSmath, "*"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"tan", &module_info_gooSmath, "tan"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"~", &module_info_gooSmath, "~"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"floor", &module_info_gooSmath, "floor"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"into", &module_info_gooScolsScol, "into"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"gets", &module_info_gooSioSport, "gets"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"out", &module_info_gooSioSport, "out"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"any?", &module_info_gooStypes, "any?"},
  {"t*", &module_info_gooSboot, "t*"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"get", &module_info_gooSioSport, "get"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"1-", &module_info_gooSmath, "1-"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"always", &module_info_gooSruntime, "always"},
  {"-", &module_info_gooSmath, "-"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"as", &module_info_gooStypes, "as"},
  {"bt", &module_info_evalStop, "bt"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"put", &module_info_gooSioSport, "put"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"rem", &module_info_gooSmath, "rem"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"&", &module_info_gooSmath, "&"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"map", &module_info_gooSmacros, "map"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"find", &module_info_gooScolsScol, "find"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"cos", &module_info_gooSmath, "cos"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"logn", &module_info_gooSmath, "logn"},
  {"op", &module_info_gooSmacros, "op"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"atan", &module_info_gooSmath, "atan"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {">>", &module_info_gooSmath, ">>"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"round/", &module_info_gooSmath, "round/"},
  {"close", &module_info_gooSioSport, "close"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"try", &module_info_gooSboot, "try"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"frame", &module_info_evalStop, "frame"},
  {"export", &module_info_gooSboot, "export"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"or", &module_info_gooSmacros, "or"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"new", &module_info_gooSboot, "new"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"open", &module_info_gooSioSport, "open"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"^", &module_info_gooSmath, "^"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"1+", &module_info_gooSmath, "1+"},
  {"==", &module_info_gooSmacros, "=="},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"save-image", "save-image"},
  {"frame-var", "frame-var"},
  {"do-stack-frames", "do-stack-frames"},
  {"top", "top"},
  {"load", "load"},
  {"backtrace", "backtrace"},
  {"bt", "bt"},
  {"load-file", "load-file"},
  {"frame", "frame"},
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
