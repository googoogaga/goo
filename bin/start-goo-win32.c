#include <stdio.h>

int main (int argc, char* argv[]) {
  int  last;
  char *lastp;
  char cwd[10000];
  char name[10000];
  char root[10000];
  char path[10000];
  getcwd(cwd, 10000);
  strcpy(name, argv[0]);
  if (name[0] != '/') 
    sprintf(name, "%s/%s", cwd, argv[0]);
  lastp = (char*)strrchr(name, '/');
  last  = (int)(lastp - name);
  strncpy(root, name, last);
  strcpy(&root[last], "/..");
  setenv("GOO_ROOT", root, 1);
  sprintf(path, "%s/bin/g2c.exe", root);
  execl(path, path, NULL);
  return 0;
}
