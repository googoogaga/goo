/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/system */

EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YLlstG,"boot","<lst>");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYE,"runtime","=");
EXT(Yslot_init,"boot","slot-init");
EXT(YmacrosYpair,"macros","pair");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(Yfapply,"boot","fapply");
EXT(YLvecG,"boot","<vec>");
DEF(YprotoSsystemYTc_extensionT,"proto/system","*c-extension*");
EXT(YLintG,"boot","<int>");
EXT(YLlogG,"boot","<log>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYcompose,"runtime","compose");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYround,"runtime","round");
EXT(YobjectL,"boot","object<");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYto_digit,"runtime","to-digit");
DEF(YprotoSsystemYexe_filename,"proto/system","exe-filename");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYL,"runtime","<");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
DEF(YprotoSsystemYTproto_rootT,"proto/system","*proto-root*");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YLcolG,"boot","<col>");
DEF(YprotoSsystemYfile_type,"proto/system","file-type");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YPsymbols,"boot","%symbols");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YstringsYstring_split,"strings","string-split");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
DEF(YprotoSsystemYobj_filename,"proto/system","obj-filename");
EXT(Yerror,"boot","error");
EXT(Ysig_value,"boot","sig-value");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYGE,"runtime",">=");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYsub,"runtime","sub");
EXT(YPvnul,"boot","%vnul");
EXT(YLoptsG,"boot","<opts>");
EXT(YwriteYdisplay,"write","display");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeYfloor,"runtime","floor");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(Ytail,"boot","tail");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYfill,"runtime","fill");
EXT(YruntimeYadd,"runtime","add");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYpop,"runtime","pop");
EXT(YstringsYstring_repeat,"strings","string-repeat");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(Ynul,"boot","nul");
EXT(Ylst,"boot","lst");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYempty,"runtime","empty");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYdefault,"runtime","default");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYfloorS,"runtime","floor/");
DEF(YprotoSsystemYadd_src_path,"proto/system","add-src-path");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(Ysig_names,"boot","sig-names");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YPisa,"boot","%isa");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYdo,"runtime","do");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YisaQ,"boot","isa?");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yapply,"boot","apply");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
DEF(YprotoSsystemYadd_build_path,"proto/system","add-build-path");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(YprotoSsystemYproto_filename,"proto/system","proto-filename");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YmacrosYEE,"macros","==");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeYtruncateS,"runtime","truncate/");
DEF(YprotoSsystemYTproto_extensionT,"proto/system","*proto-extension*");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(Ynot,"boot","not");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYas,"runtime","as");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLanyG,"boot","<any>");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YruntimeYNE,"runtime","~=");
DEF(YprotoSsystemYlabel_components,"proto/system","label-components");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYrev,"runtime","rev");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYmax,"runtime","max");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YruntimeYpeek_char,"runtime","peek-char");
DEF(YprotoSsystemYTpath_separatorT,"proto/system","*path-separator*");
EXT(YPsnul,"boot","%snul");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYmap2,"runtime","map2");
DEF(YprotoSsystemYfile_mtime,"proto/system","file-mtime");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYA,"runtime","+");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(Yfind_setter,"boot","find-setter");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YPPmacro,"boot","%%macro");
DEF(YprotoSsystemYos_binding_value_setter,"proto/system","os-binding-value-setter");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYfrom,"runtime","from");
EXT(YwriteYwriteln,"write","writeln");
EXT(YruntimeY1st,"runtime","1st");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(Ysym_name,"boot","sym-name");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YPdefine_method,"boot","%define-method");
EXT(YmacrosYgensym,"macros","gensym");
EXT(Yslot_getter,"boot","slot-getter");
EXT(Yobject_direct_parents,"boot","object-direct-parents");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
DEF(YprotoSsystemYbase_path,"proto/system","base-path");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
DEF(YprotoSsystemYcomponents_parent_directory,"proto/system","components-parent-directory");
EXT(YruntimeYapp_filename,"runtime","app-filename");
DEF(YprotoSsystemYcomponents_to_pathname,"proto/system","components-to-pathname");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYalways,"runtime","always");
EXT(YmacrosYcat,"macros","cat");
EXT(YLnumG,"boot","<num>");
DEF(YprotoSsystemYc_filename,"proto/system","c-filename");
DEF(YprotoSsystemYfile_existsQ,"proto/system","file-exists?");
DEF(YprotoSsystemYpathname_to_components,"proto/system","pathname-to-components");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
DEF(YprotoSsystemYos_name,"proto/system","os-name");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYin,"runtime","in");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
DEF(YprotoSsystemYhierarchical_components,"proto/system","hierarchical-components");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYout,"runtime","out");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
DEF(YprotoSsystemYos_binding_value,"proto/system","os-binding-value");
DEF(YprotoSsystemYparent_directory,"proto/system","parent-directory");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(Ynil,"boot","nil");
EXT(YLseqG,"boot","<seq>");
DEF(YprotoSsystemYcomponents_last,"proto/system","components-last");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYroundS,"runtime","round/");
EXT(Yobject_direct_slots,"boot","object-direct-slots");
EXT(YruntimeYabs,"runtime","abs");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YLgenG,"boot","<gen>");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(Yhead,"boot","head");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(Yslot_value,"boot","slot-value");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
DEF(YprotoSsystemYcomponents_basename,"proto/system","components-basename");
EXT(YruntimeYsig,"runtime","sig");
EXT(Yfun_value,"boot","fun-value");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Yfun_names,"boot","fun-names");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYLtabG,"runtime","<tab>");
DEF(YprotoSsystemYprobe_directory,"proto/system","probe-directory");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YstringsYmap_str,"strings","map-str");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYdel,"runtime","del");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeYlist,"runtime","list");
EXT(YruntimeYlast,"runtime","last");
EXT(YwriteYobject_name,"write","object-name");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YruntimeYmin,"runtime","min");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(Ytype_error,"boot","type-error");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YstringsYstring_join,"strings","string-join");
EXT(YwriteYwrite,"write","write");
EXT(Yhead_setter,"boot","head-setter");
EXT(YLtraitsG,"boot","<traits>");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYlen,"runtime","len");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
DEF(YprotoSsystemYcreate_directory,"proto/system","create-directory");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YLfloG,"boot","<flo>");
DEF(YprotoSsystemYTobj_extensionT,"proto/system","*obj-extension*");
DEF(YprotoSsystemYTexe_extensionT,"proto/system","*exe-extension*");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYnegQ,"runtime","neg?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_36);
DEFLIT(lit_10);
DEFLIT(lit_31);
DEFLIT(lit_20);
DEFLIT(lit_32);
DEFLIT(lit_51);
DEFLIT(lit_0);
DEFLIT(lit_46);
DEFLIT(lit_63);
DEFLIT(lit_38);
DEFLIT(lit_22);
DEFLIT(lit_33);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_60);
DEFLIT(lit_49);
DEFLIT(lit_3);
DEFLIT(lit_43);
DEFLIT(lit_44);
DEFLIT(lit_19);
DEFLIT(lit_58);
DEFLIT(lit_1);
DEFLIT(lit_34);
DEFLIT(lit_54);
DEFLIT(lit_41);
DEFLIT(lit_59);
DEFLIT(lit_25);
DEFLIT(lit_50);
DEFLIT(lit_40);
DEFLIT(lit_42);
DEFLIT(lit_17);
DEFLIT(lit_29);
DEFLIT(lit_13);
DEFLIT(lit_62);
DEFLIT(lit_66);
DEFLIT(lit_6);
DEFLIT(lit_12);
DEFLIT(lit_23);
DEFLIT(lit_64);
DEFLIT(lit_65);
DEFLIT(lit_45);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_8);
DEFLIT(lit_55);
DEFLIT(lit_21);
DEFLIT(lit_53);
DEFLIT(lit_52);
DEFLIT(lit_9);
DEFLIT(lit_37);
DEFLIT(lit_39);
DEFLIT(lit_47);
DEFLIT(lit_27);
DEFLIT(lit_48);
DEFLIT(lit_35);
DEFLIT(lit_11);
DEFLIT(lit_57);
DEFLIT(lit_18);
DEFLIT(lit_5);
DEFLIT(lit_26);
DEFLIT(lit_4);
DEFLIT(lit_61);
DEFLIT(lit_30);
DEFLIT(lit_28);
DEFLIT(lit_56);
DEFLIT(lit_14);
DEFLIT(lit_24);
DEFLIT(lit_67);

/* FUNCTIONS: */

LOCFOR(fun_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_loop_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_6);
FUNFOR(YprotoSsystemYproto_filename);
FUNFOR(YprotoSsystemYc_filename);
FUNFOR(YprotoSsystemYobj_filename);
FUNFOR(YprotoSsystemYexe_filename);
LOCFOR(fun_11);
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

FUNCODEDEF(fun_0) {
  P T1,T0;
loop:
  T1 = (P)YPos_name();
  T0 = (P)YPsb(T1);
  RET(T0);
}

FUNCODEDEF(fun_1) {
  ARG(s_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = (P)YPsu(s_);
  T1 = (P)YPos_binding_value(T2);
  T0 = (P)YPsb(T1);
  RET(T0);
}

FUNCODEDEF(fun_2) {
  ARG(s_, 0);
  ARG(v_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPsu(v_);
  T0 = (P)YPsu(s_);
  (P)YPos_binding_value_setter(T1,T0);
  RET(v_);
}

FUNCODEDEF(fun_loop_3) {
  ARG(i_, 0);
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = CALL2(CHKREF(YruntimeYL),i_,YPint((P)0));
  if (T9 != YPfalse) {
    T0 = CHKREF(lit_14);
  } else {
    T8 = CALL2(CHKREF(YruntimeYelt),FREEREF(1),i_);
    T7 = CALL2(CHKREF(YruntimeYelt),CHKREF(YprotoSsystemYTpath_separatorT),YPint((P)0));
    T6 = CALL2(CHKREF(YruntimeYE),T8,T7);
    if (T6 != YPfalse) {
      T5 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
      T4 = CALL3(CHKREF(YruntimeYsub),FREEREF(1),YPint((P)0),T5);
      T1 = T4;
    } else {
      T3 = CALL2(CHKREF(YruntimeY_),i_,YPint((P)1));
      a1 = T3;
      i_ = a1;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  ARG(filename_, 0);
  P loopF1218;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = FUNSHELL(1,fun_loop_3,2);
  loopF1218 = T4;
  FUNINIT(loopF1218, 2,loopF1218,filename_);
  T3 = CALL1(CHKREF(YruntimeYlen),filename_);
  T2 = CALL2(CHKREF(YruntimeY_),T3,YPint((P)1));
  T1 = KCALL1(loopF1218,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_5) {
  ARG(relpath_, 0);
  P T0;
  P a1;
loop:
  T0 = CALLN(CHKREF(YmacrosYcat),5,CHKREF(YprotoSsystemYTproto_rootT),CHKREF(YprotoSsystemYTpath_separatorT),CHKREF(lit_20),CHKREF(YprotoSsystemYTpath_separatorT),relpath_);
  RET(T0);
}

FUNCODEDEF(fun_6) {
  ARG(relpath_, 0);
  ARG(builddir_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALLN(CHKREF(YmacrosYcat),7,CHKREF(YprotoSsystemYTproto_rootT),CHKREF(YprotoSsystemYTpath_separatorT),CHKREF(lit_23),CHKREF(YprotoSsystemYTpath_separatorT),builddir_,CHKREF(YprotoSsystemYTpath_separatorT),relpath_);
  RET(T0);
}

FUNCODEDEF(YprotoSsystemYproto_filename) {
  ARG(name_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYcat),name_,CHKREF(YprotoSsystemYTproto_extensionT));
  QRET(T0);
}

FUNCODEDEF(YprotoSsystemYc_filename) {
  ARG(name_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYcat),name_,CHKREF(YprotoSsystemYTc_extensionT));
  QRET(T0);
}

FUNCODEDEF(YprotoSsystemYobj_filename) {
  ARG(name_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYcat),name_,CHKREF(YprotoSsystemYTobj_extensionT));
  QRET(T0);
}

FUNCODEDEF(YprotoSsystemYexe_filename) {
  ARG(name_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYcat),name_,CHKREF(YprotoSsystemYTexe_extensionT));
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  ARG(filename_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = (P)YPsu(filename_);
  T1 = (P)YPfile_mtime(T2);
  T0 = (P)YPfb(T1);
  RET(T0);
}

FUNCODEDEF(YprotoSsystemYfile_existsQ) {
  ARG(filename_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPsu(filename_);
  T0 = (P)YPfile_existsQ(T1);
  RET(T0);
}

FUNCODEDEF(YprotoSsystemYfile_type) {
  ARG(filename_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPsu(filename_);
  T0 = (P)YPfile_type(T1);
  RET(T0);
}

FUNCODEDEF(YprotoSsystemYcreate_directory) {
  ARG(filename_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPsu(filename_);
  T0 = (P)YPcreate_directory(T1);
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  ARG(component_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL2(CHKREF(YruntimeYE),component_,CHKREF(lit_14));
  if (T6 != YPfalse) {
    T0 = CHKREF(lit_43);
  } else {
    T5 = CALL2(CHKREF(YruntimeYE),component_,CHKREF(lit_42));
    if (T5 != YPfalse) {
      T1 = CHKREF(lit_41);
    } else {
      T4 = CALL2(CHKREF(YruntimeYE),component_,CHKREF(lit_40));
      if (T4 != YPfalse) {
        T2 = CHKREF(lit_39);
      } else {
        if (YPtrue != YPfalse) {
          T3 = component_;
        } else {
          T3 = YPfalse;
        }
        T2 = T3;
      }
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YprotoSsystemYpathname_to_components) {
  ARG(pathname_, 0);
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  pathname_ = BOXFAB(pathname_);
  T3 = BOXVAL(pathname_);
  T2 = CALL1(CHKREF(YmacrosYemptyQ),T3);
  if (T2 != YPfalse) {
    T1 = CALL1(CHKREF(Yerror),CHKREF(lit_44));
  } else {
  }
  T13 = BOXVAL(pathname_);
  T12 = CALL1(CHKREF(YruntimeYlast),T13);
  T11 = CALL2(CHKREF(YruntimeYelt),CHKREF(YprotoSsystemYTpath_separatorT),YPint((P)0));
  T10 = CALL2(CHKREF(YmacrosYEE),T12,T11);
  if (T10 != YPfalse) {
    T9 = BOXVAL(pathname_);
    T8 = BOXVAL(pathname_);
    T7 = CALL1(CHKREF(YruntimeYlen),T8);
    T6 = CALL2(CHKREF(YruntimeY_),T7,YPint((P)1));
    T5 = CALL3(CHKREF(YruntimeYsub),T9,YPint((P)0),T6);
    T4 = BOXVAL(pathname_) = T5;
  } else {
  }
  T18 = fun_15;
  T17 = BOXVAL(pathname_);
  T16 = CALL2(CHKREF(YruntimeYelt),CHKREF(YprotoSsystemYTpath_separatorT),YPint((P)0));
  T15 = CALL2(CHKREF(YstringsYstring_split),T17,T16);
  T14 = CALL2(CHKREF(YmacrosYmap),T18,T15);
  RET(T14);
}

FUNCODEDEF(fun_17) {
  ARG(component_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL2(CHKREF(YmacrosYEE),component_,CHKREF(lit_43));
  if (T6 != YPfalse) {
    T0 = CHKREF(lit_14);
  } else {
    T5 = CALL2(CHKREF(YmacrosYEE),component_,CHKREF(lit_41));
    if (T5 != YPfalse) {
      T1 = CHKREF(lit_48);
    } else {
      T4 = CALL2(CHKREF(YmacrosYEE),component_,CHKREF(lit_39));
      if (T4 != YPfalse) {
        T2 = CHKREF(lit_47);
      } else {
        if (YPtrue != YPfalse) {
          T3 = component_;
        } else {
          T3 = YPfalse;
        }
        T2 = T3;
      }
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YprotoSsystemYcomponents_to_pathname) {
  ARG(components_, 0);
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YmacrosYemptyQ),components_);
  if (T1 != YPfalse) {
    T0 = CALL1(CHKREF(Yerror),CHKREF(lit_49));
  } else {
  }
  T4 = fun_17;
  T3 = CALL2(CHKREF(YmacrosYmap),T4,components_);
  T2 = CALL2(CHKREF(YstringsYstring_join),T3,CHKREF(YprotoSsystemYTpath_separatorT));
  RET(T2);
}

FUNCODEDEF(YprotoSsystemYlabel_components) {
  ARG(components_, 0);
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL1(CHKREF(Yhead),components_);
  T3 = CALL2(CHKREF(YisaQ),T4,CHKREF(YLlstG));
  if (T3 != YPfalse) {
    T2 = CALL1(CHKREF(Yhead),components_);
    T1 = CALL1(CHKREF(Ylst),T2);
    T0 = T1;
  } else {
    T0 = Ynil;
  }
  RET(T0);
}

FUNCODEDEF(YprotoSsystemYhierarchical_components) {
  ARG(components_, 0);
  P resultF1219;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL1(CHKREF(Yhead),components_);
  T5 = CALL2(CHKREF(YisaQ),T6,CHKREF(YLlstG));
  if (T5 != YPfalse) {
    T4 = CALL1(CHKREF(Ytail),components_);
    T3 = T4;
  } else {
    T3 = components_;
  }
  resultF1219 = T3;
  T2 = CALL1(CHKREF(YmacrosYemptyQ),resultF1219);
  if (T2 != YPfalse) {
    T1 = CALL2(CHKREF(Yerror),CHKREF(lit_52),components_);
  } else {
  }
  T0 = resultF1219;
  RET(T0);
}

FUNCODEDEF(YprotoSsystemYcomponents_last) {
  ARG(components_, 0);
  P lastF1220;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL1(CHKREF(YruntimeYlen),components_);
  T4 = CALL2(CHKREF(YruntimeY_),T5,YPint((P)1));
  T3 = CALL2(CHKREF(YruntimeYelt),components_,T4);
  lastF1220 = T3;
  T2 = CALL2(CHKREF(YisaQ),lastF1220,CHKREF(YLlstG));
  if (T2 != YPfalse) {
    T1 = CALL2(CHKREF(Yerror),CHKREF(lit_54),components_);
  } else {
  }
  T0 = lastF1220;
  QRET(T0);
}

FUNCODEDEF(YprotoSsystemYcomponents_basename) {
  ARG(components_, 0);
  P lastF1224;
  P countF1223;
  P hierF1222;
  P labelF1221;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = CALL1(CHKREF(YprotoSsystemYlabel_components),components_);
  labelF1221 = T16;
  T15 = CALL1(CHKREF(YprotoSsystemYhierarchical_components),components_);
  hierF1222 = T15;
  T14 = CALL1(CHKREF(YruntimeYlen),hierF1222);
  countF1223 = T14;
  T13 = CALL1(CHKREF(YprotoSsystemYcomponents_last),hierF1222);
  lastF1224 = T13;
  T6 = CALL2(CHKREF(YisaQ),lastF1224,CHKREF(YLstrG));
  T5 = CALL1(CHKREF(Ynot),T6);
  if (T5 != YPfalse) {
    T4 = CALL2(CHKREF(Yerror),CHKREF(lit_57),components_);
  } else {
  }
  T12 = CALL2(CHKREF(YmacrosYEE),countF1223,YPint((P)1));
  if (T12 != YPfalse) {
    T11 = CALL2(CHKREF(YmacrosYcat),labelF1221,CHKREF(lit_56));
    T7 = T11;
  } else {
    T10 = CALL2(CHKREF(YruntimeY_),countF1223,YPint((P)1));
    T9 = CALL3(CHKREF(YruntimeYsub),hierF1222,YPint((P)0),T10);
    T8 = CALL2(CHKREF(YmacrosYcat),labelF1221,T9);
    T7 = T8;
  }
  T3 = T7;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YprotoSsystemYcomponents_parent_directory) {
  ARG(components_, 0);
  P lastF1225;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = CALL1(CHKREF(YprotoSsystemYcomponents_last),components_);
  lastF1225 = T9;
  T8 = CALL2(CHKREF(YisaQ),lastF1225,CHKREF(YLstrG));
  if (T8 != YPfalse) {
    T7 = CALL1(CHKREF(YprotoSsystemYcomponents_basename),components_);
    T1 = T7;
  } else {
    T6 = CALL2(CHKREF(YmacrosYEE),lastF1225,CHKREF(lit_43));
    if (T6 != YPfalse) {
      T5 = CALL1(CHKREF(Yerror),CHKREF(lit_60));
      T2 = T5;
    } else {
      if (YPtrue != YPfalse) {
        T4 = CALL2(CHKREF(YmacrosYcat),components_,CHKREF(lit_59));
        T3 = T4;
      } else {
        T3 = YPfalse;
      }
      T2 = T3;
    }
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YprotoSsystemYparent_directory) {
  ARG(name_, 0);
  P componentsF1226;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YprotoSsystemYpathname_to_components),name_);
  componentsF1226 = T3;
  T2 = CALL1(CHKREF(YprotoSsystemYcomponents_parent_directory),componentsF1226);
  T1 = CALL1(CHKREF(YprotoSsystemYcomponents_to_pathname),T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_ensure_25) {
  ARG(c_, 0);
  P nF1227;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = CALL2(CHKREF(YmacrosYcat),FREEREF(0),c_);
  T15 = CALL1(CHKREF(YprotoSsystemYcomponents_to_pathname),T16);
  nF1227 = T15;
  T14 = CALL1(CHKREF(YprotoSsystemYfile_existsQ),nF1227);
  if (T14 != YPfalse) {
    T13 = CALL1(CHKREF(YprotoSsystemYfile_type),nF1227);
    T12 = CALL2(CHKREF(YmacrosYEE),T13,CHKREF(lit_67));
    T11 = CALL1(CHKREF(Ynot),T12);
    if (T11 != YPfalse) {
      T10 = CALL2(CHKREF(Yerror),CHKREF(lit_66),nF1227);
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T1 = T9;
  } else {
    T8 = CALL1(CHKREF(YprotoSsystemYcomponents_last),c_);
    T7 = CALL2(CHKREF(YisaQ),T8,CHKREF(YLstrG));
    if (T7 != YPfalse) {
      T5 = CALL1(CHKREF(YprotoSsystemYcomponents_basename),c_);
      KCALL1(FREEREF(1),T5);
      T6 = CALL1(CHKREF(YprotoSsystemYcreate_directory),nF1227);
      T2 = T6;
    } else {
      if (YPtrue != YPfalse) {
        T4 = CALL2(CHKREF(Yerror),CHKREF(lit_65),nF1227);
        T3 = T4;
      } else {
        T3 = YPfalse;
      }
      T2 = T3;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YprotoSsystemYprobe_directory) {
  ARG(name_, 0);
  P ensureF1231;
  P hierF1230;
  P labelF1229;
  P componentsF1228;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(YprotoSsystemYpathname_to_components),name_);
  componentsF1228 = T7;
  T6 = CALL1(CHKREF(YprotoSsystemYlabel_components),componentsF1228);
  labelF1229 = T6;
  T5 = CALL1(CHKREF(YprotoSsystemYhierarchical_components),componentsF1228);
  hierF1230 = T5;
  T4 = FUNSHELL(1,fun_ensure_25,2);
  ensureF1231 = T4;
  FUNINIT(ensureF1231, 2,labelF1229,ensureF1231);
  T3 = KCALL1(ensureF1231,hierF1230);
  T2 = YPfalse;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

P YprotoSsystemY___main_0___() {
  P env_rootF1232;
  P T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70;
  P T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54;
  P T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"os-name");
  T0 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLstrG));
  fun_0 = YPmet(FUNCODEREF(fun_0),CHKREF(lit_0),T0,ENVNUL);
  T4 = BOUNDP(YprotoSsystemYos_name);
  if (T4 != YPfalse) {
    T3 = CHKREF(YprotoSsystemYos_name);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_0;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YprotoSsystemYos_name = T1;
  regsym(&YprotoSsystemYos_name,"proto/system","os-name");
  lit_1 = YPPsym((P)"os-binding-value");
  lit_2 = YPPsym((P)"s");
  T5 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_1 = YPmet(FUNCODEREF(fun_1),CHKREF(lit_1),T5,ENVNUL);
  T9 = BOUNDP(YprotoSsystemYos_binding_value);
  if (T9 != YPfalse) {
    T8 = CHKREF(YprotoSsystemYos_binding_value);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_1;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YprotoSsystemYos_binding_value = T6;
  regsym(&YprotoSsystemYos_binding_value,"proto/system","os-binding-value");
  lit_3 = YPPsym((P)"os-binding-value-setter");
  lit_4 = YPPsym((P)"v");
  T10 = YPsig(YPPlist(2,CHKREF(lit_4),CHKREF(lit_2)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLstrG)),YPfalse,YPint((P)2),CHKREF(YLstrG));
  fun_2 = YPmet(FUNCODEREF(fun_2),CHKREF(lit_3),T10,ENVNUL);
  T14 = BOUNDP(YprotoSsystemYos_binding_value_setter);
  if (T14 != YPfalse) {
    T13 = CHKREF(YprotoSsystemYos_binding_value_setter);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_2;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YprotoSsystemYos_binding_value_setter = T11;
  regsym(&YprotoSsystemYos_binding_value_setter,"proto/system","os-binding-value-setter");
  lit_5 = YPsb((P)"/");
  lit_6 = YPsb((P)"\\");
  lit_7 = YPsb((P)"win32");
  lit_8 = YPsb((P)"/");
  lit_9 = YPsb((P)"linux");
  T21 = CALL0(CHKREF(YprotoSsystemYos_name));
  T20 = CALL2(CHKREF(YruntimeYE),T21,CHKREF(lit_9));
  if (T20 != YPfalse) {
    T15 = CHKREF(lit_8);
  } else {
    T19 = CALL0(CHKREF(YprotoSsystemYos_name));
    T18 = CALL2(CHKREF(YruntimeYE),T19,CHKREF(lit_7));
    if (T18 != YPfalse) {
      T16 = CHKREF(lit_6);
    } else {
      if (YPtrue != YPfalse) {
        T17 = CHKREF(lit_5);
      } else {
        T17 = YPfalse;
      }
      T16 = T17;
    }
    T15 = T16;
  }
  YprotoSsystemYTpath_separatorT = T15;
  regsym(&YprotoSsystemYTpath_separatorT,"proto/system","*path-separator*");
  lit_10 = YPPsym((P)"base-path");
  lit_11 = YPPsym((P)"filename");
  lit_12 = YPPsym((P)"loop");
  lit_13 = YPPsym((P)"i");
  lit_14 = YPsb((P)"");
  T23 = YPsig(YPPlist(1,CHKREF(lit_13)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_3 = YPmet(FUNCODEREF(fun_loop_3),CHKREF(lit_12),T23,ENVNUL);
  T22 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_4 = YPmet(FUNCODEREF(fun_4),CHKREF(lit_10),T22,ENVNUL);
  T27 = BOUNDP(YprotoSsystemYbase_path);
  if (T27 != YPfalse) {
    T26 = CHKREF(YprotoSsystemYbase_path);
  } else {
    T26 = YPfalse;
  }
  T25 = fun_4;
  T24 = CALL2(CHKREF(YPdefine_method),T26,T25);
  YprotoSsystemYbase_path = T24;
  regsym(&YprotoSsystemYbase_path,"proto/system","base-path");
  lit_15 = YPsb((P)"..");
  lit_16 = YPsb((P)"..");
  lit_17 = YPsb((P)"PROTO_ROOT");
  T34 = CALL1(CHKREF(YprotoSsystemYos_binding_value),CHKREF(lit_17));
  env_rootF1232 = T34;
  T33 = CALL1(CHKREF(YmacrosYemptyQ),env_rootF1232);
  if (T33 != YPfalse) {
    T32 = CALL0(CHKREF(YruntimeYapp_filename));
    T31 = CALL1(CHKREF(YprotoSsystemYbase_path),T32);
    T30 = CALLN(CHKREF(YmacrosYcat),4,T31,CHKREF(lit_16),CHKREF(YprotoSsystemYTpath_separatorT),CHKREF(lit_15));
    T29 = T30;
  } else {
    T29 = env_rootF1232;
  }
  T28 = T29;
  YprotoSsystemYTproto_rootT = T28;
  regsym(&YprotoSsystemYTproto_rootT,"proto/system","*proto-root*");
  lit_18 = YPPsym((P)"add-src-path");
  lit_19 = YPPsym((P)"relpath");
  lit_20 = YPsb((P)"SRC");
  T35 = YPsig(YPPlist(1,CHKREF(lit_19)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_5 = YPmet(FUNCODEREF(fun_5),CHKREF(lit_18),T35,ENVNUL);
  T39 = BOUNDP(YprotoSsystemYadd_src_path);
  if (T39 != YPfalse) {
    T38 = CHKREF(YprotoSsystemYadd_src_path);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_5;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YprotoSsystemYadd_src_path = T36;
  regsym(&YprotoSsystemYadd_src_path,"proto/system","add-src-path");
  lit_21 = YPPsym((P)"add-build-path");
  lit_22 = YPPsym((P)"builddir");
  lit_23 = YPsb((P)"C");
  T40 = YPsig(YPPlist(2,CHKREF(lit_22),CHKREF(lit_19)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLstrG));
  fun_6 = YPmet(FUNCODEREF(fun_6),CHKREF(lit_21),T40,ENVNUL);
  T44 = BOUNDP(YprotoSsystemYadd_build_path);
  if (T44 != YPfalse) {
    T43 = CHKREF(YprotoSsystemYadd_build_path);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_6;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  YprotoSsystemYadd_build_path = T41;
  regsym(&YprotoSsystemYadd_build_path,"proto/system","add-build-path");
  lit_24 = YPsb((P)".proto");
  YprotoSsystemYTproto_extensionT = CHKREF(lit_24);
  regsym(&YprotoSsystemYTproto_extensionT,"proto/system","*proto-extension*");
  lit_25 = YPsb((P)".c");
  YprotoSsystemYTc_extensionT = CHKREF(lit_25);
  regsym(&YprotoSsystemYTc_extensionT,"proto/system","*c-extension*");
  lit_26 = YPsb((P)".o");
  YprotoSsystemYTobj_extensionT = CHKREF(lit_26);
  regsym(&YprotoSsystemYTobj_extensionT,"proto/system","*obj-extension*");
  YprotoSsystemYTexe_extensionT = CHKREF(lit_14);
  regsym(&YprotoSsystemYTexe_extensionT,"proto/system","*exe-extension*");
  lit_27 = YPPsym((P)"proto-filename");
  lit_28 = YPPsym((P)"name");
  T45 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YprotoSsystemYproto_filename = YPmet(FUNCODEREF(YprotoSsystemYproto_filename),CHKREF(lit_27),T45,ENVNUL);
  T46 = YprotoSsystemYproto_filename;
  YprotoSsystemYproto_filename = T46;
  regsym(&YprotoSsystemYproto_filename,"proto/system","proto-filename");
  lit_29 = YPPsym((P)"c-filename");
  T47 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YprotoSsystemYc_filename = YPmet(FUNCODEREF(YprotoSsystemYc_filename),CHKREF(lit_29),T47,ENVNUL);
  T48 = YprotoSsystemYc_filename;
  YprotoSsystemYc_filename = T48;
  regsym(&YprotoSsystemYc_filename,"proto/system","c-filename");
  lit_30 = YPPsym((P)"obj-filename");
  T49 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YprotoSsystemYobj_filename = YPmet(FUNCODEREF(YprotoSsystemYobj_filename),CHKREF(lit_30),T49,ENVNUL);
  T50 = YprotoSsystemYobj_filename;
  YprotoSsystemYobj_filename = T50;
  regsym(&YprotoSsystemYobj_filename,"proto/system","obj-filename");
  lit_31 = YPPsym((P)"exe-filename");
  T51 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YprotoSsystemYexe_filename = YPmet(FUNCODEREF(YprotoSsystemYexe_filename),CHKREF(lit_31),T51,ENVNUL);
  T52 = YprotoSsystemYexe_filename;
  YprotoSsystemYexe_filename = T52;
  regsym(&YprotoSsystemYexe_filename,"proto/system","exe-filename");
  lit_32 = YPPsym((P)"file-mtime");
  T53 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLfloG));
  fun_11 = YPmet(FUNCODEREF(fun_11),CHKREF(lit_32),T53,ENVNUL);
  T57 = BOUNDP(YprotoSsystemYfile_mtime);
  if (T57 != YPfalse) {
    T56 = CHKREF(YprotoSsystemYfile_mtime);
  } else {
    T56 = YPfalse;
  }
  T55 = fun_11;
  T54 = CALL2(CHKREF(YPdefine_method),T56,T55);
  YprotoSsystemYfile_mtime = T54;
  regsym(&YprotoSsystemYfile_mtime,"proto/system","file-mtime");
  lit_33 = YPPsym((P)"file-exists?");
  T58 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  YprotoSsystemYfile_existsQ = YPmet(FUNCODEREF(YprotoSsystemYfile_existsQ),CHKREF(lit_33),T58,ENVNUL);
  T59 = YprotoSsystemYfile_existsQ;
  YprotoSsystemYfile_existsQ = T59;
  regsym(&YprotoSsystemYfile_existsQ,"proto/system","file-exists?");
  lit_34 = YPPsym((P)"file-type");
  T60 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLsymG));
  YprotoSsystemYfile_type = YPmet(FUNCODEREF(YprotoSsystemYfile_type),CHKREF(lit_34),T60,ENVNUL);
  T61 = YprotoSsystemYfile_type;
  YprotoSsystemYfile_type = T61;
  regsym(&YprotoSsystemYfile_type,"proto/system","file-type");
  lit_35 = YPPsym((P)"create-directory");
  T62 = YPsig(YPPlist(1,CHKREF(lit_11)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YprotoSsystemYcreate_directory = YPmet(FUNCODEREF(YprotoSsystemYcreate_directory),CHKREF(lit_35),T62,ENVNUL);
  T63 = YprotoSsystemYcreate_directory;
  YprotoSsystemYcreate_directory = T63;
  regsym(&YprotoSsystemYcreate_directory,"proto/system","create-directory");
  lit_36 = YPPsym((P)"pathname-to-components");
  lit_37 = YPPsym((P)"pathname");
  lit_38 = YPPsym((P)"component");
  lit_39 = YPPsym((P)"current");
  lit_40 = YPsb((P)".");
  lit_41 = YPPsym((P)"up");
  lit_42 = YPsb((P)"..");
  lit_43 = YPPsym((P)"root");
  lit_44 = YPsb((P)"Can't convert empty an pathname to components.\n");
  T65 = YPsig(YPPlist(1,CHKREF(lit_38)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T65,ENVNUL);
  T64 = YPsig(YPPlist(1,CHKREF(lit_37)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YprotoSsystemYpathname_to_components = YPmet(FUNCODEREF(YprotoSsystemYpathname_to_components),CHKREF(lit_36),T64,ENVNUL);
  T66 = YprotoSsystemYpathname_to_components;
  YprotoSsystemYpathname_to_components = T66;
  regsym(&YprotoSsystemYpathname_to_components,"proto/system","pathname-to-components");
  lit_45 = YPPsym((P)"components-to-pathname");
  lit_46 = YPPsym((P)"components");
  lit_47 = YPsb((P)".");
  lit_48 = YPsb((P)"..");
  lit_49 = YPsb((P)"Can't convert empty components to a pathname.\n");
  T68 = YPsig(YPPlist(1,CHKREF(lit_38)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T68,ENVNUL);
  T67 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  YprotoSsystemYcomponents_to_pathname = YPmet(FUNCODEREF(YprotoSsystemYcomponents_to_pathname),CHKREF(lit_45),T67,ENVNUL);
  T69 = YprotoSsystemYcomponents_to_pathname;
  YprotoSsystemYcomponents_to_pathname = T69;
  regsym(&YprotoSsystemYcomponents_to_pathname,"proto/system","components-to-pathname");
  lit_50 = YPPsym((P)"label-components");
  T70 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YprotoSsystemYlabel_components = YPmet(FUNCODEREF(YprotoSsystemYlabel_components),CHKREF(lit_50),T70,ENVNUL);
  T71 = YprotoSsystemYlabel_components;
  YprotoSsystemYlabel_components = T71;
  regsym(&YprotoSsystemYlabel_components,"proto/system","label-components");
  lit_51 = YPPsym((P)"hierarchical-components");
  lit_52 = YPsb((P)"Hierarchical portion of %= must not be empty.\n");
  T72 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YprotoSsystemYhierarchical_components = YPmet(FUNCODEREF(YprotoSsystemYhierarchical_components),CHKREF(lit_51),T72,ENVNUL);
  T73 = YprotoSsystemYhierarchical_components;
  YprotoSsystemYhierarchical_components = T73;
  regsym(&YprotoSsystemYhierarchical_components,"proto/system","hierarchical-components");
  lit_53 = YPPsym((P)"components-last");
  lit_54 = YPsb((P)"No filename in %=.\n");
  T74 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YprotoSsystemYcomponents_last = YPmet(FUNCODEREF(YprotoSsystemYcomponents_last),CHKREF(lit_53),T74,ENVNUL);
  T75 = YprotoSsystemYcomponents_last;
  YprotoSsystemYcomponents_last = T75;
  regsym(&YprotoSsystemYcomponents_last,"proto/system","components-last");
  lit_55 = YPPsym((P)"components-basename");
  lit_56 = YPPlist(1,YPPsym((P)"current"));
  lit_57 = YPsb((P)"Can't compute basename of %=\n.");
  T76 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YprotoSsystemYcomponents_basename = YPmet(FUNCODEREF(YprotoSsystemYcomponents_basename),CHKREF(lit_55),T76,ENVNUL);
  T77 = YprotoSsystemYcomponents_basename;
  YprotoSsystemYcomponents_basename = T77;
  regsym(&YprotoSsystemYcomponents_basename,"proto/system","components-basename");
  lit_58 = YPPsym((P)"components-parent-directory");
  lit_59 = YPPlist(1,YPPsym((P)"up"));
  lit_60 = YPsb((P)"Can't calculate parent of root directory");
  T78 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YprotoSsystemYcomponents_parent_directory = YPmet(FUNCODEREF(YprotoSsystemYcomponents_parent_directory),CHKREF(lit_58),T78,ENVNUL);
  T79 = YprotoSsystemYcomponents_parent_directory;
  YprotoSsystemYcomponents_parent_directory = T79;
  regsym(&YprotoSsystemYcomponents_parent_directory,"proto/system","components-parent-directory");
  lit_61 = YPPsym((P)"parent-directory");
  T80 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  YprotoSsystemYparent_directory = YPmet(FUNCODEREF(YprotoSsystemYparent_directory),CHKREF(lit_61),T80,ENVNUL);
  T81 = YprotoSsystemYparent_directory;
  YprotoSsystemYparent_directory = T81;
  regsym(&YprotoSsystemYparent_directory,"proto/system","parent-directory");
  lit_62 = YPPsym((P)"probe-directory");
  lit_63 = YPPsym((P)"ensure");
  lit_64 = YPPsym((P)"c");
  lit_65 = YPsb((P)"Don't know how to create the directory %s.\n");
  lit_66 = YPsb((P)"%s is not a directory.\n");
  lit_67 = YPPsym((P)"directory");
  T83 = YPsig(YPPlist(1,CHKREF(lit_64)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_ensure_25 = YPmet(FUNCODEREF(fun_ensure_25),CHKREF(lit_63),T83,ENVNUL);
  T82 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YprotoSsystemYprobe_directory = YPmet(FUNCODEREF(YprotoSsystemYprobe_directory),CHKREF(lit_62),T82,ENVNUL);
  T84 = YprotoSsystemYprobe_directory;
  YprotoSsystemYprobe_directory = T84;
  regsym(&YprotoSsystemYprobe_directory,"proto/system","probe-directory");
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
  {"%force-output", &module_info_boot, "%force-output"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"remainder", &module_info_runtime, "remainder"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%i?", &module_info_boot, "%i?"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"%su", &module_info_boot, "%su"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"=", &module_info_runtime, "="},
  {"slot-init", &module_info_boot, "slot-init"},
  {"export", &module_info_boot, "export"},
  {"pair", &module_info_macros, "pair"},
  {"map", &module_info_macros, "map"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%i!", &module_info_boot, "%i!"},
  {"2nd", &module_info_runtime, "2nd"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"var-name", &module_info_macros, "var-name"},
  {"fapply", &module_info_boot, "fapply"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"if", &module_info_boot, "if"},
  {"<int>", &module_info_boot, "<int>"},
  {"<log>", &module_info_boot, "<log>"},
  {"do2", &module_info_runtime, "do2"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"compose", &module_info_runtime, "compose"},
  {"or", &module_info_macros, "or"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"round", &module_info_runtime, "round"},
  {"assert", &module_info_macros, "assert"},
  {"when", &module_info_macros, "when"},
  {"object<", &module_info_boot, "object<"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"from-below", &module_info_runtime, "from-below"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"popf", &module_info_macros, "popf"},
  {"try", &module_info_boot, "try"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"let", &module_info_boot, "let"},
  {"dp", &module_info_boot, "dp"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"%velt", &module_info_boot, "%velt"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"<", &module_info_runtime, "<"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"%lu", &module_info_boot, "%lu"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"cat!", &module_info_runtime, "cat!"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"pos?", &module_info_runtime, "pos?"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"<col>", &module_info_boot, "<col>"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"dv", &module_info_boot, "dv"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"%f-", &module_info_boot, "%f-"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%fu", &module_info_boot, "%fu"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"string-split", &module_info_strings, "string-split"},
  {"%pair", &module_info_boot, "%pair"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"~==", &module_info_runtime, "~=="},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"%i^", &module_info_boot, "%i^"},
  {"error", &module_info_boot, "error"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"seq", &module_info_boot, "seq"},
  {"tup", &module_info_macros, "tup"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"pushf", &module_info_macros, "pushf"},
  {"ash", &module_info_runtime, "ash"},
  {"quote", &module_info_boot, "quote"},
  {"port-index", &module_info_runtime, "port-index"},
  {"%f+", &module_info_boot, "%f+"},
  {"<port>", &module_info_runtime, "<port>"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {">", &module_info_runtime, ">"},
  {">=", &module_info_runtime, ">="},
  {"<met>", &module_info_boot, "<met>"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"sub", &module_info_runtime, "sub"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"display", &module_info_write, "display"},
  {"from-by", &module_info_runtime, "from-by"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"%str", &module_info_boot, "%str"},
  {"dec", &module_info_macros, "dec"},
  {"identity", &module_info_runtime, "identity"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"bound?", &module_info_boot, "bound?"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"lsh", &module_info_runtime, "lsh"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"mem?", &module_info_runtime, "mem?"},
  {"lab", &module_info_boot, "lab"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"floor", &module_info_runtime, "floor"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"find-key", &module_info_runtime, "find-key"},
  {"df", &module_info_boot, "df"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"dg", &module_info_boot, "dg"},
  {"tail", &module_info_boot, "tail"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"fill", &module_info_runtime, "fill"},
  {"%i+", &module_info_boot, "%i+"},
  {"add", &module_info_runtime, "add"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"pop", &module_info_runtime, "pop"},
  {"string-repeat", &module_info_strings, "string-repeat"},
  {"alter", &module_info_runtime, "alter"},
  {"push", &module_info_runtime, "push"},
  {"fab", &module_info_runtime, "fab"},
  {"modulo", &module_info_runtime, "modulo"},
  {"%f/", &module_info_boot, "%f/"},
  {"curry", &module_info_runtime, "curry"},
  {"%cu", &module_info_boot, "%cu"},
  {"%iu", &module_info_boot, "%iu"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"truncate", &module_info_runtime, "truncate"},
  {"nul", &module_info_boot, "nul"},
  {"lst", &module_info_boot, "lst"},
  {"%vec", &module_info_boot, "%vec"},
  {"now-key", &module_info_runtime, "now-key"},
  {"next-method", &module_info_macros, "next-method"},
  {"empty", &module_info_runtime, "empty"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"<str>", &module_info_boot, "<str>"},
  {"%i&", &module_info_boot, "%i&"},
  {"all?", &module_info_runtime, "all?"},
  {"%cb", &module_info_boot, "%cb"},
  {"dm", &module_info_boot, "dm"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"logior", &module_info_runtime, "logior"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"default", &module_info_runtime, "default"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"any?", &module_info_runtime, "any?"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"%i<", &module_info_boot, "%i<"},
  {"even?", &module_info_runtime, "even?"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"floor/", &module_info_runtime, "floor/"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%im", &module_info_boot, "%im"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"%isa", &module_info_boot, "%isa"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%f*", &module_info_boot, "%f*"},
  {"neg", &module_info_runtime, "neg"},
  {"do", &module_info_runtime, "do"},
  {"inc", &module_info_macros, "inc"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"isa?", &module_info_boot, "isa?"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"apply", &module_info_boot, "apply"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"-", &module_info_runtime, "-"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"%ib", &module_info_boot, "%ib"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"%it/", &module_info_boot, "%it/"},
  {"%do-runtime-bindings", &module_info_boot, "%do-runtime-bindings"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"fun", &module_info_boot, "fun"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"<error>", &module_info_runtime, "<error>"},
  {"%raw", &module_info_boot, "%raw"},
  {"%ft", &module_info_boot, "%ft"},
  {"==", &module_info_macros, "=="},
  {"<loc>", &module_info_boot, "<loc>"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"vec", &module_info_runtime, "vec"},
  {"%sb", &module_info_boot, "%sb"},
  {"write-char", &module_info_runtime, "write-char"},
  {"<range>", &module_info_runtime, "<range>"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"3rd", &module_info_runtime, "3rd"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"isa", &module_info_boot, "isa"},
  {"not", &module_info_boot, "not"},
  {"logxor", &module_info_runtime, "logxor"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"as", &module_info_runtime, "as"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"<any>", &module_info_boot, "<any>"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"~=", &module_info_runtime, "~="},
  {"app-args", &module_info_runtime, "app-args"},
  {"/", &module_info_runtime, "/"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"fin", &module_info_boot, "fin"},
  {"fabs", &module_info_runtime, "fabs"},
  {"rev", &module_info_runtime, "rev"},
  {"<list>", &module_info_runtime, "<list>"},
  {"max", &module_info_runtime, "max"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"ds", &module_info_boot, "ds"},
  {"%snul", &module_info_boot, "%snul"},
  {"read", &module_info_runtime, "read"},
  {"<=", &module_info_runtime, "<="},
  {"zero?", &module_info_runtime, "zero?"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"map2", &module_info_runtime, "map2"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"+", &module_info_runtime, "+"},
  {"address-of", &module_info_runtime, "address-of"},
  {"select", &module_info_macros, "select"},
  {"buf", &module_info_runtime, "buf"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"pos", &module_info_runtime, "pos"},
  {"reduce", &module_info_runtime, "reduce"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"var-type", &module_info_macros, "var-type"},
  {"%i-", &module_info_boot, "%i-"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"from", &module_info_runtime, "from"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"writeln", &module_info_write, "writeln"},
  {"case", &module_info_macros, "case"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"1st", &module_info_runtime, "1st"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"force-output", &module_info_runtime, "force-output"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gensym", &module_info_macros, "gensym"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"object-direct-parents", &module_info_boot, "object-direct-parents"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"logand", &module_info_runtime, "logand"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"*", &module_info_runtime, "*"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"always", &module_info_runtime, "always"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"cat", &module_info_macros, "cat"},
  {"<num>", &module_info_boot, "<num>"},
  {"str", &module_info_runtime, "str"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"loc", &module_info_boot, "loc"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"pick", &module_info_runtime, "pick"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"in", &module_info_runtime, "in"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"out", &module_info_runtime, "out"},
  {"%c=", &module_info_boot, "%c="},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"and", &module_info_macros, "and"},
  {"ct", &module_info_boot, "ct"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"odd?", &module_info_runtime, "odd?"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"nil", &module_info_boot, "nil"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"for", &module_info_macros, "for"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"round/", &module_info_runtime, "round/"},
  {"object-direct-slots", &module_info_boot, "object-direct-slots"},
  {"mif", &module_info_boot, "mif"},
  {"abs", &module_info_runtime, "abs"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"%i=", &module_info_boot, "%i="},
  {"cat2", &module_info_runtime, "cat2"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"%slen", &module_info_boot, "%slen"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"%slot", &module_info_boot, "%slot"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"head", &module_info_boot, "head"},
  {"lognot", &module_info_runtime, "lognot"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"slot", &module_info_boot, "slot"},
  {"sig", &module_info_runtime, "sig"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"elt", &module_info_runtime, "elt"},
  {"first-then", &module_info_runtime, "first-then"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"to-str", &module_info_runtime, "to-str"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"<map>", &module_info_runtime, "<map>"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"write-string", &module_info_runtime, "write-string"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"%f<", &module_info_boot, "%f<"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"map-str", &module_info_strings, "map-str"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"%c<", &module_info_boot, "%c<"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"dss", &module_info_boot, "dss"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"del-key", &module_info_runtime, "del-key"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"del", &module_info_runtime, "del"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"from-to", &module_info_runtime, "from-to"},
  {"%fb", &module_info_boot, "%fb"},
  {"rep", &module_info_boot, "rep"},
  {"list", &module_info_runtime, "list"},
  {"last", &module_info_runtime, "last"},
  {"object-name", &module_info_write, "object-name"},
  {"%f=", &module_info_boot, "%f="},
  {"%bb", &module_info_boot, "%bb"},
  {"<step>", &module_info_runtime, "<step>"},
  {"min", &module_info_runtime, "min"},
  {"format", &module_info_runtime, "format"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"type-error", &module_info_boot, "type-error"},
  {"%iv", &module_info_boot, "%iv"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"use", &module_info_boot, "use"},
  {"%i*", &module_info_boot, "%i*"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"string-join", &module_info_strings, "string-join"},
  {"write", &module_info_write, "write"},
  {"collecting", &module_info_macros, "collecting"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"<traits>", &module_info_boot, "<traits>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"len", &module_info_runtime, "len"},
  {"empty?", &module_info_macros, "empty?"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"rev!", &module_info_runtime, "rev!"},
  {"set", &module_info_boot, "set"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"nul?", &module_info_runtime, "nul?"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"%selt", &module_info_boot, "%selt"},
  {"read-char", &module_info_runtime, "read-char"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"newline", &module_info_runtime, "newline"},
  {"neg?", &module_info_runtime, "neg?"},
  {"unless", &module_info_macros, "unless"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"*c-extension*", &YprotoSsystemYTc_extensionT},
  {"exe-filename", &YprotoSsystemYexe_filename},
  {"*proto-root*", &YprotoSsystemYTproto_rootT},
  {"file-type", &YprotoSsystemYfile_type},
  {"obj-filename", &YprotoSsystemYobj_filename},
  {"add-src-path", &YprotoSsystemYadd_src_path},
  {"add-build-path", &YprotoSsystemYadd_build_path},
  {"proto-filename", &YprotoSsystemYproto_filename},
  {"*proto-extension*", &YprotoSsystemYTproto_extensionT},
  {"label-components", &YprotoSsystemYlabel_components},
  {"*path-separator*", &YprotoSsystemYTpath_separatorT},
  {"file-mtime", &YprotoSsystemYfile_mtime},
  {"os-binding-value-setter", &YprotoSsystemYos_binding_value_setter},
  {"base-path", &YprotoSsystemYbase_path},
  {"components-parent-directory", &YprotoSsystemYcomponents_parent_directory},
  {"components-to-pathname", &YprotoSsystemYcomponents_to_pathname},
  {"c-filename", &YprotoSsystemYc_filename},
  {"file-exists?", &YprotoSsystemYfile_existsQ},
  {"pathname-to-components", &YprotoSsystemYpathname_to_components},
  {"os-name", &YprotoSsystemYos_name},
  {"---main-0---", NULL},
  {"hierarchical-components", &YprotoSsystemYhierarchical_components},
  {"os-binding-value", &YprotoSsystemYos_binding_value},
  {"parent-directory", &YprotoSsystemYparent_directory},
  {"components-last", &YprotoSsystemYcomponents_last},
  {"components-basename", &YprotoSsystemYcomponents_basename},
  {"probe-directory", &YprotoSsystemYprobe_directory},
  {"create-directory", &YprotoSsystemYcreate_directory},
  {"*obj-extension*", &YprotoSsystemYTobj_extensionT},
  {"*exe-extension*", &YprotoSsystemYTexe_extensionT},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"pathname-to-components", "pathname-to-components"},
  {"*c-extension*", "*c-extension*"},
  {"exe-filename", "exe-filename"},
  {"*proto-root*", "*proto-root*"},
  {"file-type", "file-type"},
  {"obj-filename", "obj-filename"},
  {"add-src-path", "add-src-path"},
  {"add-build-path", "add-build-path"},
  {"proto-filename", "proto-filename"},
  {"*proto-extension*", "*proto-extension*"},
  {"label-components", "label-components"},
  {"*path-separator*", "*path-separator*"},
  {"file-mtime", "file-mtime"},
  {"os-binding-value-setter", "os-binding-value-setter"},
  {"components-parent-directory", "components-parent-directory"},
  {"components-to-pathname", "components-to-pathname"},
  {"c-filename", "c-filename"},
  {"file-exists?", "file-exists?"},
  {"os-name", "os-name"},
  {"hierarchical-components", "hierarchical-components"},
  {"os-binding-value", "os-binding-value"},
  {"parent-directory", "parent-directory"},
  {"components-last", "components-last"},
  {"components-basename", "components-basename"},
  {"probe-directory", "probe-directory"},
  {"create-directory", "create-directory"},
  {"*obj-extension*", "*obj-extension*"},
  {"*exe-extension*", "*exe-extension*"},
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
