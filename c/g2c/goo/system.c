/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/system */

EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYC,"goo/math","^");
DEF(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
DEF(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
DEF(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YgooSsystemYfab_path,"goo/system","fab-path");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YgooSsystemYprobe_directory,"goo/system","probe-directory");
DEF(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YPprop,"goo/boot","%prop");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YgooSsystemYobj_filename,"goo/system","obj-filename");
DEF(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
DEF(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YgooSsystemYtime,"goo/system","time");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
DEF(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYatan2,"goo/math","atan2");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooSsystemYbase_path,"goo/system","base-path");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYround,"goo/math","round");
DEF(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yerror,"goo/boot","error");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YgooSsystemYgooc_filenameQ,"goo/system","gooc-filename?");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
DEF(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLnumG,"goo/boot","<num>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
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
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YgooSsystemYos_name,"goo/system","os-name");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLmetG,"goo/boot","<met>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooSsystemYgoo_filenameQ,"goo/system","goo-filename?");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
DEF(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YgooSsystemYTgooc_extensionT,"goo/system","*gooc-extension*");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYlen,"goo/types","len");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_30);
DEFLIT(lit_58);
DEFLIT(lit_5);
DEFLIT(lit_37);
DEFLIT(lit_61);
DEFLIT(lit_78);
DEFLIT(lit_22);
DEFLIT(lit_64);
DEFLIT(lit_3);
DEFLIT(lit_8);
DEFLIT(lit_45);
DEFLIT(lit_19);
DEFLIT(lit_74);
DEFLIT(lit_18);
DEFLIT(lit_7);
DEFLIT(lit_13);
DEFLIT(lit_36);
DEFLIT(lit_48);
DEFLIT(lit_42);
DEFLIT(lit_44);
DEFLIT(lit_4);
DEFLIT(lit_14);
DEFLIT(lit_75);
DEFLIT(lit_52);
DEFLIT(lit_2);
DEFLIT(lit_34);
DEFLIT(lit_68);
DEFLIT(lit_57);
DEFLIT(lit_0);
DEFLIT(lit_27);
DEFLIT(lit_73);
DEFLIT(lit_31);
DEFLIT(lit_69);
DEFLIT(lit_86);
DEFLIT(lit_93);
DEFLIT(lit_95);
DEFLIT(lit_16);
DEFLIT(lit_41);
DEFLIT(lit_21);
DEFLIT(lit_46);
DEFLIT(lit_96);
DEFLIT(lit_29);
DEFLIT(lit_55);
DEFLIT(lit_59);
DEFLIT(lit_33);
DEFLIT(lit_72);
DEFLIT(lit_62);
DEFLIT(lit_87);
DEFLIT(lit_84);
DEFLIT(lit_92);
DEFLIT(lit_66);
DEFLIT(lit_54);
DEFLIT(lit_91);
DEFLIT(lit_49);
DEFLIT(lit_32);
DEFLIT(lit_9);
DEFLIT(lit_80);
DEFLIT(lit_6);
DEFLIT(lit_28);
DEFLIT(lit_76);
DEFLIT(lit_17);
DEFLIT(lit_20);
DEFLIT(lit_77);
DEFLIT(lit_56);
DEFLIT(lit_53);
DEFLIT(lit_40);
DEFLIT(lit_65);
DEFLIT(lit_97);
DEFLIT(lit_15);
DEFLIT(lit_89);
DEFLIT(lit_71);
DEFLIT(lit_39);
DEFLIT(lit_79);
DEFLIT(lit_67);
DEFLIT(lit_11);
DEFLIT(lit_12);
DEFLIT(lit_82);
DEFLIT(lit_25);
DEFLIT(lit_1);
DEFLIT(lit_47);
DEFLIT(lit_26);
DEFLIT(lit_70);
DEFLIT(lit_38);
DEFLIT(lit_10);
DEFLIT(lit_81);
DEFLIT(lit_94);
DEFLIT(lit_24);
DEFLIT(lit_83);
DEFLIT(lit_43);
DEFLIT(lit_51);
DEFLIT(lit_85);
DEFLIT(lit_60);
DEFLIT(lit_90);
DEFLIT(lit_63);
DEFLIT(lit_50);
DEFLIT(lit_23);
DEFLIT(lit_88);
DEFLIT(lit_35);

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
LOCFOR(fun_x_1427_44);
LOCFOR(fun_45);
FUNFOR(YgooSsystemYfind_goo_file_in_path);
extern P YgooSsystemY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSsystemYtime) {
  P tF2371;
  P xF2370;
  P xF2369;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = (P)YPtime();
  xF2369 = T1;
  xF2370 = xF2369;
  tF2371 = (P)1;
  T4 = (P)YPiLL(xF2370,(P)2);
  T3 = (P)YPiv(T4,tF2371);
  T2 = T3;
  T0 = T2;
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
  P tF2374;
  P xF2373;
  P xF2372;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = (P)YgooSsystemYPpid();
  xF2372 = T1;
  xF2373 = xF2372;
  tF2374 = (P)1;
  T4 = (P)YPiLL(xF2373,(P)2);
  T3 = (P)YPiv(T4,tF2374);
  T2 = T3;
  T0 = T2;
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
  P loopF2375;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_5,2);
  loopF2375 = T1;
  FUNINIT(loopF2375, 2,filename_,loopF2375);
  T4 = CALL1(1,VARREF(YgooStypesYlen),filename_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF2375,T3);
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
  P cF2376;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSioSportYget),T2);
  cF2376 = T1;
  T5 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2376);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = BOXVAL(FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYput),T6,cF2376);
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
  P loopF2377;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_24,3);
  loopF2377 = T2;
  FUNINIT(loopF2377, 3,FREEREF(2),FREEREF(0),loopF2377);
  T3 = CALL0(0,loopF2377);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_26) {
  P tmpF2378;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2378 = T1;
  if (tmpF2378 != YPfalse) {
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
  P dst_portF2379;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  dst_portF2379 = YPfalse;
  dst_portF2379 = BOXFAB(dst_portF2379);
  T4 = FUNFAB(fun_25,3,dst_portF2379,FREEREF(2),FREEREF(0));
  T5 = FUNFAB(fun_26,1,dst_portF2379);
  T3 = with_cleanup(T4,T5);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_28) {
  P tmpF2380;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2380 = T1;
  if (tmpF2380 != YPfalse) {
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
  P src_portF2381;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
loop:
  src_portF2381 = YPfalse;
  src_portF2381 = BOXFAB(src_portF2381);
  T3 = FUNFAB(fun_27,3,src_portF2381,src_,dst_);
  T4 = FUNFAB(fun_28,1,src_portF2381);
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
  T5 = CALL1(1,VARREF(YgooSmacrosYlast),T6);
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
  P resultF2382;
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
  resultF2382 = T1;
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),resultF2382);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(Yerror),LITREF(lit_74),components_);
  } else {
  }
  T0 = resultF2382;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_last) {
  P components_;
  P lastF2383;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),components_);
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),components_,T2);
  lastF2383 = T1;
  T4 = CALL2(1,VARREF(YisaQ),lastF2383,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(Yerror),LITREF(lit_76),components_);
  } else {
  }
  T0 = lastF2383;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_basename) {
  P components_;
  P lastF2387;
  P countF2386;
  P hierF2385;
  P labelF2384;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYlabel_components),components_);
  labelF2384 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),components_);
  hierF2385 = T3;
  T5 = CALL1(1,VARREF(YgooStypesYlen),hierF2385);
  countF2386 = T5;
  T7 = CALL1(1,VARREF(YgooSsystemYcomponents_last),hierF2385);
  lastF2387 = T7;
  T9 = CALL2(1,VARREF(YisaQ),lastF2387,VARREF(YLstrG));
  T8 = CALL1(1,VARREF(Ynot),T9);
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(Yerror),LITREF(lit_78),components_);
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSmacrosYEE),countF2386,YPint((P)1));
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YgooSmacrosYcat),labelF2384,LITREF(lit_79));
    T11 = T13;
  } else {
    T16 = CALL2(1,VARREF(YgooSmathY_),countF2386,YPint((P)1));
    T15 = CALL3(1,VARREF(YgooScolsSseqYsub),hierF2385,YPint((P)0),T16);
    T14 = CALL2(1,VARREF(YgooSmacrosYcat),labelF2384,T15);
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
  P lastF2388;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_last),components_);
  lastF2388 = T1;
  T3 = CALL2(1,VARREF(YisaQ),lastF2388,VARREF(YLstrG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),components_);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),lastF2388,LITREF(lit_62));
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
  P componentsF2389;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF2389 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYcomponents_parent_directory),componentsF2389);
  T2 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ensure_41) {
  P c_;
  P nF2390;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),FREEREF(0),c_);
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T2);
  nF2390 = T1;
  T4 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),nF2390);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooSsystemYfile_type),nF2390);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,LITREF(lit_87));
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T9 = CALL2(1,VARREF(Yerror),LITREF(lit_88),nF2390);
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
      T14 = CALL1(1,VARREF(YgooSsystemYcreate_directory),nF2390);
      T10 = T14;
    } else {
      if (YPtrue != YPfalse) {
        T16 = CALL2(1,VARREF(Yerror),LITREF(lit_89),nF2390);
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
  P ensureF2394;
  P hierF2393;
  P labelF2392;
  P componentsF2391;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF2391 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYlabel_components),componentsF2391);
  labelF2392 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),componentsF2391);
  hierF2393 = T5;
  T6 = FUNSHELL(1,fun_ensure_41,2);
  ensureF2394 = T6;
  FUNINIT(ensureF2394, 2,labelF2392,ensureF2394);
  T7 = CALL1(0,ensureF2394,hierF2393);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYfind_goo_file_at) {
  P fname_,path_;
  P tmpF2402;
  P tmpF2401;
  P tmpF2400;
  P gooc_foundF2399;
  P goo_foundF2398;
  P gooc_fileF2397;
  P goo_fileF2396;
  P base_fileF2395;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1,a2;
LINK_STACK();
  ARG(fname_, 0);
  ARG(path_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfab_path),path_,fname_);
  base_fileF2395 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYgoo_filename),base_fileF2395);
  goo_fileF2396 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYgooc_filename),base_fileF2395);
  gooc_fileF2397 = T5;
  T7 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),goo_fileF2396);
  goo_foundF2398 = T7;
  T9 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),gooc_fileF2397);
  gooc_foundF2399 = T9;
  T12 = CALL1(1,VARREF(YgooSsystemYgoo_filenameQ),base_fileF2395);
  tmpF2400 = T12;
  if (tmpF2400 != YPfalse) {
    T13 = goo_foundF2398;
  } else {
    T13 = YPfalse;
  }
  T11 = T13;
  if (T11 != YPfalse) {
    T10 = goo_fileF2396;
  } else {
    T16 = CALL1(1,VARREF(YgooSsystemYgooc_filenameQ),base_fileF2395);
    tmpF2401 = T16;
    if (tmpF2401 != YPfalse) {
      T17 = gooc_foundF2399;
    } else {
      T17 = YPfalse;
    }
    T15 = T17;
    if (T15 != YPfalse) {
      T14 = gooc_fileF2397;
    } else {
      tmpF2402 = goo_foundF2398;
      if (tmpF2402 != YPfalse) {
        T20 = gooc_foundF2399;
      } else {
        T20 = YPfalse;
      }
      T19 = T20;
      if (T19 != YPfalse) {
        T23 = CALL1(1,VARREF(YgooSsystemYfile_mtime),goo_fileF2396);
        T24 = CALL1(1,VARREF(YgooSsystemYfile_mtime),gooc_fileF2397);
        T22 = CALL2(1,VARREF(YgooSmagYG),T23,T24);
        if (T22 != YPfalse) {
          T21 = goo_fileF2396;
        } else {
          T21 = gooc_fileF2397;
        }
        T18 = T21;
      } else {
        if (gooc_foundF2399 != YPfalse) {
          T25 = gooc_fileF2397;
        } else {
          if (goo_foundF2398 != YPfalse) {
            T26 = goo_fileF2396;
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

FUNCODEDEF(fun_x_1427_44) {
  P x_1426_;
  P fileF2404;
  P pathF2403;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1426_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1426_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1426_);
    pathF2403 = T4;
    T6 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_at),FREEREF(0),pathF2403);
    fileF2404 = T6;
    if (fileF2404 != YPfalse) {
      T7 = CALL1(1,FREEREF(1),fileF2404);
    } else {
    }
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1426_);
    a1 = T9;
    x_1426_ = a1;
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
  P x_1427F2405;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(1,fun_x_1427_44,3);
  x_1427F2405 = T0;
  FUNINIT(x_1427F2405, 3,FREEREF(0),return_,x_1427F2405);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(1));
  T1 = CALL1(0,x_1427F2405,T2);
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
  P env_rootF2407;
  P env_rootF2406;
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
  env_rootF2406 = T41;
  T43 = XCALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF2406);
  if (T43 != YPfalse) {
    T45 = (P)YgooSsystemYPdefault_goo_root();
    T44 = (P)YPsb(T45);
    T42 = T44;
  } else {
    T42 = env_rootF2406;
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
  env_rootF2407 = T53;
  T55 = XCALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF2407);
  if (T55 != YPfalse) {
    T54 = LITREF(lit_27);
  } else {
    T54 = env_rootF2407;
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
  lit_96 = YPPsym((P)"x-1427");
  lit_97 = YPPsym((P)"x-1426");
  T145 = YPsig(YPPlist(1,LITREF(lit_97)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1427_44 = YPmet(FUNCODEREF(fun_x_1427_44),LITREF(lit_96),T145,ENVNUL,PNUL,YPfalse);
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
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooScolsSstr},
  {&module_info_gooSboot},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"open", &module_info_gooSioSport, "open"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"min", &module_info_gooSmag, "min"},
  {"%str", &module_info_gooSboot, "%str"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"%flog", &module_info_gooSboot, "%flog"},
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
  {"zap", &module_info_gooScolsScol, "zap"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"ct", &module_info_gooSboot, "ct"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"do", &module_info_gooSmacros, "do"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"@+", &module_info_gooSboot, "@+"},
  {"rem", &module_info_gooSmath, "rem"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"^", &module_info_gooSmath, "^"},
  {">", &module_info_gooSmag, ">"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"app", &module_info_gooSmacros, "app"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"neg", &module_info_gooSmath, "neg"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"port-handle", &module_info_gooSioSport, "port-handle"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<", &module_info_gooSmag, "<"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {">=", &module_info_gooSmag, ">="},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"round/", &module_info_gooSmath, "round/"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"del", &module_info_gooScolsScol, "del"},
  {"logn", &module_info_gooSmath, "logn"},
  {"new", &module_info_gooSboot, "new"},
  {"=", &module_info_gooSmath, "="},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"sin", &module_info_gooSmath, "sin"},
  {"~==", &module_info_gooSmath, "~=="},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"seq", &module_info_gooSboot, "seq"},
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
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%enable-stack-checks", &module_info_gooSboot, "%enable-stack-checks"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"dp", &module_info_gooSboot, "dp"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"+", &module_info_gooSmath, "+"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use", &module_info_gooSboot, "use"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"neg?", &module_info_gooSmath, "neg?"},
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
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"not", &module_info_gooSboot, "not"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"|", &module_info_gooSmath, "|"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"dl", &module_info_gooSboot, "dl"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"mod", &module_info_gooSmath, "mod"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<<", &module_info_gooSmath, "<<"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"col", &module_info_gooScolsScol, "col"},
  {"log", &module_info_gooSmath, "log"},
  {"read", &module_info_gooSruntime, "read"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"in", &module_info_gooSioSport, "in"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"as", &module_info_gooStypes, "as"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@<", &module_info_gooSboot, "@<"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"round", &module_info_gooSmath, "round"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"error", &module_info_gooSboot, "error"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"out", &module_info_gooSioSport, "out"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"~", &module_info_gooSmath, "~"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"/", &module_info_gooSmath, "/"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"div", &module_info_gooSmath, "div"},
  {"op", &module_info_gooSmacros, "op"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nul", &module_info_gooSboot, "nul"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"if", &module_info_gooSboot, "if"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"get", &module_info_gooSioSport, "get"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"always", &module_info_gooSruntime, "always"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fin", &module_info_gooSboot, "fin"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"$e", &module_info_gooSmath, "$e"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%get", &module_info_gooSboot, "%get"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"try", &module_info_gooSboot, "try"},
  {"export", &module_info_gooSboot, "export"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%f<", &module_info_gooSboot, "%f<"},
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
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"let", &module_info_gooSboot, "let"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"last", &module_info_gooSmacros, "last"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"put", &module_info_gooSioSport, "put"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"items", &module_info_gooScolsScol, "items"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"mif", &module_info_gooSboot, "mif"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"set", &module_info_gooSboot, "set"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"@==", &module_info_gooSboot, "@=="},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"==", &module_info_gooSmacros, "=="},
  {"pow", &module_info_gooSmath, "pow"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"&", &module_info_gooSmath, "&"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*", &module_info_gooSmath, "*"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"loc", &module_info_gooSboot, "loc"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"t<", &module_info_gooStypes, "t<"},
  {"cos", &module_info_gooSmath, "cos"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"case", &module_info_gooSmacros, "case"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"close", &module_info_gooSioSport, "close"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"map", &module_info_gooSmacros, "map"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"-", &module_info_gooSmath, "-"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%im", &module_info_gooSboot, "%im"},
  {"match", &module_info_gooSmacros, "match"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {">>", &module_info_gooSmath, ">>"},
  {"%time", &module_info_gooSboot, "%time"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"atan", &module_info_gooSmath, "atan"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"max", &module_info_gooSmag, "max"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"~=", &module_info_gooSmath, "~="},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
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
  {"t+", &module_info_gooStypes, "t+"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"when", &module_info_gooSmacros, "when"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"1-", &module_info_gooSmath, "1-"},
  {"len", &module_info_gooStypes, "len"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"add-src-path", CVAR, &YgooSsystemYadd_src_path},
  {"create-directory", CVAR, &YgooSsystemYcreate_directory},
  {"exe-filename", CVAR, &YgooSsystemYexe_filename},
  {"process-id", CVAR, &YgooSsystemYprocess_id},
  {"*goo-extension*", CVAR, &YgooSsystemYTgoo_extensionT},
  {"components-to-pathname", CVAR, &YgooSsystemYcomponents_to_pathname},
  {"parent-directory", CVAR, &YgooSsystemYparent_directory},
  {"os-val-setter", CVAR, &YgooSsystemYos_val_setter},
  {"fab-path", CVAR, &YgooSsystemYfab_path},
  {"probe-directory", CVAR, &YgooSsystemYprobe_directory},
  {"find-goo-file-in-path", CVAR, &YgooSsystemYfind_goo_file_in_path},
  {"goo-filename", CVAR, &YgooSsystemYgoo_filename},
  {"obj-filename", CVAR, &YgooSsystemYobj_filename},
  {"file-exists?", CVAR, &YgooSsystemYfile_existsQ},
  {"pathname-to-components", CVAR, &YgooSsystemYpathname_to_components},
  {"add-build-path", CVAR, &YgooSsystemYadd_build_path},
  {"time", CVAR, &YgooSsystemYtime},
  {"*goo-personal-root*", CVAR, &YgooSsystemYTgoo_personal_rootT},
  {"components-parent-directory", CVAR, &YgooSsystemYcomponents_parent_directory},
  {"file-copy", CVAR, &YgooSsystemYfile_copy},
  {"c-filename", CVAR, &YgooSsystemYc_filename},
  {"components-basename", CVAR, &YgooSsystemYcomponents_basename},
  {"add-tmp-path", CVAR, &YgooSsystemYadd_tmp_path},
  {"*obj-extension*", CVAR, &YgooSsystemYTobj_extensionT},
  {"base-path", CVAR, &YgooSsystemYbase_path},
  {"*goo-root*", CVAR, &YgooSsystemYTgoo_rootT},
  {"gooc-filename", CVAR, &YgooSsystemYgooc_filename},
  {"components-last", CVAR, &YgooSsystemYcomponents_last},
  {"file-type", CVAR, &YgooSsystemYfile_type},
  {"add-goo-personal-root-path", CVAR, &YgooSsystemYadd_goo_personal_root_path},
  {"find-goo-file-at", CVAR, &YgooSsystemYfind_goo_file_at},
  {"os-val", CVAR, &YgooSsystemYos_val},
  {"*path-separator*", CVAR, &YgooSsystemYTpath_separatorT},
  {"gooc-filename?", CVAR, &YgooSsystemYgooc_filenameQ},
  {"*module-search-path*", CVAR, &YgooSsystemYTmodule_search_pathT},
  {"hierarchical-components", CVAR, &YgooSsystemYhierarchical_components},
  {"%default-goo-root", PVAR, NULL},
  {"add-goo-root-path", CVAR, &YgooSsystemYadd_goo_root_path},
  {"---main-0---", PVAR, NULL},
  {"os-name", CVAR, &YgooSsystemYos_name},
  {"*c-extension*", CVAR, &YgooSsystemYTc_extensionT},
  {"label-components", CVAR, &YgooSsystemYlabel_components},
  {"*goo-build-root*", CVAR, &YgooSsystemYTgoo_build_rootT},
  {"%load", PVAR, NULL},
  {"%pid", PVAR, NULL},
  {"*exe-extension*", CVAR, &YgooSsystemYTexe_extensionT},
  {"goo-filename?", CVAR, &YgooSsystemYgoo_filenameQ},
  {"file-mtime", CVAR, &YgooSsystemYfile_mtime},
  {"so-load", CVAR, &YgooSsystemYso_load},
  {"*gooc-extension*", CVAR, &YgooSsystemYTgooc_extensionT},
  {"%compile", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"add-src-path", "add-src-path"},
  {"exe-filename", "exe-filename"},
  {"process-id", "process-id"},
  {"*goo-extension*", "*goo-extension*"},
  {"components-to-pathname", "components-to-pathname"},
  {"parent-directory", "parent-directory"},
  {"obj-filename", "obj-filename"},
  {"add-build-path", "add-build-path"},
  {"*goo-personal-root*", "*goo-personal-root*"},
  {"components-parent-directory", "components-parent-directory"},
  {"file-copy", "file-copy"},
  {"c-filename", "c-filename"},
  {"os-val-setter", "os-val-setter"},
  {"components-basename", "components-basename"},
  {"add-tmp-path", "add-tmp-path"},
  {"*obj-extension*", "*obj-extension*"},
  {"create-directory", "create-directory"},
  {"*goo-root*", "*goo-root*"},
  {"gooc-filename", "gooc-filename"},
  {"components-last", "components-last"},
  {"file-type", "file-type"},
  {"add-goo-personal-root-path", "add-goo-personal-root-path"},
  {"find-goo-file-at", "find-goo-file-at"},
  {"os-val", "os-val"},
  {"*path-separator*", "*path-separator*"},
  {"*module-search-path*", "*module-search-path*"},
  {"hierarchical-components", "hierarchical-components"},
  {"file-exists?", "file-exists?"},
  {"os-name", "os-name"},
  {"add-goo-root-path", "add-goo-root-path"},
  {"goo-filename", "goo-filename"},
  {"*c-extension*", "*c-extension*"},
  {"label-components", "label-components"},
  {"pathname-to-components", "pathname-to-components"},
  {"*goo-build-root*", "*goo-build-root*"},
  {"time", "time"},
  {"%load", "%load"},
  {"find-goo-file-in-path", "find-goo-file-in-path"},
  {"*exe-extension*", "*exe-extension*"},
  {"file-mtime", "file-mtime"},
  {"so-load", "so-load"},
  {"probe-directory", "probe-directory"},
  {"%compile", "%compile"},
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
