/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* APPLICATION: */

extern MODULE_INFO module_info_compilerSmain;
extern void load_module_compilerSmain (void);

MODULE_INFO *goo_toplevel_module_info = &module_info_compilerSmain;

int main(int argc, char* argv[]) {
  YPinit_world(argc, argv);
  load_module_compilerSmain();
  return 0;
}

/* END OF GENERATED CODE. */
