/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/user */

EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YtopYload,"top","load");
EXT(YwriteYwriteln,"write","writeln");
EXT(YmacrosYmap,"macros","map");
EXT(Ynul,"boot","nul");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YruntimeYin,"runtime","in");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYalways,"runtime","always");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(Yfun_value,"boot","fun-value");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YDmin_int,"boot","$min-int");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YLlogG,"boot","<log>");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(Ynot,"boot","not");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYabs,"runtime","abs");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYmax,"runtime","max");
EXT(YLanyG,"boot","<any>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YtopYbacktrace,"top","backtrace");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(Ytype_class,"boot","type-class");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YwriteYwrite,"write","write");
EXT(YLunionG,"boot","<union>");
EXT(Ylst,"boot","lst");
EXT(YDmax_int,"boot","$max-int");
EXT(YruntimeYdefault,"runtime","default");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYlow_elt,"runtime","low-elt");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYall2Q,"runtime","all2?");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YwriteYdisplay,"write","display");
EXT(YtopYtop,"top","top");
EXT(Yerror,"boot","error");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYrev,"runtime","rev");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYNE,"runtime","~=");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYsig,"runtime","sig");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYL,"runtime","<");
EXT(YruntimeYpop,"runtime","pop");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YtopYdo_stack_frames,"top","do-stack-frames");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYlen,"runtime","len");
EXT(YmacrosYnapply,"macros","napply");
EXT(YruntimeYE,"runtime","=");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYany2Q,"runtime","any2?");
EXT(Ytype_object,"boot","type-object");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYfill,"runtime","fill");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYfrom,"runtime","from");
EXT(Yobject_parents,"boot","object-parents");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYGE,"runtime",">=");
EXT(YmacrosYelt,"macros","elt");
EXT(Yfind_setter,"boot","find-setter");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YruntimeYnewline,"runtime","newline");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYvec,"runtime","vec");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeY1st,"runtime","1st");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYpos,"runtime","pos");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yslot_value,"boot","slot-value");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YPdefine_method,"boot","%define-method");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYdo,"runtime","do");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYround,"runtime","round");
EXT(YLvecG,"boot","<vec>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YLnumG,"boot","<num>");
EXT(Yhead_setter,"boot","head-setter");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(Yfind_getter,"boot","find-getter");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYlist,"runtime","list");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(Yhead,"boot","head");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYpick,"runtime","pick");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYtL,"runtime","t<");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YtopYsave_image,"top","save-image");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYA,"runtime","+");
EXT(Ytail,"boot","tail");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYmin,"runtime","min");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYfab_map,"runtime","fab-map");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYdel,"runtime","del");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(Ynil,"boot","nil");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYtA,"runtime","t+");
EXT(YruntimeYsub,"runtime","sub");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Ytype_elts,"boot","type-elts");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYneg,"runtime","neg");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfind_key,"runtime","find-key");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YprotoSuserY___main_0___ ();

/* FUNCTION CODES: */

P YprotoSuserY___main_0___() {
  P T0;
loop:
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_proto;
extern MODULE_INFO module_info_protoSeval;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_top;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_syntax;
extern MODULE_INFO module_info_read;

static USE_INFO use_infos[] = {
  {&module_info_proto},
  {&module_info_protoSeval},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"reduce+", &module_info_runtime, "reduce+"},
  {"load", &module_info_top, "load"},
  {"writeln", &module_info_write, "writeln"},
  {"map", &module_info_macros, "map"},
  {"swapf", &module_info_macros, "swapf"},
  {"nul", &module_info_boot, "nul"},
  {"curry", &module_info_runtime, "curry"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"in", &module_info_runtime, "in"},
  {"class-name", &module_info_boot, "class-name"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"always", &module_info_runtime, "always"},
  {"select", &module_info_macros, "select"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"<int>", &module_info_boot, "<int>"},
  {"map2", &module_info_runtime, "map2"},
  {"3rd", &module_info_runtime, "3rd"},
  {"read-char", &module_info_runtime, "read-char"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"loc", &module_info_boot, "loc"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"port-index", &module_info_runtime, "port-index"},
  {"now-key", &module_info_runtime, "now-key"},
  {"floor/", &module_info_runtime, "floor/"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"reduce", &module_info_runtime, "reduce"},
  {"%slot", &module_info_boot, "%slot"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"var-type", &module_info_macros, "var-type"},
  {"dg", &module_info_boot, "dg"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"round/", &module_info_runtime, "round/"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"eval", &module_info_syntax, "eval"},
  {"<log>", &module_info_boot, "<log>"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"lsh", &module_info_runtime, "lsh"},
  {"ash", &module_info_runtime, "ash"},
  {"identity", &module_info_runtime, "identity"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"pair", &module_info_macros, "pair"},
  {"dv", &module_info_boot, "dv"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"not", &module_info_boot, "not"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"-", &module_info_runtime, "-"},
  {"abs", &module_info_runtime, "abs"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"to-str", &module_info_runtime, "to-str"},
  {"max", &module_info_runtime, "max"},
  {"<any>", &module_info_boot, "<any>"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"assert", &module_info_macros, "assert"},
  {"*", &module_info_runtime, "*"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"backtrace", &module_info_top, "backtrace"},
  {"set", &module_info_boot, "set"},
  {"export", &module_info_boot, "export"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"type-class", &module_info_boot, "type-class"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"write", &module_info_write, "write"},
  {"<union>", &module_info_boot, "<union>"},
  {"lst", &module_info_boot, "lst"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"default", &module_info_runtime, "default"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"cat", &module_info_macros, "cat"},
  {"isa", &module_info_boot, "isa"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"floor", &module_info_runtime, "floor"},
  {"<error>", &module_info_runtime, "<error>"},
  {"var-name", &module_info_macros, "var-name"},
  {"modulo", &module_info_runtime, "modulo"},
  {"fun", &module_info_boot, "fun"},
  {"collect", &module_info_macros, "collect"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"last", &module_info_runtime, "last"},
  {"or", &module_info_macros, "or"},
  {"low-elt", &module_info_runtime, "low-elt"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"dec", &module_info_macros, "dec"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"<=", &module_info_runtime, "<="},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"format", &module_info_runtime, "format"},
  {"all2?", &module_info_runtime, "all2?"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"low-elt-setter", &module_info_runtime, "low-elt-setter"},
  {"seq", &module_info_boot, "seq"},
  {"%pair", &module_info_boot, "%pair"},
  {"mem?", &module_info_runtime, "mem?"},
  {"apply", &module_info_macros, "apply"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"remainder", &module_info_runtime, "remainder"},
  {"display", &module_info_write, "display"},
  {"top", &module_info_top, "top"},
  {"rep", &module_info_boot, "rep"},
  {"error", &module_info_boot, "error"},
  {"logior", &module_info_runtime, "logior"},
  {"rev", &module_info_runtime, "rev"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"<step>", &module_info_runtime, "<step>"},
  {"try", &module_info_boot, "try"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"<map>", &module_info_runtime, "<map>"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"pos?", &module_info_runtime, "pos?"},
  {">", &module_info_runtime, ">"},
  {"unless", &module_info_macros, "unless"},
  {"~=", &module_info_runtime, "~="},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"quote", &module_info_boot, "quote"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"sig", &module_info_runtime, "sig"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"logxor", &module_info_runtime, "logxor"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"cat2", &module_info_runtime, "cat2"},
  {"<", &module_info_runtime, "<"},
  {"pop", &module_info_runtime, "pop"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"do-stack-frames", &module_info_top, "do-stack-frames"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"keys", &module_info_runtime, "keys"},
  {"logand", &module_info_runtime, "logand"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"cat!", &module_info_runtime, "cat!"},
  {"len", &module_info_runtime, "len"},
  {"napply", &module_info_macros, "napply"},
  {"and", &module_info_macros, "and"},
  {"=", &module_info_runtime, "="},
  {"tup", &module_info_macros, "tup"},
  {"add", &module_info_runtime, "add"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"add!", &module_info_runtime, "add!"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"lognot", &module_info_runtime, "lognot"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"gensym", &module_info_macros, "gensym"},
  {"any2?", &module_info_runtime, "any2?"},
  {"type-object", &module_info_boot, "type-object"},
  {"if", &module_info_boot, "if"},
  {"<class>", &module_info_boot, "<class>"},
  {"popf", &module_info_macros, "popf"},
  {"as", &module_info_runtime, "as"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"fin", &module_info_boot, "fin"},
  {"any?", &module_info_runtime, "any?"},
  {"<type>", &module_info_boot, "<type>"},
  {"df", &module_info_boot, "df"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"push", &module_info_runtime, "push"},
  {"compose", &module_info_runtime, "compose"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"fill", &module_info_runtime, "fill"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"out", &module_info_runtime, "out"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"from", &module_info_runtime, "from"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"dc", &module_info_boot, "dc"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"first-then", &module_info_runtime, "first-then"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"zero?", &module_info_runtime, "zero?"},
  {"pushf", &module_info_macros, "pushf"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"address-of", &module_info_runtime, "address-of"},
  {"alter", &module_info_runtime, "alter"},
  {"all?", &module_info_runtime, "all?"},
  {"<sym>", &module_info_boot, "<sym>"},
  {">=", &module_info_runtime, ">="},
  {"elt", &module_info_macros, "elt"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"let", &module_info_boot, "let"},
  {"<port>", &module_info_runtime, "<port>"},
  {"<list>", &module_info_runtime, "<list>"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"newline", &module_info_runtime, "newline"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"vec", &module_info_runtime, "vec"},
  {"<str>", &module_info_boot, "<str>"},
  {"dlet", &module_info_macros, "dlet"},
  {"str", &module_info_runtime, "str"},
  {"app-args", &module_info_runtime, "app-args"},
  {"next-method", &module_info_macros, "next-method"},
  {"bound?", &module_info_boot, "bound?"},
  {"~==", &module_info_runtime, "~=="},
  {"read", &module_info_runtime, "read"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"rev!", &module_info_runtime, "rev!"},
  {"1st", &module_info_runtime, "1st"},
  {"write-string", &module_info_runtime, "write-string"},
  {"pos", &module_info_runtime, "pos"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"force-output", &module_info_runtime, "force-output"},
  {"do", &module_info_runtime, "do"},
  {"case", &module_info_macros, "case"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"for", &module_info_macros, "for"},
  {"round", &module_info_runtime, "round"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"<met>", &module_info_boot, "<met>"},
  {"nul?", &module_info_runtime, "nul?"},
  {"<num>", &module_info_boot, "<num>"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"fab", &module_info_runtime, "fab"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"list", &module_info_runtime, "list"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"head", &module_info_boot, "head"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"collected", &module_info_macros, "collected"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"even?", &module_info_runtime, "even?"},
  {"use", &module_info_boot, "use"},
  {"false-or", &module_info_runtime, "false-or"},
  {"buf", &module_info_runtime, "buf"},
  {"pick", &module_info_runtime, "pick"},
  {"dm", &module_info_boot, "dm"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"neg?", &module_info_runtime, "neg?"},
  {"when", &module_info_macros, "when"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"empty", &module_info_runtime, "empty"},
  {"collecting", &module_info_macros, "collecting"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"from-above", &module_info_runtime, "from-above"},
  {"t<", &module_info_runtime, "t<"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"save-image", &module_info_top, "save-image"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"do2", &module_info_runtime, "do2"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"from-below", &module_info_runtime, "from-below"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"2nd", &module_info_runtime, "2nd"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"+", &module_info_runtime, "+"},
  {"ct", &module_info_boot, "ct"},
  {"tail", &module_info_boot, "tail"},
  {"==", &module_info_macros, "=="},
  {"write-char", &module_info_runtime, "write-char"},
  {"opf", &module_info_macros, "opf"},
  {"min", &module_info_runtime, "min"},
  {"/", &module_info_runtime, "/"},
  {"t=", &module_info_runtime, "t="},
  {"fab-map", &module_info_runtime, "fab-map"},
  {"from-by", &module_info_runtime, "from-by"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"fabs", &module_info_runtime, "fabs"},
  {"truncate", &module_info_runtime, "truncate"},
  {"<range>", &module_info_runtime, "<range>"},
  {"<col>", &module_info_boot, "<col>"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"from-to", &module_info_runtime, "from-to"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"del", &module_info_runtime, "del"},
  {"del-key", &module_info_runtime, "del-key"},
  {"lab", &module_info_boot, "lab"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"mif", &module_info_boot, "mif"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"odd?", &module_info_runtime, "odd?"},
  {"nil", &module_info_boot, "nil"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"t+", &module_info_runtime, "t+"},
  {"inc", &module_info_macros, "inc"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"sub", &module_info_runtime, "sub"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"isa?", &module_info_boot, "isa?"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"neg", &module_info_runtime, "neg"},
  {"ds", &module_info_boot, "ds"},
  {"empty?", &module_info_macros, "empty?"},
  {"%isa", &module_info_boot, "%isa"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"find-key", &module_info_runtime, "find-key"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoSuser;
MODULE_INFO module_info_protoSuser = {
  "proto/user",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_proto (void);
extern void load_module_protoSeval (void);

/* EXPRESSION: */

extern void load_module_protoSuser (void);

void load_module_protoSuser (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_proto();
  load_module_protoSeval();

  (P)YprotoSuserY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
