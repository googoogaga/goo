/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* APPLICATION: */

extern MODULE_INFO module_info_x8rSmain;
extern void load_module_x8rSmain (void);

MODULE_INFO *goo_toplevel_module_info = &module_info_x8rSmain;

int main(int argc, char* argv[]) {
  YPinit_world(argc, argv);
  load_module_x8rSmain();
  return 0;
}

/* END OF GENERATED CODE. */
