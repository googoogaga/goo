/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/main");
  return YPsrc_loc(YPib((P)line), _mod);
}

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
