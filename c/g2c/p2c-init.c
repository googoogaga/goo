/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* APPLICATION: */

extern MODULE_INFO module_info_main;
extern void load_module_main (void);

MODULE_INFO *proto_toplevel_module_info = &module_info_main;

int main(int argc, char* argv[]) {
  YPinit_world(argc, argv);
  load_module_main();
  return 0;
}

/* END OF GENERATED CODE. */
