/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/eval */

EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Ynew,"goo/boot","new");
EXT(Ytail,"goo/boot","tail");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YevalStopYtop,"eval/top","top");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLnumG,"goo/boot","<num>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YevalStopYload,"eval/top","load");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ylst,"goo/boot","lst");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");

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
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_evalSsyntax;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_evalStop},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fin", &module_info_gooSboot, "fin"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"app", &module_info_gooSmacros, "app"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"round/", &module_info_gooSmath, "round/"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"export", &module_info_gooSboot, "export"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"tup", &module_info_gooSboot, "tup"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"tail", &module_info_gooSboot, "tail"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"acos", &module_info_gooSmath, "acos"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"min", &module_info_gooSmag, "min"},
  {"nul", &module_info_gooSboot, "nul"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"~==", &module_info_gooSmath, "~=="},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"items", &module_info_gooScolsScol, "items"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"^", &module_info_gooSmath, "^"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"not", &module_info_gooSboot, "not"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"==", &module_info_gooSmacros, "=="},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"match", &module_info_gooSmacros, "match"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"fun", &module_info_gooSboot, "fun"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"cos", &module_info_gooSmath, "cos"},
  {"now", &module_info_gooScolsScol, "now"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"any?", &module_info_gooStypes, "any?"},
  {"case", &module_info_gooSmacros, "case"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"mod", &module_info_gooSmath, "mod"},
  {"pair", &module_info_gooSmacros, "pair"},
  {">=", &module_info_gooSmag, ">="},
  {"~=", &module_info_gooSmath, "~="},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"try", &module_info_gooSboot, "try"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"<=", &module_info_gooSmag, "<="},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"col", &module_info_gooScolsScol, "col"},
  {"<<", &module_info_gooSmath, "<<"},
  {"when", &module_info_gooSmacros, "when"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"in", &module_info_gooSioSport, "in"},
  {"frame", &module_info_evalStop, "frame"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"ct", &module_info_gooSboot, "ct"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"out", &module_info_gooSioSport, "out"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"|", &module_info_gooSmath, "|"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"floor", &module_info_gooSmath, "floor"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"head", &module_info_gooSboot, "head"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"loc", &module_info_gooSboot, "loc"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"into", &module_info_gooScolsScol, "into"},
  {"asin", &module_info_gooSmath, "asin"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"get", &module_info_gooSioSport, "get"},
  {"div", &module_info_gooSmath, "div"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"t*", &module_info_gooSboot, "t*"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"t?", &module_info_gooStypes, "t?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"abs", &module_info_gooSmath, "abs"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"error", &module_info_gooSboot, "error"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"1+", &module_info_gooSmath, "1+"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"always", &module_info_gooSruntime, "always"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sin", &module_info_gooSmath, "sin"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"del", &module_info_gooScolsScol, "del"},
  {"dp", &module_info_gooSboot, "dp"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"for", &module_info_gooSmacros, "for"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"*", &module_info_gooSmath, "*"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"df", &module_info_gooSboot, "df"},
  {"packing", &module_info_gooSpacker, "packing"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"put", &module_info_gooSioSport, "put"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"dg", &module_info_gooSboot, "dg"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"while", &module_info_gooSmacros, "while"},
  {"if", &module_info_gooSboot, "if"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"t=", &module_info_gooStypes, "t="},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"dc", &module_info_gooSboot, "dc"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"top", &module_info_evalStop, "top"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"~", &module_info_gooSmath, "~"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"round", &module_info_gooSmath, "round"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"map", &module_info_gooSmacros, "map"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"t+", &module_info_gooStypes, "t+"},
  {"+", &module_info_gooSmath, "+"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"find", &module_info_gooScolsScol, "find"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"esc", &module_info_gooSboot, "esc"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"load", &module_info_evalStop, "load"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"len", &module_info_gooStypes, "len"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"set", &module_info_gooSboot, "set"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"even?", &module_info_gooSmath, "even?"},
  {"read", &module_info_gooSruntime, "read"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"rem", &module_info_gooSmath, "rem"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"logn", &module_info_gooSmath, "logn"},
  {"add", &module_info_gooScolsScol, "add"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"atan", &module_info_gooSmath, "atan"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"open", &module_info_gooSioSport, "open"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"-", &module_info_gooSmath, "-"},
  {"log", &module_info_gooSmath, "log"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {">>", &module_info_gooSmath, ">>"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"as", &module_info_gooStypes, "as"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"def", &module_info_gooSboot, "def"},
  {"=", &module_info_gooSmath, "="},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"&", &module_info_gooSmath, "&"},
  {"tan", &module_info_gooSmath, "tan"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"bt", &module_info_evalStop, "bt"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"do", &module_info_gooSmacros, "do"},
  {"op", &module_info_gooSmacros, "op"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {">", &module_info_gooSmag, ">"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"<", &module_info_gooSmag, "<"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"use", &module_info_gooSboot, "use"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"$e", &module_info_gooSmath, "$e"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"/", &module_info_gooSmath, "/"},
  {"max", &module_info_gooSmag, "max"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"close", &module_info_gooSioSport, "close"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"save-image", "save-image"},
  {"frame", "frame"},
  {"frame-var", "frame-var"},
  {"do-stack-frames", "do-stack-frames"},
  {"top", "top"},
  {"load", "load"},
  {"eval", "eval"},
  {"backtrace", "backtrace"},
  {"bt", "bt"},
  {"load-file", "load-file"},
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
