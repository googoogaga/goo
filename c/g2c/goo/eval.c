/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/eval */

EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YtopYload,"top","load");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YLlogG,"boot","<log>");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(Ynot,"boot","not");
EXT(Yslot_value,"boot","slot-value");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YLunionG,"boot","<union>");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YtopYbacktrace,"top","backtrace");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYformat,"runtime","format");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYlast,"runtime","last");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(Ytail,"boot","tail");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(Yclass_slots,"boot","class-slots");
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
EXT(YtopYdo_stack_frames,"top","do-stack-frames");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYdefault,"runtime","default");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YPdefine_method,"boot","%define-method");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYapp_filename,"runtime","app-filename");
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
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YwriteYdisplay,"write","display");
EXT(Yobject_parents,"boot","object-parents");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YruntimeYE,"runtime","=");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YmacrosYmap,"macros","map");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYpop,"runtime","pop");
EXT(YruntimeYmap2,"runtime","map2");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeYNE,"runtime","~=");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYfrom,"runtime","from");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YmacrosYEE,"macros","==");
EXT(YtopYtop,"top","top");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(Yfind_setter,"boot","find-setter");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YLvecG,"boot","<vec>");
EXT(Ytype_class,"boot","type-class");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(Ylst,"boot","lst");
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
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYdel_key,"runtime","del-key");
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
EXT(YtopYparse_in,"top","parse-in");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
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
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(Ynul,"boot","nul");
EXT(YruntimeYL,"runtime","<");
EXT(YLlocG,"boot","<loc>");
EXT(Yfab_class,"boot","fab-class");
EXT(YwriteYwrite,"write","write");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YwriteYwriteln,"write","writeln");
EXT(YruntimeYdel,"runtime","del");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYlist,"runtime","list");
EXT(Ytype_object,"boot","type-object");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YLtupG,"boot","<tup>");
EXT(YtopYread_file,"top","read-file");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(Yerror,"boot","error");
EXT(Yhead,"boot","head");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYlen,"runtime","len");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeYsub,"runtime","sub");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(Yslot_init,"boot","slot-init");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYin,"runtime","in");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YLnumG,"boot","<num>");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYfill,"runtime","fill");
EXT(Yfun_value,"boot","fun-value");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YruntimeYalter,"runtime","alter");
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
  {"odd?", &module_info_runtime, "odd?"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"load", &module_info_top, "load"},
  {"and", &module_info_macros, "and"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"<log>", &module_info_boot, "<log>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"fabs", &module_info_runtime, "fabs"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"ct", &module_info_boot, "ct"},
  {"pos", &module_info_runtime, "pos"},
  {"neg", &module_info_runtime, "neg"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"push", &module_info_runtime, "push"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"from-below", &module_info_runtime, "from-below"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"not", &module_info_boot, "not"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<any>", &module_info_boot, "<any>"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"<union>", &module_info_boot, "<union>"},
  {"write-string", &module_info_runtime, "write-string"},
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
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"cat", &module_info_macros, "cat"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"dg", &module_info_boot, "dg"},
  {"next-method", &module_info_macros, "next-method"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"backtrace", &module_info_top, "backtrace"},
  {"fun", &module_info_boot, "fun"},
  {"empty?", &module_info_macros, "empty?"},
  {"buf", &module_info_runtime, "buf"},
  {"port-index", &module_info_runtime, "port-index"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"read", &module_info_runtime, "read"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"format", &module_info_runtime, "format"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"rev!", &module_info_runtime, "rev!"},
  {"last", &module_info_runtime, "last"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"floor/", &module_info_runtime, "floor/"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"tail", &module_info_boot, "tail"},
  {"lsh", &module_info_runtime, "lsh"},
  {"gensym", &module_info_macros, "gensym"},
  {"ash", &module_info_runtime, "ash"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"round/", &module_info_runtime, "round/"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"rev", &module_info_runtime, "rev"},
  {"use", &module_info_boot, "use"},
  {"abs", &module_info_runtime, "abs"},
  {"bound?", &module_info_boot, "bound?"},
  {"<port>", &module_info_runtime, "<port>"},
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
  {"do-stack-frames", &module_info_top, "do-stack-frames"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"compose", &module_info_runtime, "compose"},
  {"export", &module_info_boot, "export"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"app-args", &module_info_runtime, "app-args"},
  {"write-char", &module_info_runtime, "write-char"},
  {"default", &module_info_runtime, "default"},
  {"address-of", &module_info_runtime, "address-of"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"floor", &module_info_runtime, "floor"},
  {"cat2", &module_info_runtime, "cat2"},
  {"modulo", &module_info_runtime, "modulo"},
  {"collecting", &module_info_macros, "collecting"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"cat!", &module_info_runtime, "cat!"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"class-name", &module_info_boot, "class-name"},
  {"when", &module_info_macros, "when"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"isa?", &module_info_boot, "isa?"},
  {"empty", &module_info_runtime, "empty"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"+", &module_info_runtime, "+"},
  {"<type>", &module_info_boot, "<type>"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"<class>", &module_info_boot, "<class>"},
  {"<range>", &module_info_runtime, "<range>"},
  {"remainder", &module_info_runtime, "remainder"},
  {"add", &module_info_runtime, "add"},
  {"find-key", &module_info_runtime, "find-key"},
  {"elt", &module_info_runtime, "elt"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"curry", &module_info_runtime, "curry"},
  {"display", &module_info_write, "display"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"eval", &module_info_syntax, "eval"},
  {"<=", &module_info_runtime, "<="},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"logior", &module_info_runtime, "logior"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"%pair", &module_info_boot, "%pair"},
  {"=", &module_info_runtime, "="},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"nul?", &module_info_runtime, "nul?"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"map", &module_info_macros, "map"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"pop", &module_info_runtime, "pop"},
  {"map2", &module_info_runtime, "map2"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"pos?", &module_info_runtime, "pos?"},
  {"logxor", &module_info_runtime, "logxor"},
  {"from-to", &module_info_runtime, "from-to"},
  {"inc", &module_info_macros, "inc"},
  {"~=", &module_info_runtime, "~="},
  {"<gen>", &module_info_boot, "<gen>"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"from", &module_info_runtime, "from"},
  {"<str>", &module_info_boot, "<str>"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"==", &module_info_macros, "=="},
  {"dc", &module_info_boot, "dc"},
  {"top", &module_info_top, "top"},
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
  {"<vec>", &module_info_boot, "<vec>"},
  {"type-class", &module_info_boot, "type-class"},
  {"lognot", &module_info_runtime, "lognot"},
  {"popf", &module_info_macros, "popf"},
  {"lst", &module_info_boot, "lst"},
  {"1st", &module_info_runtime, "1st"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"as", &module_info_runtime, "as"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"always", &module_info_runtime, "always"},
  {"t<", &module_info_runtime, "t<"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"<met>", &module_info_boot, "<met>"},
  {"out", &module_info_runtime, "out"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"do", &module_info_runtime, "do"},
  {"newline", &module_info_runtime, "newline"},
  {"fab", &module_info_runtime, "fab"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"force-output", &module_info_runtime, "force-output"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"<step>", &module_info_runtime, "<step>"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"isa", &module_info_boot, "isa"},
  {"del-key", &module_info_runtime, "del-key"},
  {"lab", &module_info_boot, "lab"},
  {"t=", &module_info_runtime, "t="},
  {"select", &module_info_macros, "select"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"zero?", &module_info_runtime, "zero?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"pick", &module_info_runtime, "pick"},
  {"parse-in", &module_info_top, "parse-in"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"pair", &module_info_macros, "pair"},
  {"now-key", &module_info_runtime, "now-key"},
  {"fin", &module_info_boot, "fin"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"<seq>", &module_info_boot, "<seq>"},
  {">=", &module_info_runtime, ">="},
  {"-", &module_info_runtime, "-"},
  {"t+", &module_info_runtime, "t+"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"read-char", &module_info_runtime, "read-char"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"mem?", &module_info_runtime, "mem?"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"set", &module_info_boot, "set"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {">", &module_info_runtime, ">"},
  {"all?", &module_info_runtime, "all?"},
  {"<col>", &module_info_boot, "<col>"},
  {"2nd", &module_info_runtime, "2nd"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"~==", &module_info_runtime, "~=="},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"round", &module_info_runtime, "round"},
  {"macro-expand", &module_info_boot, "macro-expand"},
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
  {"writeln", &module_info_write, "writeln"},
  {"del", &module_info_runtime, "del"},
  {"even?", &module_info_runtime, "even?"},
  {"list", &module_info_runtime, "list"},
  {"type-object", &module_info_boot, "type-object"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"dlet", &module_info_macros, "dlet"},
  {"apply", &module_info_macros, "apply"},
  {"or", &module_info_macros, "or"},
  {"mif", &module_info_boot, "mif"},
  {"%isa", &module_info_boot, "%isa"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"from-above", &module_info_runtime, "from-above"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"read-file", &module_info_top, "read-file"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"error", &module_info_boot, "error"},
  {"head", &module_info_boot, "head"},
  {"neg?", &module_info_runtime, "neg?"},
  {"len", &module_info_runtime, "len"},
  {"<map>", &module_info_runtime, "<map>"},
  {"identity", &module_info_runtime, "identity"},
  {"ds", &module_info_boot, "ds"},
  {"var-type", &module_info_macros, "var-type"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"seq", &module_info_boot, "seq"},
  {"quote", &module_info_boot, "quote"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"sub", &module_info_runtime, "sub"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"<int>", &module_info_boot, "<int>"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"dm", &module_info_boot, "dm"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"rep", &module_info_boot, "rep"},
  {"sig", &module_info_runtime, "sig"},
  {"to-str", &module_info_runtime, "to-str"},
  {"in", &module_info_runtime, "in"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"unless", &module_info_macros, "unless"},
  {"any?", &module_info_runtime, "any?"},
  {"<num>", &module_info_boot, "<num>"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"dv", &module_info_boot, "dv"},
  {"fill", &module_info_runtime, "fill"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"try", &module_info_boot, "try"},
  {"slot", &module_info_boot, "slot"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"var-name", &module_info_macros, "var-name"},
  {"/", &module_info_runtime, "/"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"alter", &module_info_runtime, "alter"},
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
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"load", "load"},
  {"backtrace", "backtrace"},
  {"do-stack-frames", "do-stack-frames"},
  {"eval", "eval"},
  {"top", "top"},
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
