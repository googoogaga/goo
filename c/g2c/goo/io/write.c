/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: write */

EXT(YruntimeYfrom_to,"runtime","from-to");
DEF(YwriteYobject_name,"write","object-name");
EXT(YruntimeYpop,"runtime","pop");
EXT(Ynot,"boot","not");
EXT(Yfun_value,"boot","fun-value");
DEF(YwriteYwrite_vector,"write","write-vector");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(Yerror,"boot","error");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YPsymbols,"boot","%symbols");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YmacrosYlst,"macros","lst");
DEF(YwriteYquotationQ,"write","quotation?");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(Ytype_error,"boot","type-error");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(Ysym_name,"boot","sym-name");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYNEE,"runtime","~==");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYfrom,"runtime","from");
DEF(YwriteYwriteln,"write","writeln");
DEF(YwriteYwrite_to_string,"write","write-to-string");
EXT(Ynul,"boot","nul");
EXT(YruntimeY1st,"runtime","1st");
DEF(YwriteYwrite,"write","write");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYfill,"runtime","fill");
DEF(YwriteYwrite_char_literal,"write","write-char-literal");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Yslot_value,"boot","slot-value");
EXT(YmacrosYEE,"macros","==");
EXT(YLanyG,"boot","<any>");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YreadYread,"read","read");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYE,"runtime","=");
DEF(YwriteYwrite_boolean,"write","write-boolean");
EXT(Yfapply,"boot","fapply");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
DEF(YwriteYTmax_print_depthT,"write","*max-print-depth*");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYLportG,"runtime","<port>");
DEF(YwriteYwrite_number,"write","write-number");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYlen,"runtime","len");
EXT(Ysig_names,"boot","sig-names");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYL,"runtime","<");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYlast,"runtime","last");
EXT(YisaQ,"boot","isa?");
DEF(YwriteYwrite_map,"write","write-map");
EXT(YruntimeYvec,"runtime","vec");
EXT(YLtraitsG,"boot","<traits>");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YPdefine_method,"boot","%define-method");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YruntimeYA,"runtime","+");
DEF(YwriteYTglo_nameQT,"write","*glo-name?*");
EXT(YPslot,"boot","%slot");
DEF(YwriteYTmax_print_lengthT,"write","*max-print-length*");
EXT(YruntimeYtype_or,"runtime","type-or");
EXT(YruntimeYrcurry,"runtime","rcurry");
DEF(YwriteYas_binding_name,"write","as-binding-name");
EXT(YruntimeYG,"runtime",">");
EXT(YLvecG,"boot","<vec>");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYformat,"runtime","format");
DEF(YwriteYwrite_params,"write","write-params");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YruntimeYrev,"runtime","rev");
EXT(YLbagG,"boot","<bag>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YruntimeYGE,"runtime",">=");
EXT(Yfun_names,"boot","fun-names");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYfile_mtime,"runtime","file-mtime");
EXT(YLlogG,"boot","<log>");
EXT(YPvnul,"boot","%vnul");
DEF(YwriteYdisplay,"write","display");
EXT(Yobject_parents,"boot","object-parents");
DEF(YwriteYwrite_string_literal,"write","write-string-literal");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YreadYDchar_long_names,"read","$char-long-names");
EXT(YruntimeYdo,"runtime","do");
DEF(YwriteYwrite_list,"write","write-list");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYneg,"runtime","neg");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YPsnul,"boot","%snul");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYpos,"runtime","pos");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(Ysig_value,"boot","sig-value");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYin,"runtime","in");
DEF(YwriteYwrite_fun_guts,"write","write-fun-guts");
EXT(YruntimeYassoc,"runtime","assoc");
DEF(YwriteYdo_display,"write","do-display");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
DEF(YwriteYenv_object_name,"write","env-object-name");
DEF(YwriteYrecurring_write,"write","recurring-write");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YLfloG,"boot","<flo>");
EXT(YLoptsG,"boot","<opts>");
DEF(YwriteYcharacter_name,"write","character-name");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYelt,"runtime","elt");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YLlocG,"boot","<loc>");
EXT(YLintG,"boot","<int>");
EXT(Yhead,"boot","head");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YLslotG,"boot","<slot>");
EXT(YLflatG,"boot","<flat>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YLfunG,"boot","<fun>");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYsub,"runtime","sub");
EXT(Yobject_slots,"boot","object-slots");
EXT(Yapply,"boot","apply");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(Ytail,"boot","tail");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYassq,"runtime","assq");
EXT(Yhead_setter,"boot","head-setter");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeYto_str,"runtime","to-str");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_54);
DEFLIT(lit_53);
DEFLIT(lit_52);
DEFLIT(lit_51);
DEFLIT(lit_50);
DEFLIT(lit_49);
DEFLIT(lit_48);
DEFLIT(lit_47);
DEFLIT(lit_46);
DEFLIT(lit_45);
DEFLIT(lit_44);
DEFLIT(lit_43);
DEFLIT(lit_42);
DEFLIT(lit_41);
DEFLIT(lit_40);
DEFLIT(lit_39);
DEFLIT(lit_38);
DEFLIT(lit_37);
DEFLIT(lit_36);
DEFLIT(lit_35);
DEFLIT(lit_34);
DEFLIT(lit_33);
DEFLIT(lit_32);
DEFLIT(lit_31);
DEFLIT(lit_30);
DEFLIT(lit_29);
DEFLIT(lit_28);
DEFLIT(lit_27);
DEFLIT(lit_26);
DEFLIT(lit_25);
DEFLIT(lit_24);
DEFLIT(lit_23);
DEFLIT(lit_22);
DEFLIT(lit_21);
DEFLIT(lit_20);
DEFLIT(lit_19);
DEFLIT(lit_18);
DEFLIT(lit_17);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_14);
DEFLIT(lit_13);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_10);
DEFLIT(lit_9);
DEFLIT(lit_8);
DEFLIT(lit_7);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_1);
DEFLIT(lit_0);

/* FUNCTIONS: */

LOCFOR(fun_as_binding_name_0);
LOCFOR(fun_x_1185_1);
LOCFOR(fun_2);
LOCFOR(fun_3);
LOCFOR(fun_do_display_4);
LOCFOR(fun_do_display_5);
LOCFOR(fun_do_display_6);
LOCFOR(fun_recur_7);
LOCFOR(fun_display_8);
LOCFOR(fun_write_to_string_9);
LOCFOR(fun_recur_10);
LOCFOR(fun_write_11);
LOCFOR(fun_writeln_12);
LOCFOR(fun_recurring_write_13);
LOCFOR(fun_recurring_write_14);
LOCFOR(fun_recurring_write_15);
LOCFOR(fun_recurring_write_16);
LOCFOR(fun_recurring_write_17);
LOCFOR(fun_recurring_write_18);
LOCFOR(fun_recurring_write_19);
LOCFOR(fun_recurring_write_20);
LOCFOR(fun_recurring_write_21);
LOCFOR(fun_write_boolean_22);
LOCFOR(fun_write_number_23);
LOCFOR(fun_write_char_literal_24);
LOCFOR(fun_character_name_25);
LOCFOR(fun_loop_26);
LOCFOR(fun_write_string_literal_27);
LOCFOR(fun_loop_28);
LOCFOR(fun_write_list_29);
LOCFOR(fun_quotationQ_30);
LOCFOR(fun_loop_31);
LOCFOR(fun_write_vector_32);
LOCFOR(fun_x_1190_33);
LOCFOR(fun_34);
LOCFOR(fun_write_map_35);
LOCFOR(fun_recurring_write_36);
LOCFOR(fun_recurring_write_37);
LOCFOR(fun_object_name_38);
LOCFOR(fun_x_1197_39);
LOCFOR(fun_write_params_40);
LOCFOR(fun_write_fun_guts_41);
LOCFOR(fun_recurring_write_42);
LOCFOR(fun_recurring_write_43);
LOCFOR(fun_recurring_write_44);
LOCFOR(fun_x_1202_45);
LOCFOR(fun_46);
LOCFOR(fun_recurring_write_47);
LOCFOR(fun_recurring_write_48);
LOCFOR(fun_49);
LOCFOR(fun_arg_50);
LOCFOR(fun_format_51);
extern P YwriteY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_binding_name_0) {
  ARG(name_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),name_);
  QRET(T0);
}

FUNCODEDEF(fun_x_1185_1) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  ARG(return_, 0);
  P x_1184F1045;
  P x_1184F1044;
  P x_1184F1043;
  P x_1184F1042;
  P x_1184F1041;
  P x_1184F1040;
  P x_1184F1039;
  P bodyF1038;
  P protoF1037;
  P xF1036;
  P portF1035;
  P x_1184F1034;
  P x_1185F1033;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T55 = FUNSHELL(0,fun_x_1185_1,1);
  x_1185F1033 = T55;
  FUNINIT(x_1185F1033, 1,return_);
  x_1184F1034 = FREEREF(0);
  portF1035 = YPfalse;
  portF1035 = BOXFAB(portF1035);
  xF1036 = YPfalse;
  xF1036 = BOXFAB(xF1036);
  protoF1037 = YPfalse;
  protoF1037 = BOXFAB(protoF1037);
  bodyF1038 = YPfalse;
  bodyF1038 = BOXFAB(bodyF1038);
  T28 = CALL2(CHKREF(YisaQ),x_1184F1034,CHKREF(YLlstG));
  if (T28 != YPfalse) {
    T27 = CALL3(CHKREF(YmacrosYmatch_atom),x_1184F1034,CHKREF(lit_7),x_1185F1033);
    x_1184F1039 = T27;
    T25 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1184F1039,x_1185F1033);
    x_1184F1040 = T25;
    T23 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1184F1040,x_1185F1033);
    BOXVAL(portF1035) = T23;
    T24 = CALL1(CHKREF(Ytail),x_1184F1040);
    x_1184F1041 = T24;
    T21 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1184F1041,x_1185F1033);
    BOXVAL(xF1036) = T21;
    T22 = CALL1(CHKREF(Ytail),x_1184F1041);
    x_1184F1042 = T22;
    T19 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1184F1042,x_1185F1033);
    BOXVAL(protoF1037) = T19;
    T20 = CALL1(CHKREF(Ytail),x_1184F1042);
    x_1184F1043 = T20;
    T18 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1184F1043,x_1185F1033);
    T17 = T18;
    T16 = T17;
    T15 = T16;
    T26 = CALL1(CHKREF(Ytail),x_1184F1039);
    x_1184F1044 = T26;
    BOXVAL(bodyF1038) = x_1184F1044;
    x_1184F1045 = Ynil;
    T14 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1184F1045,x_1185F1033);
    T13 = T14;
    T12 = T13;
    T11 = T12;
  } else {
    T10 = CALL2(x_1185F1033,CHKREF(lit_6),x_1184F1034);
  }
  T54 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_5));
  T53 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_4));
  T52 = BOXVAL(xF1036);
  T51 = CALL1(CHKREF(YmacrosYlst),T52);
  T50 = BOXVAL(protoF1037);
  T49 = CALL1(CHKREF(YmacrosYlst),T50);
  T48 = CALLN(CHKREF(YmacrosYcat),4,T53,T51,T49,Ynil);
  T47 = CALL1(CHKREF(YmacrosYlst),T48);
  T46 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_3));
  T45 = BOXVAL(portF1035);
  T44 = CALL1(CHKREF(YmacrosYlst),T45);
  T43 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_2));
  T42 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_1));
  T41 = BOXVAL(protoF1037);
  T40 = CALL1(CHKREF(YmacrosYlst),T41);
  T39 = CALL3(CHKREF(YmacrosYcat),T42,T40,Ynil);
  T38 = CALL1(CHKREF(YmacrosYlst),T39);
  T37 = CALL3(CHKREF(YmacrosYcat),T43,T38,Ynil);
  T36 = CALL1(CHKREF(YmacrosYlst),T37);
  T35 = CALLN(CHKREF(YmacrosYcat),4,T46,T44,T36,Ynil);
  T34 = CALL1(CHKREF(YmacrosYlst),T35);
  T33 = CALL1(CHKREF(YmacrosYlst),CHKREF(lit_0));
  T32 = BOXVAL(bodyF1038);
  T31 = CALL3(CHKREF(YmacrosYcat),T33,T32,Ynil);
  T30 = CALL1(CHKREF(YmacrosYlst),T31);
  T29 = CALLN(CHKREF(YmacrosYcat),5,T54,T47,T34,T30,Ynil);
  T8 = T29;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_3) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_2,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_do_display_4) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLstrG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_8));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YruntimeYwrite_string),port_,x_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_do_display_5) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLchrG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_9));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YruntimeYwrite_char),port_,x_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_do_display_6) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALLN(CHKREF(YwriteYrecurring_write),4,port_,x_,d_,recur_);
  QRET(T0);
}

FUNCODEDEF(fun_recur_7) {
  ARG(d_, 0);
  ARG(x_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YruntimeYGE),d_,CHKREF(YwriteYTmax_print_depthT));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(1),CHKREF(lit_10));
    T0 = T3;
  } else {
    T2 = CALL2(CHKREF(YruntimeYA),d_,YPint((P)1));
    T1 = CALLN(CHKREF(YwriteYdo_display),4,FREEREF(1),x_,T2,FREEREF(0));
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_display_8) {
  ARG(x_, 0);
  ARG(port_, 1);
  P recurF1046;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(0,fun_recur_7,2);
  recurF1046 = T2;
  FUNINIT(recurF1046, 2,recurF1046,port_);
  T1 = KCALL2(recurF1046,x_,YPint((P)-1));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_write_to_string_9) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YruntimeYrcurry),CHKREF(YwriteYwrite),x_);
  T0 = CALL1(CHKREF(YruntimeYcall_with_string_output_port),T1);
  RET(T0);
}

FUNCODEDEF(fun_recur_10) {
  ARG(d_, 0);
  ARG(x_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YruntimeYGE),d_,CHKREF(YwriteYTmax_print_depthT));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(1),CHKREF(lit_11));
    T0 = T3;
  } else {
    T2 = CALL2(CHKREF(YruntimeYA),d_,YPint((P)1));
    T1 = CALLN(CHKREF(YwriteYrecurring_write),4,FREEREF(1),x_,T2,FREEREF(0));
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_write_11) {
  ARG(x_, 0);
  ARG(port_, 1);
  P recurF1047;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(0,fun_recur_10,2);
  recurF1047 = T2;
  FUNINIT(recurF1047, 2,recurF1047,port_);
  T1 = KCALL2(recurF1047,x_,YPint((P)-1));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_writeln_12) {
  ARG(x_, 0);
  ARG(port_, 1);
  P T0;
  P a1,a2;
loop:
  CALL2(CHKREF(YwriteYwrite),port_,x_);
  T0 = CALL1(CHKREF(YruntimeYnewline),port_);
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_13) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T7 = CALL1(CHKREF(YmacrosYemptyQ),x_);
  if (T7 != YPfalse) {
    T6 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_13));
    T0 = T6;
  } else {
    T5 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLlstG));
    if (T5 != YPfalse) {
      T4 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_12));
      T3 = CALL2(CHKREF(YruntimeYwrite_string),port_,T4);
      T1 = T3;
    } else {
      T2 = CALLN(CHKREF(YwriteYwrite_list),4,port_,x_,d_,recur_);
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_14) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLvecG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_14));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALLN(CHKREF(YwriteYwrite_vector),4,port_,x_,d_,recur_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_15) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YruntimeYLmapG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_15));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALLN(CHKREF(YwriteYwrite_map),4,port_,x_,d_,recur_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_16) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  if (x_ != YPfalse) {
    T2 = CALL2(CHKREF(YwriteYwrite_boolean),port_,CHKREF(lit_17));
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YwriteYwrite_boolean),port_,CHKREF(lit_16));
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_17) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T5 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLsymG));
  if (T5 != YPfalse) {
    T4 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_18));
    T3 = CALL2(CHKREF(YruntimeYwrite_string),port_,T4);
    T0 = T3;
  } else {
    T2 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),x_);
    T1 = CALL2(CHKREF(YruntimeYwrite_string),port_,T2);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_18) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T6 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLlocG));
  if (T6 != YPfalse) {
    T5 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_20));
    T4 = CALL2(CHKREF(YruntimeYwrite_string),port_,T5);
    T0 = T4;
  } else {
    CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_19));
    T3 = (P)YPlu(x_);
    T2 = (P)YPib(T3);
    T1 = CALL2(CHKREF(YruntimeYnum_to_str),T2,YPint((P)16));
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_19) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLnumG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_21));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YwriteYwrite_number),port_,x_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_20) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLstrG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_22));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YwriteYwrite_string_literal),port_,x_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_21) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLchrG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_23));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YwriteYwrite_char_literal),port_,x_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_write_boolean_22) {
  ARG(mumble_, 0);
  ARG(port_, 1);
  P T0;
  P a1,a2;
loop:
  CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)35));
  T0 = CALL2(CHKREF(YwriteYwrite),port_,mumble_);
  QRET(T0);
}

FUNCODEDEF(fun_write_number_23) {
  ARG(x_, 0);
  ARG(port_, 1);
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLintG));
  if (T9 != YPfalse) {
    T8 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_25));
    T7 = CALL2(CHKREF(YruntimeYwrite_string),port_,T8);
    T0 = T7;
  } else {
    T6 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLfloG));
    if (T6 != YPfalse) {
      T5 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_24));
      T4 = CALL2(CHKREF(YruntimeYwrite_string),port_,T5);
      T1 = T4;
    } else {
      T3 = CALL2(CHKREF(YruntimeYnum_to_str),x_,YPint((P)10));
      T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_write_char_literal_24) {
  ARG(x_, 0);
  ARG(port_, 1);
  P probeF1048;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YwriteYcharacter_name),x_);
  probeF1048 = T4;
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_26));
  if (probeF1048 != YPfalse) {
    T3 = CALL2(CHKREF(YwriteYwrite),port_,probeF1048);
    T1 = T3;
  } else {
    T2 = CALL2(CHKREF(YruntimeYwrite_char),port_,x_);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_character_name_25) {
  ARG(char_, 0);
  P tmpF1050;
  P assocF1049;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL3(CHKREF(YruntimeYassqn),char_,CHKREF(YreadYDchar_long_names),YPint((P)1));
  assocF1049 = T4;
  tmpF1050 = assocF1049;
  if (tmpF1050 != YPfalse) {
    T3 = CALL1(CHKREF(YruntimeY1st),assocF1049);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_26) {
  ARG(i_, 0);
  P tmpF1052;
  P cF1051;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = CALL2(CHKREF(YruntimeYE),i_,FREEREF(3));
  if (T11 != YPfalse) {
    T10 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(2),YPchr((P)34));
    T0 = T10;
  } else {
    T9 = CALL2(CHKREF(YruntimeYelt),FREEREF(0),i_);
    cF1051 = T9;
    T6 = CALL2(CHKREF(YruntimeYE),cF1051,YPchr((P)92));
    tmpF1052 = T6;
    if (tmpF1052 != YPfalse) {
      T4 = tmpF1052;
    } else {
      T5 = CALL2(CHKREF(YruntimeYE),cF1051,YPchr((P)34));
      T4 = T5;
    }
    T3 = T4;
    if (T3 != YPfalse) {
      T2 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(2),YPchr((P)92));
    } else {
    }
    CALL2(CHKREF(YruntimeYwrite_char),FREEREF(2),cF1051);
    T8 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T8;
    i_ = a1;
    goto loop;
    T1 = T7;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_write_string_literal_27) {
  ARG(x_, 0);
  ARG(port_, 1);
  P loopF1054;
  P lenF1053;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)34));
  T4 = CALL1(CHKREF(YruntimeYlen),x_);
  lenF1053 = T4;
  T3 = FUNSHELL(1,fun_loop_26,4);
  loopF1054 = T3;
  FUNINIT(loopF1054, 4,x_,loopF1054,port_,lenF1053);
  T2 = KCALL1(loopF1054,YPint((P)0));
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_28) {
  ARG(n_, 0);
  ARG(l_, 1);
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL1(CHKREF(YmacrosYemptyQ),l_);
  T8 = CALL1(CHKREF(Ynot),T9);
  if (T8 != YPfalse) {
    T7 = CALL2(CHKREF(YruntimeYGE),n_,CHKREF(YwriteYTmax_print_lengthT));
    if (T7 != YPfalse) {
      T6 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(3),CHKREF(lit_27));
      T1 = T6;
    } else {
      CALL2(CHKREF(YruntimeYwrite_char),FREEREF(3),YPchr((P)32));
      T2 = CALL1(CHKREF(Yhead),l_);
      CALL2(FREEREF(2),T2,FREEREF(1));
      T5 = CALL1(CHKREF(Ytail),l_);
      T4 = CALL2(CHKREF(YruntimeYA),n_,YPint((P)1));
      a1 = T5;
      a2 = T4;
      l_ = a1;
      n_ = a2;
      goto loop;
      T1 = T3;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_write_list_29) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P loopF1055;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T9 = CALL1(CHKREF(YwriteYquotationQ),x_);
  if (T9 != YPfalse) {
    CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)39));
    T8 = CALL1(CHKREF(Ytail),x_);
    T7 = CALL1(CHKREF(Yhead),T8);
    T6 = CALL2(recur_,T7,d_);
    T0 = T6;
  } else {
    CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)40));
    T1 = CALL1(CHKREF(Yhead),x_);
    CALL2(recur_,T1,d_);
    T4 = FUNSHELL(1,fun_loop_28,4);
    loopF1055 = T4;
    FUNINIT(loopF1055, 4,loopF1055,d_,recur_,port_);
    T3 = CALL1(CHKREF(Ytail),x_);
    T2 = KCALL2(loopF1055,T3,YPint((P)1));
    T5 = CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)41));
    T0 = T5;
  }
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_30) {
  ARG(x_, 0);
  P tmpF1058;
  P tmpF1057;
  P tmpF1056;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T13 = CALL2(CHKREF(YisaQ),x_,CHKREF(YLlstG));
  tmpF1056 = T13;
  if (tmpF1056 != YPfalse) {
    T12 = CALL1(CHKREF(Yhead),x_);
    T11 = CALL2(CHKREF(YmacrosYEE),T12,CHKREF(lit_28));
    tmpF1057 = T11;
    if (tmpF1057 != YPfalse) {
      T10 = CALL1(CHKREF(Ytail),x_);
      T9 = CALL2(CHKREF(YisaQ),T10,CHKREF(YLlstG));
      tmpF1058 = T9;
      if (tmpF1058 != YPfalse) {
        T8 = CALL1(CHKREF(Ytail),x_);
        T7 = CALL1(CHKREF(Ytail),T8);
        T6 = CALL1(CHKREF(YmacrosYemptyQ),T7);
        T5 = T6;
      } else {
        T5 = YPfalse;
      }
      T4 = T5;
      T3 = T4;
    } else {
      T3 = YPfalse;
    }
    T2 = T3;
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_loop_31) {
  ARG(i_, 0);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL2(CHKREF(YruntimeYGE),i_,CHKREF(YwriteYTmax_print_lengthT));
  if (T8 != YPfalse) {
    T7 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(4),CHKREF(lit_29));
    T0 = T7;
  } else {
    T6 = CALL2(CHKREF(YruntimeYGE),i_,FREEREF(5));
    T5 = CALL1(CHKREF(Ynot),T6);
    if (T5 != YPfalse) {
      CALL2(CHKREF(YruntimeYwrite_char),FREEREF(4),YPchr((P)32));
      T2 = CALL2(CHKREF(YruntimeYelt),FREEREF(2),i_);
      CALL2(FREEREF(3),T2,FREEREF(1));
      T4 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
      a1 = T4;
      i_ = a1;
      goto loop;
      T1 = T3;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_write_vector_32) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P loopF1060;
  P zF1059;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_30));
  T6 = CALL1(CHKREF(YruntimeYlen),x_);
  zF1059 = T6;
  T5 = CALL2(CHKREF(YruntimeYG),zF1059,YPint((P)0));
  if (T5 != YPfalse) {
    T1 = CALL2(CHKREF(YruntimeYelt),x_,YPint((P)0));
    CALL2(recur_,T1,d_);
    T4 = FUNSHELL(1,fun_loop_31,6);
    loopF1060 = T4;
    FUNINIT(loopF1060, 6,loopF1060,d_,x_,recur_,port_,zF1059);
    T3 = KCALL1(loopF1060,YPint((P)1));
    T2 = T3;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
  T7 = CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)41));
  QRET(T7);
}

FUNCODEDEF(fun_x_1190_33) {
  ARG(x_1186_, 0);
  ARG(x_1188_, 1);
  P tmpF1067;
  P tup33F1066;
  P valF1065;
  P tup33F1064;
  P keyF1063;
  P tup33F1062;
  P iF1061;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T24 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1188_);
  tmpF1067 = T24;
  if (tmpF1067 != YPfalse) {
    T22 = tmpF1067;
  } else {
    T23 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),x_1186_);
    T22 = T23;
  }
  T21 = T22;
  T20 = CALL1(CHKREF(Ynot),T21);
  if (T20 != YPfalse) {
    T19 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),x_1188_);
    iF1061 = T19;
    T18 = CALL2(CHKREF(YruntimeYnow_key),FREEREF(1),x_1186_);
    T17 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),x_1186_);
    T16 = CALL2(CHKREF(YmacrosYtup),T18,T17);
    tup33F1062 = T16;
    T15 = CALL1(CHKREF(Yhead),tup33F1062);
    keyF1063 = T15;
    T14 = CALL1(CHKREF(Ytail),tup33F1062);
    tup33F1064 = T14;
    T13 = CALL1(CHKREF(Yhead),tup33F1064);
    valF1065 = T13;
    T12 = CALL1(CHKREF(Ytail),tup33F1064);
    tup33F1066 = T12;
    T8 = CALL2(CHKREF(YruntimeYGE),iF1061,CHKREF(YwriteYTmax_print_lengthT));
    if (T8 != YPfalse) {
      CALL2(CHKREF(YruntimeYwrite_string),FREEREF(5),CHKREF(lit_32));
      T7 = CALL1(FREEREF(6),YPfalse);
    } else {
    }
    CALL2(CHKREF(YruntimeYwrite_char),FREEREF(5),YPchr((P)32));
    CALL2(FREEREF(4),keyF1063,FREEREF(3));
    CALL2(CHKREF(YruntimeYwrite_string),FREEREF(5),CHKREF(lit_31));
    CALL2(FREEREF(4),valF1065,FREEREF(3));
    T11 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),x_1188_);
    T10 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),x_1186_);
    a1 = T11;
    a2 = T10;
    x_1188_ = a1;
    x_1186_ = a2;
    goto loop;
    T6 = T9;
    T5 = T6;
    T4 = T5;
    T3 = T4;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  ARG(blow_, 0);
  P x_1190F1070;
  P x_1187F1069;
  P x_1189F1068;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(YruntimeYfrom),YPint((P)0));
  x_1189F1068 = T7;
  x_1187F1069 = FREEREF(0);
  T6 = FUNSHELL(1,fun_x_1190_33,7);
  x_1190F1070 = T6;
  FUNINIT(x_1190F1070, 7,x_1189F1068,x_1187F1069,x_1190F1070,FREEREF(3),FREEREF(2),FREEREF(1),blow_);
  T5 = CALL1(CHKREF(YruntimeYini_state),x_1189F1068);
  T4 = CALL1(CHKREF(YruntimeYini_state),x_1187F1069);
  T3 = KCALL2(x_1190F1070,T5,T4);
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_write_map_35) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P ownerF1072;
  P nameF1071;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T10 = CALL1(CHKREF(YwriteYobject_name),x_);
  nameF1071 = T10;
  if (nameF1071 != YPfalse) {
    T9 = CALL1(CHKREF(YwriteYas_binding_name),nameF1071);
    T8 = CALL2(CHKREF(YruntimeYwrite_string),port_,T9);
    T1 = T8;
  } else {
    CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_33));
    T6 = CALL1(CHKREF(Yobject_parents),x_);
    T5 = CALL1(CHKREF(YruntimeY1st),T6);
    T4 = CALL1(CHKREF(YwriteYobject_name),T5);
    ownerF1072 = T4;
    CALL2(CHKREF(YwriteYdisplay),port_,ownerF1072);
    T3 = FUNFAB(fun_34,4,x_,port_,recur_,d_);
    T2 = with_exit(T3);
    T7 = CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)93));
    T1 = T7;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_36) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_34));
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_37) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_35));
  QRET(T0);
}

FUNCODEDEF(fun_object_name_38) {
  ARG(x_, 0);
  P tmpF1076;
  P nameF1075;
  P tmpF1074;
  P tmpF1073;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = (P)YPbinding_name(x_);
  tmpF1073 = T9;
  if (tmpF1073 != YPfalse) {
    T5 = tmpF1073;
  } else {
    tmpF1074 = CHKREF(YwriteYTglo_nameQT);
    if (tmpF1074 != YPfalse) {
      T8 = CALL1(CHKREF(YwriteYenv_object_name),x_);
      T7 = T8;
    } else {
      T7 = YPfalse;
    }
    T6 = T7;
    T5 = T6;
  }
  T4 = T5;
  nameF1075 = T4;
  tmpF1076 = nameF1075;
  if (tmpF1076 != YPfalse) {
    T3 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),nameF1075);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1197_39) {
  ARG(x_1191_, 0);
  ARG(x_1193_, 1);
  ARG(x_1195_, 2);
  P tmpF1081;
  P tmpF1080;
  P iF1079;
  P specF1078;
  P firstQF1077;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T25 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1195_);
  tmpF1080 = T25;
  if (tmpF1080 != YPfalse) {
    T20 = tmpF1080;
  } else {
    T24 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),x_1193_);
    tmpF1081 = T24;
    if (tmpF1081 != YPfalse) {
      T22 = tmpF1081;
    } else {
      T23 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(2),x_1191_);
      T22 = T23;
    }
    T21 = T22;
    T20 = T21;
  }
  T19 = T20;
  T18 = CALL1(CHKREF(Ynot),T19);
  if (T18 != YPfalse) {
    T17 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),x_1195_);
    firstQF1077 = T17;
    T16 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),x_1193_);
    specF1078 = T16;
    T15 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(2),x_1191_);
    iF1079 = T15;
    T5 = CALL1(CHKREF(Ynot),firstQF1077);
    if (T5 != YPfalse) {
      T4 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(5),YPchr((P)32));
    } else {
    }
    T10 = CALL1(CHKREF(YmacrosYemptyQ),FREEREF(4));
    if (T10 != YPfalse) {
      T9 = CALL2(CHKREF(YwriteYwrite),FREEREF(5),specF1078);
    } else {
      T8 = CALL2(CHKREF(YruntimeYelt),FREEREF(4),iF1079);
      T7 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),T8);
      T6 = CALLN(CHKREF(YruntimeYformat),4,FREEREF(5),CHKREF(lit_37),T7,specF1078);
    }
    T14 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),x_1195_);
    T13 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),x_1193_);
    T12 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(2),x_1191_);
    a1 = T14;
    a2 = T13;
    a3 = T12;
    x_1195_ = a1;
    x_1193_ = a2;
    x_1191_ = a3;
    goto loop;
    T3 = T11;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_write_params_40) {
  ARG(recur_, 0);
  ARG(x_, 1);
  ARG(port_, 2);
  P x_1197F1089;
  P x_1192F1088;
  P x_1194F1087;
  P x_1196F1086;
  P namesF1085;
  P tmpF1084;
  P valueF1083;
  P namesF1082;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T23 = CALL1(CHKREF(Yfun_names),x_);
  namesF1082 = T23;
  CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)40));
  T13 = CALL1(CHKREF(Yfun_names),x_);
  namesF1085 = T13;
  T12 = CALL2(CHKREF(YruntimeYfirst_then),YPtrue,YPfalse);
  x_1196F1086 = T12;
  T11 = CALL1(CHKREF(Yfun_specs),x_);
  x_1194F1087 = T11;
  T10 = CALL1(CHKREF(YruntimeYfrom),YPint((P)0));
  x_1192F1088 = T10;
  T9 = FUNSHELL(1,fun_x_1197_39,6);
  x_1197F1089 = T9;
  FUNINIT(x_1197F1089, 6,x_1196F1086,x_1194F1087,x_1192F1088,x_1197F1089,namesF1085,port_);
  T8 = CALL1(CHKREF(YruntimeYini_state),x_1196F1086);
  T7 = CALL1(CHKREF(YruntimeYini_state),x_1194F1087);
  T6 = CALL1(CHKREF(YruntimeYini_state),x_1192F1088);
  T5 = KCALL3(x_1197F1089,T8,T7,T6);
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T21 = CALL1(CHKREF(Yfun_value),x_);
  valueF1083 = T21;
  T20 = CALL1(CHKREF(Ynot),valueF1083);
  tmpF1084 = T20;
  if (tmpF1084 != YPfalse) {
    T18 = tmpF1084;
  } else {
    T19 = CALL2(CHKREF(YmacrosYEE),valueF1083,CHKREF(YLanyG));
    T18 = T19;
  }
  T17 = T18;
  T16 = CALL1(CHKREF(Ynot),T17);
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YruntimeYformat),port_,CHKREF(lit_36),valueF1083);
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
  T22 = CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)41));
  T0 = T22;
  QRET(T0);
}

FUNCODEDEF(fun_write_fun_guts_41) {
  ARG(recur_, 0);
  ARG(name_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P tmpF1091;
  P nameF1090;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_39));
  CALL2(CHKREF(YruntimeYwrite_string),port_,name_);
  T4 = CALL1(CHKREF(Yfun_name),x_);
  nameF1090 = T4;
  tmpF1091 = nameF1090;
  if (tmpF1091 != YPfalse) {
    CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)32));
    T3 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),nameF1090);
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)32));
  CALL3(CHKREF(YwriteYwrite_params),port_,x_,recur_);
  T5 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_38));
  QRET(T5);
}

FUNCODEDEF(fun_recurring_write_42) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLgenG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_41));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALLN(CHKREF(YwriteYwrite_fun_guts),4,port_,x_,CHKREF(lit_40),recur_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_43) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLmetG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_43));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALLN(CHKREF(YwriteYwrite_fun_guts),4,port_,x_,CHKREF(lit_42),recur_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_44) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_45));
  T0 = CALL1(CHKREF(Yslot_getter),x_);
  CALL2(recur_,T0,d_);
  T1 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_44));
  QRET(T1);
}

FUNCODEDEF(fun_x_1202_45) {
  ARG(x_1198_, 0);
  ARG(x_1200_, 1);
  P tmpF1095;
  P getterF1094;
  P slotF1093;
  P iF1092;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
loop:
  T18 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1200_);
  tmpF1095 = T18;
  if (tmpF1095 != YPfalse) {
    T16 = tmpF1095;
  } else {
    T17 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),x_1198_);
    T16 = T17;
  }
  T15 = T16;
  T14 = CALL1(CHKREF(Ynot),T15);
  if (T14 != YPfalse) {
    T13 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),x_1200_);
    iF1092 = T13;
    T12 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),x_1198_);
    slotF1093 = T12;
    T4 = CALL2(CHKREF(YruntimeYGE),iF1092,CHKREF(YwriteYTmax_print_lengthT));
    if (T4 != YPfalse) {
      CALL2(CHKREF(YruntimeYwrite_string),FREEREF(6),CHKREF(lit_48));
      T3 = CALL1(FREEREF(7),YPfalse);
    } else {
    }
    T8 = CALL1(CHKREF(Yslot_getter),slotF1093);
    getterF1094 = T8;
    CALL2(CHKREF(YruntimeYwrite_char),FREEREF(6),YPchr((P)32));
    T5 = CALL1(CHKREF(Yfun_name),getterF1094);
    CALL2(CHKREF(YwriteYdisplay),FREEREF(6),T5);
    CALL2(CHKREF(YruntimeYwrite_string),FREEREF(6),CHKREF(lit_47));
    T7 = CALL1(getterF1094,FREEREF(4));
    T6 = CALL2(FREEREF(5),T7,FREEREF(3));
    T11 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),x_1200_);
    T10 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),x_1198_);
    a1 = T11;
    a2 = T10;
    x_1200_ = a1;
    x_1198_ = a2;
    goto loop;
    T2 = T9;
    T1 = T2;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  ARG(blow_, 0);
  P x_1202F1098;
  P x_1199F1097;
  P x_1201F1096;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(YruntimeYfrom),YPint((P)0));
  x_1201F1096 = T8;
  T7 = CALL1(CHKREF(Yobject_slots),FREEREF(0));
  x_1199F1097 = T7;
  T6 = FUNSHELL(1,fun_x_1202_45,8);
  x_1202F1098 = T6;
  FUNINIT(x_1202F1098, 8,x_1201F1096,x_1199F1097,x_1202F1098,FREEREF(3),FREEREF(0),FREEREF(2),FREEREF(1),blow_);
  T5 = CALL1(CHKREF(YruntimeYini_state),x_1201F1096);
  T4 = CALL1(CHKREF(YruntimeYini_state),x_1199F1097);
  T3 = KCALL2(x_1202F1098,T5,T4);
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_47) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P ownerF1100;
  P nameF1099;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T10 = CALL1(CHKREF(YwriteYobject_name),x_);
  nameF1099 = T10;
  if (nameF1099 != YPfalse) {
    T9 = CALL1(CHKREF(YwriteYas_binding_name),nameF1099);
    T8 = CALL2(CHKREF(YruntimeYwrite_string),port_,T9);
    T1 = T8;
  } else {
    T7 = CALL1(CHKREF(Yobject_parents),x_);
    T6 = CALL1(CHKREF(YruntimeY1st),T7);
    T5 = CALL1(CHKREF(YwriteYobject_name),T6);
    ownerF1100 = T5;
    CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_49));
    CALL2(CHKREF(YwriteYdisplay),port_,ownerF1100);
    T3 = FUNFAB(fun_46,4,x_,port_,recur_,d_);
    with_exit(T3);
    T4 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_46));
    T2 = T4;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_48) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_50));
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  ARG(c_, 0);
  P x_1210F1108;
  P x_1209F1107;
  P x_1208F1106;
  P x_1207F1105;
  P x_1206F1104;
  P x_1205F1103;
  P x_1204F1102;
  P x_1203F1101;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T50 = BOXVAL(FREEREF(1));
  if (T50 != YPfalse) {
    T48 = CALL1(CHKREF(YruntimeYas_uppercase),c_);
    x_1203F1101 = T48;
    T47 = CALL2(CHKREF(YmacrosYEE),x_1203F1101,YPchr((P)68));
    if (T47 != YPfalse) {
      T46 = CALL2(FREEREF(3),c_,CHKREF(YLnumG));
      T45 = CALL1(CHKREF(YruntimeYnum_to_str),T46);
      T44 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(0),T45);
      T5 = T44;
    } else {
      x_1204F1102 = x_1203F1101;
      T43 = CALL2(CHKREF(YmacrosYEE),x_1204F1102,YPchr((P)66));
      if (T43 != YPfalse) {
        T42 = CALL2(FREEREF(3),c_,CHKREF(YLintG));
        T41 = CALL2(CHKREF(YruntimeYnum_to_str),T42,YPint((P)2));
        T40 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(0),T41);
        T7 = T40;
      } else {
        x_1205F1103 = x_1204F1102;
        T39 = CALL2(CHKREF(YmacrosYEE),x_1205F1103,YPchr((P)79));
        if (T39 != YPfalse) {
          T38 = CALL2(FREEREF(3),c_,CHKREF(YLintG));
          T37 = CALL2(CHKREF(YruntimeYnum_to_str),T38,YPint((P)8));
          T36 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(0),T37);
          T9 = T36;
        } else {
          x_1206F1104 = x_1205F1103;
          T35 = CALL2(CHKREF(YmacrosYEE),x_1206F1104,YPchr((P)88));
          if (T35 != YPfalse) {
            T34 = CALL2(FREEREF(3),c_,CHKREF(YLintG));
            T33 = CALL2(CHKREF(YruntimeYnum_to_str),T34,YPint((P)16));
            T32 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(0),T33);
            T11 = T32;
          } else {
            x_1207F1105 = x_1206F1104;
            T31 = CALL2(CHKREF(YmacrosYEE),x_1207F1105,YPchr((P)67));
            if (T31 != YPfalse) {
              T30 = CALL2(FREEREF(3),c_,CHKREF(YLchrG));
              T29 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(0),T30);
              T13 = T29;
            } else {
              x_1208F1106 = x_1207F1105;
              T28 = CALL2(CHKREF(YmacrosYEE),x_1208F1106,YPchr((P)83));
              if (T28 != YPfalse) {
                T27 = CALL2(FREEREF(3),c_,CHKREF(YLanyG));
                T26 = CALL2(CHKREF(YwriteYdisplay),FREEREF(0),T27);
                T15 = T26;
              } else {
                x_1209F1107 = x_1208F1106;
                T25 = CALL2(CHKREF(YmacrosYEE),x_1209F1107,YPchr((P)61));
                if (T25 != YPfalse) {
                  T24 = CALL2(FREEREF(3),c_,CHKREF(YLanyG));
                  T23 = CALL2(CHKREF(YwriteYwrite),FREEREF(0),T24);
                  T17 = T23;
                } else {
                  x_1210F1108 = x_1209F1107;
                  T22 = CALL2(CHKREF(YmacrosYEE),x_1210F1108,YPchr((P)37));
                  if (T22 != YPfalse) {
                    T21 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(0),YPchr((P)37));
                    T19 = T21;
                  } else {
                    T20 = CALL3(CHKREF(Yerror),CHKREF(lit_52),c_,FREEREF(2));
                    T19 = T20;
                  }
                  T18 = T19;
                  T17 = T18;
                }
                T16 = T17;
                T15 = T16;
              }
              T14 = T15;
              T13 = T14;
            }
            T12 = T13;
            T11 = T12;
          }
          T10 = T11;
          T9 = T10;
        }
        T8 = T9;
        T7 = T8;
      }
      T6 = T7;
      T5 = T6;
    }
    T49 = BOXVAL(FREEREF(1)) = YPfalse;
    T0 = T49;
  } else {
    T4 = CALL2(CHKREF(YmacrosYEE),c_,YPchr((P)37));
    if (T4 != YPfalse) {
      T3 = BOXVAL(FREEREF(1)) = YPtrue;
      T1 = T3;
    } else {
      T2 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(0),c_);
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_arg_50) {
  ARG(class_, 0);
  ARG(char_, 1);
  P tmpF1111;
  P argumentF1110;
  P current_indexF1109;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T14 = BOXVAL(FREEREF(0));
  current_indexF1109 = T14;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(CHKREF(YruntimeYA),T2,YPint((P)1));
  BOXVAL(FREEREF(0)) = T1;
  T5 = CALL2(CHKREF(YruntimeYL),current_indexF1109,FREEREF(3));
  T4 = CALL1(CHKREF(Ynot),T5);
  if (T4 != YPfalse) {
    T3 = CALL3(CHKREF(Yerror),CHKREF(lit_54),FREEREF(2),FREEREF(1));
  } else {
  }
  T13 = CALL2(CHKREF(YruntimeYelt),FREEREF(1),current_indexF1109);
  argumentF1110 = T13;
  T12 = CALL2(CHKREF(YmacrosYEE),class_,CHKREF(YLanyG));
  tmpF1111 = T12;
  if (tmpF1111 != YPfalse) {
    T10 = tmpF1111;
  } else {
    T11 = CALL2(CHKREF(YisaQ),argumentF1110,class_);
    T10 = T11;
  }
  T9 = T10;
  T8 = CALL1(CHKREF(Ynot),T9);
  if (T8 != YPfalse) {
    T7 = CALLN(CHKREF(Yerror),4,CHKREF(lit_53),char_,class_,argumentF1110);
  } else {
  }
  T6 = argumentF1110;
  T0 = T6;
  QRET(T0);
}

FUNCODEDEF(fun_format_51) {
  ARG(arguments_, 0);
  ARG(message_, 1);
  ARG(port_, 2);
  P argF1115;
  P num_argumentsF1114;
  P argument_indexF1113;
  P found_percentQF1112;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  found_percentQF1112 = YPfalse;
  found_percentQF1112 = BOXFAB(found_percentQF1112);
  check_type(YPint((P)0),CHKREF(YLintG));
  argument_indexF1113 = YPint((P)0);
  argument_indexF1113 = BOXFAB(argument_indexF1113);
  T13 = CALL1(CHKREF(YruntimeYlen),arguments_);
  num_argumentsF1114 = T13;
  T7 = FUNSHELL(1,fun_arg_50,4);
  argF1115 = T7;
  FUNINIT(argF1115, 4,argument_indexF1113,arguments_,message_,num_argumentsF1114);
  T6 = FUNFAB(fun_49,4,port_,found_percentQF1112,message_,argF1115);
  T5 = CALL2(CHKREF(YruntimeYdo),T6,message_);
  T12 = BOXVAL(found_percentQF1112);
  T11 = CALL1(CHKREF(Ynot),T12);
  T10 = CALL1(CHKREF(Ynot),T11);
  if (T10 != YPfalse) {
    T9 = CALL2(CHKREF(Yerror),CHKREF(lit_51),message_);
    T8 = T9;
  } else {
    T8 = YPfalse;
  }
  T4 = T8;
  T2 = T4;
  T0 = T2;
  QRET(T0);
}

P YwriteY___main_0___() {
  P T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187;
  P T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171;
  P T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155;
  P T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139;
  P T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123;
  P T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107;
  P T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91;
  P T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75;
  P T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  YwriteYTmax_print_depthT = YPint((P)4);
  regsym(&YwriteYTmax_print_depthT,"write","*max-print-depth*");
  YwriteYTmax_print_lengthT = YPint((P)12);
  regsym(&YwriteYTmax_print_lengthT,"write","*max-print-length*");
  T0 = YPsig(YPpair(YPPsym((P)"name"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_as_binding_name_0 = YPmet(FUNCODEREF(fun_as_binding_name_0),YPPsym((P)"as-binding-name"),T0,ENVNUL);
  T4 = BOUNDP(YwriteYas_binding_name);
  if (T4 != YPfalse) {
    T3 = CHKREF(YwriteYas_binding_name);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_as_binding_name_0;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YwriteYas_binding_name = T1;
  regsym(&YwriteYas_binding_name,"write","as-binding-name");
  lit_0 = YPPsym((P)"seq");
  lit_1 = YPPsym((P)"quote");
  lit_2 = YPPsym((P)"as-binding-name");
  lit_3 = YPPsym((P)"write-string");
  lit_4 = YPPsym((P)"==");
  lit_5 = YPPsym((P)"if");
  lit_6 = YPsb((P)"Match Pattern Failure");
  lit_7 = YPPsym((P)"maybe-write-proto-name");
  T7 = YPsig(YPpair(YPPsym((P)"msg"),YPpair(YPPsym((P)"args"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1185_1 = YPmet(FUNCODEREF(fun_x_1185_1),YPPsym((P)"x-1185"),T7,ENVNUL);
  T6 = YPsig(YPpair(YPPsym((P)"return"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T6,ENVNUL);
  T5 = YPsig(YPpair(YPPsym((P)"exp"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T5,ENVNUL);
  T8 = fun_3;
  YPmacro(YPPsym((P)"maybe-write-proto-name"),T8);
  lit_8 = YPPsym((P)"<str>");
  T9 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_do_display_4 = YPmet(FUNCODEREF(fun_do_display_4),YPPsym((P)"do-display"),T9,ENVNUL);
  T13 = BOUNDP(YwriteYdo_display);
  if (T13 != YPfalse) {
    T12 = CHKREF(YwriteYdo_display);
  } else {
    T12 = YPfalse;
  }
  T11 = fun_do_display_4;
  T10 = CALL2(CHKREF(YPdefine_method),T12,T11);
  YwriteYdo_display = T10;
  regsym(&YwriteYdo_display,"write","do-display");
  lit_9 = YPPsym((P)"<chr>");
  T14 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_do_display_5 = YPmet(FUNCODEREF(fun_do_display_5),YPPsym((P)"do-display"),T14,ENVNUL);
  T18 = BOUNDP(YwriteYdo_display);
  if (T18 != YPfalse) {
    T17 = CHKREF(YwriteYdo_display);
  } else {
    T17 = YPfalse;
  }
  T16 = fun_do_display_5;
  T15 = CALL2(CHKREF(YPdefine_method),T17,T16);
  YwriteYdo_display = T15;
  regsym(&YwriteYdo_display,"write","do-display");
  T19 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_do_display_6 = YPmet(FUNCODEREF(fun_do_display_6),YPPsym((P)"do-display"),T19,ENVNUL);
  T23 = BOUNDP(YwriteYdo_display);
  if (T23 != YPfalse) {
    T22 = CHKREF(YwriteYdo_display);
  } else {
    T22 = YPfalse;
  }
  T21 = fun_do_display_6;
  T20 = CALL2(CHKREF(YPdefine_method),T22,T21);
  YwriteYdo_display = T20;
  regsym(&YwriteYdo_display,"write","do-display");
  lit_10 = YPsb((P)"*");
  T25 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_recur_7 = YPmet(FUNCODEREF(fun_recur_7),YPPsym((P)"recur"),T25,ENVNUL);
  T24 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_display_8 = YPmet(FUNCODEREF(fun_display_8),YPPsym((P)"display"),T24,ENVNUL);
  T29 = BOUNDP(YwriteYdisplay);
  if (T29 != YPfalse) {
    T28 = CHKREF(YwriteYdisplay);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_display_8;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  YwriteYdisplay = T26;
  regsym(&YwriteYdisplay,"write","display");
  T30 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_write_to_string_9 = YPmet(FUNCODEREF(fun_write_to_string_9),YPPsym((P)"write-to-string"),T30,ENVNUL);
  T34 = BOUNDP(YwriteYwrite_to_string);
  if (T34 != YPfalse) {
    T33 = CHKREF(YwriteYwrite_to_string);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_write_to_string_9;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YwriteYwrite_to_string = T31;
  regsym(&YwriteYwrite_to_string,"write","write-to-string");
  lit_11 = YPsb((P)"*");
  T36 = YPsig(YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_recur_10 = YPmet(FUNCODEREF(fun_recur_10),YPPsym((P)"recur"),T36,ENVNUL);
  T35 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_write_11 = YPmet(FUNCODEREF(fun_write_11),YPPsym((P)"write"),T35,ENVNUL);
  T40 = BOUNDP(YwriteYwrite);
  if (T40 != YPfalse) {
    T39 = CHKREF(YwriteYwrite);
  } else {
    T39 = YPfalse;
  }
  T38 = fun_write_11;
  T37 = CALL2(CHKREF(YPdefine_method),T39,T38);
  YwriteYwrite = T37;
  regsym(&YwriteYwrite,"write","write");
  T41 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_writeln_12 = YPmet(FUNCODEREF(fun_writeln_12),YPPsym((P)"writeln"),T41,ENVNUL);
  T45 = BOUNDP(YwriteYwriteln);
  if (T45 != YPfalse) {
    T44 = CHKREF(YwriteYwriteln);
  } else {
    T44 = YPfalse;
  }
  T43 = fun_writeln_12;
  T42 = CALL2(CHKREF(YPdefine_method),T44,T43);
  YwriteYwriteln = T42;
  regsym(&YwriteYwriteln,"write","writeln");
  lit_12 = YPPsym((P)"<lst>");
  lit_13 = YPsb((P)"()");
  T46 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_13 = YPmet(FUNCODEREF(fun_recurring_write_13),YPPsym((P)"recurring-write"),T46,ENVNUL);
  T50 = BOUNDP(YwriteYrecurring_write);
  if (T50 != YPfalse) {
    T49 = CHKREF(YwriteYrecurring_write);
  } else {
    T49 = YPfalse;
  }
  T48 = fun_recurring_write_13;
  T47 = CALL2(CHKREF(YPdefine_method),T49,T48);
  YwriteYrecurring_write = T47;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_14 = YPPsym((P)"<vec>");
  T51 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLvecG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_14 = YPmet(FUNCODEREF(fun_recurring_write_14),YPPsym((P)"recurring-write"),T51,ENVNUL);
  T55 = BOUNDP(YwriteYrecurring_write);
  if (T55 != YPfalse) {
    T54 = CHKREF(YwriteYrecurring_write);
  } else {
    T54 = YPfalse;
  }
  T53 = fun_recurring_write_14;
  T52 = CALL2(CHKREF(YPdefine_method),T54,T53);
  YwriteYrecurring_write = T52;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_15 = YPPsym((P)"<map>");
  T56 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YruntimeYLmapG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_15 = YPmet(FUNCODEREF(fun_recurring_write_15),YPPsym((P)"recurring-write"),T56,ENVNUL);
  T60 = BOUNDP(YwriteYrecurring_write);
  if (T60 != YPfalse) {
    T59 = CHKREF(YwriteYrecurring_write);
  } else {
    T59 = YPfalse;
  }
  T58 = fun_recurring_write_15;
  T57 = CALL2(CHKREF(YPdefine_method),T59,T58);
  YwriteYrecurring_write = T57;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_16 = YPPsym((P)"f");
  lit_17 = YPPsym((P)"t");
  T61 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLlogG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_16 = YPmet(FUNCODEREF(fun_recurring_write_16),YPPsym((P)"recurring-write"),T61,ENVNUL);
  T65 = BOUNDP(YwriteYrecurring_write);
  if (T65 != YPfalse) {
    T64 = CHKREF(YwriteYrecurring_write);
  } else {
    T64 = YPfalse;
  }
  T63 = fun_recurring_write_16;
  T62 = CALL2(CHKREF(YPdefine_method),T64,T63);
  YwriteYrecurring_write = T62;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_18 = YPPsym((P)"<sym>");
  T66 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLsymG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_17 = YPmet(FUNCODEREF(fun_recurring_write_17),YPPsym((P)"recurring-write"),T66,ENVNUL);
  T70 = BOUNDP(YwriteYrecurring_write);
  if (T70 != YPfalse) {
    T69 = CHKREF(YwriteYrecurring_write);
  } else {
    T69 = YPfalse;
  }
  T68 = fun_recurring_write_17;
  T67 = CALL2(CHKREF(YPdefine_method),T69,T68);
  YwriteYrecurring_write = T67;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_19 = YPsb((P)"&0x");
  lit_20 = YPPsym((P)"<loc>");
  T71 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLlocG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_18 = YPmet(FUNCODEREF(fun_recurring_write_18),YPPsym((P)"recurring-write"),T71,ENVNUL);
  T75 = BOUNDP(YwriteYrecurring_write);
  if (T75 != YPfalse) {
    T74 = CHKREF(YwriteYrecurring_write);
  } else {
    T74 = YPfalse;
  }
  T73 = fun_recurring_write_18;
  T72 = CALL2(CHKREF(YPdefine_method),T74,T73);
  YwriteYrecurring_write = T72;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_21 = YPsb((P)"<num>");
  T76 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLnumG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_19 = YPmet(FUNCODEREF(fun_recurring_write_19),YPPsym((P)"recurring-write"),T76,ENVNUL);
  T80 = BOUNDP(YwriteYrecurring_write);
  if (T80 != YPfalse) {
    T79 = CHKREF(YwriteYrecurring_write);
  } else {
    T79 = YPfalse;
  }
  T78 = fun_recurring_write_19;
  T77 = CALL2(CHKREF(YPdefine_method),T79,T78);
  YwriteYrecurring_write = T77;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_22 = YPPsym((P)"<str>");
  T81 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_20 = YPmet(FUNCODEREF(fun_recurring_write_20),YPPsym((P)"recurring-write"),T81,ENVNUL);
  T85 = BOUNDP(YwriteYrecurring_write);
  if (T85 != YPfalse) {
    T84 = CHKREF(YwriteYrecurring_write);
  } else {
    T84 = YPfalse;
  }
  T83 = fun_recurring_write_20;
  T82 = CALL2(CHKREF(YPdefine_method),T84,T83);
  YwriteYrecurring_write = T82;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_23 = YPPsym((P)"<chr>");
  T86 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_21 = YPmet(FUNCODEREF(fun_recurring_write_21),YPPsym((P)"recurring-write"),T86,ENVNUL);
  T90 = BOUNDP(YwriteYrecurring_write);
  if (T90 != YPfalse) {
    T89 = CHKREF(YwriteYrecurring_write);
  } else {
    T89 = YPfalse;
  }
  T88 = fun_recurring_write_21;
  T87 = CALL2(CHKREF(YPdefine_method),T89,T88);
  YwriteYrecurring_write = T87;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  T91 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"mumble"),Ynil)),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_write_boolean_22 = YPmet(FUNCODEREF(fun_write_boolean_22),YPPsym((P)"write-boolean"),T91,ENVNUL);
  T95 = BOUNDP(YwriteYwrite_boolean);
  if (T95 != YPfalse) {
    T94 = CHKREF(YwriteYwrite_boolean);
  } else {
    T94 = YPfalse;
  }
  T93 = fun_write_boolean_22;
  T92 = CALL2(CHKREF(YPdefine_method),T94,T93);
  YwriteYwrite_boolean = T92;
  regsym(&YwriteYwrite_boolean,"write","write-boolean");
  lit_24 = YPPsym((P)"<flo>");
  lit_25 = YPPsym((P)"<int>");
  T96 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLnumG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_write_number_23 = YPmet(FUNCODEREF(fun_write_number_23),YPPsym((P)"write-number"),T96,ENVNUL);
  T100 = BOUNDP(YwriteYwrite_number);
  if (T100 != YPfalse) {
    T99 = CHKREF(YwriteYwrite_number);
  } else {
    T99 = YPfalse;
  }
  T98 = fun_write_number_23;
  T97 = CALL2(CHKREF(YPdefine_method),T99,T98);
  YwriteYwrite_number = T97;
  regsym(&YwriteYwrite_number,"write","write-number");
  lit_26 = YPsb((P)"#\\");
  T101 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_write_char_literal_24 = YPmet(FUNCODEREF(fun_write_char_literal_24),YPPsym((P)"write-char-literal"),T101,ENVNUL);
  T105 = BOUNDP(YwriteYwrite_char_literal);
  if (T105 != YPfalse) {
    T104 = CHKREF(YwriteYwrite_char_literal);
  } else {
    T104 = YPfalse;
  }
  T103 = fun_write_char_literal_24;
  T102 = CALL2(CHKREF(YPdefine_method),T104,T103);
  YwriteYwrite_char_literal = T102;
  regsym(&YwriteYwrite_char_literal,"write","write-char-literal");
  T106 = YPsig(YPpair(YPPsym((P)"char"),Ynil),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_character_name_25 = YPmet(FUNCODEREF(fun_character_name_25),YPPsym((P)"character-name"),T106,ENVNUL);
  T110 = BOUNDP(YwriteYcharacter_name);
  if (T110 != YPfalse) {
    T109 = CHKREF(YwriteYcharacter_name);
  } else {
    T109 = YPfalse;
  }
  T108 = fun_character_name_25;
  T107 = CALL2(CHKREF(YPdefine_method),T109,T108);
  YwriteYcharacter_name = T107;
  regsym(&YwriteYcharacter_name,"write","character-name");
  T112 = YPsig(YPpair(YPPsym((P)"i"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_26 = YPmet(FUNCODEREF(fun_loop_26),YPPsym((P)"loop"),T112,ENVNUL);
  T111 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),Ynil)),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_write_string_literal_27 = YPmet(FUNCODEREF(fun_write_string_literal_27),YPPsym((P)"write-string-literal"),T111,ENVNUL);
  T116 = BOUNDP(YwriteYwrite_string_literal);
  if (T116 != YPfalse) {
    T115 = CHKREF(YwriteYwrite_string_literal);
  } else {
    T115 = YPfalse;
  }
  T114 = fun_write_string_literal_27;
  T113 = CALL2(CHKREF(YPdefine_method),T115,T114);
  YwriteYwrite_string_literal = T113;
  regsym(&YwriteYwrite_string_literal,"write","write-string-literal");
  lit_27 = YPsb((P)" ...");
  T118 = YPsig(YPpair(YPPsym((P)"l"),YPpair(YPPsym((P)"n"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_28 = YPmet(FUNCODEREF(fun_loop_28),YPPsym((P)"loop"),T118,ENVNUL);
  T117 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_write_list_29 = YPmet(FUNCODEREF(fun_write_list_29),YPPsym((P)"write-list"),T117,ENVNUL);
  T122 = BOUNDP(YwriteYwrite_list);
  if (T122 != YPfalse) {
    T121 = CHKREF(YwriteYwrite_list);
  } else {
    T121 = YPfalse;
  }
  T120 = fun_write_list_29;
  T119 = CALL2(CHKREF(YPdefine_method),T121,T120);
  YwriteYwrite_list = T119;
  regsym(&YwriteYwrite_list,"write","write-list");
  lit_28 = YPPsym((P)"quote");
  T123 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_quotationQ_30 = YPmet(FUNCODEREF(fun_quotationQ_30),YPPsym((P)"quotation?"),T123,ENVNUL);
  T127 = BOUNDP(YwriteYquotationQ);
  if (T127 != YPfalse) {
    T126 = CHKREF(YwriteYquotationQ);
  } else {
    T126 = YPfalse;
  }
  T125 = fun_quotationQ_30;
  T124 = CALL2(CHKREF(YPdefine_method),T126,T125);
  YwriteYquotationQ = T124;
  regsym(&YwriteYquotationQ,"write","quotation?");
  lit_29 = YPsb((P)" ...");
  lit_30 = YPsb((P)"#(");
  T129 = YPsig(YPpair(YPPsym((P)"i"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_31 = YPmet(FUNCODEREF(fun_loop_31),YPPsym((P)"loop"),T129,ENVNUL);
  T128 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLvecG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_write_vector_32 = YPmet(FUNCODEREF(fun_write_vector_32),YPPsym((P)"write-vector"),T128,ENVNUL);
  T133 = BOUNDP(YwriteYwrite_vector);
  if (T133 != YPfalse) {
    T132 = CHKREF(YwriteYwrite_vector);
  } else {
    T132 = YPfalse;
  }
  T131 = fun_write_vector_32;
  T130 = CALL2(CHKREF(YPdefine_method),T132,T131);
  YwriteYwrite_vector = T130;
  regsym(&YwriteYwrite_vector,"write","write-vector");
  lit_31 = YPsb((P)": ");
  lit_32 = YPsb((P)" ...");
  lit_33 = YPsb((P)"#[");
  T136 = YPsig(YPpair(YPPsym((P)"x-1188"),YPpair(YPPsym((P)"x-1186"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_x_1190_33 = YPmet(FUNCODEREF(fun_x_1190_33),YPPsym((P)"x-1190"),T136,ENVNUL);
  T135 = YPsig(YPpair(YPPsym((P)"blow"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T135,ENVNUL);
  T134 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YruntimeYLmapG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_write_map_35 = YPmet(FUNCODEREF(fun_write_map_35),YPPsym((P)"write-map"),T134,ENVNUL);
  T140 = BOUNDP(YwriteYwrite_map);
  if (T140 != YPfalse) {
    T139 = CHKREF(YwriteYwrite_map);
  } else {
    T139 = YPfalse;
  }
  T138 = fun_write_map_35;
  T137 = CALL2(CHKREF(YPdefine_method),T139,T138);
  YwriteYwrite_map = T137;
  regsym(&YwriteYwrite_map,"write","write-map");
  lit_34 = YPsb((P)"#{Input-port}");
  T141 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YruntimeYLinput_portG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_36 = YPmet(FUNCODEREF(fun_recurring_write_36),YPPsym((P)"recurring-write"),T141,ENVNUL);
  T145 = BOUNDP(YwriteYrecurring_write);
  if (T145 != YPfalse) {
    T144 = CHKREF(YwriteYrecurring_write);
  } else {
    T144 = YPfalse;
  }
  T143 = fun_recurring_write_36;
  T142 = CALL2(CHKREF(YPdefine_method),T144,T143);
  YwriteYrecurring_write = T142;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_35 = YPsb((P)"#{Output-port}");
  T146 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_37 = YPmet(FUNCODEREF(fun_recurring_write_37),YPPsym((P)"recurring-write"),T146,ENVNUL);
  T150 = BOUNDP(YwriteYrecurring_write);
  if (T150 != YPfalse) {
    T149 = CHKREF(YwriteYrecurring_write);
  } else {
    T149 = YPfalse;
  }
  T148 = fun_recurring_write_37;
  T147 = CALL2(CHKREF(YPdefine_method),T149,T148);
  YwriteYrecurring_write = T147;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  YwriteYTglo_nameQT = YPfalse;
  regsym(&YwriteYTglo_nameQT,"write","*glo-name?*");
  T151 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_object_name_38 = YPmet(FUNCODEREF(fun_object_name_38),YPPsym((P)"object-name"),T151,ENVNUL);
  T155 = BOUNDP(YwriteYobject_name);
  if (T155 != YPfalse) {
    T154 = CHKREF(YwriteYobject_name);
  } else {
    T154 = YPfalse;
  }
  T153 = fun_object_name_38;
  T152 = CALL2(CHKREF(YPdefine_method),T154,T153);
  YwriteYobject_name = T152;
  regsym(&YwriteYobject_name,"write","object-name");
  lit_36 = YPsb((P)" => %=");
  lit_37 = YPsb((P)"(%s %=)");
  T157 = YPsig(YPpair(YPPsym((P)"x-1195"),YPpair(YPPsym((P)"x-1193"),YPpair(YPPsym((P)"x-1191"),Ynil))),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_x_1197_39 = YPmet(FUNCODEREF(fun_x_1197_39),YPPsym((P)"x-1197"),T157,ENVNUL);
  T156 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"recur"),Ynil))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLfunG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_write_params_40 = YPmet(FUNCODEREF(fun_write_params_40),YPPsym((P)"write-params"),T156,ENVNUL);
  T161 = BOUNDP(YwriteYwrite_params);
  if (T161 != YPfalse) {
    T160 = CHKREF(YwriteYwrite_params);
  } else {
    T160 = YPfalse;
  }
  T159 = fun_write_params_40;
  T158 = CALL2(CHKREF(YPdefine_method),T160,T159);
  YwriteYwrite_params = T158;
  regsym(&YwriteYwrite_params,"write","write-params");
  lit_38 = YPsb((P)"}");
  lit_39 = YPsb((P)"#{");
  T162 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"name"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLfunG),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_write_fun_guts_41 = YPmet(FUNCODEREF(fun_write_fun_guts_41),YPPsym((P)"write-fun-guts"),T162,ENVNUL);
  T166 = BOUNDP(YwriteYwrite_fun_guts);
  if (T166 != YPfalse) {
    T165 = CHKREF(YwriteYwrite_fun_guts);
  } else {
    T165 = YPfalse;
  }
  T164 = fun_write_fun_guts_41;
  T163 = CALL2(CHKREF(YPdefine_method),T165,T164);
  YwriteYwrite_fun_guts = T163;
  regsym(&YwriteYwrite_fun_guts,"write","write-fun-guts");
  lit_40 = YPsb((P)"Gen");
  lit_41 = YPPsym((P)"<gen>");
  T167 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLgenG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_42 = YPmet(FUNCODEREF(fun_recurring_write_42),YPPsym((P)"recurring-write"),T167,ENVNUL);
  T171 = BOUNDP(YwriteYrecurring_write);
  if (T171 != YPfalse) {
    T170 = CHKREF(YwriteYrecurring_write);
  } else {
    T170 = YPfalse;
  }
  T169 = fun_recurring_write_42;
  T168 = CALL2(CHKREF(YPdefine_method),T170,T169);
  YwriteYrecurring_write = T168;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_42 = YPsb((P)"Met");
  lit_43 = YPPsym((P)"<met>");
  T172 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLmetG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_43 = YPmet(FUNCODEREF(fun_recurring_write_43),YPPsym((P)"recurring-write"),T172,ENVNUL);
  T176 = BOUNDP(YwriteYrecurring_write);
  if (T176 != YPfalse) {
    T175 = CHKREF(YwriteYrecurring_write);
  } else {
    T175 = YPfalse;
  }
  T174 = fun_recurring_write_43;
  T173 = CALL2(CHKREF(YPdefine_method),T175,T174);
  YwriteYrecurring_write = T173;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_44 = YPsb((P)"}");
  lit_45 = YPsb((P)"#{Slot ");
  T177 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLslotG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_44 = YPmet(FUNCODEREF(fun_recurring_write_44),YPPsym((P)"recurring-write"),T177,ENVNUL);
  T181 = BOUNDP(YwriteYrecurring_write);
  if (T181 != YPfalse) {
    T180 = CHKREF(YwriteYrecurring_write);
  } else {
    T180 = YPfalse;
  }
  T179 = fun_recurring_write_44;
  T178 = CALL2(CHKREF(YPdefine_method),T180,T179);
  YwriteYrecurring_write = T178;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_46 = YPsb((P)"}");
  lit_47 = YPsb((P)": ");
  lit_48 = YPsb((P)" ...");
  lit_49 = YPsb((P)"#{");
  T184 = YPsig(YPpair(YPPsym((P)"x-1200"),YPpair(YPPsym((P)"x-1198"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_x_1202_45 = YPmet(FUNCODEREF(fun_x_1202_45),YPPsym((P)"x-1202"),T184,ENVNUL);
  T183 = YPsig(YPpair(YPPsym((P)"blow"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T183,ENVNUL);
  T182 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_47 = YPmet(FUNCODEREF(fun_recurring_write_47),YPPsym((P)"recurring-write"),T182,ENVNUL);
  T188 = BOUNDP(YwriteYrecurring_write);
  if (T188 != YPfalse) {
    T187 = CHKREF(YwriteYrecurring_write);
  } else {
    T187 = YPfalse;
  }
  T186 = fun_recurring_write_47;
  T185 = CALL2(CHKREF(YPdefine_method),T187,T186);
  YwriteYrecurring_write = T185;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_50 = YPsb((P)"#{End-of-file}");
  T190 = CALL0(CHKREF(YruntimeYeof_object));
  T189 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"x"),YPpair(YPPsym((P)"d"),YPpair(YPPsym((P)"recur"),Ynil)))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(T190,YPpair(CHKREF(YLintG),YPpair(CHKREF(YLfunG),Ynil)))),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_48 = YPmet(FUNCODEREF(fun_recurring_write_48),YPPsym((P)"recurring-write"),T189,ENVNUL);
  T194 = BOUNDP(YwriteYrecurring_write);
  if (T194 != YPfalse) {
    T193 = CHKREF(YwriteYrecurring_write);
  } else {
    T193 = YPfalse;
  }
  T192 = fun_recurring_write_48;
  T191 = CALL2(CHKREF(YPdefine_method),T193,T192);
  YwriteYrecurring_write = T191;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_51 = YPsb((P)"Incomplete format directive in \"%s\"");
  lit_52 = YPsb((P)"Invalid format directive '%s' in \"%s\"");
  lit_53 = YPsb((P)"Format argument for directive '%%%c' not of class %s: %=");
  lit_54 = YPsb((P)"Too few arguments for format string %=: %=");
  T197 = YPsig(YPpair(YPPsym((P)"c"),Ynil),YPpair(CHKREF(YLchrG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T197,ENVNUL);
  T196 = YPsig(YPpair(YPPsym((P)"char"),YPpair(YPPsym((P)"class"),Ynil)),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_arg_50 = YPmet(FUNCODEREF(fun_arg_50),YPPsym((P)"arg"),T196,ENVNUL);
  T195 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"message"),YPpair(YPPsym((P)"arguments"),Ynil))),YPpair(CHKREF(YruntimeYLoutput_portG),YPpair(CHKREF(YLstrG),Ynil)),YPtrue,YPint((P)2),CHKREF(YLanyG));
  fun_format_51 = YPmet(FUNCODEREF(fun_format_51),YPPsym((P)"format"),T195,ENVNUL);
  T201 = BOUNDP(YruntimeYformat);
  if (T201 != YPfalse) {
    T200 = CHKREF(YruntimeYformat);
  } else {
    T200 = YPfalse;
  }
  T199 = fun_format_51;
  T198 = CALL2(CHKREF(YPdefine_method),T200,T199);
  YruntimeYformat = T198;
  regsym(&YruntimeYformat,"runtime","format");
  T202 = YPfalse;
  return T202;
}

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);
extern void load_module_runtime (void);
extern void load_module_read (void);

/* EXPRESSION: */

extern void load_module_write (void);

void load_module_write (void) {
  static int need_init = 1;
  if (!need_init) return;

  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_read();

  (P)YwriteY___main_0___();

  need_init = 0;
}

/* END OF GENERATED CODE. */
