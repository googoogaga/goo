/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/system */

EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynil,"goo/boot","nil");
DEF(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YgooSsystemYTgooc_extensionT,"goo/system","*gooc-extension*");
DEF(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
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
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
DEF(YgooSsystemYgoo_filenameQ,"goo/system","goo-filename?");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
DEF(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmathYK,"goo/math","|");
DEF(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YLlogG,"goo/boot","<log>");
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
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
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
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSsystemYexe_filename,"goo/system","exe-filename");
DEF(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
DEF(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YgooSsystemYc_filename,"goo/system","c-filename");
DEF(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YgooSsystemYos_name,"goo/system","os-name");
DEF(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YgooSsystemYbase_path,"goo/system","base-path");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
DEF(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YtT,"goo/boot","t*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(YgooSsystemYtime,"goo/system","time");
DEF(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYget,"goo/io/port","get");
DEF(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathY_,"goo/math","-");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
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
DEF(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Ygen_refs,"goo/boot","gen-refs");
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
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YgooSsystemYgooc_filenameQ,"goo/system","gooc-filename?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
DEF(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ynew,"goo/boot","new");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YgooSsystemYfab_path,"goo/system","fab-path");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yobject_class,"goo/boot","object-class");
DEF(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
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
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_50);
DEFLIT(lit_38);
DEFLIT(lit_55);
DEFLIT(lit_82);
DEFLIT(lit_24);
DEFLIT(lit_58);
DEFLIT(lit_5);
DEFLIT(lit_61);
DEFLIT(lit_54);
DEFLIT(lit_97);
DEFLIT(lit_15);
DEFLIT(lit_76);
DEFLIT(lit_64);
DEFLIT(lit_11);
DEFLIT(lit_33);
DEFLIT(lit_23);
DEFLIT(lit_30);
DEFLIT(lit_49);
DEFLIT(lit_45);
DEFLIT(lit_63);
DEFLIT(lit_52);
DEFLIT(lit_17);
DEFLIT(lit_56);
DEFLIT(lit_57);
DEFLIT(lit_91);
DEFLIT(lit_62);
DEFLIT(lit_9);
DEFLIT(lit_73);
DEFLIT(lit_41);
DEFLIT(lit_22);
DEFLIT(lit_10);
DEFLIT(lit_48);
DEFLIT(lit_71);
DEFLIT(lit_83);
DEFLIT(lit_95);
DEFLIT(lit_43);
DEFLIT(lit_75);
DEFLIT(lit_35);
DEFLIT(lit_68);
DEFLIT(lit_51);
DEFLIT(lit_6);
DEFLIT(lit_1);
DEFLIT(lit_40);
DEFLIT(lit_29);
DEFLIT(lit_70);
DEFLIT(lit_81);
DEFLIT(lit_89);
DEFLIT(lit_34);
DEFLIT(lit_8);
DEFLIT(lit_26);
DEFLIT(lit_87);
DEFLIT(lit_21);
DEFLIT(lit_60);
DEFLIT(lit_7);
DEFLIT(lit_46);
DEFLIT(lit_20);
DEFLIT(lit_93);
DEFLIT(lit_59);
DEFLIT(lit_96);
DEFLIT(lit_16);
DEFLIT(lit_72);
DEFLIT(lit_12);
DEFLIT(lit_66);
DEFLIT(lit_79);
DEFLIT(lit_31);
DEFLIT(lit_74);
DEFLIT(lit_84);
DEFLIT(lit_18);
DEFLIT(lit_77);
DEFLIT(lit_28);
DEFLIT(lit_53);
DEFLIT(lit_32);
DEFLIT(lit_39);
DEFLIT(lit_19);
DEFLIT(lit_86);
DEFLIT(lit_25);
DEFLIT(lit_27);
DEFLIT(lit_37);
DEFLIT(lit_4);
DEFLIT(lit_44);
DEFLIT(lit_13);
DEFLIT(lit_2);
DEFLIT(lit_67);
DEFLIT(lit_36);
DEFLIT(lit_42);
DEFLIT(lit_0);
DEFLIT(lit_47);
DEFLIT(lit_69);
DEFLIT(lit_88);
DEFLIT(lit_3);
DEFLIT(lit_65);
DEFLIT(lit_78);
DEFLIT(lit_90);
DEFLIT(lit_14);
DEFLIT(lit_92);
DEFLIT(lit_85);
DEFLIT(lit_80);
DEFLIT(lit_94);

/* FUNCTIONS: */

FUNFOR(YgooSsystemYtime);
LOCFOR(fun_os_name_1);
LOCFOR(fun_os_val_2);
LOCFOR(fun_os_val_setter_3);
LOCFOR(fun_process_id_4);
LOCFOR(fun_loop_5);
LOCFOR(fun_base_path_6);
LOCFOR(fun_fab_path_7);
LOCFOR(fun_add_src_path_8);
LOCFOR(fun_add_goo_root_path_9);
LOCFOR(fun_add_goo_personal_root_path_10);
LOCFOR(fun_add_tmp_path_11);
LOCFOR(fun_add_build_path_12);
FUNFOR(YgooSsystemYgoo_filenameQ);
FUNFOR(YgooSsystemYgoo_filename);
FUNFOR(YgooSsystemYgooc_filenameQ);
FUNFOR(YgooSsystemYgooc_filename);
FUNFOR(YgooSsystemYc_filename);
FUNFOR(YgooSsystemYobj_filename);
FUNFOR(YgooSsystemYexe_filename);
LOCFOR(fun_file_mtime_20);
FUNFOR(YgooSsystemYfile_existsQ);
FUNFOR(YgooSsystemYfile_type);
FUNFOR(YgooSsystemYcreate_directory);
LOCFOR(fun_loop_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_file_copy_29);
FUNFOR(YgooSsystemYso_load);
LOCFOR(fun_31);
FUNFOR(YgooSsystemYpathname_to_components);
LOCFOR(fun_33);
FUNFOR(YgooSsystemYcomponents_to_pathname);
FUNFOR(YgooSsystemYlabel_components);
FUNFOR(YgooSsystemYhierarchical_components);
FUNFOR(YgooSsystemYcomponents_last);
FUNFOR(YgooSsystemYcomponents_basename);
FUNFOR(YgooSsystemYcomponents_parent_directory);
FUNFOR(YgooSsystemYparent_directory);
LOCFOR(fun_ensure_41);
FUNFOR(YgooSsystemYprobe_directory);
FUNFOR(YgooSsystemYfind_goo_file_at);
LOCFOR(fun_x_1414_44);
LOCFOR(fun_45);
FUNFOR(YgooSsystemYfind_goo_file_in_path);
extern P YgooSsystemY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSsystemYtime) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = (P)YPtime();
  T0 = (P)YPib(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_os_name_1) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = (P)YPos_name();
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_os_val_2) {
  P s_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T2 = (P)YPsu(s_);
  T1 = (P)YPos_val(T2);
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_os_val_setter_3) {
  P v_,s_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(s_, 1);
loop:
  T0 = (P)YPsu(v_);
  T1 = (P)YPsu(s_);
  (P)YPos_val_setter(T0,T1);
UNLINK_STACK();
  RET(v_);
}

FUNCODEDEF(fun_process_id_4) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = (P)YgooSsystemYPpid();
  T0 = (P)YPib(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_5) {
  P i_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_16);
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),i_);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
    T3 = CALL2(1,VARREF(YgooSmathYE),T4,T5);
    if (T3 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      T6 = CALL3(1,VARREF(YgooScolsSseqYsub),FREEREF(0),YPint((P)0),T7);
      T2 = T6;
    } else {
      T9 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
      a1 = T9;
      i_ = a1;
      goto loop;
      T2 = T8;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_base_path_6) {
  P filename_;
  P loopF1606;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_5,2);
  loopF1606 = T1;
  FUNINIT(loopF1606, 2,filename_,loopF1606);
  T4 = CALL1(1,VARREF(YgooStypesYlen),filename_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF1606,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_path_7) {
  P dirs_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(dirs_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYjoin),dirs_,VARREF(YgooSsystemYTpath_separatorT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_src_path_8) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_build_rootT),LITREF(lit_30),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_goo_root_path_9) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_goo_personal_root_path_10) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_personal_rootT),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_tmp_path_11) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSsystemYfab_path),LITREF(lit_16),LITREF(lit_34),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_build_path_12) {
  P builddir_,relpath_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(builddir_, 0);
  ARG(relpath_, 1);
loop:
  T0 = CALL4(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_build_rootT),LITREF(lit_37),builddir_,relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgoo_filenameQ) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,VARREF(YgooSsystemYTgoo_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgoo_filename) {
  P name_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYgoo_filenameQ),name_);
  if (T1 != YPfalse) {
    T0 = name_;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTgoo_extensionT));
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgooc_filenameQ) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,VARREF(YgooSsystemYTgooc_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgooc_filename) {
  P name_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYgooc_filenameQ),name_);
  if (T1 != YPfalse) {
    T0 = name_;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTgooc_extensionT));
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYc_filename) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTc_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYobj_filename) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTobj_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYexe_filename) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTexe_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_file_mtime_20) {
  P filename_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T2 = (P)YPsu(filename_);
  T1 = (P)YPfile_mtime(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYfile_existsQ) {
  P filename_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = (P)YPsu(filename_);
  T0 = (P)YPfile_existsQ(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYfile_type) {
  P filename_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = (P)YPsu(filename_);
  T0 = (P)YPfile_type(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYcreate_directory) {
  P filename_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = (P)YPsu(filename_);
  T0 = (P)YPcreate_directory(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_24) {
  P cF1607;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSioSportYget),T2);
  cF1607 = T1;
  T5 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1607);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = BOXVAL(FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYput),T6,cF1607);
    goto loop;
    T3 = T7;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  P loopF1608;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_24,3);
  loopF1608 = T2;
  FUNINIT(loopF1608, 3,FREEREF(2),FREEREF(0),loopF1608);
  T3 = CALL0(0,loopF1608);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_26) {
  P tmpF1609;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF1609 = T1;
  if (tmpF1609 != YPfalse) {
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

FUNCODEDEF(fun_27) {
  P dst_portF1610;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  dst_portF1610 = YPfalse;
  dst_portF1610 = BOXFAB(dst_portF1610);
  T4 = FUNFAB(fun_25,3,dst_portF1610,FREEREF(2),FREEREF(0));
  T5 = FUNFAB(fun_26,1,dst_portF1610);
  T3 = with_cleanup(T4,T5);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_28) {
  P tmpF1611;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF1611 = T1;
  if (tmpF1611 != YPfalse) {
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

FUNCODEDEF(fun_file_copy_29) {
  P src_,dst_;
  P src_portF1612;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
loop:
  src_portF1612 = YPfalse;
  src_portF1612 = BOXFAB(src_portF1612);
  T3 = FUNFAB(fun_27,3,src_portF1612,src_,dst_);
  T4 = FUNFAB(fun_28,1,src_portF1612);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYso_load) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = (P)YPsu(name_);
  T0 = (P)YgooSsystemYPload(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P component_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(component_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_16));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_62);
  } else {
    T3 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_63));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_64);
    } else {
      T5 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_65));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_66);
      } else {
        if (YPtrue != YPfalse) {
          T6 = component_;
        } else {
          T6 = YPfalse;
        }
        T4 = T6;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYpathname_to_components) {
  P pathname_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(pathname_, 0);
loop:
  pathname_ = BOXFAB(pathname_);
  T2 = BOXVAL(pathname_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yerror),LITREF(lit_60));
  } else {
  }
  T6 = BOXVAL(pathname_);
  T5 = CALL1(1,VARREF(YgooScolsSseqYlast),T6);
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,T7);
  if (T4 != YPfalse) {
    T10 = BOXVAL(pathname_);
    T13 = BOXVAL(pathname_);
    T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
    T11 = CALL2(1,VARREF(YgooSmathY_),T12,YPint((P)1));
    T9 = CALL3(1,VARREF(YgooScolsSseqYsub),T10,YPint((P)0),T11);
    T8 = BOXVAL(pathname_) = T9;
  } else {
  }
  T15 = fun_31;
  T17 = BOXVAL(pathname_);
  T18 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
  T16 = CALL2(1,VARREF(YgooScolsSseqYsplit),T17,T18);
  T14 = CALL2(1,VARREF(YgooSmacrosYmap),T15,T16);
UNLINK_STACK();
  RET(T14);
}

FUNCODEDEF(fun_33) {
  P component_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(component_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_62));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_16);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_64));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_70);
    } else {
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_66));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_71);
      } else {
        if (YPtrue != YPfalse) {
          T6 = component_;
        } else {
          T6 = YPfalse;
        }
        T4 = T6;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_to_pathname) {
  P components_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),components_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_69));
  } else {
  }
  T4 = fun_33;
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,components_);
  T2 = CALL2(1,VARREF(YgooScolsSseqYjoin),T3,VARREF(YgooSsystemYTpath_separatorT));
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(YgooSsystemYlabel_components) {
  P components_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T2 = CALL1(1,VARREF(Yhead),components_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),components_);
    T3 = CALL1(1,VARREF(Ylst),T4);
    T0 = T3;
  } else {
    T0 = Ynil;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYhierarchical_components) {
  P components_;
  P resultF1613;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T3 = CALL1(1,VARREF(Yhead),components_);
  T2 = CALL2(1,VARREF(YisaQ),T3,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T4 = CALL1(1,VARREF(Ytail),components_);
    T1 = T4;
  } else {
    T1 = components_;
  }
  resultF1613 = T1;
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),resultF1613);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(Yerror),LITREF(lit_74),components_);
  } else {
  }
  T0 = resultF1613;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_last) {
  P components_;
  P lastF1614;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),components_);
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),components_,T2);
  lastF1614 = T1;
  T4 = CALL2(1,VARREF(YisaQ),lastF1614,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(Yerror),LITREF(lit_76),components_);
  } else {
  }
  T0 = lastF1614;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_basename) {
  P components_;
  P lastF1618;
  P countF1617;
  P hierF1616;
  P labelF1615;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYlabel_components),components_);
  labelF1615 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),components_);
  hierF1616 = T3;
  T5 = CALL1(1,VARREF(YgooStypesYlen),hierF1616);
  countF1617 = T5;
  T7 = CALL1(1,VARREF(YgooSsystemYcomponents_last),hierF1616);
  lastF1618 = T7;
  T9 = CALL2(1,VARREF(YisaQ),lastF1618,VARREF(YLstrG));
  T8 = CALL1(1,VARREF(Ynot),T9);
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(Yerror),LITREF(lit_78),components_);
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSmacrosYEE),countF1617,YPint((P)1));
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YgooSmacrosYcat),labelF1615,LITREF(lit_79));
    T11 = T13;
  } else {
    T16 = CALL2(1,VARREF(YgooSmathY_),countF1617,YPint((P)1));
    T15 = CALL3(1,VARREF(YgooScolsSseqYsub),hierF1616,YPint((P)0),T16);
    T14 = CALL2(1,VARREF(YgooSmacrosYcat),labelF1615,T15);
    T11 = T14;
  }
  T6 = T11;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_parent_directory) {
  P components_;
  P lastF1619;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_last),components_);
  lastF1619 = T1;
  T3 = CALL2(1,VARREF(YisaQ),lastF1619,VARREF(YLstrG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),components_);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),lastF1619,LITREF(lit_62));
    if (T6 != YPfalse) {
      T7 = CALL1(1,VARREF(Yerror),LITREF(lit_81));
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL2(1,VARREF(YgooSmacrosYcat),components_,LITREF(lit_82));
        T8 = T9;
      } else {
        T8 = YPfalse;
      }
      T5 = T8;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYparent_directory) {
  P name_;
  P componentsF1620;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF1620 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYcomponents_parent_directory),componentsF1620);
  T2 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ensure_41) {
  P c_;
  P nF1621;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),FREEREF(0),c_);
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T2);
  nF1621 = T1;
  T4 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),nF1621);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooSsystemYfile_type),nF1621);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,LITREF(lit_87));
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T9 = CALL2(1,VARREF(Yerror),LITREF(lit_88),nF1621);
      T5 = T9;
    } else {
      T5 = YPfalse;
    }
    T3 = T5;
  } else {
    T12 = CALL1(1,VARREF(YgooSsystemYcomponents_last),c_);
    T11 = CALL2(1,VARREF(YisaQ),T12,VARREF(YLstrG));
    if (T11 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),c_);
      CALL1(0,FREEREF(1),T13);
      T14 = CALL1(1,VARREF(YgooSsystemYcreate_directory),nF1621);
      T10 = T14;
    } else {
      if (YPtrue != YPfalse) {
        T16 = CALL2(1,VARREF(Yerror),LITREF(lit_89),nF1621);
        T15 = T16;
      } else {
        T15 = YPfalse;
      }
      T10 = T15;
    }
    T3 = T10;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYprobe_directory) {
  P name_;
  P ensureF1625;
  P hierF1624;
  P labelF1623;
  P componentsF1622;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF1622 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYlabel_components),componentsF1622);
  labelF1623 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),componentsF1622);
  hierF1624 = T5;
  T6 = FUNSHELL(1,fun_ensure_41,2);
  ensureF1625 = T6;
  FUNINIT(ensureF1625, 2,labelF1623,ensureF1625);
  T7 = CALL1(0,ensureF1625,hierF1624);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYfind_goo_file_at) {
  P fname_,path_;
  P tmpF1633;
  P tmpF1632;
  P tmpF1631;
  P gooc_foundF1630;
  P goo_foundF1629;
  P gooc_fileF1628;
  P goo_fileF1627;
  P base_fileF1626;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1,a2;
LINK_STACK();
  ARG(fname_, 0);
  ARG(path_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfab_path),path_,fname_);
  base_fileF1626 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYgoo_filename),base_fileF1626);
  goo_fileF1627 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYgooc_filename),base_fileF1626);
  gooc_fileF1628 = T5;
  T7 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),goo_fileF1627);
  goo_foundF1629 = T7;
  T9 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),gooc_fileF1628);
  gooc_foundF1630 = T9;
  T12 = CALL1(1,VARREF(YgooSsystemYgoo_filenameQ),base_fileF1626);
  tmpF1631 = T12;
  if (tmpF1631 != YPfalse) {
    T13 = goo_foundF1629;
  } else {
    T13 = YPfalse;
  }
  T11 = T13;
  if (T11 != YPfalse) {
    T10 = goo_fileF1627;
  } else {
    T16 = CALL1(1,VARREF(YgooSsystemYgooc_filenameQ),base_fileF1626);
    tmpF1632 = T16;
    if (tmpF1632 != YPfalse) {
      T17 = gooc_foundF1630;
    } else {
      T17 = YPfalse;
    }
    T15 = T17;
    if (T15 != YPfalse) {
      T14 = gooc_fileF1628;
    } else {
      tmpF1633 = goo_foundF1629;
      if (tmpF1633 != YPfalse) {
        T20 = gooc_foundF1630;
      } else {
        T20 = YPfalse;
      }
      T19 = T20;
      if (T19 != YPfalse) {
        T23 = CALL1(1,VARREF(YgooSsystemYfile_mtime),goo_fileF1627);
        T24 = CALL1(1,VARREF(YgooSsystemYfile_mtime),gooc_fileF1628);
        T22 = CALL2(1,VARREF(YgooSmagYG),T23,T24);
        if (T22 != YPfalse) {
          T21 = goo_fileF1627;
        } else {
          T21 = gooc_fileF1628;
        }
        T18 = T21;
      } else {
        if (gooc_foundF1630 != YPfalse) {
          T25 = gooc_fileF1628;
        } else {
          if (goo_foundF1629 != YPfalse) {
            T26 = goo_fileF1627;
          } else {
            if (YPtrue != YPfalse) {
              T27 = YPfalse;
            } else {
              T27 = YPfalse;
            }
            T26 = T27;
          }
          T25 = T26;
        }
        T18 = T25;
      }
      T14 = T18;
    }
    T10 = T14;
  }
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1414_44) {
  P x_1413_;
  P fileF1635;
  P pathF1634;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1413_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1413_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1413_);
    pathF1634 = T4;
    T6 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_at),FREEREF(0),pathF1634);
    fileF1635 = T6;
    if (fileF1635 != YPfalse) {
      T7 = CALL1(1,FREEREF(1),fileF1635);
    } else {
    }
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1413_);
    a1 = T9;
    x_1413_ = a1;
    goto loop;
    T5 = T8;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P return_;
  P x_1414F1636;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(1,fun_x_1414_44,3);
  x_1414F1636 = T0;
  FUNINIT(x_1414F1636, 3,FREEREF(0),return_,x_1414F1636);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(1));
  T1 = CALL1(0,x_1414F1636,T2);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YgooSsystemYfind_goo_file_in_path) {
  P fname_,search_paths_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(fname_, 0);
  ARG(search_paths_, 1);
loop:
  T1 = FUNFAB(fun_45,2,fname_,search_paths_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P YgooSsystemY___main_0___() {
  P env_rootF1638;
  P env_rootF1637;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"time");
  T0 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSsystemYtime = YPmet(FUNCODEREF(YgooSsystemYtime),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T1 = YgooSsystemYtime;
  VARSET(YgooSsystemYtime,T1);
  lit_1 = YPPsym((P)"os-name");
  T2 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_os_name_1 = YPmet(FUNCODEREF(fun_os_name_1),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YgooSsystemYos_name);
  if (T5 != YPfalse) {
    T4 = VARREF(YgooSsystemYos_name);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_os_name_1;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YgooSsystemYos_name,T3);
  lit_2 = YPPsym((P)"os-val");
  lit_3 = YPPsym((P)"s");
  T7 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_os_val_2 = YPmet(FUNCODEREF(fun_os_val_2),LITREF(lit_2),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YgooSsystemYos_val);
  if (T10 != YPfalse) {
    T9 = VARREF(YgooSsystemYos_val);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_os_val_2;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YgooSsystemYos_val,T8);
  lit_4 = YPPsym((P)"os-val-setter");
  lit_5 = YPPsym((P)"v");
  T12 = YPsig(YPPlist(2,LITREF(lit_5),LITREF(lit_3)),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_os_val_setter_3 = YPmet(FUNCODEREF(fun_os_val_setter_3),LITREF(lit_4),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YgooSsystemYos_val_setter);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooSsystemYos_val_setter);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_os_val_setter_3;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooSsystemYos_val_setter,T13);
  lit_6 = YPPsym((P)"process-id");
  T17 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_process_id_4 = YPmet(FUNCODEREF(fun_process_id_4),LITREF(lit_6),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooSsystemYprocess_id);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooSsystemYprocess_id);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_process_id_4;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooSsystemYprocess_id,T18);
  lit_7 = YPsb((P)"linux");
  lit_8 = YPsb((P)"/");
  lit_9 = YPsb((P)"win32");
  lit_10 = YPsb((P)"\\");
  lit_11 = YPsb((P)"/");
  T24 = XCALL0(1,VARREF(YgooSsystemYos_name));
  T23 = XCALL2(1,VARREF(YgooSmathYE),T24,LITREF(lit_7));
  if (T23 != YPfalse) {
    T22 = LITREF(lit_8);
  } else {
    T27 = XCALL0(1,VARREF(YgooSsystemYos_name));
    T26 = XCALL2(1,VARREF(YgooSmathYE),T27,LITREF(lit_9));
    if (T26 != YPfalse) {
      T25 = LITREF(lit_10);
    } else {
      if (YPtrue != YPfalse) {
        T28 = LITREF(lit_11);
      } else {
        T28 = YPfalse;
      }
      T25 = T28;
    }
    T22 = T25;
  }
  VARSET(YgooSsystemYTpath_separatorT,T22);
  lit_12 = YPPsym((P)"base-path");
  lit_13 = YPPsym((P)"filename");
  lit_14 = YPPsym((P)"loop");
  lit_15 = YPPsym((P)"i");
  lit_16 = YPsb((P)"");
  T30 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_5 = YPmet(FUNCODEREF(fun_loop_5),LITREF(lit_14),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_base_path_6 = YPmet(FUNCODEREF(fun_base_path_6),LITREF(lit_12),T29,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YgooSsystemYbase_path);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooSsystemYbase_path);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_base_path_6;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooSsystemYbase_path,T31);
  lit_17 = YPPsym((P)"fab-path");
  lit_18 = YPPsym((P)"dirs");
  T35 = YPsig(YPPlist(1,LITREF(lit_18)),Ynil,YPtrue,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_fab_path_7 = YPmet(FUNCODEREF(fun_fab_path_7),LITREF(lit_17),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooSsystemYfab_path);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooSsystemYfab_path);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_fab_path_7;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooSsystemYfab_path,T36);
  lit_19 = YPsb((P)"GOO_ROOT");
  T41 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_19));
  env_rootF1637 = T41;
  T43 = XCALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF1637);
  if (T43 != YPfalse) {
    T45 = (P)YgooSsystemYPdefault_goo_root();
    T44 = (P)YPsb(T45);
    T42 = T44;
  } else {
    T42 = env_rootF1637;
  }
  T40 = T42;
  VARSET(YgooSsystemYTgoo_rootT,T40);
  lit_20 = YPsb((P)"HOME");
  lit_21 = YPsb((P)".goo");
  T47 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_20));
  T46 = XCALL2(1,VARREF(YgooSsystemYfab_path),T47,LITREF(lit_21));
  VARSET(YgooSsystemYTgoo_personal_rootT,T46);
  lit_22 = YPsb((P)"mods");
  lit_23 = YPsb((P)"local");
  lit_24 = YPsb((P)"mods");
  lit_25 = YPsb((P)"mods");
  T49 = XCALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_personal_rootT),LITREF(lit_22));
  T50 = XCALL3(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),LITREF(lit_23),LITREF(lit_24));
  T51 = XCALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),LITREF(lit_25));
  T48 = XCALL4(1,VARREF(Ylst),LITREF(lit_16),T49,T50,T51);
  VARSET(YgooSsystemYTmodule_search_pathT,T48);
  lit_26 = YPsb((P)"GOO_BUILD_ROOT");
  lit_27 = YPsb((P)".");
  T53 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_26));
  env_rootF1638 = T53;
  T55 = XCALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF1638);
  if (T55 != YPfalse) {
    T54 = LITREF(lit_27);
  } else {
    T54 = env_rootF1638;
  }
  T52 = T54;
  VARSET(YgooSsystemYTgoo_build_rootT,T52);
  lit_28 = YPPsym((P)"add-src-path");
  lit_29 = YPPsym((P)"relpath");
  lit_30 = YPsb((P)"src");
  T56 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_src_path_8 = YPmet(FUNCODEREF(fun_add_src_path_8),LITREF(lit_28),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YgooSsystemYadd_src_path);
  if (T59 != YPfalse) {
    T58 = VARREF(YgooSsystemYadd_src_path);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_add_src_path_8;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YgooSsystemYadd_src_path,T57);
  lit_31 = YPPsym((P)"add-goo-root-path");
  T61 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_root_path_9 = YPmet(FUNCODEREF(fun_add_goo_root_path_9),LITREF(lit_31),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YgooSsystemYadd_goo_root_path);
  if (T64 != YPfalse) {
    T63 = VARREF(YgooSsystemYadd_goo_root_path);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_add_goo_root_path_9;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YgooSsystemYadd_goo_root_path,T62);
  lit_32 = YPPsym((P)"add-goo-personal-root-path");
  T66 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_personal_root_path_10 = YPmet(FUNCODEREF(fun_add_goo_personal_root_path_10),LITREF(lit_32),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YgooSsystemYadd_goo_personal_root_path);
  if (T69 != YPfalse) {
    T68 = VARREF(YgooSsystemYadd_goo_personal_root_path);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_add_goo_personal_root_path_10;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YgooSsystemYadd_goo_personal_root_path,T67);
  lit_33 = YPPsym((P)"add-tmp-path");
  lit_34 = YPsb((P)"tmp");
  T71 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_tmp_path_11 = YPmet(FUNCODEREF(fun_add_tmp_path_11),LITREF(lit_33),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YgooSsystemYadd_tmp_path);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooSsystemYadd_tmp_path);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_add_tmp_path_11;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YgooSsystemYadd_tmp_path,T72);
  lit_35 = YPPsym((P)"add-build-path");
  lit_36 = YPPsym((P)"builddir");
  lit_37 = YPsb((P)"c");
  T76 = YPsig(YPPlist(2,LITREF(lit_36),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_build_path_12 = YPmet(FUNCODEREF(fun_add_build_path_12),LITREF(lit_35),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YgooSsystemYadd_build_path);
  if (T79 != YPfalse) {
    T78 = VARREF(YgooSsystemYadd_build_path);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_add_build_path_12;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YgooSsystemYadd_build_path,T77);
  lit_38 = YPsb((P)".goo");
  VARSET(YgooSsystemYTgoo_extensionT,LITREF(lit_38));
  lit_39 = YPsb((P)".gooc");
  VARSET(YgooSsystemYTgooc_extensionT,LITREF(lit_39));
  lit_40 = YPsb((P)".c");
  VARSET(YgooSsystemYTc_extensionT,LITREF(lit_40));
  lit_41 = YPsb((P)".o");
  VARSET(YgooSsystemYTobj_extensionT,LITREF(lit_41));
  VARSET(YgooSsystemYTexe_extensionT,LITREF(lit_16));
  lit_42 = YPPsym((P)"goo-filename?");
  lit_43 = YPPsym((P)"name");
  T81 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgoo_filenameQ = YPmet(FUNCODEREF(YgooSsystemYgoo_filenameQ),LITREF(lit_42),T81,ENVNUL,PNUL,YPfalse);
  T82 = YgooSsystemYgoo_filenameQ;
  VARSET(YgooSsystemYgoo_filenameQ,T82);
  lit_44 = YPPsym((P)"goo-filename");
  T83 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgoo_filename = YPmet(FUNCODEREF(YgooSsystemYgoo_filename),LITREF(lit_44),T83,ENVNUL,PNUL,YPfalse);
  T84 = YgooSsystemYgoo_filename;
  VARSET(YgooSsystemYgoo_filename,T84);
  lit_45 = YPPsym((P)"gooc-filename?");
  T85 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgooc_filenameQ = YPmet(FUNCODEREF(YgooSsystemYgooc_filenameQ),LITREF(lit_45),T85,ENVNUL,PNUL,YPfalse);
  T86 = YgooSsystemYgooc_filenameQ;
  VARSET(YgooSsystemYgooc_filenameQ,T86);
  lit_46 = YPPsym((P)"gooc-filename");
  T87 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgooc_filename = YPmet(FUNCODEREF(YgooSsystemYgooc_filename),LITREF(lit_46),T87,ENVNUL,PNUL,YPfalse);
  T88 = YgooSsystemYgooc_filename;
  VARSET(YgooSsystemYgooc_filename,T88);
  lit_47 = YPPsym((P)"c-filename");
  T89 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYc_filename = YPmet(FUNCODEREF(YgooSsystemYc_filename),LITREF(lit_47),T89,ENVNUL,PNUL,YPfalse);
  T90 = YgooSsystemYc_filename;
  VARSET(YgooSsystemYc_filename,T90);
  lit_48 = YPPsym((P)"obj-filename");
  T91 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYobj_filename = YPmet(FUNCODEREF(YgooSsystemYobj_filename),LITREF(lit_48),T91,ENVNUL,PNUL,YPfalse);
  T92 = YgooSsystemYobj_filename;
  VARSET(YgooSsystemYobj_filename,T92);
  lit_49 = YPPsym((P)"exe-filename");
  T93 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYexe_filename = YPmet(FUNCODEREF(YgooSsystemYexe_filename),LITREF(lit_49),T93,ENVNUL,PNUL,YPfalse);
  T94 = YgooSsystemYexe_filename;
  VARSET(YgooSsystemYexe_filename,T94);
  lit_50 = YPPsym((P)"file-mtime");
  T95 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_file_mtime_20 = YPmet(FUNCODEREF(fun_file_mtime_20),LITREF(lit_50),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YgooSsystemYfile_mtime);
  if (T98 != YPfalse) {
    T97 = VARREF(YgooSsystemYfile_mtime);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_file_mtime_20;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YgooSsystemYfile_mtime,T96);
  lit_51 = YPPsym((P)"file-exists?");
  T100 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYfile_existsQ = YPmet(FUNCODEREF(YgooSsystemYfile_existsQ),LITREF(lit_51),T100,ENVNUL,PNUL,YPfalse);
  T101 = YgooSsystemYfile_existsQ;
  VARSET(YgooSsystemYfile_existsQ,T101);
  lit_52 = YPPsym((P)"file-type");
  T102 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  YgooSsystemYfile_type = YPmet(FUNCODEREF(YgooSsystemYfile_type),LITREF(lit_52),T102,ENVNUL,PNUL,YPfalse);
  T103 = YgooSsystemYfile_type;
  VARSET(YgooSsystemYfile_type,T103);
  lit_53 = YPPsym((P)"create-directory");
  T104 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcreate_directory = YPmet(FUNCODEREF(YgooSsystemYcreate_directory),LITREF(lit_53),T104,ENVNUL,PNUL,YPfalse);
  T105 = YgooSsystemYcreate_directory;
  VARSET(YgooSsystemYcreate_directory,T105);
  lit_54 = YPPsym((P)"file-copy");
  lit_55 = YPPsym((P)"src");
  lit_56 = YPPsym((P)"dst");
  T111 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_24 = YPmet(FUNCODEREF(fun_loop_24),LITREF(lit_14),T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(2,LITREF(lit_55),LITREF(lit_56)),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_file_copy_29 = YPmet(FUNCODEREF(fun_file_copy_29),LITREF(lit_54),T106,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YgooSsystemYfile_copy);
  if (T114 != YPfalse) {
    T113 = VARREF(YgooSsystemYfile_copy);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_file_copy_29;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YgooSsystemYfile_copy,T112);
  lit_57 = YPPsym((P)"so-load");
  T116 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYso_load = YPmet(FUNCODEREF(YgooSsystemYso_load),LITREF(lit_57),T116,ENVNUL,PNUL,YPfalse);
  T117 = YgooSsystemYso_load;
  VARSET(YgooSsystemYso_load,T117);
  lit_58 = YPPsym((P)"pathname-to-components");
  lit_59 = YPPsym((P)"pathname");
  lit_60 = YPsb((P)"Can't convert empty an pathname to components.\n");
  lit_61 = YPPsym((P)"component");
  lit_62 = YPPsym((P)"root");
  lit_63 = YPsb((P)"..");
  lit_64 = YPPsym((P)"up");
  lit_65 = YPsb((P)".");
  lit_66 = YPPsym((P)"current");
  T119 = YPsig(YPPlist(1,LITREF(lit_61)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(YPPlist(1,LITREF(lit_59)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYpathname_to_components = YPmet(FUNCODEREF(YgooSsystemYpathname_to_components),LITREF(lit_58),T118,ENVNUL,PNUL,YPfalse);
  T120 = YgooSsystemYpathname_to_components;
  VARSET(YgooSsystemYpathname_to_components,T120);
  lit_67 = YPPsym((P)"components-to-pathname");
  lit_68 = YPPsym((P)"components");
  lit_69 = YPsb((P)"Can't convert empty components to a pathname.\n");
  lit_70 = YPsb((P)"..");
  lit_71 = YPsb((P)".");
  T122 = YPsig(YPPlist(1,LITREF(lit_61)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(YPPlist(1,LITREF(lit_68)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYcomponents_to_pathname = YPmet(FUNCODEREF(YgooSsystemYcomponents_to_pathname),LITREF(lit_67),T121,ENVNUL,PNUL,YPfalse);
  T123 = YgooSsystemYcomponents_to_pathname;
  VARSET(YgooSsystemYcomponents_to_pathname,T123);
  lit_72 = YPPsym((P)"label-components");
  T124 = YPsig(YPPlist(1,LITREF(lit_68)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYlabel_components = YPmet(FUNCODEREF(YgooSsystemYlabel_components),LITREF(lit_72),T124,ENVNUL,PNUL,YPfalse);
  T125 = YgooSsystemYlabel_components;
  VARSET(YgooSsystemYlabel_components,T125);
  lit_73 = YPPsym((P)"hierarchical-components");
  lit_74 = YPsb((P)"Hierarchical portion of %= must not be empty.\n");
  T126 = YPsig(YPPlist(1,LITREF(lit_68)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYhierarchical_components = YPmet(FUNCODEREF(YgooSsystemYhierarchical_components),LITREF(lit_73),T126,ENVNUL,PNUL,YPfalse);
  T127 = YgooSsystemYhierarchical_components;
  VARSET(YgooSsystemYhierarchical_components,T127);
  lit_75 = YPPsym((P)"components-last");
  lit_76 = YPsb((P)"No filename in %=.\n");
  T128 = YPsig(YPPlist(1,LITREF(lit_68)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcomponents_last = YPmet(FUNCODEREF(YgooSsystemYcomponents_last),LITREF(lit_75),T128,ENVNUL,PNUL,YPfalse);
  T129 = YgooSsystemYcomponents_last;
  VARSET(YgooSsystemYcomponents_last,T129);
  lit_77 = YPPsym((P)"components-basename");
  lit_78 = YPsb((P)"Can't compute basename of %=\n.");
  lit_79 = YPPlist(1,YPPsym((P)"current"));
  T130 = YPsig(YPPlist(1,LITREF(lit_68)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_basename = YPmet(FUNCODEREF(YgooSsystemYcomponents_basename),LITREF(lit_77),T130,ENVNUL,PNUL,YPfalse);
  T131 = YgooSsystemYcomponents_basename;
  VARSET(YgooSsystemYcomponents_basename,T131);
  lit_80 = YPPsym((P)"components-parent-directory");
  lit_81 = YPsb((P)"Can't calculate parent of root directory");
  lit_82 = YPPlist(1,YPPsym((P)"up"));
  T132 = YPsig(YPPlist(1,LITREF(lit_68)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_parent_directory = YPmet(FUNCODEREF(YgooSsystemYcomponents_parent_directory),LITREF(lit_80),T132,ENVNUL,PNUL,YPfalse);
  T133 = YgooSsystemYcomponents_parent_directory;
  VARSET(YgooSsystemYcomponents_parent_directory,T133);
  lit_83 = YPPsym((P)"parent-directory");
  T134 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYparent_directory = YPmet(FUNCODEREF(YgooSsystemYparent_directory),LITREF(lit_83),T134,ENVNUL,PNUL,YPfalse);
  T135 = YgooSsystemYparent_directory;
  VARSET(YgooSsystemYparent_directory,T135);
  lit_84 = YPPsym((P)"probe-directory");
  lit_85 = YPPsym((P)"ensure");
  lit_86 = YPPsym((P)"c");
  lit_87 = YPPsym((P)"directory");
  lit_88 = YPsb((P)"%s is not a directory.\n");
  lit_89 = YPsb((P)"Don't know how to create the directory %s.\n");
  T137 = YPsig(YPPlist(1,LITREF(lit_86)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ensure_41 = YPmet(FUNCODEREF(fun_ensure_41),LITREF(lit_85),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYprobe_directory = YPmet(FUNCODEREF(YgooSsystemYprobe_directory),LITREF(lit_84),T136,ENVNUL,PNUL,YPfalse);
  T138 = YgooSsystemYprobe_directory;
  VARSET(YgooSsystemYprobe_directory,T138);
  lit_90 = YPPsym((P)"find-goo-file-at");
  lit_91 = YPPsym((P)"fname");
  lit_92 = YPPsym((P)"path");
  T140 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T139 = YPsig(YPPlist(2,LITREF(lit_91),LITREF(lit_92)),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),T140,Ynil);
  YgooSsystemYfind_goo_file_at = YPmet(FUNCODEREF(YgooSsystemYfind_goo_file_at),LITREF(lit_90),T139,ENVNUL,PNUL,YPfalse);
  T141 = YgooSsystemYfind_goo_file_at;
  VARSET(YgooSsystemYfind_goo_file_at,T141);
  lit_93 = YPPsym((P)"find-goo-file-in-path");
  lit_94 = YPPsym((P)"search-paths");
  lit_95 = YPPsym((P)"return");
  lit_96 = YPPsym((P)"x-1414");
  lit_97 = YPPsym((P)"x-1413");
  T145 = YPsig(YPPlist(1,LITREF(lit_97)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1414_44 = YPmet(FUNCODEREF(fun_x_1414_44),LITREF(lit_96),T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T142 = YPsig(YPPlist(2,LITREF(lit_91),LITREF(lit_94)),YPPlist(2,VARREF(YLstrG),VARREF(YLcolG)),YPfalse,YPint((P)2),T143,Ynil);
  YgooSsystemYfind_goo_file_in_path = YPmet(FUNCODEREF(YgooSsystemYfind_goo_file_in_path),LITREF(lit_93),T142,ENVNUL,PNUL,YPfalse);
  T146 = YgooSsystemYfind_goo_file_in_path;
  VARSET(YgooSsystemYfind_goo_file_in_path,T146);
  T147 = YPfalse;
  return T147;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScolx;
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
  {&module_info_gooScolsSstr},
  {&module_info_gooSboot},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"match", &module_info_gooSmacros, "match"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"do", &module_info_gooSmacros, "do"},
  {"loc", &module_info_gooSboot, "loc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"fun", &module_info_gooSboot, "fun"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"case", &module_info_gooSmacros, "case"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"+", &module_info_gooSmath, "+"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nil", &module_info_gooSboot, "nil"},
  {">", &module_info_gooSmag, ">"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"max", &module_info_gooSmag, "max"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
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
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"=", &module_info_gooSmath, "="},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"ct", &module_info_gooSboot, "ct"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"when", &module_info_gooSmacros, "when"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"min", &module_info_gooSmag, "min"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%su", &module_info_gooSboot, "%su"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%rep", &module_info_gooSboot, "%rep"},
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
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%time", &module_info_gooSboot, "%time"},
  {"dss", &module_info_gooSboot, "dss"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"for", &module_info_gooSmacros, "for"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"log", &module_info_gooSmath, "log"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"use", &module_info_gooSboot, "use"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<=", &module_info_gooSmag, "<="},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"error", &module_info_gooSboot, "error"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"unless", &module_info_gooSmacros, "unless"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"quote", &module_info_gooSboot, "quote"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"col", &module_info_gooScolsScol, "col"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"df", &module_info_gooSboot, "df"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"t=", &module_info_gooStypes, "t="},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dg", &module_info_gooSboot, "dg"},
  {"ds", &module_info_gooSboot, "ds"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"dm", &module_info_gooSboot, "dm"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"while", &module_info_gooSmacros, "while"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"def", &module_info_gooSboot, "def"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"t+", &module_info_gooStypes, "t+"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"in", &module_info_gooSioSport, "in"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"and", &module_info_gooSmacros, "and"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"head", &module_info_gooSboot, "head"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*", &module_info_gooSmath, "*"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"~", &module_info_gooSmath, "~"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"floor", &module_info_gooSmath, "floor"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%put", &module_info_gooSboot, "%put"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"into", &module_info_gooScolsScol, "into"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"gets", &module_info_gooSioSport, "gets"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"out", &module_info_gooSioSport, "out"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"any?", &module_info_gooStypes, "any?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"t*", &module_info_gooSboot, "t*"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"set", &module_info_gooSboot, "set"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
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
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"always", &module_info_gooSruntime, "always"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"-", &module_info_gooSmath, "-"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"put", &module_info_gooSioSport, "put"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"&", &module_info_gooSmath, "&"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"map", &module_info_gooSmacros, "map"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"find", &module_info_gooScolsScol, "find"},
  {"@len", &module_info_gooSboot, "@len"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"cos", &module_info_gooSmath, "cos"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"%im", &module_info_gooSboot, "%im"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"op", &module_info_gooSmacros, "op"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"atan", &module_info_gooSmath, "atan"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {">>", &module_info_gooSmath, ">>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"close", &module_info_gooSioSport, "close"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"try", &module_info_gooSboot, "try"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"export", &module_info_gooSboot, "export"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
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
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"or", &module_info_gooSmacros, "or"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"new", &module_info_gooSboot, "new"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
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
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"1+", &module_info_gooSmath, "1+"},
  {"==", &module_info_gooSmacros, "=="},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"label-components", CVAR, &YgooSsystemYlabel_components},
  {"pathname-to-components", CVAR, &YgooSsystemYpathname_to_components},
  {"*path-separator*", CVAR, &YgooSsystemYTpath_separatorT},
  {"*gooc-extension*", CVAR, &YgooSsystemYTgooc_extensionT},
  {"*exe-extension*", CVAR, &YgooSsystemYTexe_extensionT},
  {"goo-filename?", CVAR, &YgooSsystemYgoo_filenameQ},
  {"os-val-setter", CVAR, &YgooSsystemYos_val_setter},
  {"probe-directory", CVAR, &YgooSsystemYprobe_directory},
  {"so-load", CVAR, &YgooSsystemYso_load},
  {"*goo-build-root*", CVAR, &YgooSsystemYTgoo_build_rootT},
  {"%compile", PVAR, NULL},
  {"add-src-path", CVAR, &YgooSsystemYadd_src_path},
  {"exe-filename", CVAR, &YgooSsystemYexe_filename},
  {"find-goo-file-in-path", CVAR, &YgooSsystemYfind_goo_file_in_path},
  {"find-goo-file-at", CVAR, &YgooSsystemYfind_goo_file_at},
  {"c-filename", CVAR, &YgooSsystemYc_filename},
  {"parent-directory", CVAR, &YgooSsystemYparent_directory},
  {"file-mtime", CVAR, &YgooSsystemYfile_mtime},
  {"components-to-pathname", CVAR, &YgooSsystemYcomponents_to_pathname},
  {"add-build-path", CVAR, &YgooSsystemYadd_build_path},
  {"os-name", CVAR, &YgooSsystemYos_name},
  {"os-val", CVAR, &YgooSsystemYos_val},
  {"base-path", CVAR, &YgooSsystemYbase_path},
  {"*module-search-path*", CVAR, &YgooSsystemYTmodule_search_pathT},
  {"---main-0---", PVAR, NULL},
  {"obj-filename", CVAR, &YgooSsystemYobj_filename},
  {"components-parent-directory", CVAR, &YgooSsystemYcomponents_parent_directory},
  {"file-copy", CVAR, &YgooSsystemYfile_copy},
  {"*c-extension*", CVAR, &YgooSsystemYTc_extensionT},
  {"%pid", PVAR, NULL},
  {"time", CVAR, &YgooSsystemYtime},
  {"add-tmp-path", CVAR, &YgooSsystemYadd_tmp_path},
  {"*goo-personal-root*", CVAR, &YgooSsystemYTgoo_personal_rootT},
  {"*goo-root*", CVAR, &YgooSsystemYTgoo_rootT},
  {"components-basename", CVAR, &YgooSsystemYcomponents_basename},
  {"create-directory", CVAR, &YgooSsystemYcreate_directory},
  {"%default-goo-root", PVAR, NULL},
  {"gooc-filename", CVAR, &YgooSsystemYgooc_filename},
  {"components-last", CVAR, &YgooSsystemYcomponents_last},
  {"add-goo-personal-root-path", CVAR, &YgooSsystemYadd_goo_personal_root_path},
  {"file-type", CVAR, &YgooSsystemYfile_type},
  {"*goo-extension*", CVAR, &YgooSsystemYTgoo_extensionT},
  {"gooc-filename?", CVAR, &YgooSsystemYgooc_filenameQ},
  {"process-id", CVAR, &YgooSsystemYprocess_id},
  {"%load", PVAR, NULL},
  {"hierarchical-components", CVAR, &YgooSsystemYhierarchical_components},
  {"*obj-extension*", CVAR, &YgooSsystemYTobj_extensionT},
  {"file-exists?", CVAR, &YgooSsystemYfile_existsQ},
  {"fab-path", CVAR, &YgooSsystemYfab_path},
  {"add-goo-root-path", CVAR, &YgooSsystemYadd_goo_root_path},
  {"goo-filename", CVAR, &YgooSsystemYgoo_filename},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"label-components", "label-components"},
  {"pathname-to-components", "pathname-to-components"},
  {"*path-separator*", "*path-separator*"},
  {"*exe-extension*", "*exe-extension*"},
  {"find-goo-file-in-path", "find-goo-file-in-path"},
  {"os-val-setter", "os-val-setter"},
  {"file-mtime", "file-mtime"},
  {"probe-directory", "probe-directory"},
  {"so-load", "so-load"},
  {"*goo-build-root*", "*goo-build-root*"},
  {"%compile", "%compile"},
  {"add-src-path", "add-src-path"},
  {"exe-filename", "exe-filename"},
  {"parent-directory", "parent-directory"},
  {"components-basename", "components-basename"},
  {"components-to-pathname", "components-to-pathname"},
  {"os-val", "os-val"},
  {"*module-search-path*", "*module-search-path*"},
  {"add-build-path", "add-build-path"},
  {"obj-filename", "obj-filename"},
  {"components-parent-directory", "components-parent-directory"},
  {"os-name", "os-name"},
  {"file-copy", "file-copy"},
  {"*c-extension*", "*c-extension*"},
  {"c-filename", "c-filename"},
  {"time", "time"},
  {"add-tmp-path", "add-tmp-path"},
  {"*goo-personal-root*", "*goo-personal-root*"},
  {"*goo-root*", "*goo-root*"},
  {"create-directory", "create-directory"},
  {"gooc-filename", "gooc-filename"},
  {"components-last", "components-last"},
  {"add-goo-personal-root-path", "add-goo-personal-root-path"},
  {"file-type", "file-type"},
  {"find-goo-file-at", "find-goo-file-at"},
  {"*goo-extension*", "*goo-extension*"},
  {"process-id", "process-id"},
  {"%load", "%load"},
  {"hierarchical-components", "hierarchical-components"},
  {"*obj-extension*", "*obj-extension*"},
  {"file-exists?", "file-exists?"},
  {"add-goo-root-path", "add-goo-root-path"},
  {"goo-filename", "goo-filename"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSsystem;
MODULE_INFO module_info_gooSsystem = {
  "goo/system",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_gooSsystem (void);

void load_module_gooSsystem (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooScolsSstr();
  load_module_gooSboot();
  load_module_gooSioSport();

  (P)YgooSsystemY___main_0___();

}

/* END OF GENERATED CODE. */
