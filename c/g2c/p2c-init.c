/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* APPLICATION: */

extern void load_module_main (void);

int main(int argc, char* argv[]) {
  YPinit_world(argc, argv);
  load_module_main();
  return 0;
}

/* END OF GENERATED CODE. */
