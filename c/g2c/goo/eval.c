/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/eval */

EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYE,"runtime","=");
EXT(Yslot_init,"boot","slot-init");
EXT(YmacrosYpair,"macros","pair");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YLvecG,"boot","<vec>");
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
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYL,"runtime","<");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YtopYparse_in,"top","parse-in");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Yerror,"boot","error");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YtopYbacktrace,"top","backtrace");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYGE,"runtime",">=");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYsub,"runtime","sub");
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
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYpop,"runtime","pop");
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
EXT(YtopYtop,"top","top");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYdefault,"runtime","default");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
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
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YmacrosYEE,"macros","==");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeYtruncateS,"runtime","truncate/");
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
EXT(YLanyG,"boot","<any>");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YruntimeYNE,"runtime","~=");
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
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYmap2,"runtime","map2");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYA,"runtime","+");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(Yfind_setter,"boot","find-setter");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYfrom,"runtime","from");
EXT(YwriteYwriteln,"write","writeln");
EXT(YruntimeY1st,"runtime","1st");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YPdefine_method,"boot","%define-method");
EXT(YmacrosYgensym,"macros","gensym");
EXT(Yslot_getter,"boot","slot-getter");
EXT(Yobject_direct_parents,"boot","object-direct-parents");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YtopYdo_stack_frames,"top","do-stack-frames");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYalways,"runtime","always");
EXT(YmacrosYcat,"macros","cat");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YruntimeYin,"runtime","in");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(Ynil,"boot","nil");
EXT(YLseqG,"boot","<seq>");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYroundS,"runtime","round/");
EXT(Yobject_direct_slots,"boot","object-direct-slots");
EXT(YruntimeYabs,"runtime","abs");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YLgenG,"boot","<gen>");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(Yhead,"boot","head");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(Yslot_value,"boot","slot-value");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YruntimeYsig,"runtime","sig");
EXT(Yfun_value,"boot","fun-value");
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
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
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
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YtopYread_file,"top","read-file");
EXT(YwriteYwrite,"write","write");
EXT(YtopYload,"top","load");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYlen,"runtime","len");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YLfloG,"boot","<flo>");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYnegQ,"runtime","neg?");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YprotoSevalY___main_0___ ();

/* FUNCTION CODES: */

P YprotoSevalY___main_0___() {
  P T0;
loop:
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_proto;
extern MODULE_INFO module_info_top;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_read;
extern MODULE_INFO module_info_syntax;

static USE_INFO use_infos[] = {
  {&module_info_proto},
  {&module_info_top},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"locative-value", &module_info_runtime, "locative-value"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"remainder", &module_info_runtime, "remainder"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"=", &module_info_runtime, "="},
  {"slot-init", &module_info_boot, "slot-init"},
  {"export", &module_info_boot, "export"},
  {"pair", &module_info_macros, "pair"},
  {"map", &module_info_macros, "map"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"2nd", &module_info_runtime, "2nd"},
  {"var-name", &module_info_macros, "var-name"},
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
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"<", &module_info_runtime, "<"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"cat!", &module_info_runtime, "cat!"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"parse-in", &module_info_top, "parse-in"},
  {"pos?", &module_info_runtime, "pos?"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"<col>", &module_info_boot, "<col>"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"dv", &module_info_boot, "dv"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"%pair", &module_info_boot, "%pair"},
  {"~==", &module_info_runtime, "~=="},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"error", &module_info_boot, "error"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"seq", &module_info_boot, "seq"},
  {"tup", &module_info_macros, "tup"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"pushf", &module_info_macros, "pushf"},
  {"ash", &module_info_runtime, "ash"},
  {"quote", &module_info_boot, "quote"},
  {"port-index", &module_info_runtime, "port-index"},
  {"<port>", &module_info_runtime, "<port>"},
  {"backtrace", &module_info_top, "backtrace"},
  {">", &module_info_runtime, ">"},
  {">=", &module_info_runtime, ">="},
  {"<met>", &module_info_boot, "<met>"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"sub", &module_info_runtime, "sub"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"display", &module_info_write, "display"},
  {"from-by", &module_info_runtime, "from-by"},
  {"dec", &module_info_macros, "dec"},
  {"identity", &module_info_runtime, "identity"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"lsh", &module_info_runtime, "lsh"},
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
  {"add", &module_info_runtime, "add"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"pop", &module_info_runtime, "pop"},
  {"alter", &module_info_runtime, "alter"},
  {"push", &module_info_runtime, "push"},
  {"fab", &module_info_runtime, "fab"},
  {"modulo", &module_info_runtime, "modulo"},
  {"curry", &module_info_runtime, "curry"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"truncate", &module_info_runtime, "truncate"},
  {"nul", &module_info_boot, "nul"},
  {"lst", &module_info_boot, "lst"},
  {"now-key", &module_info_runtime, "now-key"},
  {"next-method", &module_info_macros, "next-method"},
  {"empty", &module_info_runtime, "empty"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"<str>", &module_info_boot, "<str>"},
  {"all?", &module_info_runtime, "all?"},
  {"dm", &module_info_boot, "dm"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"logior", &module_info_runtime, "logior"},
  {"top", &module_info_top, "top"},
  {"from-above", &module_info_runtime, "from-above"},
  {"default", &module_info_runtime, "default"},
  {"any?", &module_info_runtime, "any?"},
  {"even?", &module_info_runtime, "even?"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"floor/", &module_info_runtime, "floor/"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"<tup>", &module_info_boot, "<tup>"},
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
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"fun", &module_info_boot, "fun"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"<error>", &module_info_runtime, "<error>"},
  {"==", &module_info_macros, "=="},
  {"<loc>", &module_info_boot, "<loc>"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"vec", &module_info_runtime, "vec"},
  {"write-char", &module_info_runtime, "write-char"},
  {"<range>", &module_info_runtime, "<range>"},
  {"3rd", &module_info_runtime, "3rd"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"isa", &module_info_boot, "isa"},
  {"not", &module_info_boot, "not"},
  {"logxor", &module_info_runtime, "logxor"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"as", &module_info_runtime, "as"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"<any>", &module_info_boot, "<any>"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"~=", &module_info_runtime, "~="},
  {"app-args", &module_info_runtime, "app-args"},
  {"/", &module_info_runtime, "/"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"fin", &module_info_boot, "fin"},
  {"fabs", &module_info_runtime, "fabs"},
  {"rev", &module_info_runtime, "rev"},
  {"<list>", &module_info_runtime, "<list>"},
  {"max", &module_info_runtime, "max"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"ds", &module_info_boot, "ds"},
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
  {"pos", &module_info_runtime, "pos"},
  {"reduce", &module_info_runtime, "reduce"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"var-type", &module_info_macros, "var-type"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"from", &module_info_runtime, "from"},
  {"writeln", &module_info_write, "writeln"},
  {"case", &module_info_macros, "case"},
  {"1st", &module_info_runtime, "1st"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"force-output", &module_info_runtime, "force-output"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gensym", &module_info_macros, "gensym"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"object-direct-parents", &module_info_boot, "object-direct-parents"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"logand", &module_info_runtime, "logand"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"do-stack-frames", &module_info_top, "do-stack-frames"},
  {"*", &module_info_runtime, "*"},
  {"always", &module_info_runtime, "always"},
  {"cat", &module_info_macros, "cat"},
  {"<num>", &module_info_boot, "<num>"},
  {"str", &module_info_runtime, "str"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"loc", &module_info_boot, "loc"},
  {"pick", &module_info_runtime, "pick"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"in", &module_info_runtime, "in"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"out", &module_info_runtime, "out"},
  {"and", &module_info_macros, "and"},
  {"ct", &module_info_boot, "ct"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"odd?", &module_info_runtime, "odd?"},
  {"nil", &module_info_boot, "nil"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"for", &module_info_macros, "for"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"round/", &module_info_runtime, "round/"},
  {"object-direct-slots", &module_info_boot, "object-direct-slots"},
  {"mif", &module_info_boot, "mif"},
  {"abs", &module_info_runtime, "abs"},
  {"cat2", &module_info_runtime, "cat2"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"head", &module_info_boot, "head"},
  {"lognot", &module_info_runtime, "lognot"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"slot", &module_info_boot, "slot"},
  {"eval", &module_info_syntax, "eval"},
  {"sig", &module_info_runtime, "sig"},
  {"fun-value", &module_info_boot, "fun-value"},
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
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"del-key", &module_info_runtime, "del-key"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"del", &module_info_runtime, "del"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"from-to", &module_info_runtime, "from-to"},
  {"rep", &module_info_boot, "rep"},
  {"list", &module_info_runtime, "list"},
  {"last", &module_info_runtime, "last"},
  {"object-name", &module_info_write, "object-name"},
  {"<step>", &module_info_runtime, "<step>"},
  {"min", &module_info_runtime, "min"},
  {"format", &module_info_runtime, "format"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"use", &module_info_boot, "use"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"read-file", &module_info_top, "read-file"},
  {"write", &module_info_write, "write"},
  {"collecting", &module_info_macros, "collecting"},
  {"load", &module_info_top, "load"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"len", &module_info_runtime, "len"},
  {"empty?", &module_info_macros, "empty?"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"rev!", &module_info_runtime, "rev!"},
  {"set", &module_info_boot, "set"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"nul?", &module_info_runtime, "nul?"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"read-char", &module_info_runtime, "read-char"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"newline", &module_info_runtime, "newline"},
  {"neg?", &module_info_runtime, "neg?"},
  {"unless", &module_info_macros, "unless"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"backtrace", "backtrace"},
  {"top", "top"},
  {"do-stack-frames", "do-stack-frames"},
  {"eval", "eval"},
  {"load", "load"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoSeval;
MODULE_INFO module_info_protoSeval = {
  "proto/eval",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_proto (void);
extern void load_module_top (void);

/* EXPRESSION: */

extern void load_module_protoSeval (void);

void load_module_protoSeval (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_proto();
  load_module_top();

  (P)YprotoSevalY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
