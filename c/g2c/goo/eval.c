/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/eval */

EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YwriteYdisplay,"write","display");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YruntimeYfab_map,"runtime","fab-map");
EXT(YruntimeYmax,"runtime","max");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YPslot,"boot","%slot");
EXT(YtopYparse_in,"top","parse-in");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYabs,"runtime","abs");
EXT(YLlogG,"boot","<log>");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYdefault,"runtime","default");
EXT(YruntimeYfloor,"runtime","floor");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYempty,"runtime","empty");
EXT(YtopYread_file,"top","read-file");
EXT(YDmin_int,"boot","$min-int");
EXT(Ynot,"boot","not");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(Yslot_value,"boot","slot-value");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YruntimeYfrom,"runtime","from");
EXT(YLunionG,"boot","<union>");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYout,"runtime","out");
EXT(Yerror,"boot","error");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YmacrosYmap,"macros","map");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYelt_or,"runtime","elt-or");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYLE,"runtime","<=");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Yslot_type,"boot","slot-type");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYNE,"runtime","~=");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeY1st,"runtime","1st");
EXT(Ytail,"boot","tail");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YLtupG,"boot","<tup>");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(Yclass_slots,"boot","class-slots");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YruntimeYlogand,"runtime","logand");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYas,"runtime","as");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYtL,"runtime","t<");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YPdefine_method,"boot","%define-method");
EXT(Yadd_slot,"boot","add-slot");
EXT(YwriteYwriteln,"write","writeln");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YtopYtop,"top","top");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYpush,"runtime","push");
EXT(Yclass_name,"boot","class-name");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YruntimeYGE,"runtime",">=");
EXT(YruntimeYE,"runtime","=");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYtA,"runtime","t+");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYsig,"runtime","sig");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YruntimeYdel,"runtime","del");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YLgenG,"boot","<gen>");
EXT(Yobject_slots,"boot","object-slots");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYsub,"runtime","sub");
EXT(Ylst,"boot","lst");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(Yfind_setter,"boot","find-setter");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YLvecG,"boot","<vec>");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(Ytype_class,"boot","type-class");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(Ynul,"boot","nul");
EXT(YruntimeYlen,"runtime","len");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
EXT(YtopYbacktrace,"top","backtrace");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YLflatG,"boot","<flat>");
EXT(YLmetG,"boot","<met>");
EXT(Yfun_names,"boot","fun-names");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYdo,"runtime","do");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYfill,"runtime","fill");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYA,"runtime","+");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYalter,"runtime","alter");
EXT(YtopYload,"top","load");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YDmax_int,"boot","$max-int");
EXT(YLseqG,"boot","<seq>");
EXT(YwriteYwrite,"write","write");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYmin,"runtime","min");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYpop,"runtime","pop");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YmacrosYtup,"macros","tup");
EXT(Ynil,"boot","nil");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYlow_elt,"runtime","low-elt");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYL,"runtime","<");
EXT(YLlocG,"boot","<loc>");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYlist,"runtime","list");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Ytype_object,"boot","type-object");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(Yhead,"boot","head");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYrev,"runtime","rev");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YruntimeYin,"runtime","in");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YtopYdo_stack_frames,"top","do-stack-frames");
EXT(YLnumG,"boot","<num>");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYdo2,"runtime","do2");
EXT(Yfun_value,"boot","fun-value");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YmacrosYpair,"macros","pair");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYroundS,"runtime","round/");

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
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_read;
extern MODULE_INFO module_info_syntax;

static USE_INFO use_infos[] = {
  {&module_info_proto},
  {&module_info_top},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"add", &module_info_runtime, "add"},
  {"add!", &module_info_runtime, "add!"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"display", &module_info_write, "display"},
  {"lsh", &module_info_runtime, "lsh"},
  {"fab-map", &module_info_runtime, "fab-map"},
  {"case", &module_info_macros, "case"},
  {"max", &module_info_runtime, "max"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"set", &module_info_boot, "set"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"%slot", &module_info_boot, "%slot"},
  {"parse-in", &module_info_top, "parse-in"},
  {"*", &module_info_runtime, "*"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"export", &module_info_boot, "export"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"abs", &module_info_runtime, "abs"},
  {"<log>", &module_info_boot, "<log>"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"address-of", &module_info_runtime, "address-of"},
  {"from-above", &module_info_runtime, "from-above"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"pos", &module_info_runtime, "pos"},
  {"dec", &module_info_macros, "dec"},
  {"collect", &module_info_macros, "collect"},
  {"default", &module_info_runtime, "default"},
  {"floor", &module_info_runtime, "floor"},
  {"when", &module_info_macros, "when"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"empty", &module_info_runtime, "empty"},
  {"read-file", &module_info_top, "read-file"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"not", &module_info_boot, "not"},
  {"modulo", &module_info_runtime, "modulo"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<any>", &module_info_boot, "<any>"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"from", &module_info_runtime, "from"},
  {"<union>", &module_info_boot, "<union>"},
  {"always", &module_info_runtime, "always"},
  {"find-key", &module_info_runtime, "find-key"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"out", &module_info_runtime, "out"},
  {"error", &module_info_boot, "error"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"apply", &module_info_macros, "apply"},
  {"map", &module_info_macros, "map"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"elt-or", &module_info_runtime, "elt-or"},
  {"elt", &module_info_runtime, "elt"},
  {"<=", &module_info_runtime, "<="},
  {"<col>", &module_info_boot, "<col>"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"remainder", &module_info_runtime, "remainder"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"nul?", &module_info_runtime, "nul?"},
  {"port-index", &module_info_runtime, "port-index"},
  {"quote", &module_info_boot, "quote"},
  {"map2", &module_info_runtime, "map2"},
  {"logior", &module_info_runtime, "logior"},
  {"fun", &module_info_boot, "fun"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"~=", &module_info_runtime, "~="},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"dg", &module_info_boot, "dg"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"1st", &module_info_runtime, "1st"},
  {"tail", &module_info_boot, "tail"},
  {"pos?", &module_info_runtime, "pos?"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"logxor", &module_info_runtime, "logxor"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"==", &module_info_macros, "=="},
  {"reduce", &module_info_runtime, "reduce"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"opf", &module_info_macros, "opf"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"newline", &module_info_runtime, "newline"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"false-or", &module_info_runtime, "false-or"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"logand", &module_info_runtime, "logand"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"read", &module_info_runtime, "read"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"as", &module_info_runtime, "as"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"pick", &module_info_runtime, "pick"},
  {"if", &module_info_boot, "if"},
  {"t<", &module_info_runtime, "t<"},
  {"lognot", &module_info_runtime, "lognot"},
  {"force-output", &module_info_runtime, "force-output"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"%pair", &module_info_boot, "%pair"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"writeln", &module_info_write, "writeln"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"top", &module_info_top, "top"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"push", &module_info_runtime, "push"},
  {"class-name", &module_info_boot, "class-name"},
  {"isa?", &module_info_boot, "isa?"},
  {"select", &module_info_macros, "select"},
  {"t=", &module_info_runtime, "t="},
  {"use", &module_info_boot, "use"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"isa", &module_info_boot, "isa"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"write-char", &module_info_runtime, "write-char"},
  {"<type>", &module_info_boot, "<type>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"let", &module_info_boot, "let"},
  {"pushf", &module_info_macros, "pushf"},
  {"2nd", &module_info_runtime, "2nd"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"identity", &module_info_runtime, "identity"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"zero?", &module_info_runtime, "zero?"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"now-key", &module_info_runtime, "now-key"},
  {"fin", &module_info_boot, "fin"},
  {"mem?", &module_info_runtime, "mem?"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {">=", &module_info_runtime, ">="},
  {"=", &module_info_runtime, "="},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"from-below", &module_info_runtime, "from-below"},
  {"t+", &module_info_runtime, "t+"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"sig", &module_info_runtime, "sig"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"next-method", &module_info_macros, "next-method"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"del", &module_info_runtime, "del"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"<map>", &module_info_runtime, "<map>"},
  {"vec", &module_info_runtime, "vec"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"rev!", &module_info_runtime, "rev!"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"~==", &module_info_runtime, "~=="},
  {"<str>", &module_info_boot, "<str>"},
  {"sub", &module_info_runtime, "sub"},
  {"lst", &module_info_boot, "lst"},
  {"assert", &module_info_macros, "assert"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"round", &module_info_runtime, "round"},
  {"buf", &module_info_runtime, "buf"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"type-class", &module_info_boot, "type-class"},
  {"keys", &module_info_runtime, "keys"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"nul", &module_info_boot, "nul"},
  {"len", &module_info_runtime, "len"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"dlet", &module_info_macros, "dlet"},
  {"collected", &module_info_macros, "collected"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"or", &module_info_macros, "or"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"even?", &module_info_runtime, "even?"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"low-elt-setter", &module_info_runtime, "low-elt-setter"},
  {"backtrace", &module_info_top, "backtrace"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"<met>", &module_info_boot, "<met>"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"var-type", &module_info_macros, "var-type"},
  {"do", &module_info_runtime, "do"},
  {"seq", &module_info_boot, "seq"},
  {"try", &module_info_boot, "try"},
  {"3rd", &module_info_runtime, "3rd"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"fab", &module_info_runtime, "fab"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"neg?", &module_info_runtime, "neg?"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"collecting", &module_info_macros, "collecting"},
  {"str", &module_info_runtime, "str"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"any?", &module_info_runtime, "any?"},
  {"dm", &module_info_boot, "dm"},
  {"rep", &module_info_boot, "rep"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"to-str", &module_info_runtime, "to-str"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"fill", &module_info_runtime, "fill"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"unless", &module_info_macros, "unless"},
  {"+", &module_info_runtime, "+"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"loc", &module_info_boot, "loc"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"dv", &module_info_boot, "dv"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"mif", &module_info_boot, "mif"},
  {"alter", &module_info_runtime, "alter"},
  {"load", &module_info_top, "load"},
  {"var-name", &module_info_macros, "var-name"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"write", &module_info_write, "write"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"min", &module_info_runtime, "min"},
  {"eval", &module_info_syntax, "eval"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"truncate", &module_info_runtime, "truncate"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"/", &module_info_runtime, "/"},
  {"pop", &module_info_runtime, "pop"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"inc", &module_info_macros, "inc"},
  {">", &module_info_runtime, ">"},
  {"all?", &module_info_runtime, "all?"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"cat", &module_info_macros, "cat"},
  {"<range>", &module_info_runtime, "<range>"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"odd?", &module_info_runtime, "odd?"},
  {"read-char", &module_info_runtime, "read-char"},
  {"<list>", &module_info_runtime, "<list>"},
  {"and", &module_info_macros, "and"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"first-then", &module_info_runtime, "first-then"},
  {"tup", &module_info_macros, "tup"},
  {"nil", &module_info_boot, "nil"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"<port>", &module_info_runtime, "<port>"},
  {"fabs", &module_info_runtime, "fabs"},
  {"low-elt", &module_info_runtime, "low-elt"},
  {"last", &module_info_runtime, "last"},
  {"<", &module_info_runtime, "<"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"format", &module_info_runtime, "format"},
  {"lab", &module_info_boot, "lab"},
  {"neg", &module_info_runtime, "neg"},
  {"list", &module_info_runtime, "list"},
  {"dc", &module_info_boot, "dc"},
  {"from-to", &module_info_runtime, "from-to"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"type-object", &module_info_boot, "type-object"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"popf", &module_info_macros, "popf"},
  {"compose", &module_info_runtime, "compose"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"app-args", &module_info_runtime, "app-args"},
  {"%isa", &module_info_boot, "%isa"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"<error>", &module_info_runtime, "<error>"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"head", &module_info_boot, "head"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"rev", &module_info_runtime, "rev"},
  {"del-key", &module_info_runtime, "del-key"},
  {"ds", &module_info_boot, "ds"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"<int>", &module_info_boot, "<int>"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"in", &module_info_runtime, "in"},
  {"empty?", &module_info_macros, "empty?"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"write-string", &module_info_runtime, "write-string"},
  {"curry", &module_info_runtime, "curry"},
  {"cat2", &module_info_runtime, "cat2"},
  {"floor/", &module_info_runtime, "floor/"},
  {"gensym", &module_info_macros, "gensym"},
  {"bound?", &module_info_boot, "bound?"},
  {"do-stack-frames", &module_info_top, "do-stack-frames"},
  {"<num>", &module_info_boot, "<num>"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"do2", &module_info_runtime, "do2"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"from-by", &module_info_runtime, "from-by"},
  {"cat!", &module_info_runtime, "cat!"},
  {"slot", &module_info_boot, "slot"},
  {"ash", &module_info_runtime, "ash"},
  {"-", &module_info_runtime, "-"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"ct", &module_info_boot, "ct"},
  {"pair", &module_info_macros, "pair"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"df", &module_info_boot, "df"},
  {"<step>", &module_info_runtime, "<step>"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"for", &module_info_macros, "for"},
  {"round/", &module_info_runtime, "round/"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"top", "top"},
  {"backtrace", "backtrace"},
  {"load", "load"},
  {"eval", "eval"},
  {"do-stack-frames", "do-stack-frames"},
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
