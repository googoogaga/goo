/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: read */

EXT(YruntimeYfrom_to,"runtime","from-to");
DEF(YreadYDclose_paren,"read","$close-paren");
DEF(YreadYDdot,"read","$dot");
EXT(YruntimeYpop,"runtime","pop");
EXT(Ynot,"boot","not");
EXT(Yfun_value,"boot","fun-value");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYmemQ,"runtime","mem?");
DEF(YreadYreading_error,"read","reading-error");
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
DEF(YreadYread_string_literal,"read","read-string-literal");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYassqn,"runtime","assqn");
DEF(YreadYsub_read_list,"read","sub-read-list");
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
DEF(YreadYTread_terminatingQ_vectorT,"read","*read-terminating?-vector*");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
DEF(YreadYwarn,"read","warn");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYfrom,"runtime","from");
EXT(Ynul,"boot","nul");
EXT(YruntimeY1st,"runtime","1st");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
DEF(YreadYpreferred_case,"read","preferred-case");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYfill,"runtime","fill");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Yslot_value,"boot","slot-value");
EXT(YmacrosYEE,"macros","==");
EXT(YLanyG,"boot","<any>");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYdel_key,"runtime","del-key");
DEF(YreadYread,"read","read");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYE,"runtime","=");
EXT(Yfapply,"boot","fapply");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YLlstG,"boot","<lst>");
DEF(YreadYDstring_escape_chars,"read","$string-escape-chars");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYlen,"runtime","len");
DEF(YreadYparse_token,"read","parse-token");
EXT(Ysig_names,"boot","sig-names");
DEF(YreadYLreader_tokenG,"read","<reader-token>");
EXT(YruntimeYdel_keys,"runtime","del-keys");
DEF(YreadYsub_read_token,"read","sub-read-token");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYL,"runtime","<");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYlast,"runtime","last");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYvec,"runtime","vec");
EXT(YLtraitsG,"boot","<traits>");
DEF(YreadYdefine_sharp_macro,"read","define-sharp-macro");
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
EXT(YPslot,"boot","%slot");
DEF(YreadYmake_immutableX,"read","make-immutable!");
EXT(YruntimeYtype_or,"runtime","type-or");
DEF(YreadYTsharp_macrosT,"read","*sharp-macros*");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YruntimeYG,"runtime",">");
EXT(YLvecG,"boot","<vec>");
EXT(YmacrosYvar_name,"macros","var-name");
DEF(YreadYreverse_list_Gstring,"read","reverse-list->string");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YruntimeYrev,"runtime","rev");
DEF(YreadYsub_read_carefully,"read","sub-read-carefully");
EXT(YLbagG,"boot","<bag>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYmap2,"runtime","map2");
DEF(YreadYread_from_string,"read","read-from-string");
EXT(YruntimeYGE,"runtime",">=");
EXT(Yfun_names,"boot","fun-names");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYfile_mtime,"runtime","file-mtime");
EXT(YLlogG,"boot","<log>");
EXT(YPvnul,"boot","%vnul");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYdo2,"runtime","do2");
DEF(YreadYDchar_long_names,"read","$char-long-names");
DEF(YreadYsub_read_constituent,"read","sub-read-constituent");
EXT(YruntimeYdo,"runtime","do");
DEF(YreadYtoken_message_setter,"read","token-message-setter");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYneg,"runtime","neg");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYcat2,"runtime","cat2");
DEF(YreadYset_standard_syntaxX,"read","set-standard-syntax!");
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
EXT(YruntimeYassoc,"runtime","assoc");
DEF(YreadYtoken_message,"read","token-message");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
DEF(YreadYsub_read,"read","sub-read");
DEF(YreadYTread_dispatch_vectorT,"read","*read-dispatch-vector*");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YLfloG,"boot","<flo>");
EXT(YLoptsG,"boot","<opts>");
DEF(YreadYDstrange_symbol_names,"read","$strange-symbol-names");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYelt,"runtime","elt");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
DEF(YreadYgobble_line,"read","gobble-line");
EXT(YLlocG,"boot","<loc>");
EXT(YLintG,"boot","<int>");
EXT(Yhead,"boot","head");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YLslotG,"boot","<slot>");
EXT(YLflatG,"boot","<flat>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYassocq,"runtime","assocq");
DEF(YreadYmake_reader_token,"read","make-reader-token");
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
DEF(YreadYset_standard_read_macroX,"read","set-standard-read-macro!");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYassq,"runtime","assq");
EXT(Yhead_setter,"boot","head-setter");
EXT(YruntimeYcurry,"runtime","curry");
DEF(YreadYreader_tokenQ,"read","reader-token?");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeYto_str,"runtime","to-str");

/* FORWARD QUOTATIONS: */

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

LOCFOR(fun_loop_0);
LOCFOR(fun_read_1);
LOCFOR(fun_read_from_string_2);
LOCFOR(fun_sub_read_carefully_3);
LOCFOR(fun_token_message_4);
LOCFOR(fun_token_message_setter_5);
LOCFOR(fun_6);
LOCFOR(fun_make_reader_token_7);
LOCFOR(fun_reader_tokenQ_8);
LOCFOR(fun_sub_read_9);
LOCFOR(fun_10);
LOCFOR(fun_set_standard_syntaxX_11);
LOCFOR(fun_12);
LOCFOR(fun_13);
FUNFOR(YreadYsub_read_constituent);
LOCFOR(fun_15);
LOCFOR(fun_set_standard_read_macroX_16);
LOCFOR(fun_sub_read_list_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_loop_22);
FUNFOR(YreadYread_string_literal);
LOCFOR(fun_24);
LOCFOR(fun_loop_25);
LOCFOR(fun_gobble_line_26);
LOCFOR(fun_define_sharp_macro_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_loop_35);
LOCFOR(fun_sub_read_token_36);
LOCFOR(fun_37);
LOCFOR(fun_parse_token_38);
LOCFOR(fun_reading_error_39);
LOCFOR(fun_warn_40);
LOCFOR(fun_reverse_list_Gstring_41);
LOCFOR(fun_make_immutableX_42);
extern P YreadY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop_0) {
  P formF997;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T8 = CALL1(CHKREF(YreadYsub_read),FREEREF(0));
  formF997 = T8;
  T7 = CALL1(CHKREF(YreadYreader_tokenQ),formF997);
  T6 = CALL1(CHKREF(Ynot),T7);
  if (T6 != YPfalse) {
    T1 = formF997;
  } else {
    T5 = CALL2(CHKREF(YmacrosYEE),formF997,CHKREF(YreadYDclose_paren));
    if (T5 != YPfalse) {
      T4 = CALL1(CHKREF(YreadYwarn),CHKREF(lit_0));
      T2 = T4;
    } else {
      goto loop;
      T2 = T3;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_read_1) {
  ARG(port_, 0);
  P loopF998;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_0,2);
  loopF998 = T2;
  FUNINIT(loopF998, 2,port_,loopF998);
  T1 = KCALL0(loopF998);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_read_from_string_2) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYcall_with_string_input_port),x_,CHKREF(YreadYread));
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_carefully_3) {
  ARG(port_, 0);
  P formF999;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(YreadYsub_read),port_);
  formF999 = T8;
  T7 = CALL1(CHKREF(YruntimeYeof_objectQ),formF999);
  if (T7 != YPfalse) {
    T6 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_1));
    T1 = T6;
  } else {
    T5 = CALL1(CHKREF(YreadYreader_tokenQ),formF999);
    if (T5 != YPfalse) {
      T4 = CALL1(CHKREF(Ytail),formF999);
      T3 = CALL2(CHKREF(YreadYreading_error),port_,T4);
      T2 = T3;
    } else {
      T2 = formF999;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_token_message_4) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YreadYtoken_message));
  QRET(T0);
}

FUNCODEDEF(fun_token_message_setter_5) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YreadYtoken_message));
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_make_reader_token_7) {
  ARG(message_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPpair(CHKREF(YreadYLreader_tokenG),Ynil);
  T2 = (P)YPpair(CHKREF(YreadYtoken_message),Ynil);
  T1 = (P)YPpair(message_,Ynil);
  T0 = CALL3(CHKREF(YPisa),T3,T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_reader_tokenQ_8) {
  ARG(form_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YisaQ),form_,CHKREF(YreadYLreader_tokenG));
  RET(T0);
}

FUNCODEDEF(fun_sub_read_9) {
  ARG(port_, 0);
  P cF1000;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL1(CHKREF(YruntimeYread_char),port_);
  cF1000 = T6;
  T5 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1000);
  if (T5 != YPfalse) {
    T1 = cF1000;
  } else {
    T4 = CALL1(CHKREF(YruntimeYchar_Gascii),cF1000);
    T3 = CALL2(CHKREF(YruntimeYelt),CHKREF(YreadYTread_dispatch_vectorT),T4);
    T2 = CALL2(T3,cF1000,port_);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_4),c_);
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_syntaxX_11) {
  ARG(reader_, 0);
  ARG(terminatingQ_, 1);
  ARG(char_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T0 = CALL1(CHKREF(YruntimeYchar_Gascii),char_);
  CALL3(CHKREF(YruntimeYelt_setter),reader_,CHKREF(YreadYTread_dispatch_vectorT),T0);
  T2 = CALL1(CHKREF(YruntimeYchar_Gascii),char_);
  T1 = CALL3(CHKREF(YruntimeYelt_setter),terminatingQ_,CHKREF(YreadYTread_terminatingQ_vectorT),T2);
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  ARG(c_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YruntimeYelt_setter),FREEREF(0),CHKREF(YreadYTread_dispatch_vectorT),c_);
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(YreadYsub_read),port_);
  QRET(T0);
}

FUNCODEDEF(YreadYsub_read_constituent) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YreadYsub_read_token),c_,port_);
  T0 = CALL2(CHKREF(YreadYparse_token),T1,port_);
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  ARG(c_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YreadYset_standard_syntaxX),c_,YPfalse,CHKREF(YreadYsub_read_constituent));
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_read_macroX_16) {
  ARG(proc_, 0);
  ARG(terminatingQ_, 1);
  ARG(char_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL3(CHKREF(YreadYset_standard_syntaxX),char_,terminatingQ_,proc_);
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_list_17) {
  ARG(port_, 0);
  ARG(c_, 1);
  P another_formF1003;
  P last_formF1002;
  P formF1001;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
loop:
  T17 = CALL1(CHKREF(YreadYsub_read),port_);
  formF1001 = T17;
  T16 = CALL1(CHKREF(YruntimeYeof_objectQ),formF1001);
  if (T16 != YPfalse) {
    T15 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_8));
    T1 = T15;
  } else {
    T14 = CALL2(CHKREF(YmacrosYEE),formF1001,CHKREF(YreadYDclose_paren));
    if (T14 != YPfalse) {
      T2 = Ynil;
    } else {
      T13 = CALL2(CHKREF(YmacrosYEE),formF1001,CHKREF(YreadYDdot));
      if (T13 != YPfalse) {
        T12 = CALL1(CHKREF(YreadYsub_read_carefully),port_);
        last_formF1002 = T12;
        T11 = CALL1(CHKREF(YreadYsub_read),port_);
        another_formF1003 = T11;
        T10 = CALL2(CHKREF(YmacrosYEE),another_formF1003,CHKREF(YreadYDclose_paren));
        if (T10 != YPfalse) {
          T8 = last_formF1002;
        } else {
          T9 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_7),another_formF1003);
          T8 = T9;
        }
        T7 = T8;
        T6 = T7;
        T3 = T6;
      } else {
        T5 = CALL2(CHKREF(YreadYsub_read_list),c_,port_);
        T4 = CALL2(CHKREF(YmacrosYpair),formF1001,T5);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  ARG(port_, 0);
  ARG(c_, 1);
  P a1,a2;
loop:
  QRET(CHKREF(YreadYDclose_paren));
}

FUNCODEDEF(fun_19) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YreadYsub_read_carefully),port_);
  T0 = CALL2(CHKREF(YmacrosYlst),CHKREF(lit_9),T1);
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YreadYsub_read_carefully),port_);
  T0 = CALL2(CHKREF(YmacrosYlst),CHKREF(lit_10),T1);
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  ARG(port_, 0);
  ARG(c_, 1);
  P keywordF1005;
  P nextF1004;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL1(CHKREF(YruntimeYpeek_char),port_);
  nextF1004 = T9;
  T8 = CALL1(CHKREF(YruntimeYeof_objectQ),nextF1004);
  if (T8 != YPfalse) {
    T7 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_13));
    T4 = T7;
  } else {
    T6 = CALL2(CHKREF(YruntimeYE),nextF1004,YPchr((P)64));
    if (T6 != YPfalse) {
      CALL1(CHKREF(YruntimeYread_char),port_);
      T5 = CHKREF(lit_12);
    } else {
      T5 = CHKREF(lit_11);
    }
    T4 = T5;
  }
  keywordF1005 = T4;
  T3 = CALL1(CHKREF(YreadYsub_read_carefully),port_);
  T2 = CALL2(CHKREF(YmacrosYlst),keywordF1005,T3);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_22) {
  ARG(i_, 0);
  ARG(l_, 1);
  P tmpF1009;
  P ecF1008;
  P cF1007;
  P cF1006;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
loop:
  T33 = CALL1(CHKREF(YruntimeYread_char),FREEREF(0));
  cF1006 = T33;
  T32 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1006);
  if (T32 != YPfalse) {
    T31 = CALL2(CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_16));
    T1 = T31;
  } else {
    T30 = CALL2(CHKREF(YruntimeYE),cF1006,YPchr((P)92));
    if (T30 != YPfalse) {
      T29 = CALL1(CHKREF(YruntimeYread_char),FREEREF(0));
      cF1007 = T29;
      T28 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1007);
      if (T28 != YPfalse) {
        T27 = CALL2(CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_15));
        T10 = T27;
      } else {
        T26 = CALL2(CHKREF(YruntimeYE),cF1007,YPchr((P)92));
        tmpF1009 = T26;
        if (tmpF1009 != YPfalse) {
          T24 = tmpF1009;
        } else {
          T25 = CALL2(CHKREF(YruntimeYE),cF1007,YPchr((P)34));
          T24 = T25;
        }
        T23 = T24;
        if (T23 != YPfalse) {
          T22 = CALL2(CHKREF(YmacrosYpair),cF1007,l_);
          T21 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
          a1 = T22;
          a2 = T21;
          l_ = a1;
          i_ = a2;
          goto loop;
          T11 = T20;
        } else {
          T19 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),cF1007);
          T18 = CALL2(CHKREF(YruntimeYelt),CHKREF(YreadYDstring_escape_chars),T19);
          ecF1008 = T18;
          if (ecF1008 != YPfalse) {
            T17 = CALL2(CHKREF(YmacrosYpair),ecF1008,l_);
            T16 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
            a1 = T17;
            a2 = T16;
            l_ = a1;
            i_ = a2;
            goto loop;
            T13 = T15;
          } else {
            T14 = CALL3(CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_14),cF1007);
            T13 = T14;
          }
          T12 = T13;
          T11 = T12;
        }
        T10 = T11;
      }
      T9 = T10;
      T2 = T9;
    } else {
      T8 = CALL2(CHKREF(YruntimeYE),cF1006,YPchr((P)34));
      if (T8 != YPfalse) {
        T7 = CALL2(CHKREF(YreadYreverse_list_Gstring),l_,i_);
        T3 = T7;
      } else {
        T6 = CALL2(CHKREF(YmacrosYpair),cF1006,l_);
        T5 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
        a1 = T6;
        a2 = T5;
        l_ = a1;
        i_ = a2;
        goto loop;
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YreadYread_string_literal) {
  ARG(port_, 0);
  ARG(c_, 1);
  P loopF1010;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_22,2);
  loopF1010 = T2;
  FUNINIT(loopF1010, 2,port_,loopF1010);
  T1 = KCALL2(loopF1010,Ynil,YPint((P)0));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  CALL1(CHKREF(YreadYgobble_line),port_);
  T0 = CALL1(CHKREF(YreadYsub_read),port_);
  QRET(T0);
}

FUNCODEDEF(fun_loop_25) {
  P cF1011;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  T6 = CALL1(CHKREF(YruntimeYread_char),FREEREF(0));
  cF1011 = T6;
  T5 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1011);
  if (T5 != YPfalse) {
    T1 = cF1011;
  } else {
    T4 = CALL2(CHKREF(YruntimeYE),cF1011,YPchr((P)10));
    if (T4 != YPfalse) {
      T2 = YPfalse;
    } else {
      goto loop;
      T2 = T3;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_gobble_line_26) {
  ARG(port_, 0);
  P loopF1012;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_25,2);
  loopF1012 = T2;
  FUNINIT(loopF1012, 2,port_,loopF1012);
  T1 = KCALL0(loopF1012);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_define_sharp_macro_27) {
  ARG(proc_, 0);
  ARG(c_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL2(CHKREF(YmacrosYlst),c_,proc_);
  T1 = CALL2(CHKREF(YmacrosYpair),T2,CHKREF(YreadYTsharp_macrosT));
  T0 = YreadYTsharp_macrosT = T1;
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  ARG(port_, 0);
  ARG(c_, 1);
  P probeF1015;
  P cF1014;
  P cF1013;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL1(CHKREF(YruntimeYpeek_char),port_);
  cF1013 = T13;
  T12 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1013);
  if (T12 != YPfalse) {
    T11 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_18));
    T9 = T11;
  } else {
    T10 = CALL1(CHKREF(YruntimeYas_lowercase),cF1013);
    T9 = T10;
  }
  cF1014 = T9;
  T8 = CALL2(CHKREF(YruntimeYassq),cF1014,CHKREF(YreadYTsharp_macrosT));
  probeF1015 = T8;
  if (probeF1015 != YPfalse) {
    T7 = CALL1(CHKREF(Ytail),probeF1015);
    T6 = CALL1(CHKREF(Yhead),T7);
    T5 = CALL2(T6,cF1014,port_);
    T3 = T5;
  } else {
    T4 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_17),cF1014);
    T3 = T4;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  ARG(port_, 0);
  ARG(c_, 1);
  P a1,a2;
loop:
  CALL1(CHKREF(YruntimeYread_char),port_);
  QRET(YPfalse);
}

FUNCODEDEF(fun_30) {
  ARG(port_, 0);
  ARG(c_, 1);
  P a1,a2;
loop:
  CALL1(CHKREF(YruntimeYread_char),port_);
  QRET(YPtrue);
}

FUNCODEDEF(fun_31) {
  ARG(port_, 0);
  ARG(c_, 1);
  P tempF1018;
  P nameF1017;
  P cF1016;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  CALL1(CHKREF(YruntimeYread_char),port_);
  T19 = CALL1(CHKREF(YruntimeYpeek_char),port_);
  cF1016 = T19;
  T18 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1016);
  if (T18 != YPfalse) {
    T17 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_21));
    T1 = T17;
  } else {
    T16 = CALL1(CHKREF(YruntimeYalphabeticQ),cF1016);
    if (T16 != YPfalse) {
      T15 = CALL1(CHKREF(YreadYsub_read_carefully),port_);
      nameF1017 = T15;
      T14 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),nameF1017);
      T13 = CALL1(CHKREF(YruntimeYlen),T14);
      T12 = CALL2(CHKREF(YruntimeYE),T13,YPint((P)1));
      if (T12 != YPfalse) {
        T5 = cF1016;
      } else {
        T11 = CALL2(CHKREF(YruntimeYassq),nameF1017,CHKREF(YreadYDchar_long_names));
        tempF1018 = T11;
        if (tempF1018 != YPfalse) {
          T10 = CALL1(CHKREF(Ytail),tempF1018);
          T9 = CALL1(CHKREF(Yhead),T10);
          T7 = T9;
        } else {
          T8 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_20),nameF1017);
          T7 = T8;
        }
        T6 = T7;
        T5 = T6;
      }
      T4 = T5;
      T2 = T4;
    } else {
      T3 = CALL1(CHKREF(YruntimeYread_char),port_);
      T2 = T3;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T1,T0;
  P a1,a2;
loop:
  CALL1(CHKREF(YruntimeYread_char),port_);
  T1 = CALL2(CHKREF(YreadYsub_read_list),c_,port_);
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLvecG),T1);
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  ARG(c_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YreadYdefine_sharp_macro),c_,FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  ARG(port_, 0);
  ARG(c_, 1);
  P tmpF1020;
  P stringF1019;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL2(CHKREF(YreadYsub_read_token),YPchr((P)35),port_);
  stringF1019 = T5;
  T4 = CALL1(CHKREF(YruntimeYstr_to_num),stringF1019);
  tmpF1020 = T4;
  if (tmpF1020 != YPfalse) {
    T2 = tmpF1020;
  } else {
    T3 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_23),stringF1019);
    T2 = T3;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_35) {
  ARG(n_, 0);
  ARG(l_, 1);
  P tmpF1022;
  P cF1021;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL1(CHKREF(YruntimeYpeek_char),FREEREF(0));
  cF1021 = T13;
  T12 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1021);
  tmpF1022 = T12;
  if (tmpF1022 != YPfalse) {
    T9 = tmpF1022;
  } else {
    T11 = CALL1(CHKREF(YruntimeYchar_Gascii),cF1021);
    T10 = CALL2(CHKREF(YruntimeYelt),CHKREF(YreadYTread_terminatingQ_vectorT),T11);
    T9 = T10;
  }
  T8 = T9;
  if (T8 != YPfalse) {
    T7 = CALL2(CHKREF(YreadYreverse_list_Gstring),l_,n_);
    T1 = T7;
  } else {
    T6 = CALL1(CHKREF(YruntimeYread_char),FREEREF(0));
    T5 = CALL1(CHKREF(YreadYpreferred_case),T6);
    T4 = CALL2(CHKREF(YmacrosYpair),T5,l_);
    T3 = CALL2(CHKREF(YruntimeYA),n_,YPint((P)1));
    a1 = T4;
    a2 = T3;
    l_ = a1;
    n_ = a2;
    goto loop;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_token_36) {
  ARG(port_, 0);
  ARG(c_, 1);
  P loopF1023;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = FUNSHELL(1,fun_loop_35,2);
  loopF1023 = T4;
  FUNINIT(loopF1023, 2,port_,loopF1023);
  T3 = CALL1(CHKREF(YreadYpreferred_case),c_);
  T2 = CALL1(CHKREF(YmacrosYlst),T3);
  T1 = KCALL2(loopF1023,T2,YPint((P)1));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYE),FREEREF(0),x_);
  QRET(T0);
}

FUNCODEDEF(fun_parse_token_38) {
  ARG(port_, 0);
  ARG(string_, 1);
  P tmpF1028;
  P tmpF1027;
  P tmpF1026;
  P cF1025;
  P maybe_numberF1024;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T25 = CALL2(CHKREF(YruntimeYelt),string_,YPint((P)0));
  cF1025 = T25;
  T24 = CALL1(CHKREF(YruntimeYnumericQ),cF1025);
  tmpF1026 = T24;
  if (tmpF1026 != YPfalse) {
    T16 = tmpF1026;
  } else {
    T23 = CALL2(CHKREF(YruntimeYE),cF1025,YPchr((P)43));
    tmpF1027 = T23;
    if (tmpF1027 != YPfalse) {
      T18 = tmpF1027;
    } else {
      T22 = CALL2(CHKREF(YruntimeYE),cF1025,YPchr((P)45));
      tmpF1028 = T22;
      if (tmpF1028 != YPfalse) {
        T20 = tmpF1028;
      } else {
        T21 = CALL2(CHKREF(YruntimeYE),cF1025,YPchr((P)46));
        T20 = T21;
      }
      T19 = T20;
      T18 = T19;
    }
    T17 = T18;
    T16 = T17;
  }
  T15 = T16;
  T14 = T15;
  if (T14 != YPfalse) {
    T13 = CALL1(CHKREF(YruntimeYstr_to_num),string_);
    maybe_numberF1024 = T13;
    if (maybe_numberF1024 != YPfalse) {
      T4 = maybe_numberF1024;
    } else {
      T12 = FUNFAB(fun_37,1,string_);
      T11 = CALL2(CHKREF(YruntimeYanyQ),T12,CHKREF(YreadYDstrange_symbol_names));
      if (T11 != YPfalse) {
        T10 = CALL1(CHKREF(YreadYmake_immutableX),string_);
        T9 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),T10);
        T5 = T9;
      } else {
        T8 = CALL2(CHKREF(YruntimeYE),string_,CHKREF(lit_25));
        if (T8 != YPfalse) {
          T6 = CHKREF(YreadYDdot);
        } else {
          T7 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_24),string_);
          T6 = T7;
        }
        T5 = T6;
      }
      T4 = T5;
    }
    T3 = T4;
    T0 = T3;
  } else {
    T2 = CALL1(CHKREF(YreadYmake_immutableX),string_);
    T1 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),T2);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_reading_error_39) {
  ARG(irritants_, 0);
  ARG(message_, 1);
  ARG(port_, 2);
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = CALL2(CHKREF(YmacrosYcat),message_,CHKREF(lit_28));
  T2 = CALL1(CHKREF(YmacrosYlst),port_);
  T1 = CALL2(CHKREF(YmacrosYcat),irritants_,T2);
  T0 = CALL2(CHKREF(Yerror),T3,T1);
  QRET(T0);
}

FUNCODEDEF(fun_warn_40) {
  ARG(irritants_and_port_, 0);
  ARG(string_, 1);
  P a1,a2;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_reverse_list_Gstring_41) {
  ARG(n_, 0);
  ARG(l_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YruntimeYrevX),l_);
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),T1);
  RET(T0);
}

FUNCODEDEF(fun_make_immutableX_42) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(x_);
}

P YreadY___main_0___() {
  P sub_read_whitespaceF1032;
  P str10496F1031;
  P vecF1030;
  P number_sharp_macroF1029;
  P T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146;
  P T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130;
  P T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114;
  P T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98;
  P T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82;
  P T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66;
  P T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50;
  P T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  lit_0 = YPsb((P)"discarding extraneous right parenthesis");
  T1 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_loop_0 = YPmet(FUNCODEREF(fun_loop_0),YPPsym((P)"loop"),T1,ENVNUL);
  T0 = YPsig(YPpair(YPPsym((P)"port"),Ynil),YPpair(CHKREF(YruntimeYLinput_portG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_read_1 = YPmet(FUNCODEREF(fun_read_1),YPPsym((P)"read"),T0,ENVNUL);
  T5 = BOUNDP(YreadYread);
  if (T5 != YPfalse) {
    T4 = CHKREF(YreadYread);
  } else {
    T4 = YPfalse;
  }
  T3 = fun_read_1;
  T2 = CALL2(CHKREF(YPdefine_method),T4,T3);
  YreadYread = T2;
  regsym(&YreadYread,"read","read");
  T6 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLstrG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_read_from_string_2 = YPmet(FUNCODEREF(fun_read_from_string_2),YPPsym((P)"read-from-string"),T6,ENVNUL);
  T10 = BOUNDP(YreadYread_from_string);
  if (T10 != YPfalse) {
    T9 = CHKREF(YreadYread_from_string);
  } else {
    T9 = YPfalse;
  }
  T8 = fun_read_from_string_2;
  T7 = CALL2(CHKREF(YPdefine_method),T9,T8);
  YreadYread_from_string = T7;
  regsym(&YreadYread_from_string,"read","read-from-string");
  lit_1 = YPsb((P)"unexpected end of file");
  T11 = YPsig(YPpair(YPPsym((P)"port"),Ynil),YPpair(CHKREF(YruntimeYLportG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sub_read_carefully_3 = YPmet(FUNCODEREF(fun_sub_read_carefully_3),YPPsym((P)"sub-read-carefully"),T11,ENVNUL);
  T15 = BOUNDP(YreadYsub_read_carefully);
  if (T15 != YPfalse) {
    T14 = CHKREF(YreadYsub_read_carefully);
  } else {
    T14 = YPfalse;
  }
  T13 = fun_sub_read_carefully_3;
  T12 = CALL2(CHKREF(YPdefine_method),T14,T13);
  YreadYsub_read_carefully = T12;
  regsym(&YreadYsub_read_carefully,"read","sub-read-carefully");
  T17 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T16 = CALL3(CHKREF(YPisa),T17,Ynil,Ynil);
  YreadYLreader_tokenG = T16;
  regsym(&YreadYLreader_tokenG,"read","<reader-token>");
  T18 = YPsig(YPpair(YPPsym((P)"_x"),Ynil),YPpair(CHKREF(YreadYLreader_tokenG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_token_message_4 = YPmet(FUNCODEREF(fun_token_message_4),YPPsym((P)"token-message"),T18,ENVNUL);
  T22 = BOUNDP(YreadYtoken_message);
  if (T22 != YPfalse) {
    T21 = CHKREF(YreadYtoken_message);
  } else {
    T21 = YPfalse;
  }
  T20 = fun_token_message_4;
  T19 = CALL2(CHKREF(YPdefine_method),T21,T20);
  YreadYtoken_message = T19;
  regsym(&YreadYtoken_message,"read","token-message");
  T23 = YPsig(YPpair(YPPsym((P)"_z"),YPpair(YPPsym((P)"_x"),Ynil)),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YreadYLreader_tokenG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_token_message_setter_5 = YPmet(FUNCODEREF(fun_token_message_setter_5),YPPsym((P)"token-message-setter"),T23,ENVNUL);
  T27 = BOUNDP(YreadYtoken_message_setter);
  if (T27 != YPfalse) {
    T26 = CHKREF(YreadYtoken_message_setter);
  } else {
    T26 = YPfalse;
  }
  T25 = fun_token_message_setter_5;
  T24 = CALL2(CHKREF(YPdefine_method),T26,T25);
  YreadYtoken_message_setter = T24;
  regsym(&YreadYtoken_message_setter,"read","token-message-setter");
  T28 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T28,ENVNUL);
  T29 = fun_6;
  CALLN(CHKREF(YPslot),5,CHKREF(YreadYLreader_tokenG),CHKREF(YreadYtoken_message),CHKREF(YreadYtoken_message_setter),CHKREF(YLstrG),T29);
  T30 = YPsig(YPpair(YPPsym((P)"message"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_make_reader_token_7 = YPmet(FUNCODEREF(fun_make_reader_token_7),YPPsym((P)"make-reader-token"),T30,ENVNUL);
  T34 = BOUNDP(YreadYmake_reader_token);
  if (T34 != YPfalse) {
    T33 = CHKREF(YreadYmake_reader_token);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_make_reader_token_7;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YreadYmake_reader_token = T31;
  regsym(&YreadYmake_reader_token,"read","make-reader-token");
  T35 = YPsig(YPpair(YPPsym((P)"form"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_reader_tokenQ_8 = YPmet(FUNCODEREF(fun_reader_tokenQ_8),YPPsym((P)"reader-token?"),T35,ENVNUL);
  T39 = BOUNDP(YreadYreader_tokenQ);
  if (T39 != YPfalse) {
    T38 = CHKREF(YreadYreader_tokenQ);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_reader_tokenQ_8;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YreadYreader_tokenQ = T36;
  regsym(&YreadYreader_tokenQ,"read","reader-token?");
  lit_2 = YPsb((P)"unexpected right parenthesis");
  T40 = CALL1(CHKREF(YreadYmake_reader_token),CHKREF(lit_2));
  YreadYDclose_paren = T40;
  regsym(&YreadYDclose_paren,"read","$close-paren");
  lit_3 = YPsb((P)"unexpected \" . \"");
  T41 = CALL1(CHKREF(YreadYmake_reader_token),CHKREF(lit_3));
  YreadYDdot = T41;
  regsym(&YreadYDdot,"read","$dot");
  T42 = YPsig(YPpair(YPPsym((P)"port"),Ynil),YPpair(CHKREF(YruntimeYLportG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sub_read_9 = YPmet(FUNCODEREF(fun_sub_read_9),YPPsym((P)"sub-read"),T42,ENVNUL);
  T46 = BOUNDP(YreadYsub_read);
  if (T46 != YPfalse) {
    T45 = CHKREF(YreadYsub_read);
  } else {
    T45 = YPfalse;
  }
  T44 = fun_sub_read_9;
  T43 = CALL2(CHKREF(YPdefine_method),T45,T44);
  YreadYsub_read = T43;
  regsym(&YreadYsub_read,"read","sub-read");
  lit_4 = YPsb((P)"illegal character read");
  T47 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T47,ENVNUL);
  T50 = CALL2(CHKREF(YruntimeYfab),CHKREF(YLvecG),CHKREF(YruntimeYascii_limit));
  T49 = fun_10;
  T48 = CALL2(CHKREF(YruntimeYfill),T50,T49);
  YreadYTread_dispatch_vectorT = T48;
  regsym(&YreadYTread_dispatch_vectorT,"read","*read-dispatch-vector*");
  T52 = CALL2(CHKREF(YruntimeYfab),CHKREF(YLvecG),CHKREF(YruntimeYascii_limit));
  T51 = CALL2(CHKREF(YruntimeYfill),T52,YPtrue);
  YreadYTread_terminatingQ_vectorT = T51;
  regsym(&YreadYTread_terminatingQ_vectorT,"read","*read-terminating?-vector*");
  T53 = YPsig(YPpair(YPPsym((P)"char"),YPpair(YPPsym((P)"terminating?"),YPpair(YPPsym((P)"reader"),Ynil))),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_set_standard_syntaxX_11 = YPmet(FUNCODEREF(fun_set_standard_syntaxX_11),YPPsym((P)"set-standard-syntax!"),T53,ENVNUL);
  T57 = BOUNDP(YreadYset_standard_syntaxX);
  if (T57 != YPfalse) {
    T56 = CHKREF(YreadYset_standard_syntaxX);
  } else {
    T56 = YPfalse;
  }
  T55 = fun_set_standard_syntaxX_11;
  T54 = CALL2(CHKREF(YPdefine_method),T56,T55);
  YreadYset_standard_syntaxX = T54;
  regsym(&YreadYset_standard_syntaxX,"read","set-standard-syntax!");
  T59 = YPsig(YPpair(YPPsym((P)"c"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T59,ENVNUL);
  T58 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T58,ENVNUL);
  T62 = fun_13;
  sub_read_whitespaceF1032 = T62;
  T61 = FUNFAB(fun_12,1,sub_read_whitespaceF1032);
  T60 = CALL2(CHKREF(YruntimeYdo),T61,CHKREF(YruntimeYascii_whitespaces));
  T63 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YreadYsub_read_constituent = YPmet(FUNCODEREF(YreadYsub_read_constituent),YPPsym((P)"sub-read-constituent"),T63,ENVNUL);
  T64 = YreadYsub_read_constituent;
  YreadYsub_read_constituent = T64;
  regsym(&YreadYsub_read_constituent,"read","sub-read-constituent");
  lit_5 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  lit_6 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  T65 = YPsig(YPpair(YPPsym((P)"c"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T65,ENVNUL);
  T68 = CALL2(CHKREF(YmacrosYcat),CHKREF(lit_6),CHKREF(lit_5));
  str10496F1031 = T68;
  T67 = fun_15;
  T66 = CALL2(CHKREF(YruntimeYdo),T67,str10496F1031);
  T69 = YPsig(YPpair(YPPsym((P)"char"),YPpair(YPPsym((P)"terminating?"),YPpair(YPPsym((P)"proc"),Ynil))),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLfunG),Ynil))),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_set_standard_read_macroX_16 = YPmet(FUNCODEREF(fun_set_standard_read_macroX_16),YPPsym((P)"set-standard-read-macro!"),T69,ENVNUL);
  T73 = BOUNDP(YreadYset_standard_read_macroX);
  if (T73 != YPfalse) {
    T72 = CHKREF(YreadYset_standard_read_macroX);
  } else {
    T72 = YPfalse;
  }
  T71 = fun_set_standard_read_macroX_16;
  T70 = CALL2(CHKREF(YPdefine_method),T72,T71);
  YreadYset_standard_read_macroX = T70;
  regsym(&YreadYset_standard_read_macroX,"read","set-standard-read-macro!");
  lit_7 = YPsb((P)"randomness after form after dot");
  lit_8 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T74 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YruntimeYLportG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_sub_read_list_17 = YPmet(FUNCODEREF(fun_sub_read_list_17),YPPsym((P)"sub-read-list"),T74,ENVNUL);
  T78 = BOUNDP(YreadYsub_read_list);
  if (T78 != YPfalse) {
    T77 = CHKREF(YreadYsub_read_list);
  } else {
    T77 = YPfalse;
  }
  T76 = fun_sub_read_list_17;
  T75 = CALL2(CHKREF(YPdefine_method),T77,T76);
  YreadYsub_read_list = T75;
  regsym(&YreadYsub_read_list,"read","sub-read-list");
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)40),YPtrue,CHKREF(YreadYsub_read_list));
  T79 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T79,ENVNUL);
  T80 = fun_18;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T80);
  lit_9 = YPPsym((P)"quote");
  T81 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T81,ENVNUL);
  T82 = fun_19;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T82);
  lit_10 = YPPsym((P)"quasiquote");
  T83 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T83,ENVNUL);
  T84 = fun_20;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T84);
  lit_11 = YPPsym((P)"unquote");
  lit_12 = YPPsym((P)"unquote-splicing");
  lit_13 = YPsb((P)"end of file after ,");
  T85 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T85,ENVNUL);
  T86 = fun_21;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T86);
  T93 = CALL2(CHKREF(YruntimeYfab),CHKREF(YLvecG),CHKREF(YruntimeYascii_limit));
  T92 = CALL2(CHKREF(YruntimeYfill),T93,YPfalse);
  vecF1030 = T92;
  T88 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)116));
  CALL3(CHKREF(YruntimeYelt_setter),YPchr((P)9),vecF1030,T88);
  T89 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)102));
  CALL3(CHKREF(YruntimeYelt_setter),YPchr((P)12),vecF1030,T89);
  T90 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)114));
  CALL3(CHKREF(YruntimeYelt_setter),YPchr((P)13),vecF1030,T90);
  T91 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)110));
  CALL3(CHKREF(YruntimeYelt_setter),YPchr((P)10),vecF1030,T91);
  T87 = vecF1030;
  YreadYDstring_escape_chars = T87;
  regsym(&YreadYDstring_escape_chars,"read","$string-escape-chars");
  lit_14 = YPsb((P)"invalid escaped character in string");
  lit_15 = YPsb((P)"end of file within a string");
  lit_16 = YPsb((P)"end of file within a string");
  T95 = YPsig(YPpair(YPPsym((P)"l"),YPpair(YPPsym((P)"i"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_22 = YPmet(FUNCODEREF(fun_loop_22),YPPsym((P)"loop"),T95,ENVNUL);
  T94 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YreadYread_string_literal = YPmet(FUNCODEREF(YreadYread_string_literal),YPPsym((P)"read-string-literal"),T94,ENVNUL);
  T96 = YreadYread_string_literal;
  YreadYread_string_literal = T96;
  regsym(&YreadYread_string_literal,"read","read-string-literal");
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)34),YPtrue,CHKREF(YreadYread_string_literal));
  T97 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T97,ENVNUL);
  T98 = fun_24;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T98);
  T100 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_loop_25 = YPmet(FUNCODEREF(fun_loop_25),YPPsym((P)"loop"),T100,ENVNUL);
  T99 = YPsig(YPpair(YPPsym((P)"port"),Ynil),YPpair(CHKREF(YruntimeYLportG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_gobble_line_26 = YPmet(FUNCODEREF(fun_gobble_line_26),YPPsym((P)"gobble-line"),T99,ENVNUL);
  T104 = BOUNDP(YreadYgobble_line);
  if (T104 != YPfalse) {
    T103 = CHKREF(YreadYgobble_line);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_gobble_line_26;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  YreadYgobble_line = T101;
  regsym(&YreadYgobble_line,"read","gobble-line");
  YreadYTsharp_macrosT = Ynil;
  regsym(&YreadYTsharp_macrosT,"read","*sharp-macros*");
  T105 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"proc"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_define_sharp_macro_27 = YPmet(FUNCODEREF(fun_define_sharp_macro_27),YPPsym((P)"define-sharp-macro"),T105,ENVNUL);
  T109 = BOUNDP(YreadYdefine_sharp_macro);
  if (T109 != YPfalse) {
    T108 = CHKREF(YreadYdefine_sharp_macro);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_define_sharp_macro_27;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  YreadYdefine_sharp_macro = T106;
  regsym(&YreadYdefine_sharp_macro,"read","define-sharp-macro");
  lit_17 = YPsb((P)"unknown # syntax");
  lit_18 = YPsb((P)"end of file after #");
  T110 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T110,ENVNUL);
  T111 = fun_28;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T111);
  T112 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T112,ENVNUL);
  T113 = fun_29;
  CALL2(CHKREF(YreadYdefine_sharp_macro),YPchr((P)102),T113);
  T114 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T114,ENVNUL);
  T115 = fun_30;
  CALL2(CHKREF(YreadYdefine_sharp_macro),YPchr((P)116),T115);
  lit_19 = YPpair(YPpair(YPPsym((P)"tab"), YPpair(YPchr((P)9), Ynil)), YPpair(YPpair(YPPsym((P)"page"), YPpair(YPchr((P)12), Ynil)), YPpair(YPpair(YPPsym((P)"return"), YPpair(YPchr((P)13), Ynil)), YPpair(YPpair(YPPsym((P)"newline"), YPpair(YPchr((P)10), Ynil)), YPpair(YPpair(YPPsym((P)"space"), YPpair(YPchr((P)32), Ynil)), Ynil)))));
  YreadYDchar_long_names = CHKREF(lit_19);
  regsym(&YreadYDchar_long_names,"read","$char-long-names");
  lit_20 = YPsb((P)"unknown #\\ name");
  lit_21 = YPsb((P)"end of file after #\\");
  T116 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T116,ENVNUL);
  T117 = fun_31;
  CALL2(CHKREF(YreadYdefine_sharp_macro),YPchr((P)92),T117);
  T118 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T118,ENVNUL);
  T119 = fun_32;
  CALL2(CHKREF(YreadYdefine_sharp_macro),YPchr((P)40),T119);
  lit_22 = YPpair(YPchr((P)98), YPpair(YPchr((P)111), YPpair(YPchr((P)100), YPpair(YPchr((P)120), YPpair(YPchr((P)105), YPpair(YPchr((P)101), Ynil))))));
  lit_23 = YPsb((P)"unsupported number syntax");
  T121 = YPsig(YPpair(YPPsym((P)"c"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T121,ENVNUL);
  T120 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T120,ENVNUL);
  T124 = fun_34;
  number_sharp_macroF1029 = T124;
  T123 = FUNFAB(fun_33,1,number_sharp_macroF1029);
  T122 = CALL2(CHKREF(YruntimeYdo),T123,CHKREF(lit_22));
  T126 = YPsig(YPpair(YPPsym((P)"l"),YPpair(YPPsym((P)"n"),Ynil)),YPpair(CHKREF(YLanyG),YPpair(CHKREF(YLanyG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_35 = YPmet(FUNCODEREF(fun_loop_35),YPPsym((P)"loop"),T126,ENVNUL);
  T125 = YPsig(YPpair(YPPsym((P)"c"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLchrG),YPpair(CHKREF(YruntimeYLportG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_sub_read_token_36 = YPmet(FUNCODEREF(fun_sub_read_token_36),YPPsym((P)"sub-read-token"),T125,ENVNUL);
  T130 = BOUNDP(YreadYsub_read_token);
  if (T130 != YPfalse) {
    T129 = CHKREF(YreadYsub_read_token);
  } else {
    T129 = YPfalse;
  }
  T128 = fun_sub_read_token_36;
  T127 = CALL2(CHKREF(YPdefine_method),T129,T128);
  YreadYsub_read_token = T127;
  regsym(&YreadYsub_read_token,"read","sub-read-token");
  lit_24 = YPsb((P)"unsupported number syntax");
  lit_25 = YPsb((P)".");
  T132 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T132,ENVNUL);
  T131 = YPsig(YPpair(YPPsym((P)"string"),YPpair(YPPsym((P)"port"),Ynil)),YPpair(CHKREF(YLstrG),YPpair(CHKREF(YruntimeYLportG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_parse_token_38 = YPmet(FUNCODEREF(fun_parse_token_38),YPPsym((P)"parse-token"),T131,ENVNUL);
  T136 = BOUNDP(YreadYparse_token);
  if (T136 != YPfalse) {
    T135 = CHKREF(YreadYparse_token);
  } else {
    T135 = YPfalse;
  }
  T134 = fun_parse_token_38;
  T133 = CALL2(CHKREF(YPdefine_method),T135,T134);
  YreadYparse_token = T133;
  regsym(&YreadYparse_token,"read","parse-token");
  lit_26 = YPpair(YPsb((P)"+"), YPpair(YPsb((P)"-"), YPpair(YPsb((P)"..."), YPpair(YPsb((P)"1st"), YPpair(YPsb((P)"2nd"), YPpair(YPsb((P)"3rd"), YPpair(YPsb((P)"1+"), YPpair(YPsb((P)"1-"), YPpair(YPsb((P)"->"), Ynil)))))))));
  YreadYDstrange_symbol_names = CHKREF(lit_26);
  regsym(&YreadYDstrange_symbol_names,"read","$strange-symbol-names");
  lit_27 = YPPsym((P)"t");
  T140 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),CHKREF(lit_27));
  T139 = CALL2(CHKREF(YruntimeYelt),T140,YPint((P)0));
  T138 = CALL2(CHKREF(YruntimeYE),T139,YPchr((P)84));
  if (T138 != YPfalse) {
    T137 = CHKREF(YruntimeYas_uppercase);
  } else {
    T137 = CHKREF(YruntimeYas_lowercase);
  }
  YreadYpreferred_case = T137;
  regsym(&YreadYpreferred_case,"read","preferred-case");
  lit_28 = YPsb((P)": %=");
  T141 = YPsig(YPpair(YPPsym((P)"port"),YPpair(YPPsym((P)"message"),YPpair(YPPsym((P)"irritants"),Ynil))),YPpair(CHKREF(YruntimeYLportG),YPpair(CHKREF(YLstrG),Ynil)),YPtrue,YPint((P)2),CHKREF(YLanyG));
  fun_reading_error_39 = YPmet(FUNCODEREF(fun_reading_error_39),YPPsym((P)"reading-error"),T141,ENVNUL);
  T145 = BOUNDP(YreadYreading_error);
  if (T145 != YPfalse) {
    T144 = CHKREF(YreadYreading_error);
  } else {
    T144 = YPfalse;
  }
  T143 = fun_reading_error_39;
  T142 = CALL2(CHKREF(YPdefine_method),T144,T143);
  YreadYreading_error = T142;
  regsym(&YreadYreading_error,"read","reading-error");
  T146 = YPsig(YPpair(YPPsym((P)"string"),YPpair(YPPsym((P)"irritants-and-port"),Ynil)),YPpair(CHKREF(YLstrG),Ynil),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_warn_40 = YPmet(FUNCODEREF(fun_warn_40),YPPsym((P)"warn"),T146,ENVNUL);
  T150 = BOUNDP(YreadYwarn);
  if (T150 != YPfalse) {
    T149 = CHKREF(YreadYwarn);
  } else {
    T149 = YPfalse;
  }
  T148 = fun_warn_40;
  T147 = CALL2(CHKREF(YPdefine_method),T149,T148);
  YreadYwarn = T147;
  regsym(&YreadYwarn,"read","warn");
  T151 = YPsig(YPpair(YPPsym((P)"l"),YPpair(YPPsym((P)"n"),Ynil)),YPpair(CHKREF(YLlstG),YPpair(CHKREF(YLintG),Ynil)),YPfalse,YPint((P)2),CHKREF(YLstrG));
  fun_reverse_list_Gstring_41 = YPmet(FUNCODEREF(fun_reverse_list_Gstring_41),YPPsym((P)"reverse-list->string"),T151,ENVNUL);
  T155 = BOUNDP(YreadYreverse_list_Gstring);
  if (T155 != YPfalse) {
    T154 = CHKREF(YreadYreverse_list_Gstring);
  } else {
    T154 = YPfalse;
  }
  T153 = fun_reverse_list_Gstring_41;
  T152 = CALL2(CHKREF(YPdefine_method),T154,T153);
  YreadYreverse_list_Gstring = T152;
  regsym(&YreadYreverse_list_Gstring,"read","reverse-list->string");
  T156 = YPsig(YPpair(YPPsym((P)"x"),Ynil),YPpair(CHKREF(YLanyG),Ynil),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_make_immutableX_42 = YPmet(FUNCODEREF(fun_make_immutableX_42),YPPsym((P)"make-immutable!"),T156,ENVNUL);
  T160 = BOUNDP(YreadYmake_immutableX);
  if (T160 != YPfalse) {
    T159 = CHKREF(YreadYmake_immutableX);
  } else {
    T159 = YPfalse;
  }
  T158 = fun_make_immutableX_42;
  T157 = CALL2(CHKREF(YPdefine_method),T159,T158);
  YreadYmake_immutableX = T157;
  regsym(&YreadYmake_immutableX,"read","make-immutable!");
  T161 = YPfalse;
  return T161;
}

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);
extern void load_module_runtime (void);

/* EXPRESSION: */

extern void load_module_read (void);

void load_module_read (void) {
  static int need_init = 1;
  if (!need_init) return;

  load_module_boot();
  load_module_macros();
  load_module_runtime();

  (P)YreadY___main_0___();

  need_init = 0;
}

/* END OF GENERATED CODE. */
