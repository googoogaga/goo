/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/random */

DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSsystemYos_val,"goo/system","os-val");
DEF(YgooSrandomYDdefault_random,"goo/random","$default-random");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YgooSrandomYrecent,"goo/random","recent");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(YgooSrandomYrecent_index_setter,"goo/random","recent-index-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(Ynul,"goo/boot","nul");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead,"goo/boot","head");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YgooSrandomYrecent_index,"goo/random","recent-index");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooSrandomYfab_random_from,"goo/random","fab-random-from");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YgooSrandomYrandom_unit_using,"goo/random","random-unit-using");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YgooSrandomYlcg_rand,"goo/random","lcg-rand");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YgooSrandomYdefault_random_seed,"goo/random","default-random-seed");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
DEF(YgooSrandomYrandom,"goo/random","random");
DEF(YgooSrandomYrandom_using,"goo/random","random-using");
DEF(YgooSrandomYrandom_unit,"goo/random","random-unit");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(YgooSrandomYrandom_29,"goo/random","random-29");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DEF(YgooSrandomYfab_random,"goo/random","fab-random");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ynew,"goo/boot","new");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yobject_class,"goo/boot","object-class");
DEF(YgooSrandomYDrecent_size,"goo/random","$recent-size");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(Ynil,"goo/boot","nil");
DEF(YgooSrandomYLrandomG,"goo/random","<random>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YgooSrandomYrecent_setter,"goo/random","recent-setter");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_5);
DEFLIT(lit_2);
DEFLIT(lit_1);
DEFLIT(lit_21);
DEFLIT(lit_9);
DEFLIT(lit_6);
DEFLIT(lit_14);
DEFLIT(lit_10);
DEFLIT(lit_24);
DEFLIT(lit_7);
DEFLIT(lit_19);
DEFLIT(lit_15);
DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_26);
DEFLIT(lit_12);
DEFLIT(lit_8);
DEFLIT(lit_16);
DEFLIT(lit_11);
DEFLIT(lit_0);
DEFLIT(lit_13);
DEFLIT(lit_23);
DEFLIT(lit_17);
DEFLIT(lit_25);
DEFLIT(lit_18);
DEFLIT(lit_20);
DEFLIT(lit_22);

/* FUNCTIONS: */

FUNFOR(YgooSrandomYdefault_random_seed);
LOCFOR(fun_recent_1);
LOCFOR(fun_recent_setter_2);
LOCFOR(fun_3);
LOCFOR(fun_recent_index_4);
LOCFOR(fun_recent_index_setter_5);
LOCFOR(fun_6);
FUNFOR(YgooSrandomYlcg_rand);
LOCFOR(fun_loop_8);
LOCFOR(fun_x_1751_9);
LOCFOR(fun_fab_random_from_10);
LOCFOR(fun_fab_random_11);
LOCFOR(fun_tap_12);
FUNFOR(YgooSrandomYrandom_29);
LOCFOR(fun_random_14);
LOCFOR(fun_find_good_value_15);
LOCFOR(fun_random_using_16);
LOCFOR(fun_random_unit_17);
LOCFOR(fun_random_unit_using_18);
extern P YgooSrandomY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSrandomYdefault_random_seed) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL0(1,VARREF(YgooSsystemYtime));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_recent_1) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSrandomYrecent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recent_setter_2) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSrandomYrecent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_3) {
  P Ux_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooSrandomYDrecent_size));
  T0 = CALL2(1,VARREF(YgooScolsScolYfill),T1,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recent_index_4) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSrandomYrecent_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recent_index_setter_5) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSrandomYrecent_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(YgooSrandomYlcg_rand) {
  P prev_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(prev_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmathYT),prev_,YPint((P)171));
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)11213));
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,YPint((P)53125));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_8) {
  P j_,prev_;
  P v2F2644;
  P v1F2643;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(j_, 0);
  ARG(prev_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),j_,VARREF(YgooSrandomYDrecent_size));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSrandomYlcg_rand),prev_);
    v1F2643 = T3;
    T5 = CALL1(1,VARREF(YgooSrandomYlcg_rand),v1F2643);
    v2F2644 = T5;
    T7 = CALL2(1,VARREF(YgooSmathYmod),v1F2643,YPint((P)32768));
    T9 = CALL2(1,VARREF(YgooSmathYmod),v2F2644,YPint((P)16384));
    T8 = CALL2(1,VARREF(YgooSmathYT),T9,YPint((P)32768));
    T6 = CALL2(1,VARREF(YgooSmathYA),T7,T8);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T6,FREEREF(0),j_);
    T11 = CALL2(1,VARREF(YgooSmathYA),j_,YPint((P)1));
    a1 = T11;
    a2 = v2F2644;
    j_ = a1;
    prev_ = a2;
    goto loop;
    T4 = T10;
    T2 = T4;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1751_9) {
  P x_1750_;
  P jF2645;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1750_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1750_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1750_);
    jF2645 = T4;
    CALL1(1,VARREF(YgooSrandomYrandom_29),FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1750_);
    a1 = T6;
    x_1750_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_random_from_10) {
  P seed_;
  P x_1751F2649;
  P loopF2648;
  P aF2647;
  P rF2646;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(seed_, 0);
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YgooSrandomYLrandomG));
  rF2646 = T1;
  T3 = CALL1(1,VARREF(YgooSrandomYrecent),rF2646);
  aF2647 = T3;
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),VARREF(YDmax_int),aF2647,YPint((P)0));
  T4 = FUNSHELL(1,fun_loop_8,2);
  loopF2648 = T4;
  FUNINIT(loopF2648, 2,aF2647,loopF2648);
  T7 = CALL1(1,VARREF(YgooSmathYabs),seed_);
  T6 = CALL2(1,VARREF(YgooSmathYmod),T7,YPint((P)32768));
  T5 = CALL2(0,loopF2648,YPint((P)1),T6);
  T8 = FUNSHELL(1,fun_x_1751_9,2);
  x_1751F2649 = T8;
  FUNINIT(x_1751F2649, 2,rF2646,x_1751F2649);
  T12 = CALL2(1,VARREF(YgooSmathYT),YPint((P)4),VARREF(YgooSrandomYDrecent_size));
  T11 = CALL3(1,VARREF(YgooScolsSrangeYrange),YPint((P)0),VARREF(YgooSmagYLE),T12);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  T9 = CALL1(0,x_1751F2649,T10);
  T2 = rF2646;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_random_11) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = CALL0(1,VARREF(YgooSrandomYdefault_random_seed));
  T0 = CALL1(1,VARREF(YgooSrandomYfab_random_from),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tap_12) {
  P bit_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(bit_, 0);
loop:
  T3 = CALL2(1,VARREF(YgooSmathY_),VARREF(YgooSrandomYDrecent_size),bit_);
  T2 = CALL2(1,VARREF(YgooSmathYA),FREEREF(1),T3);
  T1 = CALL2(1,VARREF(YgooSmathYmod),T2,VARREF(YgooSrandomYDrecent_size));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSrandomYrandom_29) {
  P r_;
  P tapF2652;
  P aF2651;
  P riF2650;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooSrandomYrecent_index),r_);
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmathYmod),T2,VARREF(YgooSrandomYDrecent_size));
  check_type(T1,VARREF(YLintG));
  riF2650 = T1;
  T5 = CALL1(1,VARREF(YgooSrandomYrecent),r_);
  aF2651 = T5;
  CALL2(1,VARREF(YgooSrandomYrecent_index_setter),riF2650,r_);
  T7 = FUNSHELL(1,fun_tap_12,2);
  tapF2652 = T7;
  FUNINIT(tapF2652, 2,aF2651,riF2650);
  T11 = CALL1(1,tapF2652,YPint((P)54));
  T12 = CALL1(1,tapF2652,YPint((P)8));
  T10 = CALL2(1,VARREF(YgooSmathYC),T11,T12);
  T14 = CALL1(1,tapF2652,YPint((P)6));
  T15 = CALL1(1,tapF2652,YPint((P)3));
  T13 = CALL2(1,VARREF(YgooSmathYC),T14,T15);
  T9 = CALL2(1,VARREF(YgooSmathYC),T10,T13);
  T8 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),T9,aF2651,riF2650);
  T6 = T8;
  T4 = T6;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_random_14) {
  P range_;
  P T0;
  P a1;
LINK_STACK();
  ARG(range_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSrandomYrandom_using),range_,VARREF(YgooSrandomYDdefault_random));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_good_value_15) {
  P valueF2653;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YgooSrandomYrandom_29),FREEREF(0));
  valueF2653 = T1;
  T3 = CALL2(1,VARREF(YgooSmagYLE),valueF2653,FREEREF(1));
  if (T3 != YPfalse) {
    T2 = valueF2653;
  } else {
    goto loop;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_random_using_16) {
  P range_,r_;
  P find_good_valueF2656;
  P limitF2655;
  P mF2654;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(range_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),range_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = YPint((P)0);
  } else {
    mF2654 = VARREF(YDmax_int);
    T7 = CALL2(1,VARREF(YgooSmathY_),mF2654,range_);
    T6 = CALL2(1,VARREF(YgooSmathYA),T7,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmathYmod),T6,range_);
    T4 = CALL2(1,VARREF(YgooSmathY_),mF2654,T5);
    limitF2655 = T4;
    T9 = FUNSHELL(1,fun_find_good_value_15,3);
    find_good_valueF2656 = T9;
    FUNINIT(find_good_valueF2656, 3,r_,limitF2655,find_good_valueF2656);
    T11 = CALL0(1,find_good_valueF2656);
    T10 = CALL2(1,VARREF(YgooSmathYmod),T11,range_);
    T8 = T10;
    T3 = T8;
    T2 = T3;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_random_unit_17) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YgooSrandomYrandom_unit_using),VARREF(YgooSrandomYDdefault_random));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_random_unit_using_18) {
  P r_;
  P maxF2657;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  maxF2657 = YPint((P)1000000);
  T4 = CALL2(1,VARREF(YgooSmathYA),maxF2657,YPint((P)1));
  T3 = CALL2(1,VARREF(YgooSrandomYrandom_using),T4,r_);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T3);
  T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),maxF2657);
  T1 = CALL2(1,VARREF(YgooSmathYS),T2,T5);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

P YgooSrandomY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"default-random-seed");
  T0 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  YgooSrandomYdefault_random_seed = YPmet(FUNCODEREF(YgooSrandomYdefault_random_seed),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T1 = YgooSrandomYdefault_random_seed;
  VARSET(YgooSrandomYdefault_random_seed,T1);
  VARSET(YgooSrandomYDrecent_size,YPint((P)54));
  lit_1 = YPPsym((P)"<random>");
  T3 = (P)YPpair(VARREF(YLanyG),Ynil);
  T2 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_1),T3);
  VARSET(YgooSrandomYLrandomG,T2);
  lit_2 = YPPsym((P)"recent");
  lit_3 = YPPsym((P)"_x");
  T4 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_recent_1 = YPmet(FUNCODEREF(fun_recent_1),LITREF(lit_2),T4,ENVNUL,PNUL,YPfalse);
  T7 = BOUNDP(YgooSrandomYrecent);
  if (T7 != YPfalse) {
    T6 = VARREF(YgooSrandomYrecent);
  } else {
    T6 = YPfalse;
  }
  T8 = fun_recent_1;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T8);
  VARSET(YgooSrandomYrecent,T5);
  lit_4 = YPPsym((P)"recent-setter");
  lit_5 = YPPsym((P)"_z");
  T9 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_3)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recent_setter_2 = YPmet(FUNCODEREF(fun_recent_setter_2),LITREF(lit_4),T9,ENVNUL,PNUL,YPfalse);
  T12 = BOUNDP(YgooSrandomYrecent_setter);
  if (T12 != YPfalse) {
    T11 = VARREF(YgooSrandomYrecent_setter);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_recent_setter_2;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooSrandomYrecent_setter,T10);
  T14 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T14,ENVNUL,PNUL,YPfalse);
  T15 = fun_3;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSrandomYLrandomG),VARREF(YgooSrandomYrecent),VARREF(YgooSrandomYrecent_setter),VARREF(YgooScolsSvecYLvecG),T15);
  lit_6 = YPPsym((P)"recent-index");
  T16 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_recent_index_4 = YPmet(FUNCODEREF(fun_recent_index_4),LITREF(lit_6),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YgooSrandomYrecent_index);
  if (T19 != YPfalse) {
    T18 = VARREF(YgooSrandomYrecent_index);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_recent_index_4;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YgooSrandomYrecent_index,T17);
  lit_7 = YPPsym((P)"recent-index-setter");
  T21 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_3)),YPPlist(2,VARREF(YLintG),VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recent_index_setter_5 = YPmet(FUNCODEREF(fun_recent_index_setter_5),LITREF(lit_7),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YgooSrandomYrecent_index_setter);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooSrandomYrecent_index_setter);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_recent_index_setter_5;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooSrandomYrecent_index_setter,T22);
  T26 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T27 = fun_6;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSrandomYLrandomG),VARREF(YgooSrandomYrecent_index),VARREF(YgooSrandomYrecent_index_setter),VARREF(YLintG),T27);
  lit_8 = YPPsym((P)"lcg-rand");
  lit_9 = YPPsym((P)"prev");
  T28 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSrandomYlcg_rand = YPmet(FUNCODEREF(YgooSrandomYlcg_rand),LITREF(lit_8),T28,ENVNUL,PNUL,YPfalse);
  T29 = YgooSrandomYlcg_rand;
  VARSET(YgooSrandomYlcg_rand,T29);
  lit_10 = YPPsym((P)"fab-random-from");
  lit_11 = YPPsym((P)"seed");
  lit_12 = YPPsym((P)"loop");
  lit_13 = YPPsym((P)"j");
  lit_14 = YPPsym((P)"x-1751");
  lit_15 = YPPsym((P)"x-1750");
  T32 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_9)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_8 = YPmet(FUNCODEREF(fun_loop_8),LITREF(lit_12),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1751_9 = YPmet(FUNCODEREF(fun_x_1751_9),LITREF(lit_14),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YgooSrandomYLrandomG),Ynil);
  fun_fab_random_from_10 = YPmet(FUNCODEREF(fun_fab_random_from_10),LITREF(lit_10),T30,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YgooSrandomYfab_random_from);
  if (T35 != YPfalse) {
    T34 = VARREF(YgooSrandomYfab_random_from);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_fab_random_from_10;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YgooSrandomYfab_random_from,T33);
  lit_16 = YPPsym((P)"fab-random");
  T37 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YgooSrandomYLrandomG),Ynil);
  fun_fab_random_11 = YPmet(FUNCODEREF(fun_fab_random_11),LITREF(lit_16),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YgooSrandomYfab_random);
  if (T40 != YPfalse) {
    T39 = VARREF(YgooSrandomYfab_random);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_fab_random_11;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YgooSrandomYfab_random,T38);
  lit_17 = YPPsym((P)"random-29");
  lit_18 = YPPsym((P)"r");
  lit_19 = YPPsym((P)"tap");
  lit_20 = YPPsym((P)"bit");
  T43 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_tap_12 = YPmet(FUNCODEREF(fun_tap_12),LITREF(lit_19),T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(1,LITREF(lit_18)),YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSrandomYrandom_29 = YPmet(FUNCODEREF(YgooSrandomYrandom_29),LITREF(lit_17),T42,ENVNUL,PNUL,YPfalse);
  T44 = YgooSrandomYrandom_29;
  VARSET(YgooSrandomYrandom_29,T44);
  T45 = XCALL0(1,VARREF(YgooSrandomYfab_random));
  VARSET(YgooSrandomYDdefault_random,T45);
  lit_21 = YPPsym((P)"random");
  lit_22 = YPPsym((P)"range");
  T46 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_random_14 = YPmet(FUNCODEREF(fun_random_14),LITREF(lit_21),T46,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YgooSrandomYrandom);
  if (T49 != YPfalse) {
    T48 = VARREF(YgooSrandomYrandom);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_random_14;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YgooSrandomYrandom,T47);
  lit_23 = YPPsym((P)"random-using");
  lit_24 = YPPsym((P)"find-good-value");
  T52 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  fun_find_good_value_15 = YPmet(FUNCODEREF(fun_find_good_value_15),LITREF(lit_24),T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_18)),YPPlist(2,VARREF(YLintG),VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_random_using_16 = YPmet(FUNCODEREF(fun_random_using_16),LITREF(lit_23),T51,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YgooSrandomYrandom_using);
  if (T55 != YPfalse) {
    T54 = VARREF(YgooSrandomYrandom_using);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_random_using_16;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YgooSrandomYrandom_using,T53);
  lit_25 = YPPsym((P)"random-unit");
  T57 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLfloG),Ynil);
  fun_random_unit_17 = YPmet(FUNCODEREF(fun_random_unit_17),LITREF(lit_25),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YgooSrandomYrandom_unit);
  if (T60 != YPfalse) {
    T59 = VARREF(YgooSrandomYrandom_unit);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_random_unit_17;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YgooSrandomYrandom_unit,T58);
  lit_26 = YPPsym((P)"random-unit-using");
  T62 = YPsig(YPPlist(1,LITREF(lit_18)),YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_random_unit_using_18 = YPmet(FUNCODEREF(fun_random_unit_using_18),LITREF(lit_26),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YgooSrandomYrandom_unit_using);
  if (T65 != YPfalse) {
    T64 = VARREF(YgooSrandomYrandom_unit_using);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_random_unit_using_18;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YgooSrandomYrandom_unit_using,T63);
  T67 = YPfalse;
  return T67;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSsystem},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%time", &module_info_gooSboot, "%time"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sin", &module_info_gooSmath, "sin"},
  {">", &module_info_gooSmag, ">"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {">=", &module_info_gooSmag, ">="},
  {"last", &module_info_gooScolsSseq, "last"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"/", &module_info_gooSmath, "/"},
  {"~=", &module_info_gooSmath, "~="},
  {"mod", &module_info_gooSmath, "mod"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"read", &module_info_gooSruntime, "read"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"@len", &module_info_gooSboot, "@len"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<", &module_info_gooSmag, "<"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"@<", &module_info_gooSboot, "@<"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"=", &module_info_gooSmath, "="},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%im", &module_info_gooSboot, "%im"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"when", &module_info_gooSmacros, "when"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"<=", &module_info_gooSmag, "<="},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"|", &module_info_gooSmath, "|"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"round", &module_info_gooSmath, "round"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"not", &module_info_gooSboot, "not"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"t?", &module_info_gooStypes, "t?"},
  {"def", &module_info_gooSboot, "def"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"*", &module_info_gooSmath, "*"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"for", &module_info_gooSmacros, "for"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"log", &module_info_gooSmath, "log"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"error", &module_info_gooSboot, "error"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"asin", &module_info_gooSmath, "asin"},
  {"dp", &module_info_gooSboot, "dp"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"df", &module_info_gooSboot, "df"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%str", &module_info_gooSboot, "%str"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"t=", &module_info_gooStypes, "t="},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"dm", &module_info_gooSboot, "dm"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"time", &module_info_gooSsystem, "time"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"t+", &module_info_gooStypes, "t+"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"%put", &module_info_gooSboot, "%put"},
  {"in", &module_info_gooSioSport, "in"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"head", &module_info_gooSboot, "head"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"ct", &module_info_gooSboot, "ct"},
  {"~", &module_info_gooSmath, "~"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"gets", &module_info_gooSioSport, "gets"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"out", &module_info_gooSioSport, "out"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"lst", &module_info_gooSboot, "lst"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"get", &module_info_gooSioSport, "get"},
  {"abs", &module_info_gooSmath, "abs"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"try", &module_info_gooSboot, "try"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"floor", &module_info_gooSmath, "floor"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"always", &module_info_gooSruntime, "always"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"-", &module_info_gooSmath, "-"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"put", &module_info_gooSioSport, "put"},
  {"use", &module_info_gooSboot, "use"},
  {"%get", &module_info_gooSboot, "%get"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"&", &module_info_gooSmath, "&"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"map", &module_info_gooSmacros, "map"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"cos", &module_info_gooSmath, "cos"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"op", &module_info_gooSmacros, "op"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"atan", &module_info_gooSmath, "atan"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%su", &module_info_gooSboot, "%su"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {">>", &module_info_gooSmath, ">>"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"round/", &module_info_gooSmath, "round/"},
  {"close", &module_info_gooSioSport, "close"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"loc", &module_info_gooSboot, "loc"},
  {"max", &module_info_gooSmag, "max"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"export", &module_info_gooSboot, "export"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"into", &module_info_gooScolsScol, "into"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"~==", &module_info_gooSmath, "~=="},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"nil", &module_info_gooSboot, "nil"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"open", &module_info_gooSioSport, "open"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"min", &module_info_gooSmag, "min"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"^", &module_info_gooSmath, "^"},
  {"@+", &module_info_gooSboot, "@+"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"==", &module_info_gooSmacros, "=="},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"del", &module_info_gooScolsScol, "del"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"match", &module_info_gooSmacros, "match"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"fun", &module_info_gooSboot, "fun"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"do", &module_info_gooSmacros, "do"},
  {"case", &module_info_gooSmacros, "case"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"esc", &module_info_gooSboot, "esc"},
  {"+", &module_info_gooSmath, "+"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"$default-random", CVAR, &YgooSrandomYDdefault_random},
  {"recent", CVAR, &YgooSrandomYrecent},
  {"recent-index-setter", CVAR, &YgooSrandomYrecent_index_setter},
  {"recent-index", CVAR, &YgooSrandomYrecent_index},
  {"fab-random-from", CVAR, &YgooSrandomYfab_random_from},
  {"random-unit-using", CVAR, &YgooSrandomYrandom_unit_using},
  {"---main-0---", PVAR, NULL},
  {"lcg-rand", CVAR, &YgooSrandomYlcg_rand},
  {"default-random-seed", CVAR, &YgooSrandomYdefault_random_seed},
  {"random", CVAR, &YgooSrandomYrandom},
  {"random-using", CVAR, &YgooSrandomYrandom_using},
  {"random-unit", CVAR, &YgooSrandomYrandom_unit},
  {"random-29", CVAR, &YgooSrandomYrandom_29},
  {"fab-random", CVAR, &YgooSrandomYfab_random},
  {"$recent-size", CVAR, &YgooSrandomYDrecent_size},
  {"<random>", CVAR, &YgooSrandomYLrandomG},
  {"recent-setter", CVAR, &YgooSrandomYrecent_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"random-using", "random-using"},
  {"random", "random"},
  {"random-unit-using", "random-unit-using"},
  {"random-unit", "random-unit"},
  {"fab-random", "fab-random"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSrandom;
MODULE_INFO module_info_gooSrandom = {
  "goo/random",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSsystem (void);

/* EXPRESSION: */

extern void load_module_gooSrandom (void);

void load_module_gooSrandom (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSsystem();

  (P)YgooSrandomY___main_0___();

}

/* END OF GENERATED CODE. */
