/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/system */

EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YgooSsystemYgoo_filenameQ,"goo/system","goo-filename?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yerror,"goo/boot","error");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYupperQ,"goo/math","upper?");
DEF(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooSsystemYfab_path,"goo/system","fab-path");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLlogG,"goo/boot","<log>");
DEF(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
DEF(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
DEF(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYC,"goo/math","^");
DEF(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DEF(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
DEF(YgooSsystemYfile_mtime,"goo/system","file-mtime");
DEF(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYS,"goo/math","/");
DEF(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
DEF(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
DEF(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
DEF(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLsingletonG,"goo/boot","<singleton>");
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
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
DEF(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytup,"goo/boot","tup");
DEF(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
DEF(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YgooSsystemYTgooc_extensionT,"goo/system","*gooc-extension*");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YgooSsystemYgooc_filenameQ,"goo/system","gooc-filename?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLmetG,"goo/boot","<met>");
DEF(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
DEF(YgooSsystemYcreate_directory,"goo/system","create-directory");
DEF(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YgooSsystemYbase_path,"goo/system","base-path");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSportYgets,"goo/io/port","gets");
DEF(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
DEF(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
DEF(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
DEF(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
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
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
DEF(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yadd_prop,"goo/boot","add-prop");
DEF(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmathYoddQ,"goo/math","odd?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_28);
DEFLIT(lit_76);
DEFLIT(lit_39);
DEFLIT(lit_63);
DEFLIT(lit_70);
DEFLIT(lit_82);
DEFLIT(lit_58);
DEFLIT(lit_86);
DEFLIT(lit_67);
DEFLIT(lit_88);
DEFLIT(lit_15);
DEFLIT(lit_2);
DEFLIT(lit_30);
DEFLIT(lit_90);
DEFLIT(lit_17);
DEFLIT(lit_33);
DEFLIT(lit_85);
DEFLIT(lit_24);
DEFLIT(lit_13);
DEFLIT(lit_61);
DEFLIT(lit_92);
DEFLIT(lit_19);
DEFLIT(lit_60);
DEFLIT(lit_56);
DEFLIT(lit_23);
DEFLIT(lit_84);
DEFLIT(lit_65);
DEFLIT(lit_44);
DEFLIT(lit_54);
DEFLIT(lit_32);
DEFLIT(lit_57);
DEFLIT(lit_81);
DEFLIT(lit_27);
DEFLIT(lit_77);
DEFLIT(lit_31);
DEFLIT(lit_14);
DEFLIT(lit_48);
DEFLIT(lit_43);
DEFLIT(lit_4);
DEFLIT(lit_10);
DEFLIT(lit_87);
DEFLIT(lit_1);
DEFLIT(lit_59);
DEFLIT(lit_75);
DEFLIT(lit_34);
DEFLIT(lit_6);
DEFLIT(lit_50);
DEFLIT(lit_7);
DEFLIT(lit_22);
DEFLIT(lit_64);
DEFLIT(lit_78);
DEFLIT(lit_79);
DEFLIT(lit_89);
DEFLIT(lit_8);
DEFLIT(lit_52);
DEFLIT(lit_11);
DEFLIT(lit_26);
DEFLIT(lit_74);
DEFLIT(lit_37);
DEFLIT(lit_40);
DEFLIT(lit_9);
DEFLIT(lit_12);
DEFLIT(lit_29);
DEFLIT(lit_68);
DEFLIT(lit_18);
DEFLIT(lit_72);
DEFLIT(lit_36);
DEFLIT(lit_46);
DEFLIT(lit_73);
DEFLIT(lit_41);
DEFLIT(lit_83);
DEFLIT(lit_42);
DEFLIT(lit_25);
DEFLIT(lit_16);
DEFLIT(lit_62);
DEFLIT(lit_55);
DEFLIT(lit_38);
DEFLIT(lit_20);
DEFLIT(lit_93);
DEFLIT(lit_21);
DEFLIT(lit_45);
DEFLIT(lit_51);
DEFLIT(lit_80);
DEFLIT(lit_66);
DEFLIT(lit_3);
DEFLIT(lit_53);
DEFLIT(lit_5);
DEFLIT(lit_0);
DEFLIT(lit_49);
DEFLIT(lit_91);
DEFLIT(lit_35);
DEFLIT(lit_47);
DEFLIT(lit_69);
DEFLIT(lit_71);

/* FUNCTIONS: */

LOCFOR(fun_os_name_0);
LOCFOR(fun_os_val_1);
LOCFOR(fun_os_val_setter_2);
LOCFOR(fun_process_id_3);
LOCFOR(fun_loop_4);
LOCFOR(fun_base_path_5);
LOCFOR(fun_fab_path_6);
LOCFOR(fun_add_src_path_7);
LOCFOR(fun_add_goo_root_path_8);
LOCFOR(fun_add_goo_personal_root_path_9);
LOCFOR(fun_add_tmp_path_10);
LOCFOR(fun_add_build_path_11);
FUNFOR(YgooSsystemYgoo_filenameQ);
FUNFOR(YgooSsystemYgoo_filename);
FUNFOR(YgooSsystemYgooc_filenameQ);
FUNFOR(YgooSsystemYgooc_filename);
FUNFOR(YgooSsystemYc_filename);
FUNFOR(YgooSsystemYobj_filename);
FUNFOR(YgooSsystemYexe_filename);
LOCFOR(fun_file_mtime_19);
FUNFOR(YgooSsystemYfile_existsQ);
FUNFOR(YgooSsystemYfile_type);
FUNFOR(YgooSsystemYcreate_directory);
FUNFOR(YgooSsystemYso_load);
LOCFOR(fun_24);
FUNFOR(YgooSsystemYpathname_to_components);
LOCFOR(fun_26);
FUNFOR(YgooSsystemYcomponents_to_pathname);
FUNFOR(YgooSsystemYlabel_components);
FUNFOR(YgooSsystemYhierarchical_components);
FUNFOR(YgooSsystemYcomponents_last);
FUNFOR(YgooSsystemYcomponents_basename);
FUNFOR(YgooSsystemYcomponents_parent_directory);
FUNFOR(YgooSsystemYparent_directory);
LOCFOR(fun_ensure_34);
FUNFOR(YgooSsystemYprobe_directory);
FUNFOR(YgooSsystemYfind_goo_file_at);
LOCFOR(fun_x_3145_37);
LOCFOR(fun_38);
FUNFOR(YgooSsystemYfind_goo_file_in_path);
extern P YgooSsystemY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_os_name_0) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = (P)YPos_name();
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_os_val_1) {
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

FUNCODEDEF(fun_os_val_setter_2) {
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

FUNCODEDEF(fun_process_id_3) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = (P)YgooSsystemYPpid();
  T0 = (P)YPib(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_4) {
  P i_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_15);
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

FUNCODEDEF(fun_base_path_5) {
  P filename_;
  P loopF7441;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_4,2);
  loopF7441 = T1;
  FUNINIT(loopF7441, 2,filename_,loopF7441);
  T4 = CALL1(1,VARREF(YgooStypesYlen),filename_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF7441,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_path_6) {
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

FUNCODEDEF(fun_add_src_path_7) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_build_rootT),LITREF(lit_29),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_goo_root_path_8) {
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

FUNCODEDEF(fun_add_goo_personal_root_path_9) {
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

FUNCODEDEF(fun_add_tmp_path_10) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSsystemYfab_path),LITREF(lit_15),LITREF(lit_33),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_build_path_11) {
  P builddir_,relpath_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(builddir_, 0);
  ARG(relpath_, 1);
loop:
  T0 = CALL4(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_build_rootT),LITREF(lit_36),builddir_,relpath_);
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

FUNCODEDEF(fun_file_mtime_19) {
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

FUNCODEDEF(fun_24) {
  P component_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(component_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_15));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_58);
  } else {
    T3 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_59));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_60);
    } else {
      T5 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_61));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_62);
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
    T3 = CALL1(1,VARREF(Yerror),LITREF(lit_56));
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
  T15 = fun_24;
  T17 = BOXVAL(pathname_);
  T18 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
  T16 = CALL2(1,VARREF(YgooScolsSseqYsplit),T17,T18);
  T14 = CALL2(1,VARREF(YgooSmacrosYmap),T15,T16);
UNLINK_STACK();
  RET(T14);
}

FUNCODEDEF(fun_26) {
  P component_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(component_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_58));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_15);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_60));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_66);
    } else {
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_62));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_67);
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
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_65));
  } else {
  }
  T4 = fun_26;
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
  P resultF7442;
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
  resultF7442 = T1;
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),resultF7442);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(Yerror),LITREF(lit_70),components_);
  } else {
  }
  T0 = resultF7442;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_last) {
  P components_;
  P lastF7443;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),components_);
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),components_,T2);
  lastF7443 = T1;
  T4 = CALL2(1,VARREF(YisaQ),lastF7443,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(Yerror),LITREF(lit_72),components_);
  } else {
  }
  T0 = lastF7443;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_basename) {
  P components_;
  P lastF7447;
  P countF7446;
  P hierF7445;
  P labelF7444;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYlabel_components),components_);
  labelF7444 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),components_);
  hierF7445 = T3;
  T5 = CALL1(1,VARREF(YgooStypesYlen),hierF7445);
  countF7446 = T5;
  T7 = CALL1(1,VARREF(YgooSsystemYcomponents_last),hierF7445);
  lastF7447 = T7;
  T9 = CALL2(1,VARREF(YisaQ),lastF7447,VARREF(YLstrG));
  T8 = CALL1(1,VARREF(Ynot),T9);
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(Yerror),LITREF(lit_74),components_);
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSmacrosYEE),countF7446,YPint((P)1));
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YgooSmacrosYcat),labelF7444,LITREF(lit_75));
    T11 = T13;
  } else {
    T16 = CALL2(1,VARREF(YgooSmathY_),countF7446,YPint((P)1));
    T15 = CALL3(1,VARREF(YgooScolsSseqYsub),hierF7445,YPint((P)0),T16);
    T14 = CALL2(1,VARREF(YgooSmacrosYcat),labelF7444,T15);
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
  P lastF7448;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_last),components_);
  lastF7448 = T1;
  T3 = CALL2(1,VARREF(YisaQ),lastF7448,VARREF(YLstrG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),components_);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),lastF7448,LITREF(lit_58));
    if (T6 != YPfalse) {
      T7 = CALL1(1,VARREF(Yerror),LITREF(lit_77));
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL2(1,VARREF(YgooSmacrosYcat),components_,LITREF(lit_78));
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
  P componentsF7449;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF7449 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYcomponents_parent_directory),componentsF7449);
  T2 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ensure_34) {
  P c_;
  P nF7450;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),FREEREF(0),c_);
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T2);
  nF7450 = T1;
  T4 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),nF7450);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooSsystemYfile_type),nF7450);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,LITREF(lit_83));
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T9 = CALL2(1,VARREF(Yerror),LITREF(lit_84),nF7450);
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
      T14 = CALL1(1,VARREF(YgooSsystemYcreate_directory),nF7450);
      T10 = T14;
    } else {
      if (YPtrue != YPfalse) {
        T16 = CALL2(1,VARREF(Yerror),LITREF(lit_85),nF7450);
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
  P ensureF7454;
  P hierF7453;
  P labelF7452;
  P componentsF7451;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF7451 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYlabel_components),componentsF7451);
  labelF7452 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),componentsF7451);
  hierF7453 = T5;
  T6 = FUNSHELL(1,fun_ensure_34,2);
  ensureF7454 = T6;
  FUNINIT(ensureF7454, 2,labelF7452,ensureF7454);
  T7 = CALL1(0,ensureF7454,hierF7453);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYfind_goo_file_at) {
  P fname_,path_;
  P tmpF7462;
  P tmpF7461;
  P tmpF7460;
  P gooc_foundF7459;
  P goo_foundF7458;
  P gooc_fileF7457;
  P goo_fileF7456;
  P base_fileF7455;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1,a2;
LINK_STACK();
  ARG(fname_, 0);
  ARG(path_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfab_path),path_,fname_);
  base_fileF7455 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYgoo_filename),base_fileF7455);
  goo_fileF7456 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYgooc_filename),base_fileF7455);
  gooc_fileF7457 = T5;
  T7 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),goo_fileF7456);
  goo_foundF7458 = T7;
  T9 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),gooc_fileF7457);
  gooc_foundF7459 = T9;
  T12 = CALL1(1,VARREF(YgooSsystemYgoo_filenameQ),base_fileF7455);
  tmpF7460 = T12;
  if (tmpF7460 != YPfalse) {
    T13 = goo_foundF7458;
  } else {
    T13 = YPfalse;
  }
  T11 = T13;
  if (T11 != YPfalse) {
    T10 = goo_fileF7456;
  } else {
    T16 = CALL1(1,VARREF(YgooSsystemYgooc_filenameQ),base_fileF7455);
    tmpF7461 = T16;
    if (tmpF7461 != YPfalse) {
      T17 = gooc_foundF7459;
    } else {
      T17 = YPfalse;
    }
    T15 = T17;
    if (T15 != YPfalse) {
      T14 = gooc_fileF7457;
    } else {
      tmpF7462 = goo_foundF7458;
      if (tmpF7462 != YPfalse) {
        T20 = gooc_foundF7459;
      } else {
        T20 = YPfalse;
      }
      T19 = T20;
      if (T19 != YPfalse) {
        T23 = CALL1(1,VARREF(YgooSsystemYfile_mtime),goo_fileF7456);
        T24 = CALL1(1,VARREF(YgooSsystemYfile_mtime),gooc_fileF7457);
        T22 = CALL2(1,VARREF(YgooSmagYG),T23,T24);
        if (T22 != YPfalse) {
          T21 = goo_fileF7456;
        } else {
          T21 = gooc_fileF7457;
        }
        T18 = T21;
      } else {
        if (gooc_foundF7459 != YPfalse) {
          T25 = gooc_fileF7457;
        } else {
          if (goo_foundF7458 != YPfalse) {
            T26 = goo_fileF7456;
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

FUNCODEDEF(fun_x_3145_37) {
  P x_3144_;
  P fileF7464;
  P pathF7463;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_3144_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_3144_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_3144_);
    pathF7463 = T4;
    T6 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_at),FREEREF(0),pathF7463);
    fileF7464 = T6;
    if (fileF7464 != YPfalse) {
      T7 = CALL1(1,FREEREF(1),fileF7464);
    } else {
    }
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_3144_);
    a1 = T9;
    x_3144_ = a1;
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

FUNCODEDEF(fun_38) {
  P return_;
  P x_3145F7465;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(1,fun_x_3145_37,3);
  x_3145F7465 = T0;
  FUNINIT(x_3145F7465, 3,FREEREF(0),return_,x_3145F7465);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(1));
  T1 = CALL1(0,x_3145F7465,T2);
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
  T1 = FUNFAB(fun_38,2,fname_,search_paths_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P YgooSsystemY___main_0___() {
  P env_rootF7467;
  P env_rootF7466;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135;
loop:
  lit_0 = YPPsym((P)"os-name");
  T0 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_os_name_0 = YPmet(FUNCODEREF(fun_os_name_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooSsystemYos_name);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSsystemYos_name);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_os_name_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSsystemYos_name,T1);
  lit_1 = YPPsym((P)"os-val");
  lit_2 = YPPsym((P)"s");
  T5 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_os_val_1 = YPmet(FUNCODEREF(fun_os_val_1),LITREF(lit_1),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YgooSsystemYos_val);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooSsystemYos_val);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_os_val_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooSsystemYos_val,T6);
  lit_3 = YPPsym((P)"os-val-setter");
  lit_4 = YPPsym((P)"v");
  T10 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_os_val_setter_2 = YPmet(FUNCODEREF(fun_os_val_setter_2),LITREF(lit_3),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YgooSsystemYos_val_setter);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooSsystemYos_val_setter);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_os_val_setter_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooSsystemYos_val_setter,T11);
  lit_5 = YPPsym((P)"process-id");
  T15 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_process_id_3 = YPmet(FUNCODEREF(fun_process_id_3),LITREF(lit_5),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YgooSsystemYprocess_id);
  if (T18 != YPfalse) {
    T17 = VARREF(YgooSsystemYprocess_id);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_process_id_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YgooSsystemYprocess_id,T16);
  lit_6 = YPsb((P)"linux");
  lit_7 = YPsb((P)"/");
  lit_8 = YPsb((P)"win32");
  lit_9 = YPsb((P)"\\");
  lit_10 = YPsb((P)"/");
  T22 = CALL0(1,VARREF(YgooSsystemYos_name));
  T21 = CALL2(1,VARREF(YgooSmathYE),T22,LITREF(lit_6));
  if (T21 != YPfalse) {
    T20 = LITREF(lit_7);
  } else {
    T25 = CALL0(1,VARREF(YgooSsystemYos_name));
    T24 = CALL2(1,VARREF(YgooSmathYE),T25,LITREF(lit_8));
    if (T24 != YPfalse) {
      T23 = LITREF(lit_9);
    } else {
      if (YPtrue != YPfalse) {
        T26 = LITREF(lit_10);
      } else {
        T26 = YPfalse;
      }
      T23 = T26;
    }
    T20 = T23;
  }
  VARSET(YgooSsystemYTpath_separatorT,T20);
  lit_11 = YPPsym((P)"base-path");
  lit_12 = YPPsym((P)"filename");
  lit_13 = YPPsym((P)"loop");
  lit_14 = YPPsym((P)"i");
  lit_15 = YPsb((P)"");
  T28 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_4 = YPmet(FUNCODEREF(fun_loop_4),LITREF(lit_13),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_base_path_5 = YPmet(FUNCODEREF(fun_base_path_5),LITREF(lit_11),T27,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooSsystemYbase_path);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooSsystemYbase_path);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_base_path_5;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooSsystemYbase_path,T29);
  lit_16 = YPPsym((P)"fab-path");
  lit_17 = YPPsym((P)"dirs");
  T33 = YPsig(YPPlist(1,LITREF(lit_17)),Ynil,YPtrue,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_fab_path_6 = YPmet(FUNCODEREF(fun_fab_path_6),LITREF(lit_16),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YgooSsystemYfab_path);
  if (T36 != YPfalse) {
    T35 = VARREF(YgooSsystemYfab_path);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_fab_path_6;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YgooSsystemYfab_path,T34);
  lit_18 = YPsb((P)"GOO_ROOT");
  T39 = CALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_18));
  env_rootF7466 = T39;
  T41 = CALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF7466);
  if (T41 != YPfalse) {
    T43 = (P)YgooSsystemYPdefault_goo_root();
    T42 = (P)YPsb(T43);
    T40 = T42;
  } else {
    T40 = env_rootF7466;
  }
  T38 = T40;
  VARSET(YgooSsystemYTgoo_rootT,T38);
  lit_19 = YPsb((P)"HOME");
  lit_20 = YPsb((P)".goo");
  T45 = CALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_19));
  T44 = CALL2(1,VARREF(YgooSsystemYfab_path),T45,LITREF(lit_20));
  VARSET(YgooSsystemYTgoo_personal_rootT,T44);
  lit_21 = YPsb((P)"mods");
  lit_22 = YPsb((P)"local");
  lit_23 = YPsb((P)"mods");
  lit_24 = YPsb((P)"mods");
  T47 = CALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_personal_rootT),LITREF(lit_21));
  T48 = CALL3(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),LITREF(lit_22),LITREF(lit_23));
  T49 = CALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),LITREF(lit_24));
  T46 = CALL4(1,VARREF(Ylst),LITREF(lit_15),T47,T48,T49);
  VARSET(YgooSsystemYTmodule_search_pathT,T46);
  lit_25 = YPsb((P)"GOO_BUILD_ROOT");
  lit_26 = YPsb((P)".");
  T51 = CALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_25));
  env_rootF7467 = T51;
  T53 = CALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF7467);
  if (T53 != YPfalse) {
    T52 = LITREF(lit_26);
  } else {
    T52 = env_rootF7467;
  }
  T50 = T52;
  VARSET(YgooSsystemYTgoo_build_rootT,T50);
  lit_27 = YPPsym((P)"add-src-path");
  lit_28 = YPPsym((P)"relpath");
  lit_29 = YPsb((P)"src");
  T54 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_src_path_7 = YPmet(FUNCODEREF(fun_add_src_path_7),LITREF(lit_27),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YgooSsystemYadd_src_path);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooSsystemYadd_src_path);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_add_src_path_7;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooSsystemYadd_src_path,T55);
  lit_30 = YPPsym((P)"add-goo-root-path");
  T59 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_root_path_8 = YPmet(FUNCODEREF(fun_add_goo_root_path_8),LITREF(lit_30),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YgooSsystemYadd_goo_root_path);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooSsystemYadd_goo_root_path);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_add_goo_root_path_8;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooSsystemYadd_goo_root_path,T60);
  lit_31 = YPPsym((P)"add-goo-personal-root-path");
  T64 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_personal_root_path_9 = YPmet(FUNCODEREF(fun_add_goo_personal_root_path_9),LITREF(lit_31),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YgooSsystemYadd_goo_personal_root_path);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSsystemYadd_goo_personal_root_path);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_add_goo_personal_root_path_9;
  T65 = CALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSsystemYadd_goo_personal_root_path,T65);
  lit_32 = YPPsym((P)"add-tmp-path");
  lit_33 = YPsb((P)"tmp");
  T69 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_tmp_path_10 = YPmet(FUNCODEREF(fun_add_tmp_path_10),LITREF(lit_32),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooSsystemYadd_tmp_path);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSsystemYadd_tmp_path);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_add_tmp_path_10;
  T70 = CALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSsystemYadd_tmp_path,T70);
  lit_34 = YPPsym((P)"add-build-path");
  lit_35 = YPPsym((P)"builddir");
  lit_36 = YPsb((P)"c");
  T74 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_28)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_build_path_11 = YPmet(FUNCODEREF(fun_add_build_path_11),LITREF(lit_34),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YgooSsystemYadd_build_path);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSsystemYadd_build_path);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_add_build_path_11;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSsystemYadd_build_path,T75);
  lit_37 = YPsb((P)".goo");
  VARSET(YgooSsystemYTgoo_extensionT,LITREF(lit_37));
  lit_38 = YPsb((P)".gooc");
  VARSET(YgooSsystemYTgooc_extensionT,LITREF(lit_38));
  lit_39 = YPsb((P)".c");
  VARSET(YgooSsystemYTc_extensionT,LITREF(lit_39));
  lit_40 = YPsb((P)".o");
  VARSET(YgooSsystemYTobj_extensionT,LITREF(lit_40));
  VARSET(YgooSsystemYTexe_extensionT,LITREF(lit_15));
  lit_41 = YPPsym((P)"goo-filename?");
  lit_42 = YPPsym((P)"name");
  T79 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgoo_filenameQ = YPmet(FUNCODEREF(YgooSsystemYgoo_filenameQ),LITREF(lit_41),T79,ENVNUL,PNUL,YPfalse);
  T80 = YgooSsystemYgoo_filenameQ;
  VARSET(YgooSsystemYgoo_filenameQ,T80);
  lit_43 = YPPsym((P)"goo-filename");
  T81 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgoo_filename = YPmet(FUNCODEREF(YgooSsystemYgoo_filename),LITREF(lit_43),T81,ENVNUL,PNUL,YPfalse);
  T82 = YgooSsystemYgoo_filename;
  VARSET(YgooSsystemYgoo_filename,T82);
  lit_44 = YPPsym((P)"gooc-filename?");
  T83 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgooc_filenameQ = YPmet(FUNCODEREF(YgooSsystemYgooc_filenameQ),LITREF(lit_44),T83,ENVNUL,PNUL,YPfalse);
  T84 = YgooSsystemYgooc_filenameQ;
  VARSET(YgooSsystemYgooc_filenameQ,T84);
  lit_45 = YPPsym((P)"gooc-filename");
  T85 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgooc_filename = YPmet(FUNCODEREF(YgooSsystemYgooc_filename),LITREF(lit_45),T85,ENVNUL,PNUL,YPfalse);
  T86 = YgooSsystemYgooc_filename;
  VARSET(YgooSsystemYgooc_filename,T86);
  lit_46 = YPPsym((P)"c-filename");
  T87 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYc_filename = YPmet(FUNCODEREF(YgooSsystemYc_filename),LITREF(lit_46),T87,ENVNUL,PNUL,YPfalse);
  T88 = YgooSsystemYc_filename;
  VARSET(YgooSsystemYc_filename,T88);
  lit_47 = YPPsym((P)"obj-filename");
  T89 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYobj_filename = YPmet(FUNCODEREF(YgooSsystemYobj_filename),LITREF(lit_47),T89,ENVNUL,PNUL,YPfalse);
  T90 = YgooSsystemYobj_filename;
  VARSET(YgooSsystemYobj_filename,T90);
  lit_48 = YPPsym((P)"exe-filename");
  T91 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYexe_filename = YPmet(FUNCODEREF(YgooSsystemYexe_filename),LITREF(lit_48),T91,ENVNUL,PNUL,YPfalse);
  T92 = YgooSsystemYexe_filename;
  VARSET(YgooSsystemYexe_filename,T92);
  lit_49 = YPPsym((P)"file-mtime");
  T93 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_file_mtime_19 = YPmet(FUNCODEREF(fun_file_mtime_19),LITREF(lit_49),T93,ENVNUL,PNUL,YPfalse);
  T96 = BOUNDP(YgooSsystemYfile_mtime);
  if (T96 != YPfalse) {
    T95 = VARREF(YgooSsystemYfile_mtime);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_file_mtime_19;
  T94 = CALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YgooSsystemYfile_mtime,T94);
  lit_50 = YPPsym((P)"file-exists?");
  T98 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYfile_existsQ = YPmet(FUNCODEREF(YgooSsystemYfile_existsQ),LITREF(lit_50),T98,ENVNUL,PNUL,YPfalse);
  T99 = YgooSsystemYfile_existsQ;
  VARSET(YgooSsystemYfile_existsQ,T99);
  lit_51 = YPPsym((P)"file-type");
  T100 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  YgooSsystemYfile_type = YPmet(FUNCODEREF(YgooSsystemYfile_type),LITREF(lit_51),T100,ENVNUL,PNUL,YPfalse);
  T101 = YgooSsystemYfile_type;
  VARSET(YgooSsystemYfile_type,T101);
  lit_52 = YPPsym((P)"create-directory");
  T102 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcreate_directory = YPmet(FUNCODEREF(YgooSsystemYcreate_directory),LITREF(lit_52),T102,ENVNUL,PNUL,YPfalse);
  T103 = YgooSsystemYcreate_directory;
  VARSET(YgooSsystemYcreate_directory,T103);
  lit_53 = YPPsym((P)"so-load");
  T104 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYso_load = YPmet(FUNCODEREF(YgooSsystemYso_load),LITREF(lit_53),T104,ENVNUL,PNUL,YPfalse);
  T105 = YgooSsystemYso_load;
  VARSET(YgooSsystemYso_load,T105);
  lit_54 = YPPsym((P)"pathname-to-components");
  lit_55 = YPPsym((P)"pathname");
  lit_56 = YPsb((P)"Can't convert empty an pathname to components.\n");
  lit_57 = YPPsym((P)"component");
  lit_58 = YPPsym((P)"root");
  lit_59 = YPsb((P)"..");
  lit_60 = YPPsym((P)"up");
  lit_61 = YPsb((P)".");
  lit_62 = YPPsym((P)"current");
  T107 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(1,LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYpathname_to_components = YPmet(FUNCODEREF(YgooSsystemYpathname_to_components),LITREF(lit_54),T106,ENVNUL,PNUL,YPfalse);
  T108 = YgooSsystemYpathname_to_components;
  VARSET(YgooSsystemYpathname_to_components,T108);
  lit_63 = YPPsym((P)"components-to-pathname");
  lit_64 = YPPsym((P)"components");
  lit_65 = YPsb((P)"Can't convert empty components to a pathname.\n");
  lit_66 = YPsb((P)"..");
  lit_67 = YPsb((P)".");
  T110 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYcomponents_to_pathname = YPmet(FUNCODEREF(YgooSsystemYcomponents_to_pathname),LITREF(lit_63),T109,ENVNUL,PNUL,YPfalse);
  T111 = YgooSsystemYcomponents_to_pathname;
  VARSET(YgooSsystemYcomponents_to_pathname,T111);
  lit_68 = YPPsym((P)"label-components");
  T112 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYlabel_components = YPmet(FUNCODEREF(YgooSsystemYlabel_components),LITREF(lit_68),T112,ENVNUL,PNUL,YPfalse);
  T113 = YgooSsystemYlabel_components;
  VARSET(YgooSsystemYlabel_components,T113);
  lit_69 = YPPsym((P)"hierarchical-components");
  lit_70 = YPsb((P)"Hierarchical portion of %= must not be empty.\n");
  T114 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYhierarchical_components = YPmet(FUNCODEREF(YgooSsystemYhierarchical_components),LITREF(lit_69),T114,ENVNUL,PNUL,YPfalse);
  T115 = YgooSsystemYhierarchical_components;
  VARSET(YgooSsystemYhierarchical_components,T115);
  lit_71 = YPPsym((P)"components-last");
  lit_72 = YPsb((P)"No filename in %=.\n");
  T116 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcomponents_last = YPmet(FUNCODEREF(YgooSsystemYcomponents_last),LITREF(lit_71),T116,ENVNUL,PNUL,YPfalse);
  T117 = YgooSsystemYcomponents_last;
  VARSET(YgooSsystemYcomponents_last,T117);
  lit_73 = YPPsym((P)"components-basename");
  lit_74 = YPsb((P)"Can't compute basename of %=\n.");
  lit_75 = YPPlist(1,YPPsym((P)"current"));
  T118 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_basename = YPmet(FUNCODEREF(YgooSsystemYcomponents_basename),LITREF(lit_73),T118,ENVNUL,PNUL,YPfalse);
  T119 = YgooSsystemYcomponents_basename;
  VARSET(YgooSsystemYcomponents_basename,T119);
  lit_76 = YPPsym((P)"components-parent-directory");
  lit_77 = YPsb((P)"Can't calculate parent of root directory");
  lit_78 = YPPlist(1,YPPsym((P)"up"));
  T120 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_parent_directory = YPmet(FUNCODEREF(YgooSsystemYcomponents_parent_directory),LITREF(lit_76),T120,ENVNUL,PNUL,YPfalse);
  T121 = YgooSsystemYcomponents_parent_directory;
  VARSET(YgooSsystemYcomponents_parent_directory,T121);
  lit_79 = YPPsym((P)"parent-directory");
  T122 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYparent_directory = YPmet(FUNCODEREF(YgooSsystemYparent_directory),LITREF(lit_79),T122,ENVNUL,PNUL,YPfalse);
  T123 = YgooSsystemYparent_directory;
  VARSET(YgooSsystemYparent_directory,T123);
  lit_80 = YPPsym((P)"probe-directory");
  lit_81 = YPPsym((P)"ensure");
  lit_82 = YPPsym((P)"c");
  lit_83 = YPPsym((P)"directory");
  lit_84 = YPsb((P)"%s is not a directory.\n");
  lit_85 = YPsb((P)"Don't know how to create the directory %s.\n");
  T125 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ensure_34 = YPmet(FUNCODEREF(fun_ensure_34),LITREF(lit_81),T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYprobe_directory = YPmet(FUNCODEREF(YgooSsystemYprobe_directory),LITREF(lit_80),T124,ENVNUL,PNUL,YPfalse);
  T126 = YgooSsystemYprobe_directory;
  VARSET(YgooSsystemYprobe_directory,T126);
  lit_86 = YPPsym((P)"find-goo-file-at");
  lit_87 = YPPsym((P)"fname");
  lit_88 = YPPsym((P)"path");
  T128 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T127 = YPsig(YPPlist(2,LITREF(lit_87),LITREF(lit_88)),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),T128,Ynil);
  YgooSsystemYfind_goo_file_at = YPmet(FUNCODEREF(YgooSsystemYfind_goo_file_at),LITREF(lit_86),T127,ENVNUL,PNUL,YPfalse);
  T129 = YgooSsystemYfind_goo_file_at;
  VARSET(YgooSsystemYfind_goo_file_at,T129);
  lit_89 = YPPsym((P)"find-goo-file-in-path");
  lit_90 = YPPsym((P)"search-paths");
  lit_91 = YPPsym((P)"return");
  lit_92 = YPPsym((P)"x-3145");
  lit_93 = YPPsym((P)"x-3144");
  T133 = YPsig(YPPlist(1,LITREF(lit_93)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_3145_37 = YPmet(FUNCODEREF(fun_x_3145_37),LITREF(lit_92),T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(1,LITREF(lit_91)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T130 = YPsig(YPPlist(2,LITREF(lit_87),LITREF(lit_90)),YPPlist(2,VARREF(YLstrG),VARREF(YLcolG)),YPfalse,YPint((P)2),T131,Ynil);
  YgooSsystemYfind_goo_file_in_path = YPmet(FUNCODEREF(YgooSsystemYfind_goo_file_in_path),LITREF(lit_89),T130,ENVNUL,PNUL,YPfalse);
  T134 = YgooSsystemYfind_goo_file_in_path;
  VARSET(YgooSsystemYfind_goo_file_in_path,T134);
  T135 = YPfalse;
  return T135;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_evalSsyntax;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooScolsSstr},
  {&module_info_gooSboot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"opf", &module_info_gooSmacros, "opf"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"ds", &module_info_gooSboot, "ds"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {">", &module_info_gooSmag, ">"},
  {"~", &module_info_gooSmath, "~"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"app", &module_info_gooSmacros, "app"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"find", &module_info_gooScolsScol, "find"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"tan", &module_info_gooSmath, "tan"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"error", &module_info_gooSboot, "error"},
  {"try", &module_info_gooSboot, "try"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"+", &module_info_gooSmath, "+"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"in", &module_info_gooSioSport, "in"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<", &module_info_gooSmag, "<"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"while", &module_info_gooSmacros, "while"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
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
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"and", &module_info_gooSmacros, "and"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"when", &module_info_gooSmacros, "when"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"read", &module_info_gooSruntime, "read"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"case", &module_info_gooSmacros, "case"},
  {"asin", &module_info_gooSmath, "asin"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%str", &module_info_gooSboot, "%str"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"t<", &module_info_gooStypes, "t<"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"atan", &module_info_gooSmath, "atan"},
  {"dm", &module_info_gooSboot, "dm"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"^", &module_info_gooSmath, "^"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"|", &module_info_gooSmath, "|"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"/", &module_info_gooSmath, "/"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"if", &module_info_gooSboot, "if"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"mif", &module_info_gooSboot, "mif"},
  {"$e", &module_info_gooSmath, "$e"},
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
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
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
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"t=", &module_info_gooStypes, "t="},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"round", &module_info_gooSmath, "round"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"close", &module_info_gooSioSport, "close"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"do", &module_info_gooSmacros, "do"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"max", &module_info_gooSmag, "max"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"lst", &module_info_gooSboot, "lst"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"log", &module_info_gooSmath, "log"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
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
  {"logn", &module_info_gooSmath, "logn"},
  {"let", &module_info_gooSboot, "let"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"export", &module_info_gooSboot, "export"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"write", &module_info_gooSioSwrite, "write"},
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
  {"%get", &module_info_gooSboot, "%get"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"head", &module_info_gooSboot, "head"},
  {"cos", &module_info_gooSmath, "cos"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"always", &module_info_gooSruntime, "always"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"for", &module_info_gooSmacros, "for"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"-", &module_info_gooSmath, "-"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"as", &module_info_gooStypes, "as"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"not", &module_info_gooSboot, "not"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"df", &module_info_gooSboot, "df"},
  {"abs", &module_info_gooSmath, "abs"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"mod", &module_info_gooSmath, "mod"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"any?", &module_info_gooStypes, "any?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"*", &module_info_gooSmath, "*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
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
  {"bound?", &module_info_gooSboot, "bound?"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%put", &module_info_gooSboot, "%put"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"open", &module_info_gooSioSport, "open"},
  {"dc", &module_info_gooSboot, "dc"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"len", &module_info_gooStypes, "len"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"out", &module_info_gooSioSport, "out"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<=", &module_info_gooSmag, "<="},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"op", &module_info_gooSmacros, "op"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"pow", &module_info_gooSmath, "pow"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"@len", &module_info_gooSboot, "@len"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"get", &module_info_gooSioSport, "get"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"or", &module_info_gooSmacros, "or"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"now", &module_info_gooScolsScol, "now"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"set", &module_info_gooSboot, "set"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"col", &module_info_gooScolsScol, "col"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
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
  {"range", &module_info_gooScolsSrange, "range"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"new", &module_info_gooSboot, "new"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"goo-filename?", &YgooSsystemYgoo_filenameQ},
  {"%default-goo-root", NULL},
  {"add-tmp-path", &YgooSsystemYadd_tmp_path},
  {"c-filename", &YgooSsystemYc_filename},
  {"*goo-build-root*", &YgooSsystemYTgoo_build_rootT},
  {"fab-path", &YgooSsystemYfab_path},
  {"add-src-path", &YgooSsystemYadd_src_path},
  {"os-val", &YgooSsystemYos_val},
  {"*obj-extension*", &YgooSsystemYTobj_extensionT},
  {"pathname-to-components", &YgooSsystemYpathname_to_components},
  {"components-parent-directory", &YgooSsystemYcomponents_parent_directory},
  {"process-id", &YgooSsystemYprocess_id},
  {"components-to-pathname", &YgooSsystemYcomponents_to_pathname},
  {"file-mtime", &YgooSsystemYfile_mtime},
  {"add-goo-personal-root-path", &YgooSsystemYadd_goo_personal_root_path},
  {"*module-search-path*", &YgooSsystemYTmodule_search_pathT},
  {"*c-extension*", &YgooSsystemYTc_extensionT},
  {"gooc-filename", &YgooSsystemYgooc_filename},
  {"*goo-personal-root*", &YgooSsystemYTgoo_personal_rootT},
  {"find-goo-file-at", &YgooSsystemYfind_goo_file_at},
  {"so-load", &YgooSsystemYso_load},
  {"os-name", &YgooSsystemYos_name},
  {"components-basename", &YgooSsystemYcomponents_basename},
  {"*exe-extension*", &YgooSsystemYTexe_extensionT},
  {"*gooc-extension*", &YgooSsystemYTgooc_extensionT},
  {"gooc-filename?", &YgooSsystemYgooc_filenameQ},
  {"*path-separator*", &YgooSsystemYTpath_separatorT},
  {"%load", NULL},
  {"create-directory", &YgooSsystemYcreate_directory},
  {"components-last", &YgooSsystemYcomponents_last},
  {"%compile", NULL},
  {"exe-filename", &YgooSsystemYexe_filename},
  {"base-path", &YgooSsystemYbase_path},
  {"add-build-path", &YgooSsystemYadd_build_path},
  {"*goo-root*", &YgooSsystemYTgoo_rootT},
  {"find-goo-file-in-path", &YgooSsystemYfind_goo_file_in_path},
  {"hierarchical-components", &YgooSsystemYhierarchical_components},
  {"add-goo-root-path", &YgooSsystemYadd_goo_root_path},
  {"*goo-extension*", &YgooSsystemYTgoo_extensionT},
  {"file-type", &YgooSsystemYfile_type},
  {"obj-filename", &YgooSsystemYobj_filename},
  {"probe-directory", &YgooSsystemYprobe_directory},
  {"%pid", NULL},
  {"label-components", &YgooSsystemYlabel_components},
  {"os-val-setter", &YgooSsystemYos_val_setter},
  {"---main-0---", NULL},
  {"parent-directory", &YgooSsystemYparent_directory},
  {"goo-filename", &YgooSsystemYgoo_filename},
  {"file-exists?", &YgooSsystemYfile_existsQ},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"add-tmp-path", "add-tmp-path"},
  {"c-filename", "c-filename"},
  {"*goo-build-root*", "*goo-build-root*"},
  {"add-src-path", "add-src-path"},
  {"os-val", "os-val"},
  {"*obj-extension*", "*obj-extension*"},
  {"pathname-to-components", "pathname-to-components"},
  {"components-parent-directory", "components-parent-directory"},
  {"process-id", "process-id"},
  {"components-to-pathname", "components-to-pathname"},
  {"file-mtime", "file-mtime"},
  {"add-goo-personal-root-path", "add-goo-personal-root-path"},
  {"*c-extension*", "*c-extension*"},
  {"gooc-filename", "gooc-filename"},
  {"*goo-personal-root*", "*goo-personal-root*"},
  {"find-goo-file-at", "find-goo-file-at"},
  {"so-load", "so-load"},
  {"os-name", "os-name"},
  {"components-basename", "components-basename"},
  {"*exe-extension*", "*exe-extension*"},
  {"*path-separator*", "*path-separator*"},
  {"%load", "%load"},
  {"create-directory", "create-directory"},
  {"components-last", "components-last"},
  {"exe-filename", "exe-filename"},
  {"%compile", "%compile"},
  {"add-build-path", "add-build-path"},
  {"*goo-root*", "*goo-root*"},
  {"find-goo-file-in-path", "find-goo-file-in-path"},
  {"hierarchical-components", "hierarchical-components"},
  {"add-goo-root-path", "add-goo-root-path"},
  {"*goo-extension*", "*goo-extension*"},
  {"obj-filename", "obj-filename"},
  {"probe-directory", "probe-directory"},
  {"file-type", "file-type"},
  {"label-components", "label-components"},
  {"os-val-setter", "os-val-setter"},
  {"parent-directory", "parent-directory"},
  {"*module-search-path*", "*module-search-path*"},
  {"goo-filename", "goo-filename"},
  {"file-exists?", "file-exists?"},
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

/* EXPRESSION: */

extern void load_module_gooSsystem (void);

void load_module_gooSsystem (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooScolsSstr();
  load_module_gooSboot();

  (P)YgooSsystemY___main_0___();

}

/* END OF GENERATED CODE. */
