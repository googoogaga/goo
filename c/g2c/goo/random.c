/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/random");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/random */

EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
DEF(YgooSrandomYrandom_using,"goo/random","random-using");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YPfalse,"goo/boot","%false");
DEF(YgooSrandomYDdefault_random,"goo/random","$default-random");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
DEF(YgooSrandomYrecent_setter,"goo/random","recent-setter");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(YgooSrandomYfab_random_from,"goo/random","fab-random-from");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(Yas_error,"goo/boot","as-error");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YgooSrandomYrecent_index_setter,"goo/random","recent-index-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YgooSrandomYrandom,"goo/random","random");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
DEF(YgooSrandomYLrandomG,"goo/random","<random>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YgooSrandomYlcg_rand,"goo/random","lcg-rand");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
DEF(YgooSrandomYDrecent_size,"goo/random","$recent-size");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathY_,"goo/math","-");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YOallQ,"goo/boot","@all?");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YOmap,"goo/boot","@map");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YgooSrandomYrandom_unit_using,"goo/random","random-unit-using");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSrandomYrecent_index,"goo/random","recent-index");
DEF(YgooSrandomYrandom_unit,"goo/random","random-unit");
DEF(YgooSrandomYdefault_random_seed,"goo/random","default-random-seed");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
DEF(YgooSrandomYrandom_29,"goo/random","random-29");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YgooSrandomYrecent,"goo/random","recent");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yfab_pair,"goo/boot","fab-pair");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YgooSrandomYfab_random,"goo/random","fab-random");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ylst,"goo/boot","lst");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YLboxG,"goo/boot","<box>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YPtrue,"goo/boot","%true");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSlogYE,"goo/log","=");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_24);
DEFLIT(lit_22);
DEFLIT(lit_4);
DEFLIT(lit_26);
DEFLIT(lit_12);
DEFLIT(lit_19);
DEFLIT(lit_15);
DEFLIT(lit_21);
DEFLIT(lit_28);
DEFLIT(lit_8);
DEFLIT(lit_23);
DEFLIT(lit_16);
DEFLIT(lit_0);
DEFLIT(lit_3);
DEFLIT(lit_6);
DEFLIT(lit_13);
DEFLIT(lit_27);
DEFLIT(lit_10);
DEFLIT(lit_1);
DEFLIT(lit_17);
DEFLIT(lit_5);
DEFLIT(lit_14);
DEFLIT(lit_7);
DEFLIT(lit_9);
DEFLIT(lit_2);
DEFLIT(lit_25);
DEFLIT(lit_11);
DEFLIT(lit_18);
DEFLIT(lit_20);

/* FUNCTIONS: */

FUNFOR(YgooSrandomYdefault_random_seed);
LOCFOR(fun_recent_1);
LOCFOR(fun_recent_setter_2);
LOCFOR(fun_3);
LOCFOR(fun_recent_index_4);
LOCFOR(fun_recent_index_setter_5);
LOCFOR(fun_6);
FUNFOR(YgooSrandomYlcg_rand);
LOCFOR(fun_fab_random_from_8);
LOCFOR(fun_fab_random_9);
LOCFOR(fun_tap_10);
FUNFOR(YgooSrandomYrandom_29);
LOCFOR(fun_random_12);
LOCFOR(fun_random_using_13);
LOCFOR(fun_random_unit_14);
LOCFOR(fun_random_unit_using_15);
extern P YgooSrandomY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

FUNCODEDEF(YgooSrandomYdefault_random_seed) {
  P T0;
LINK_STACK();
  T0 = CALL0(1,VARREF(YgooSsystemYtime));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_recent_1) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSrandomYrecent));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recent_setter_2) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSrandomYrecent));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_3) {
  P Ux_;
  P T0,T1;
LINK_STACK();
  ARG(Ux_, 0);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooSrandomYDrecent_size));
  T0 = CALL2(1,VARREF(YgooScolsScolYfill),T1,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recent_index_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSrandomYrecent_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_recent_index_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSrandomYrecent_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_6) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(YgooSrandomYlcg_rand) {
  P prev_;
  P T0,T1,T2;
LINK_STACK();
  ARG(prev_, 0);
  T2 = CALL2(1,VARREF(YgooSmathYT),prev_,YPint((P)171));
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)11213));
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,YPint((P)53125));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fab_random_from_8) {
  P seed_;
  P jF5276;
  P x_1891F5275;
  P v2F5274;
  P v1F5273;
  P prevF5272;
  P jF5271;
  P aF5270;
  P rF5269;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(seed_, 0);
  T22 = CALL1(1,VARREF(Ynew),VARREF(YgooSrandomYLrandomG));
  rF5269 = T22;
  T21 = CALL1(1,VARREF(YgooSrandomYrecent),rF5269);
  aF5270 = T21;
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),VARREF(YDmax_int),aF5270,YPint((P)0));
  jF5271 = YPint((P)1);
  T11 = CALL1(1,VARREF(YgooSmathYabs),seed_);
  T10 = CALL2(1,VARREF(YgooSmathYmod),T11,YPint((P)32768));
  prevF5272 = T10;
  LOOP_261: {
    P a261_0,a261_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),jF5271,VARREF(YgooSrandomYDrecent_size));
    if (T1 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooSrandomYlcg_rand),prevF5272);
      v1F5273 = T9;
      T8 = CALL1(1,VARREF(YgooSrandomYlcg_rand),v1F5273);
      v2F5274 = T8;
      T3 = CALL2(1,VARREF(YgooSmathYmod),v1F5273,YPint((P)32768));
      T5 = CALL2(1,VARREF(YgooSmathYmod),v2F5274,YPint((P)16384));
      T4 = CALL2(1,VARREF(YgooSmathYT),T5,YPint((P)32768));
      T2 = CALL2(1,VARREF(YgooSmathYA),T3,T4);
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),T2,aF5270,jF5271);
      T7 = CALL2(1,VARREF(YgooSmathYA),jF5271,YPint((P)1));
      a261_0 = T7;
      a261_1 = v2F5274;
      jF5271 = a261_0;
      prevF5272 = a261_1;
      goto LOOP_261;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
  T20 = CALL2(1,VARREF(YgooSmathYT),YPint((P)4),VARREF(YgooSrandomYDrecent_size));
  T19 = CALL3(1,VARREF(YgooScolsSrangeYrange),YPint((P)0),VARREF(YgooSmagYLE),T20);
  T18 = CALL1(1,VARREF(YgooScolsScolYenum),T19);
  x_1891F5275 = T18;
  LOOP_262: {
    P a262_0;
    T14 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1891F5275);
    T13 = CALL1(1,VARREF(Ynot),T14);
    if (T13 != YPfalse) {
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_1891F5275);
      jF5276 = T17;
      CALL1(1,VARREF(YgooSrandomYrandom_29),rF5269);
      T16 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1891F5275);
      a262_0 = T16;
      x_1891F5275 = a262_0;
      goto LOOP_262;
      T12 = T15;
    } else {
      T12 = YPfalse;
    }
  }
UNLINK_STACK();
  RET(rF5269);
}

LOCCODEDEF(fun_fab_random_9) {
  P T0,T1;
LINK_STACK();
  T1 = CALL0(1,VARREF(YgooSrandomYdefault_random_seed));
  T0 = CALL1(1,VARREF(YgooSrandomYfab_random_from),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_tap_10) {
  P bit_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(bit_, 0);
  T3 = CALL2(1,VARREF(YgooSmathY_),VARREF(YgooSrandomYDrecent_size),bit_);
  T2 = CALL2(1,VARREF(YgooSmathYA),FREEREF(1),T3);
  T1 = CALL2(1,VARREF(YgooSmathYmod),T2,VARREF(YgooSrandomYDrecent_size));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSrandomYrandom_29) {
  P r_;
  P tapF5279;
  P aF5278;
  P riF5277;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(r_, 0);
  T12 = CALL1(1,VARREF(YgooSrandomYrecent_index),r_);
  T11 = CALL2(1,VARREF(YgooSmathYA),T12,YPint((P)1));
  T10 = CALL2(1,VARREF(YgooSmathYmod),T11,VARREF(YgooSrandomYDrecent_size));
  check_type(T10,VARREF(YLintG));
  riF5277 = T10;
  T9 = CALL1(1,VARREF(YgooSrandomYrecent),r_);
  aF5278 = T9;
  CALL2(1,VARREF(YgooSrandomYrecent_index_setter),riF5277,r_);
  T8 = FUNSHELL(1,fun_tap_10,2);
  tapF5279 = T8;
  FUNINIT(tapF5279, 2,aF5278,riF5277);
  T3 = CALL1(1,tapF5279,YPint((P)54));
  T4 = CALL1(1,tapF5279,YPint((P)8));
  T2 = CALL2(1,VARREF(YgooSmathYC),T3,T4);
  T6 = CALL1(1,tapF5279,YPint((P)6));
  T7 = CALL1(1,tapF5279,YPint((P)3));
  T5 = CALL2(1,VARREF(YgooSmathYC),T6,T7);
  T1 = CALL2(1,VARREF(YgooSmathYC),T2,T5);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),T1,aF5278,riF5277);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_random_12) {
  P range_;
  P T0;
LINK_STACK();
  ARG(range_, 0);
  T0 = CALL2(1,VARREF(YgooSrandomYrandom_using),range_,VARREF(YgooSrandomYDdefault_random));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_random_using_13) {
  P range_,r_;
  P valueF5282;
  P limitF5281;
  P mF5280;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(range_, 0);
  ARG(r_, 1);
  T1 = CALL2(1,VARREF(YgooSlogYE),range_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = YPint((P)0);
  } else {
    mF5280 = VARREF(YDmax_int);
    T10 = CALL2(1,VARREF(YgooSmathY_),mF5280,range_);
    T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
    T8 = CALL2(1,VARREF(YgooSmathYmod),T9,range_);
    T7 = CALL2(1,VARREF(YgooSmathY_),mF5280,T8);
    limitF5281 = T7;
    LOOP_263: {
      T6 = CALL1(1,VARREF(YgooSrandomYrandom_29),r_);
      valueF5282 = T6;
      T4 = CALL2(1,VARREF(YgooSmagYLE),valueF5282,limitF5281);
      if (T4 != YPfalse) {
        T3 = valueF5282;
      } else {
        goto LOOP_263;
        T3 = T5;
      }
    }
    T2 = CALL2(1,VARREF(YgooSmathYmod),T3,range_);
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_random_unit_14) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YgooSrandomYrandom_unit_using),VARREF(YgooSrandomYDdefault_random));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_random_unit_using_15) {
  P r_;
  P maxF5283;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(r_, 0);
  maxF5283 = YPint((P)1000000);
  T3 = CALL2(1,VARREF(YgooSmathYA),maxF5283,YPint((P)1));
  T2 = CALL2(1,VARREF(YgooSrandomYrandom_using),T3,r_);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T2);
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),maxF5283);
  T0 = CALL2(1,VARREF(YgooSmathYS),T1,T4);
UNLINK_STACK();
  RET(T0);
}

P YgooSrandomY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54;
DEFCREGS();
  lit_0 = YPPsym((P)"default-random-seed");
  lit_1 = Ynil;
  T0 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  YgooSrandomYdefault_random_seed = YPfab_met(FUNCODEREF(YgooSrandomYdefault_random_seed),T0,LITREF(lit_0),LITREF(lit_1),sloc(9),YPfalse);
  T1 = YgooSrandomYdefault_random_seed;
  VARSET(YgooSrandomYdefault_random_seed,T1);
  VARSET(YgooSrandomYDrecent_size,YPint((P)54));
  lit_2 = YPPsym((P)"<random>");
  T3 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T2 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_2),T3);
  VARSET(YgooSrandomYLrandomG,T2);
  lit_3 = YPPsym((P)"recent");
  lit_4 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_recent_1 = YPfab_met(FUNCODEREF(fun_recent_1),T4,LITREF(lit_3),LITREF(lit_4),sloc(14),YPfalse);
  T6 = VARREF_OR(YgooSrandomYrecent,YPfalse);
  T7 = fun_recent_1;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooSrandomYrecent,T5);
  lit_5 = YPPsym((P)"recent-setter");
  lit_6 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recent_setter_2 = YPfab_met(FUNCODEREF(fun_recent_setter_2),T8,LITREF(lit_5),LITREF(lit_6),sloc(14),YPfalse);
  T10 = VARREF_OR(YgooSrandomYrecent_setter,YPfalse);
  T11 = fun_recent_setter_2;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooSrandomYrecent_setter,T9);
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPfab_met(FUNCODEREF(fun_3),T12,YPfalse,LITREF(lit_7),sloc(14),YPfalse);
  T13 = fun_3;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSrandomYLrandomG),VARREF(YgooSrandomYrecent),VARREF(YgooSrandomYrecent_setter),VARREF(YgooScolsSvecYLvecG),T13);
  lit_8 = YPPsym((P)"recent-index");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_recent_index_4 = YPfab_met(FUNCODEREF(fun_recent_index_4),T14,LITREF(lit_8),LITREF(lit_9),sloc(15),YPfalse);
  T16 = VARREF_OR(YgooSrandomYrecent_index,YPfalse);
  T17 = fun_recent_index_4;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooSrandomYrecent_index,T15);
  lit_10 = YPPsym((P)"recent-index-setter");
  lit_11 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recent_index_setter_5 = YPfab_met(FUNCODEREF(fun_recent_index_setter_5),T18,LITREF(lit_10),LITREF(lit_11),sloc(15),YPfalse);
  T20 = VARREF_OR(YgooSrandomYrecent_index_setter,YPfalse);
  T21 = fun_recent_index_setter_5;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YgooSrandomYrecent_index_setter,T19);
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPfab_met(FUNCODEREF(fun_6),T22,YPfalse,LITREF(lit_12),sloc(15),YPfalse);
  T23 = fun_6;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSrandomYLrandomG),VARREF(YgooSrandomYrecent_index),VARREF(YgooSrandomYrecent_index_setter),VARREF(YLintG),T23);
  lit_13 = YPPsym((P)"lcg-rand");
  lit_14 = YPPlist(1,YPPsym((P)"prev"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSrandomYlcg_rand = YPfab_met(FUNCODEREF(YgooSrandomYlcg_rand),T24,LITREF(lit_13),LITREF(lit_14),sloc(19),YPfalse);
  T25 = YgooSrandomYlcg_rand;
  VARSET(YgooSrandomYlcg_rand,T25);
  lit_15 = YPPsym((P)"fab-random-from");
  lit_16 = YPPlist(1,YPPsym((P)"seed"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YgooSrandomYLrandomG),Ynil);
  fun_fab_random_from_8 = YPfab_met(FUNCODEREF(fun_fab_random_from_8),T26,LITREF(lit_15),LITREF(lit_16),sloc(22),YPfalse);
  T28 = VARREF_OR(YgooSrandomYfab_random_from,YPfalse);
  T29 = fun_fab_random_from_8;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSrandomYfab_random_from,T27);
  lit_17 = YPPsym((P)"fab-random");
  T30 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YgooSrandomYLrandomG),Ynil);
  fun_fab_random_9 = YPfab_met(FUNCODEREF(fun_fab_random_9),T30,LITREF(lit_17),LITREF(lit_1),sloc(39),YPfalse);
  T32 = VARREF_OR(YgooSrandomYfab_random,YPfalse);
  T33 = fun_fab_random_9;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooSrandomYfab_random,T31);
  lit_18 = YPPsym((P)"random-29");
  lit_19 = YPPlist(1,YPPsym((P)"r"));
  lit_20 = YPPsym((P)"tap");
  lit_21 = YPPlist(1,YPPsym((P)"bit"));
  T35 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_tap_10 = YPfab_met(FUNCODEREF(fun_tap_10),T35,LITREF(lit_20),LITREF(lit_21),sloc(46),YPfalse);
  T34 = YPfab_sig(YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSrandomYrandom_29 = YPfab_met(FUNCODEREF(YgooSrandomYrandom_29),T34,LITREF(lit_18),LITREF(lit_19),sloc(42),YPfalse);
  T36 = YgooSrandomYrandom_29;
  VARSET(YgooSrandomYrandom_29,T36);
  T37 = XCALL0(1,VARREF(YgooSrandomYfab_random));
  VARSET(YgooSrandomYDdefault_random,T37);
  lit_22 = YPPsym((P)"random");
  lit_23 = YPPlist(1,YPPsym((P)"range"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_random_12 = YPfab_met(FUNCODEREF(fun_random_12),T38,LITREF(lit_22),LITREF(lit_23),sloc(56),YPfalse);
  T40 = VARREF_OR(YgooSrandomYrandom,YPfalse);
  T41 = fun_random_12;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooSrandomYrandom,T39);
  lit_24 = YPPsym((P)"random-using");
  lit_25 = YPPlist(2,YPPsym((P)"range"),YPPsym((P)"r"));
  T42 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_random_using_13 = YPfab_met(FUNCODEREF(fun_random_using_13),T42,LITREF(lit_24),LITREF(lit_25),sloc(59),YPfalse);
  T44 = VARREF_OR(YgooSrandomYrandom_using,YPfalse);
  T45 = fun_random_using_13;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooSrandomYrandom_using,T43);
  lit_26 = YPPsym((P)"random-unit");
  T46 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLfloG),Ynil);
  fun_random_unit_14 = YPfab_met(FUNCODEREF(fun_random_unit_14),T46,LITREF(lit_26),LITREF(lit_1),sloc(71),YPfalse);
  T48 = VARREF_OR(YgooSrandomYrandom_unit,YPfalse);
  T49 = fun_random_unit_14;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooSrandomYrandom_unit,T47);
  lit_27 = YPPsym((P)"random-unit-using");
  lit_28 = YPPlist(1,YPPsym((P)"r"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_random_unit_using_15 = YPfab_met(FUNCODEREF(fun_random_unit_using_15),T50,LITREF(lit_27),LITREF(lit_28),sloc(74),YPfalse);
  T52 = VARREF_OR(YgooSrandomYrandom_unit_using,YPfalse);
  T53 = fun_random_unit_using_15;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooSrandomYrandom_unit_using,T51);
  T54 = YPfalse;
  return T54;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSsystem},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@add-new", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"random-using", CVAR, &YgooSrandomYrandom_using},
  {"$default-random", CVAR, &YgooSrandomYDdefault_random},
  {"recent-setter", CVAR, &YgooSrandomYrecent_setter},
  {"fab-random-from", CVAR, &YgooSrandomYfab_random_from},
  {"recent-index-setter", CVAR, &YgooSrandomYrecent_index_setter},
  {"---main-0---", PVAR, NULL},
  {"random", CVAR, &YgooSrandomYrandom},
  {"<random>", CVAR, &YgooSrandomYLrandomG},
  {"lcg-rand", CVAR, &YgooSrandomYlcg_rand},
  {"$recent-size", CVAR, &YgooSrandomYDrecent_size},
  {"random-unit-using", CVAR, &YgooSrandomYrandom_unit_using},
  {"recent-index", CVAR, &YgooSrandomYrecent_index},
  {"random-unit", CVAR, &YgooSrandomYrandom_unit},
  {"default-random-seed", CVAR, &YgooSrandomYdefault_random_seed},
  {"random-29", CVAR, &YgooSrandomYrandom_29},
  {"recent", CVAR, &YgooSrandomYrecent},
  {"fab-random", CVAR, &YgooSrandomYfab_random},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"random-using", NULL},
  {"random", NULL},
  {"random-unit-using", NULL},
  {"random-unit", NULL},
  {"fab-random", NULL},
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
