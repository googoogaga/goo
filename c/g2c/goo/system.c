/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/system */

EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YPslot,"boot","%slot");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YLlogG,"boot","<log>");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYneg,"runtime","neg");
DEF(YprotoSsystemYTexe_extensionT,"proto/system","*exe-extension*");
EXT(YruntimeYmake_handler,"runtime","make-handler");
DEF(YprotoSsystemYparent_directory,"proto/system","parent-directory");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(Ynot,"boot","not");
EXT(Yslot_value,"boot","slot-value");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
DEF(YprotoSsystemYcomponents_to_pathname,"proto/system","components-to-pathname");
DEF(YprotoSsystemYcomponents_parent_directory,"proto/system","components-parent-directory");
EXT(YLunionG,"boot","<union>");
EXT(YPsnul,"boot","%snul");
DEF(YprotoSsystemYc_filename,"proto/system","c-filename");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYto_digit,"runtime","to-digit");
DEF(YprotoSsystemYfile_mtime,"proto/system","file-mtime");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
DEF(YprotoSsystemYpathname_to_components,"proto/system","pathname-to-components");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYformat,"runtime","format");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYlast,"runtime","last");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YPsymbols,"boot","%symbols");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(Ytail,"boot","tail");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(Yclass_slots,"boot","class-slots");
EXT(YstringsYmap_str,"strings","map-str");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYrev,"runtime","rev");
EXT(YruntimeYabs,"runtime","abs");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(Ynil,"boot","nil");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYmax,"runtime","max");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYdefault,"runtime","default");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YPdefine_method,"boot","%define-method");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYcatX,"runtime","cat!");
DEF(YprotoSsystemYTpath_separatorT,"proto/system","*path-separator*");
EXT(YLoptsG,"boot","<opts>");
DEF(YprotoSsystemYcomponents_basename,"proto/system","components-basename");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYempty,"runtime","empty");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYA,"runtime","+");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YwriteYdisplay,"write","display");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YruntimeYE,"runtime","=");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYnulQ,"runtime","nul?");
DEF(YprotoSsystemYhierarchical_components,"proto/system","hierarchical-components");
EXT(Ytype_error,"boot","type-error");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YmacrosYmap,"macros","map");
EXT(Ysig_names,"boot","sig-names");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYpop,"runtime","pop");
EXT(YruntimeYmap2,"runtime","map2");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYfrom_to,"runtime","from-to");
DEF(YprotoSsystemYfile_existsQ,"proto/system","file-exists?");
EXT(YruntimeYNE,"runtime","~=");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yobject_slots,"boot","object-slots");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YruntimeYfrom,"runtime","from");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
DEF(YprotoSsystemYobj_filename,"proto/system","obj-filename");
EXT(YmacrosYEE,"macros","==");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(Yfind_setter,"boot","find-setter");
DEF(YprotoSsystemYTc_extensionT,"proto/system","*c-extension*");
DEF(YprotoSsystemYos_binding_value,"proto/system","os-binding-value");
EXT(YruntimeYdel_keys,"runtime","del-keys");
DEF(YprotoSsystemYprobe_directory,"proto/system","probe-directory");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YLvecG,"boot","<vec>");
EXT(Ytype_class,"boot","type-class");
DEF(YprotoSsystemYfile_type,"proto/system","file-type");
DEF(YprotoSsystemYbase_path,"proto/system","base-path");
DEF(YprotoSsystemYproto_filename,"proto/system","proto-filename");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(Ylst,"boot","lst");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeY1st,"runtime","1st");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYtL,"runtime","t<");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YLflatG,"boot","<flat>");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYout,"runtime","out");
EXT(Yfun_names,"boot","fun-names");
EXT(YruntimeYdo,"runtime","do");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYfab,"runtime","fab");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
DEF(YprotoSsystemYadd_src_path,"proto/system","add-src-path");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YstringsYstring_join,"strings","string-join");
DEF(YprotoSsystemYlabel_components,"proto/system","label-components");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYtE,"runtime","t=");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYpick,"runtime","pick");
DEF(YprotoSsystemYos_name,"proto/system","os-name");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYGE,"runtime",">=");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYtA,"runtime","t+");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YstringsYstring_repeat,"strings","string-repeat");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
DEF(YprotoSsystemYTproto_extensionT,"proto/system","*proto-extension*");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(Ynul,"boot","nul");
EXT(YruntimeYL,"runtime","<");
EXT(YLlocG,"boot","<loc>");
EXT(Yfab_class,"boot","fab-class");
EXT(YwriteYwrite,"write","write");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YstringsYstring_split,"strings","string-split");
EXT(YwriteYwriteln,"write","writeln");
EXT(YruntimeYdel,"runtime","del");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYlist,"runtime","list");
EXT(YLsigG,"boot","<sig>");
EXT(Ytype_object,"boot","type-object");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Yhead_setter,"boot","head-setter");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YruntimeYini_state,"runtime","ini-state");
DEF(YprotoSsystemYexe_filename,"proto/system","exe-filename");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYfrom_above,"runtime","from-above");
DEF(YprotoSsystemYadd_build_path,"proto/system","add-build-path");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(Yerror,"boot","error");
EXT(Yhead,"boot","head");
DEF(YprotoSsystemYcreate_directory,"proto/system","create-directory");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYlen,"runtime","len");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
DEF(YprotoSsystemYcomponents_last,"proto/system","components-last");
EXT(YruntimeYsub,"runtime","sub");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(Yslot_init,"boot","slot-init");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYin,"runtime","in");
EXT(Ysym_name,"boot","sym-name");
DEF(YprotoSsystemYTproto_rootT,"proto/system","*proto-root*");
DEF(YprotoSsystemYTobj_extensionT,"proto/system","*obj-extension*");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YLnumG,"boot","<num>");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYfill,"runtime","fill");
EXT(Yfun_value,"boot","fun-value");
DEF(YprotoSsystemYos_binding_value_setter,"proto/system","os-binding-value-setter");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YruntimeYalter,"runtime","alter");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYmin,"runtime","min");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YruntimeYcondition_message,"runtime","condition-message");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_25);
DEFLIT(lit_10);
DEFLIT(lit_23);
DEFLIT(lit_8);
DEFLIT(lit_63);
DEFLIT(lit_32);
DEFLIT(lit_45);
DEFLIT(lit_58);
DEFLIT(lit_49);
DEFLIT(lit_48);
DEFLIT(lit_2);
DEFLIT(lit_31);
DEFLIT(lit_16);
DEFLIT(lit_14);
DEFLIT(lit_19);
DEFLIT(lit_26);
DEFLIT(lit_28);
DEFLIT(lit_29);
DEFLIT(lit_12);
DEFLIT(lit_62);
DEFLIT(lit_44);
DEFLIT(lit_35);
DEFLIT(lit_5);
DEFLIT(lit_59);
DEFLIT(lit_60);
DEFLIT(lit_54);
DEFLIT(lit_1);
DEFLIT(lit_40);
DEFLIT(lit_61);
DEFLIT(lit_47);
DEFLIT(lit_33);
DEFLIT(lit_4);
DEFLIT(lit_55);
DEFLIT(lit_3);
DEFLIT(lit_27);
DEFLIT(lit_43);
DEFLIT(lit_37);
DEFLIT(lit_22);
DEFLIT(lit_65);
DEFLIT(lit_17);
DEFLIT(lit_38);
DEFLIT(lit_52);
DEFLIT(lit_41);
DEFLIT(lit_7);
DEFLIT(lit_11);
DEFLIT(lit_6);
DEFLIT(lit_56);
DEFLIT(lit_50);
DEFLIT(lit_34);
DEFLIT(lit_36);
DEFLIT(lit_64);
DEFLIT(lit_53);
DEFLIT(lit_9);
DEFLIT(lit_20);
DEFLIT(lit_67);
DEFLIT(lit_0);
DEFLIT(lit_15);
DEFLIT(lit_42);
DEFLIT(lit_21);
DEFLIT(lit_24);
DEFLIT(lit_46);
DEFLIT(lit_66);
DEFLIT(lit_39);
DEFLIT(lit_18);
DEFLIT(lit_13);
DEFLIT(lit_51);
DEFLIT(lit_57);
DEFLIT(lit_30);

/* FUNCTIONS: */

LOCFOR(fun_os_name_0);
LOCFOR(fun_os_binding_value_1);
LOCFOR(fun_os_binding_value_setter_2);
LOCFOR(fun_loop_3);
LOCFOR(fun_base_path_4);
LOCFOR(fun_add_src_path_5);
LOCFOR(fun_add_build_path_6);
FUNFOR(YprotoSsystemYproto_filename);
FUNFOR(YprotoSsystemYc_filename);
FUNFOR(YprotoSsystemYobj_filename);
FUNFOR(YprotoSsystemYexe_filename);
LOCFOR(fun_file_mtime_11);
FUNFOR(YprotoSsystemYfile_existsQ);
FUNFOR(YprotoSsystemYfile_type);
FUNFOR(YprotoSsystemYcreate_directory);
LOCFOR(fun_15);
FUNFOR(YprotoSsystemYpathname_to_components);
LOCFOR(fun_17);
FUNFOR(YprotoSsystemYcomponents_to_pathname);
FUNFOR(YprotoSsystemYlabel_components);
FUNFOR(YprotoSsystemYhierarchical_components);
FUNFOR(YprotoSsystemYcomponents_last);
FUNFOR(YprotoSsystemYcomponents_basename);
FUNFOR(YprotoSsystemYcomponents_parent_directory);
FUNFOR(YprotoSsystemYparent_directory);
LOCFOR(fun_ensure_25);
FUNFOR(YprotoSsystemYprobe_directory);
extern P YprotoSsystemY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_os_name_0) {
  P T1,T0;
LINK_STACK();
loop:
  T1 = (P)YPos_name();
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_os_binding_value_1) {
  P s_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T2 = (P)YPsu(s_);
  T1 = (P)YPos_binding_value(T2);
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_os_binding_value_setter_2) {
  P v_,s_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(s_, 1);
loop:
  T0 = (P)YPsu(v_);
  T1 = (P)YPsu(s_);
  (P)YPos_binding_value_setter(T0,T1);
UNLINK_STACK();
  RET(v_);
}

FUNCODEDEF(fun_loop_3) {
  P i_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = CHKREF(lit_14);
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(0),i_);
    T5 = CALL2(1,CHKREF(YruntimeYelt),CHKREF(YprotoSsystemYTpath_separatorT),YPint((P)0));
    T3 = CALL2(1,CHKREF(YruntimeYE),T4,T5);
    if (T3 != YPfalse) {
      T7 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
      T6 = CALL3(1,CHKREF(YruntimeYsub),FREEREF(0),YPint((P)0),T7);
      T2 = T6;
    } else {
      T9 = CALL2(1,CHKREF(YruntimeY_),i_,YPint((P)1));
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

FUNCODEDEF(fun_base_path_4) {
  P filename_;
  P loopF1253;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_3,2);
  loopF1253 = T1;
  FUNINIT(loopF1253, 2,filename_,loopF1253);
  T4 = CALL1(1,CHKREF(YruntimeYlen),filename_);
  T3 = CALL2(1,CHKREF(YruntimeY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF1253,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_src_path_5) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALLN(1,CHKREF(YmacrosYcat),5,CHKREF(YprotoSsystemYTproto_rootT),CHKREF(YprotoSsystemYTpath_separatorT),CHKREF(lit_20),CHKREF(YprotoSsystemYTpath_separatorT),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_build_path_6) {
  P builddir_,relpath_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(builddir_, 0);
  ARG(relpath_, 1);
loop:
  T0 = CALLN(1,CHKREF(YmacrosYcat),7,CHKREF(YprotoSsystemYTproto_rootT),CHKREF(YprotoSsystemYTpath_separatorT),CHKREF(lit_23),CHKREF(YprotoSsystemYTpath_separatorT),builddir_,CHKREF(YprotoSsystemYTpath_separatorT),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YprotoSsystemYproto_filename) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYcat),name_,CHKREF(YprotoSsystemYTproto_extensionT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YprotoSsystemYc_filename) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYcat),name_,CHKREF(YprotoSsystemYTc_extensionT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YprotoSsystemYobj_filename) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYcat),name_,CHKREF(YprotoSsystemYTobj_extensionT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YprotoSsystemYexe_filename) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYcat),name_,CHKREF(YprotoSsystemYTexe_extensionT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_file_mtime_11) {
  P filename_;
  P T2,T1,T0;
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

FUNCODEDEF(YprotoSsystemYfile_existsQ) {
  P filename_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = (P)YPsu(filename_);
  T0 = (P)YPfile_existsQ(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YprotoSsystemYfile_type) {
  P filename_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = (P)YPsu(filename_);
  T0 = (P)YPfile_type(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YprotoSsystemYcreate_directory) {
  P filename_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = (P)YPsu(filename_);
  T0 = (P)YPcreate_directory(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  P component_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(component_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYE),component_,CHKREF(lit_14));
  if (T1 != YPfalse) {
    T0 = CHKREF(lit_40);
  } else {
    T3 = CALL2(1,CHKREF(YruntimeYE),component_,CHKREF(lit_41));
    if (T3 != YPfalse) {
      T2 = CHKREF(lit_42);
    } else {
      T5 = CALL2(1,CHKREF(YruntimeYE),component_,CHKREF(lit_43));
      if (T5 != YPfalse) {
        T4 = CHKREF(lit_44);
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

FUNCODEDEF(YprotoSsystemYpathname_to_components) {
  P pathname_;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pathname_, 0);
loop:
  pathname_ = BOXFAB(pathname_);
  T2 = BOXVAL(pathname_);
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(Yerror),CHKREF(lit_38));
  } else {
  }
  T6 = BOXVAL(pathname_);
  T5 = CALL1(1,CHKREF(YruntimeYlast),T6);
  T7 = CALL2(1,CHKREF(YruntimeYelt),CHKREF(YprotoSsystemYTpath_separatorT),YPint((P)0));
  T4 = CALL2(1,CHKREF(YmacrosYEE),T5,T7);
  if (T4 != YPfalse) {
    T10 = BOXVAL(pathname_);
    T13 = BOXVAL(pathname_);
    T12 = CALL1(1,CHKREF(YruntimeYlen),T13);
    T11 = CALL2(1,CHKREF(YruntimeY_),T12,YPint((P)1));
    T9 = CALL3(1,CHKREF(YruntimeYsub),T10,YPint((P)0),T11);
    T8 = BOXVAL(pathname_) = T9;
  } else {
  }
  T15 = fun_15;
  T17 = BOXVAL(pathname_);
  T18 = CALL2(1,CHKREF(YruntimeYelt),CHKREF(YprotoSsystemYTpath_separatorT),YPint((P)0));
  T16 = CALL2(1,CHKREF(YstringsYstring_split),T17,T18);
  T14 = CALL2(1,CHKREF(YmacrosYmap),T15,T16);
UNLINK_STACK();
  RET(T14);
}

FUNCODEDEF(fun_17) {
  P component_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(component_, 0);
loop:
  T1 = CALL2(1,CHKREF(YmacrosYEE),component_,CHKREF(lit_40));
  if (T1 != YPfalse) {
    T0 = CHKREF(lit_14);
  } else {
    T3 = CALL2(1,CHKREF(YmacrosYEE),component_,CHKREF(lit_42));
    if (T3 != YPfalse) {
      T2 = CHKREF(lit_48);
    } else {
      T5 = CALL2(1,CHKREF(YmacrosYEE),component_,CHKREF(lit_44));
      if (T5 != YPfalse) {
        T4 = CHKREF(lit_49);
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

FUNCODEDEF(YprotoSsystemYcomponents_to_pathname) {
  P components_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T0 = CALL1(1,CHKREF(YmacrosYemptyQ),components_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,CHKREF(Yerror),CHKREF(lit_47));
  } else {
  }
  T4 = fun_17;
  T3 = CALL2(1,CHKREF(YmacrosYmap),T4,components_);
  T2 = CALL2(1,CHKREF(YstringsYstring_join),T3,CHKREF(YprotoSsystemYTpath_separatorT));
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(YprotoSsystemYlabel_components) {
  P components_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T2 = CALL1(1,CHKREF(Yhead),components_);
  T1 = CALL2(1,CHKREF(YisaQ),T2,CHKREF(YLlstG));
  if (T1 != YPfalse) {
    T4 = CALL1(1,CHKREF(Yhead),components_);
    T3 = CALL1(1,CHKREF(Ylst),T4);
    T0 = T3;
  } else {
    T0 = Ynil;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YprotoSsystemYhierarchical_components) {
  P components_;
  P resultF1254;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T3 = CALL1(1,CHKREF(Yhead),components_);
  T2 = CALL2(1,CHKREF(YisaQ),T3,CHKREF(YLlstG));
  if (T2 != YPfalse) {
    T4 = CALL1(1,CHKREF(Ytail),components_);
    T1 = T4;
  } else {
    T1 = components_;
  }
  resultF1254 = T1;
  T5 = CALL1(1,CHKREF(YmacrosYemptyQ),resultF1254);
  if (T5 != YPfalse) {
    T6 = CALL2(1,CHKREF(Yerror),CHKREF(lit_52),components_);
  } else {
  }
  T0 = resultF1254;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YprotoSsystemYcomponents_last) {
  P components_;
  P lastF1255;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T3 = CALL1(1,CHKREF(YruntimeYlen),components_);
  T2 = CALL2(1,CHKREF(YruntimeY_),T3,YPint((P)1));
  T1 = CALL2(1,CHKREF(YruntimeYelt),components_,T2);
  lastF1255 = T1;
  T4 = CALL2(1,CHKREF(YisaQ),lastF1255,CHKREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,CHKREF(Yerror),CHKREF(lit_54),components_);
  } else {
  }
  T0 = lastF1255;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YprotoSsystemYcomponents_basename) {
  P components_;
  P lastF1259;
  P countF1258;
  P hierF1257;
  P labelF1256;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,CHKREF(YprotoSsystemYlabel_components),components_);
  labelF1256 = T1;
  T3 = CALL1(1,CHKREF(YprotoSsystemYhierarchical_components),components_);
  hierF1257 = T3;
  T5 = CALL1(1,CHKREF(YruntimeYlen),hierF1257);
  countF1258 = T5;
  T7 = CALL1(1,CHKREF(YprotoSsystemYcomponents_last),hierF1257);
  lastF1259 = T7;
  T9 = CALL2(1,CHKREF(YisaQ),lastF1259,CHKREF(YLstrG));
  T8 = CALL1(1,CHKREF(Ynot),T9);
  if (T8 != YPfalse) {
    T10 = CALL2(1,CHKREF(Yerror),CHKREF(lit_56),components_);
  } else {
  }
  T12 = CALL2(1,CHKREF(YmacrosYEE),countF1258,YPint((P)1));
  if (T12 != YPfalse) {
    T13 = CALL2(1,CHKREF(YmacrosYcat),labelF1256,CHKREF(lit_57));
    T11 = T13;
  } else {
    T16 = CALL2(1,CHKREF(YruntimeY_),countF1258,YPint((P)1));
    T15 = CALL3(1,CHKREF(YruntimeYsub),hierF1257,YPint((P)0),T16);
    T14 = CALL2(1,CHKREF(YmacrosYcat),labelF1256,T15);
    T11 = T14;
  }
  T6 = T11;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YprotoSsystemYcomponents_parent_directory) {
  P components_;
  P lastF1260;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,CHKREF(YprotoSsystemYcomponents_last),components_);
  lastF1260 = T1;
  T3 = CALL2(1,CHKREF(YisaQ),lastF1260,CHKREF(YLstrG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,CHKREF(YprotoSsystemYcomponents_basename),components_);
    T2 = T4;
  } else {
    T6 = CALL2(1,CHKREF(YmacrosYEE),lastF1260,CHKREF(lit_40));
    if (T6 != YPfalse) {
      T7 = CALL1(1,CHKREF(Yerror),CHKREF(lit_59));
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL2(1,CHKREF(YmacrosYcat),components_,CHKREF(lit_60));
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

FUNCODEDEF(YprotoSsystemYparent_directory) {
  P name_;
  P componentsF1261;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,CHKREF(YprotoSsystemYpathname_to_components),name_);
  componentsF1261 = T1;
  T3 = CALL1(1,CHKREF(YprotoSsystemYcomponents_parent_directory),componentsF1261);
  T2 = CALL1(1,CHKREF(YprotoSsystemYcomponents_to_pathname),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ensure_25) {
  P c_;
  P nF1262;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL2(1,CHKREF(YmacrosYcat),FREEREF(0),c_);
  T1 = CALL1(1,CHKREF(YprotoSsystemYcomponents_to_pathname),T2);
  nF1262 = T1;
  T4 = CALL1(1,CHKREF(YprotoSsystemYfile_existsQ),nF1262);
  if (T4 != YPfalse) {
    T8 = CALL1(1,CHKREF(YprotoSsystemYfile_type),nF1262);
    T7 = CALL2(1,CHKREF(YmacrosYEE),T8,CHKREF(lit_65));
    T6 = CALL1(1,CHKREF(Ynot),T7);
    if (T6 != YPfalse) {
      T9 = CALL2(1,CHKREF(Yerror),CHKREF(lit_66),nF1262);
      T5 = T9;
    } else {
      T5 = YPfalse;
    }
    T3 = T5;
  } else {
    T12 = CALL1(1,CHKREF(YprotoSsystemYcomponents_last),c_);
    T11 = CALL2(1,CHKREF(YisaQ),T12,CHKREF(YLstrG));
    if (T11 != YPfalse) {
      T13 = CALL1(1,CHKREF(YprotoSsystemYcomponents_basename),c_);
      CALL1(0,FREEREF(1),T13);
      T14 = CALL1(1,CHKREF(YprotoSsystemYcreate_directory),nF1262);
      T10 = T14;
    } else {
      if (YPtrue != YPfalse) {
        T16 = CALL2(1,CHKREF(Yerror),CHKREF(lit_67),nF1262);
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

FUNCODEDEF(YprotoSsystemYprobe_directory) {
  P name_;
  P ensureF1266;
  P hierF1265;
  P labelF1264;
  P componentsF1263;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,CHKREF(YprotoSsystemYpathname_to_components),name_);
  componentsF1263 = T1;
  T3 = CALL1(1,CHKREF(YprotoSsystemYlabel_components),componentsF1263);
  labelF1264 = T3;
  T5 = CALL1(1,CHKREF(YprotoSsystemYhierarchical_components),componentsF1263);
  hierF1265 = T5;
  T6 = FUNSHELL(1,fun_ensure_25,2);
  ensureF1266 = T6;
  FUNINIT(ensureF1266, 2,labelF1264,ensureF1266);
  T7 = CALL1(0,ensureF1266,hierF1265);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YprotoSsystemY___main_0___() {
  P env_rootF1267;
  P T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70;
  P T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54;
  P T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"os-name");
  T0 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLstrG),Ynil);
  fun_os_name_0 = YPmet(FUNCODEREF(fun_os_name_0),CHKREF(lit_0),T0,ENVNUL);
  T3 = BOUNDP(YprotoSsystemYos_name);
  if (T3 != YPfalse) {
    T2 = CHKREF(YprotoSsystemYos_name);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_os_name_0;
  T1 = CALL2(1,CHKREF(YPdefine_method),T2,T4);
  YprotoSsystemYos_name = T1;
  lit_1 = YPPsym((P)"os-binding-value");
  lit_2 = YPPsym((P)"s");
  T5 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_os_binding_value_1 = YPmet(FUNCODEREF(fun_os_binding_value_1),CHKREF(lit_1),T5,ENVNUL);
  T8 = BOUNDP(YprotoSsystemYos_binding_value);
  if (T8 != YPfalse) {
    T7 = CHKREF(YprotoSsystemYos_binding_value);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_os_binding_value_1;
  T6 = CALL2(1,CHKREF(YPdefine_method),T7,T9);
  YprotoSsystemYos_binding_value = T6;
  lit_3 = YPPsym((P)"os-binding-value-setter");
  lit_4 = YPPsym((P)"v");
  T10 = YPsig(YPPlist(2,CHKREF(lit_4),CHKREF(lit_2)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLstrG)),YPfalse,YPint((P)2),CHKREF(YLstrG),Ynil);
  fun_os_binding_value_setter_2 = YPmet(FUNCODEREF(fun_os_binding_value_setter_2),CHKREF(lit_3),T10,ENVNUL);
  T13 = BOUNDP(YprotoSsystemYos_binding_value_setter);
  if (T13 != YPfalse) {
    T12 = CHKREF(YprotoSsystemYos_binding_value_setter);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_os_binding_value_setter_2;
  T11 = CALL2(1,CHKREF(YPdefine_method),T12,T14);
  YprotoSsystemYos_binding_value_setter = T11;
  lit_5 = YPsb((P)"linux");
  lit_6 = YPsb((P)"/");
  lit_7 = YPsb((P)"win32");
  lit_8 = YPsb((P)"\\");
  lit_9 = YPsb((P)"/");
  T17 = CALL0(1,CHKREF(YprotoSsystemYos_name));
  T16 = CALL2(1,CHKREF(YruntimeYE),T17,CHKREF(lit_5));
  if (T16 != YPfalse) {
    T15 = CHKREF(lit_6);
  } else {
    T20 = CALL0(1,CHKREF(YprotoSsystemYos_name));
    T19 = CALL2(1,CHKREF(YruntimeYE),T20,CHKREF(lit_7));
    if (T19 != YPfalse) {
      T18 = CHKREF(lit_8);
    } else {
      if (YPtrue != YPfalse) {
        T21 = CHKREF(lit_9);
      } else {
        T21 = YPfalse;
      }
      T18 = T21;
    }
    T15 = T18;
  }
  YprotoSsystemYTpath_separatorT = T15;
  lit_10 = YPPsym((P)"base-path");
  lit_11 = YPPsym((P)"filename");
  lit_12 = YPPsym((P)"loop");
  lit_13 = YPPsym((P)"i");
  lit_14 = YPsb((P)"");
  T23 = YPsig(YPPlist(1,CHKREF(lit_13)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_3 = YPmet(FUNCODEREF(fun_loop_3),CHKREF(lit_12),T23,ENVNUL);
  T22 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_base_path_4 = YPmet(FUNCODEREF(fun_base_path_4),CHKREF(lit_10),T22,ENVNUL);
  T26 = BOUNDP(YprotoSsystemYbase_path);
  if (T26 != YPfalse) {
    T25 = CHKREF(YprotoSsystemYbase_path);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_base_path_4;
  T24 = CALL2(1,CHKREF(YPdefine_method),T25,T27);
  YprotoSsystemYbase_path = T24;
  lit_15 = YPsb((P)"PROTO_ROOT");
  lit_16 = YPsb((P)"..");
  lit_17 = YPsb((P)"..");
  T29 = CALL1(1,CHKREF(YprotoSsystemYos_binding_value),CHKREF(lit_15));
  env_rootF1267 = T29;
  T31 = CALL1(1,CHKREF(YmacrosYemptyQ),env_rootF1267);
  if (T31 != YPfalse) {
    T34 = CALL0(1,CHKREF(YruntimeYapp_filename));
    T33 = CALL1(1,CHKREF(YprotoSsystemYbase_path),T34);
    T32 = CALLN(1,CHKREF(YmacrosYcat),4,T33,CHKREF(lit_16),CHKREF(YprotoSsystemYTpath_separatorT),CHKREF(lit_17));
    T30 = T32;
  } else {
    T30 = env_rootF1267;
  }
  T28 = T30;
  YprotoSsystemYTproto_rootT = T28;
  lit_18 = YPPsym((P)"add-src-path");
  lit_19 = YPPsym((P)"relpath");
  lit_20 = YPsb((P)"SRC");
  T35 = YPsig(YPPlist(1,CHKREF(lit_19)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_add_src_path_5 = YPmet(FUNCODEREF(fun_add_src_path_5),CHKREF(lit_18),T35,ENVNUL);
  T38 = BOUNDP(YprotoSsystemYadd_src_path);
  if (T38 != YPfalse) {
    T37 = CHKREF(YprotoSsystemYadd_src_path);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_add_src_path_5;
  T36 = CALL2(1,CHKREF(YPdefine_method),T37,T39);
  YprotoSsystemYadd_src_path = T36;
  lit_21 = YPPsym((P)"add-build-path");
  lit_22 = YPPsym((P)"builddir");
  lit_23 = YPsb((P)"C");
  T40 = YPsig(YPPlist(2,CHKREF(lit_22),CHKREF(lit_19)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLstrG),Ynil);
  fun_add_build_path_6 = YPmet(FUNCODEREF(fun_add_build_path_6),CHKREF(lit_21),T40,ENVNUL);
  T43 = BOUNDP(YprotoSsystemYadd_build_path);
  if (T43 != YPfalse) {
    T42 = CHKREF(YprotoSsystemYadd_build_path);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_add_build_path_6;
  T41 = CALL2(1,CHKREF(YPdefine_method),T42,T44);
  YprotoSsystemYadd_build_path = T41;
  lit_24 = YPsb((P)".proto");
  YprotoSsystemYTproto_extensionT = CHKREF(lit_24);
  lit_25 = YPsb((P)".c");
  YprotoSsystemYTc_extensionT = CHKREF(lit_25);
  lit_26 = YPsb((P)".o");
  YprotoSsystemYTobj_extensionT = CHKREF(lit_26);
  YprotoSsystemYTexe_extensionT = CHKREF(lit_14);
  lit_27 = YPPsym((P)"proto-filename");
  lit_28 = YPPsym((P)"name");
  T45 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YprotoSsystemYproto_filename = YPmet(FUNCODEREF(YprotoSsystemYproto_filename),CHKREF(lit_27),T45,ENVNUL);
  T46 = YprotoSsystemYproto_filename;
  YprotoSsystemYproto_filename = T46;
  lit_29 = YPPsym((P)"c-filename");
  T47 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YprotoSsystemYc_filename = YPmet(FUNCODEREF(YprotoSsystemYc_filename),CHKREF(lit_29),T47,ENVNUL);
  T48 = YprotoSsystemYc_filename;
  YprotoSsystemYc_filename = T48;
  lit_30 = YPPsym((P)"obj-filename");
  T49 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YprotoSsystemYobj_filename = YPmet(FUNCODEREF(YprotoSsystemYobj_filename),CHKREF(lit_30),T49,ENVNUL);
  T50 = YprotoSsystemYobj_filename;
  YprotoSsystemYobj_filename = T50;
  lit_31 = YPPsym((P)"exe-filename");
  T51 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YprotoSsystemYexe_filename = YPmet(FUNCODEREF(YprotoSsystemYexe_filename),CHKREF(lit_31),T51,ENVNUL);
  T52 = YprotoSsystemYexe_filename;
  YprotoSsystemYexe_filename = T52;
  lit_32 = YPPsym((P)"file-mtime");
  T53 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLfloG),Ynil);
  fun_file_mtime_11 = YPmet(FUNCODEREF(fun_file_mtime_11),CHKREF(lit_32),T53,ENVNUL);
  T56 = BOUNDP(YprotoSsystemYfile_mtime);
  if (T56 != YPfalse) {
    T55 = CHKREF(YprotoSsystemYfile_mtime);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_file_mtime_11;
  T54 = CALL2(1,CHKREF(YPdefine_method),T55,T57);
  YprotoSsystemYfile_mtime = T54;
  lit_33 = YPPsym((P)"file-exists?");
  T58 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  YprotoSsystemYfile_existsQ = YPmet(FUNCODEREF(YprotoSsystemYfile_existsQ),CHKREF(lit_33),T58,ENVNUL);
  T59 = YprotoSsystemYfile_existsQ;
  YprotoSsystemYfile_existsQ = T59;
  lit_34 = YPPsym((P)"file-type");
  T60 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLsymG),Ynil);
  YprotoSsystemYfile_type = YPmet(FUNCODEREF(YprotoSsystemYfile_type),CHKREF(lit_34),T60,ENVNUL);
  T61 = YprotoSsystemYfile_type;
  YprotoSsystemYfile_type = T61;
  lit_35 = YPPsym((P)"create-directory");
  T62 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YprotoSsystemYcreate_directory = YPmet(FUNCODEREF(YprotoSsystemYcreate_directory),CHKREF(lit_35),T62,ENVNUL);
  T63 = YprotoSsystemYcreate_directory;
  YprotoSsystemYcreate_directory = T63;
  lit_36 = YPPsym((P)"pathname-to-components");
  lit_37 = YPPsym((P)"pathname");
  lit_38 = YPsb((P)"Can't convert empty an pathname to components.\n");
  lit_39 = YPPsym((P)"component");
  lit_40 = YPPsym((P)"root");
  lit_41 = YPsb((P)"..");
  lit_42 = YPPsym((P)"up");
  lit_43 = YPsb((P)".");
  lit_44 = YPPsym((P)"current");
  T65 = YPsig(YPPlist(1,CHKREF(lit_39)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T65,ENVNUL);
  T64 = YPsig(YPPlist(1,CHKREF(lit_37)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  YprotoSsystemYpathname_to_components = YPmet(FUNCODEREF(YprotoSsystemYpathname_to_components),CHKREF(lit_36),T64,ENVNUL);
  T66 = YprotoSsystemYpathname_to_components;
  YprotoSsystemYpathname_to_components = T66;
  lit_45 = YPPsym((P)"components-to-pathname");
  lit_46 = YPPsym((P)"components");
  lit_47 = YPsb((P)"Can't convert empty components to a pathname.\n");
  lit_48 = YPsb((P)"..");
  lit_49 = YPsb((P)".");
  T68 = YPsig(YPPlist(1,CHKREF(lit_39)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T68,ENVNUL);
  T67 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  YprotoSsystemYcomponents_to_pathname = YPmet(FUNCODEREF(YprotoSsystemYcomponents_to_pathname),CHKREF(lit_45),T67,ENVNUL);
  T69 = YprotoSsystemYcomponents_to_pathname;
  YprotoSsystemYcomponents_to_pathname = T69;
  lit_50 = YPPsym((P)"label-components");
  T70 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  YprotoSsystemYlabel_components = YPmet(FUNCODEREF(YprotoSsystemYlabel_components),CHKREF(lit_50),T70,ENVNUL);
  T71 = YprotoSsystemYlabel_components;
  YprotoSsystemYlabel_components = T71;
  lit_51 = YPPsym((P)"hierarchical-components");
  lit_52 = YPsb((P)"Hierarchical portion of %= must not be empty.\n");
  T72 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  YprotoSsystemYhierarchical_components = YPmet(FUNCODEREF(YprotoSsystemYhierarchical_components),CHKREF(lit_51),T72,ENVNUL);
  T73 = YprotoSsystemYhierarchical_components;
  YprotoSsystemYhierarchical_components = T73;
  lit_53 = YPPsym((P)"components-last");
  lit_54 = YPsb((P)"No filename in %=.\n");
  T74 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YprotoSsystemYcomponents_last = YPmet(FUNCODEREF(YprotoSsystemYcomponents_last),CHKREF(lit_53),T74,ENVNUL);
  T75 = YprotoSsystemYcomponents_last;
  YprotoSsystemYcomponents_last = T75;
  lit_55 = YPPsym((P)"components-basename");
  lit_56 = YPsb((P)"Can't compute basename of %=\n.");
  lit_57 = YPPlist(1,YPPsym((P)"current"));
  T76 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  YprotoSsystemYcomponents_basename = YPmet(FUNCODEREF(YprotoSsystemYcomponents_basename),CHKREF(lit_55),T76,ENVNUL);
  T77 = YprotoSsystemYcomponents_basename;
  YprotoSsystemYcomponents_basename = T77;
  lit_58 = YPPsym((P)"components-parent-directory");
  lit_59 = YPsb((P)"Can't calculate parent of root directory");
  lit_60 = YPPlist(1,YPPsym((P)"up"));
  T78 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  YprotoSsystemYcomponents_parent_directory = YPmet(FUNCODEREF(YprotoSsystemYcomponents_parent_directory),CHKREF(lit_58),T78,ENVNUL);
  T79 = YprotoSsystemYcomponents_parent_directory;
  YprotoSsystemYcomponents_parent_directory = T79;
  lit_61 = YPPsym((P)"parent-directory");
  T80 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  YprotoSsystemYparent_directory = YPmet(FUNCODEREF(YprotoSsystemYparent_directory),CHKREF(lit_61),T80,ENVNUL);
  T81 = YprotoSsystemYparent_directory;
  YprotoSsystemYparent_directory = T81;
  lit_62 = YPPsym((P)"probe-directory");
  lit_63 = YPPsym((P)"ensure");
  lit_64 = YPPsym((P)"c");
  lit_65 = YPPsym((P)"directory");
  lit_66 = YPsb((P)"%s is not a directory.\n");
  lit_67 = YPsb((P)"Don't know how to create the directory %s.\n");
  T83 = YPsig(YPPlist(1,CHKREF(lit_64)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_ensure_25 = YPmet(FUNCODEREF(fun_ensure_25),CHKREF(lit_63),T83,ENVNUL);
  T82 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YprotoSsystemYprobe_directory = YPmet(FUNCODEREF(YprotoSsystemYprobe_directory),CHKREF(lit_62),T82,ENVNUL);
  T84 = YprotoSsystemYprobe_directory;
  YprotoSsystemYprobe_directory = T84;
  T85 = YPfalse;
  return T85;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_proto;
extern MODULE_INFO module_info_strings;
extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_read;
extern MODULE_INFO module_info_syntax;

static USE_INFO use_infos[] = {
  {&module_info_proto},
  {&module_info_strings},
  {&module_info_boot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"odd?", &module_info_runtime, "odd?"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"and", &module_info_macros, "and"},
  {"%slot", &module_info_boot, "%slot"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"%selt", &module_info_boot, "%selt"},
  {"<log>", &module_info_boot, "<log>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"%im", &module_info_boot, "%im"},
  {"%iu", &module_info_boot, "%iu"},
  {"fabs", &module_info_runtime, "fabs"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"ct", &module_info_boot, "ct"},
  {"pos", &module_info_runtime, "pos"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"neg", &module_info_runtime, "neg"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"push", &module_info_runtime, "push"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"from-below", &module_info_runtime, "from-below"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"%i<", &module_info_boot, "%i<"},
  {"not", &module_info_boot, "not"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<any>", &module_info_boot, "<any>"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"%i+", &module_info_boot, "%i+"},
  {"<union>", &module_info_boot, "<union>"},
  {"%snul", &module_info_boot, "%snul"},
  {"write-string", &module_info_runtime, "write-string"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"let", &module_info_boot, "let"},
  {"pushf", &module_info_macros, "pushf"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"loc", &module_info_boot, "loc"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"cat", &module_info_macros, "cat"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"dg", &module_info_boot, "dg"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"next-method", &module_info_macros, "next-method"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"fun", &module_info_boot, "fun"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"empty?", &module_info_macros, "empty?"},
  {"buf", &module_info_runtime, "buf"},
  {"port-index", &module_info_runtime, "port-index"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"read", &module_info_runtime, "read"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"format", &module_info_runtime, "format"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"%iv", &module_info_boot, "%iv"},
  {"rev!", &module_info_runtime, "rev!"},
  {"last", &module_info_runtime, "last"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"floor/", &module_info_runtime, "floor/"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"tail", &module_info_boot, "tail"},
  {"%ft", &module_info_boot, "%ft"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"lsh", &module_info_runtime, "lsh"},
  {"gensym", &module_info_macros, "gensym"},
  {"ash", &module_info_runtime, "ash"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"map-str", &module_info_strings, "map-str"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"round/", &module_info_runtime, "round/"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"%su", &module_info_boot, "%su"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"%i?", &module_info_boot, "%i?"},
  {"rev", &module_info_runtime, "rev"},
  {"use", &module_info_boot, "use"},
  {"@olen", &module_info_boot, "@olen"},
  {"abs", &module_info_runtime, "abs"},
  {"bound?", &module_info_boot, "bound?"},
  {"<port>", &module_info_runtime, "<port>"},
  {"%velt", &module_info_boot, "%velt"},
  {"for", &module_info_macros, "for"},
  {"do2", &module_info_runtime, "do2"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"nil", &module_info_boot, "nil"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"*", &module_info_runtime, "*"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"case", &module_info_macros, "case"},
  {"<list>", &module_info_runtime, "<list>"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"max", &module_info_runtime, "max"},
  {"<error>", &module_info_runtime, "<error>"},
  {"%i^", &module_info_boot, "%i^"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"%ib", &module_info_boot, "%ib"},
  {"compose", &module_info_runtime, "compose"},
  {"export", &module_info_boot, "export"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"app-args", &module_info_runtime, "app-args"},
  {"write-char", &module_info_runtime, "write-char"},
  {"default", &module_info_runtime, "default"},
  {"address-of", &module_info_runtime, "address-of"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"%f+", &module_info_boot, "%f+"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"floor", &module_info_runtime, "floor"},
  {"cat2", &module_info_runtime, "cat2"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"modulo", &module_info_runtime, "modulo"},
  {"collecting", &module_info_macros, "collecting"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"cat!", &module_info_runtime, "cat!"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"%bb", &module_info_boot, "%bb"},
  {"class-name", &module_info_boot, "class-name"},
  {"when", &module_info_macros, "when"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%vec", &module_info_boot, "%vec"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"isa?", &module_info_boot, "isa?"},
  {"empty", &module_info_runtime, "empty"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"+", &module_info_runtime, "+"},
  {"<type>", &module_info_boot, "<type>"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"<class>", &module_info_boot, "<class>"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"<range>", &module_info_runtime, "<range>"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"dp", &module_info_boot, "dp"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"remainder", &module_info_runtime, "remainder"},
  {"add", &module_info_runtime, "add"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"find-key", &module_info_runtime, "find-key"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"elt", &module_info_runtime, "elt"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"curry", &module_info_runtime, "curry"},
  {"display", &module_info_write, "display"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"<=", &module_info_runtime, "<="},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"logior", &module_info_runtime, "logior"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"%pair", &module_info_boot, "%pair"},
  {"=", &module_info_runtime, "="},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"nul?", &module_info_runtime, "nul?"},
  {"type-error", &module_info_boot, "type-error"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"map", &module_info_macros, "map"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"pop", &module_info_runtime, "pop"},
  {"map2", &module_info_runtime, "map2"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"pos?", &module_info_runtime, "pos?"},
  {"logxor", &module_info_runtime, "logxor"},
  {"%cu", &module_info_boot, "%cu"},
  {"from-to", &module_info_runtime, "from-to"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"inc", &module_info_macros, "inc"},
  {"~=", &module_info_runtime, "~="},
  {"<gen>", &module_info_boot, "<gen>"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"%f-", &module_info_boot, "%f-"},
  {"from", &module_info_runtime, "from"},
  {"<str>", &module_info_boot, "<str>"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"==", &module_info_macros, "=="},
  {"dc", &module_info_boot, "dc"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"tup", &module_info_macros, "tup"},
  {"logand", &module_info_runtime, "logand"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"false-or", &module_info_runtime, "false-or"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"reduce", &module_info_runtime, "reduce"},
  {"str", &module_info_runtime, "str"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"type-class", &module_info_boot, "type-class"},
  {"lognot", &module_info_runtime, "lognot"},
  {"popf", &module_info_macros, "popf"},
  {"lst", &module_info_boot, "lst"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"1st", &module_info_runtime, "1st"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"as", &module_info_runtime, "as"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"%slen", &module_info_boot, "%slen"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"%i*", &module_info_boot, "%i*"},
  {"%i-", &module_info_boot, "%i-"},
  {"always", &module_info_runtime, "always"},
  {"t<", &module_info_runtime, "t<"},
  {"%f<", &module_info_boot, "%f<"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"<met>", &module_info_boot, "<met>"},
  {"out", &module_info_runtime, "out"},
  {"%str", &module_info_boot, "%str"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"do", &module_info_runtime, "do"},
  {"newline", &module_info_runtime, "newline"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"fab", &module_info_runtime, "fab"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"force-output", &module_info_runtime, "force-output"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"<step>", &module_info_runtime, "<step>"},
  {"string-join", &module_info_strings, "string-join"},
  {"%lb", &module_info_boot, "%lb"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"isa", &module_info_boot, "isa"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"del-key", &module_info_runtime, "del-key"},
  {"%c<", &module_info_boot, "%c<"},
  {"object-class", &module_info_boot, "object-class"},
  {"lab", &module_info_boot, "lab"},
  {"t=", &module_info_runtime, "t="},
  {"select", &module_info_macros, "select"},
  {"@+", &module_info_boot, "@+"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"zero?", &module_info_runtime, "zero?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"pick", &module_info_runtime, "pick"},
  {"%fb", &module_info_boot, "%fb"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"pair", &module_info_macros, "pair"},
  {"%cb", &module_info_boot, "%cb"},
  {"now-key", &module_info_runtime, "now-key"},
  {"fin", &module_info_boot, "fin"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"%f/", &module_info_boot, "%f/"},
  {"<seq>", &module_info_boot, "<seq>"},
  {">=", &module_info_runtime, ">="},
  {"-", &module_info_runtime, "-"},
  {"t+", &module_info_runtime, "t+"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"read-char", &module_info_runtime, "read-char"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"mem?", &module_info_runtime, "mem?"},
  {"dss", &module_info_boot, "dss"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"set", &module_info_boot, "set"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"%i&", &module_info_boot, "%i&"},
  {"string-repeat", &module_info_strings, "string-repeat"},
  {">", &module_info_runtime, ">"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"all?", &module_info_runtime, "all?"},
  {"<col>", &module_info_boot, "<col>"},
  {"2nd", &module_info_runtime, "2nd"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"~==", &module_info_runtime, "~=="},
  {"%vnul", &module_info_boot, "%vnul"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"round", &module_info_runtime, "round"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"from-by", &module_info_runtime, "from-by"},
  {"df", &module_info_boot, "df"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"assert", &module_info_macros, "assert"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"nul", &module_info_boot, "nul"},
  {"<", &module_info_runtime, "<"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"write", &module_info_write, "write"},
  {"dec", &module_info_macros, "dec"},
  {"first-then", &module_info_runtime, "first-then"},
  {"string-split", &module_info_strings, "string-split"},
  {"writeln", &module_info_write, "writeln"},
  {"del", &module_info_runtime, "del"},
  {"even?", &module_info_runtime, "even?"},
  {"%it/", &module_info_boot, "%it/"},
  {"list", &module_info_runtime, "list"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"type-object", &module_info_boot, "type-object"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"%fu", &module_info_boot, "%fu"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"%raw", &module_info_boot, "%raw"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"dlet", &module_info_macros, "dlet"},
  {"apply", &module_info_macros, "apply"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"%untag", &module_info_boot, "%untag"},
  {"or", &module_info_macros, "or"},
  {"mif", &module_info_boot, "mif"},
  {"%isa", &module_info_boot, "%isa"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"from-above", &module_info_runtime, "from-above"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%i=", &module_info_boot, "%i="},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"error", &module_info_boot, "error"},
  {"head", &module_info_boot, "head"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"neg?", &module_info_runtime, "neg?"},
  {"%sb", &module_info_boot, "%sb"},
  {"len", &module_info_runtime, "len"},
  {"<map>", &module_info_runtime, "<map>"},
  {"identity", &module_info_runtime, "identity"},
  {"ds", &module_info_boot, "ds"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"var-type", &module_info_macros, "var-type"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"seq", &module_info_boot, "seq"},
  {"quote", &module_info_boot, "quote"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"%f=", &module_info_boot, "%f="},
  {"sub", &module_info_runtime, "sub"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"<int>", &module_info_boot, "<int>"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"%lu", &module_info_boot, "%lu"},
  {"dm", &module_info_boot, "dm"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"rep", &module_info_boot, "rep"},
  {"sig", &module_info_runtime, "sig"},
  {"to-str", &module_info_runtime, "to-str"},
  {"in", &module_info_runtime, "in"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"%i!", &module_info_boot, "%i!"},
  {"unless", &module_info_macros, "unless"},
  {"%f*", &module_info_boot, "%f*"},
  {"any?", &module_info_runtime, "any?"},
  {"<num>", &module_info_boot, "<num>"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"dv", &module_info_boot, "dv"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"fill", &module_info_runtime, "fill"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"try", &module_info_boot, "try"},
  {"slot", &module_info_boot, "slot"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"@<", &module_info_boot, "@<"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"var-name", &module_info_macros, "var-name"},
  {"%c=", &module_info_boot, "%c="},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"/", &module_info_runtime, "/"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"alter", &module_info_runtime, "alter"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"3rd", &module_info_runtime, "3rd"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"truncate", &module_info_runtime, "truncate"},
  {"min", &module_info_runtime, "min"},
  {"if", &module_info_boot, "if"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"vec", &module_info_runtime, "vec"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"*exe-extension*", &YprotoSsystemYTexe_extensionT},
  {"parent-directory", &YprotoSsystemYparent_directory},
  {"components-to-pathname", &YprotoSsystemYcomponents_to_pathname},
  {"components-parent-directory", &YprotoSsystemYcomponents_parent_directory},
  {"c-filename", &YprotoSsystemYc_filename},
  {"file-mtime", &YprotoSsystemYfile_mtime},
  {"pathname-to-components", &YprotoSsystemYpathname_to_components},
  {"*path-separator*", &YprotoSsystemYTpath_separatorT},
  {"components-basename", &YprotoSsystemYcomponents_basename},
  {"hierarchical-components", &YprotoSsystemYhierarchical_components},
  {"---main-0---", NULL},
  {"file-exists?", &YprotoSsystemYfile_existsQ},
  {"obj-filename", &YprotoSsystemYobj_filename},
  {"*c-extension*", &YprotoSsystemYTc_extensionT},
  {"os-binding-value", &YprotoSsystemYos_binding_value},
  {"probe-directory", &YprotoSsystemYprobe_directory},
  {"file-type", &YprotoSsystemYfile_type},
  {"base-path", &YprotoSsystemYbase_path},
  {"proto-filename", &YprotoSsystemYproto_filename},
  {"add-src-path", &YprotoSsystemYadd_src_path},
  {"label-components", &YprotoSsystemYlabel_components},
  {"os-name", &YprotoSsystemYos_name},
  {"*proto-extension*", &YprotoSsystemYTproto_extensionT},
  {"exe-filename", &YprotoSsystemYexe_filename},
  {"add-build-path", &YprotoSsystemYadd_build_path},
  {"create-directory", &YprotoSsystemYcreate_directory},
  {"components-last", &YprotoSsystemYcomponents_last},
  {"*proto-root*", &YprotoSsystemYTproto_rootT},
  {"*obj-extension*", &YprotoSsystemYTobj_extensionT},
  {"os-binding-value-setter", &YprotoSsystemYos_binding_value_setter},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"label-components", "label-components"},
  {"parent-directory", "parent-directory"},
  {"components-to-pathname", "components-to-pathname"},
  {"components-parent-directory", "components-parent-directory"},
  {"c-filename", "c-filename"},
  {"file-mtime", "file-mtime"},
  {"pathname-to-components", "pathname-to-components"},
  {"*path-separator*", "*path-separator*"},
  {"components-basename", "components-basename"},
  {"hierarchical-components", "hierarchical-components"},
  {"obj-filename", "obj-filename"},
  {"*c-extension*", "*c-extension*"},
  {"os-binding-value", "os-binding-value"},
  {"probe-directory", "probe-directory"},
  {"file-exists?", "file-exists?"},
  {"file-type", "file-type"},
  {"proto-filename", "proto-filename"},
  {"add-src-path", "add-src-path"},
  {"os-name", "os-name"},
  {"*proto-extension*", "*proto-extension*"},
  {"exe-filename", "exe-filename"},
  {"add-build-path", "add-build-path"},
  {"create-directory", "create-directory"},
  {"components-last", "components-last"},
  {"*proto-root*", "*proto-root*"},
  {"*obj-extension*", "*obj-extension*"},
  {"*exe-extension*", "*exe-extension*"},
  {"os-binding-value-setter", "os-binding-value-setter"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoSsystem;
MODULE_INFO module_info_protoSsystem = {
  "proto/system",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_proto (void);
extern void load_module_strings (void);
extern void load_module_boot (void);

/* EXPRESSION: */

extern void load_module_protoSsystem (void);

void load_module_protoSsystem (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_proto();
  load_module_strings();
  load_module_boot();

  (P)YprotoSsystemY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
