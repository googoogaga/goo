/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* APPLICATION: */

extern MODULE_INFO module_info_evalSmain;
extern void load_module_evalSmain (void);

MODULE_INFO *goo_toplevel_module_info = &module_info_evalSmain;

int main(int argc, char* argv[]) {
  YPinit_world(argc, argv);
  load_module_evalSmain();
  return 0;
}

/* END OF GENERATED CODE. */
