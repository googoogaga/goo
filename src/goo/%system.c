/* Copyright 2002, Jonathan Bachrach.  See file TERMS. */

#include <grt.h>

/* TODO - Need Windows versions of the following functions. */

#include <sys/stat.h>
#if !defined(_MSC_VER)
#include <unistd.h>
#endif
#include <errno.h>

extern P Yfab_sym;
extern P Yerror;

static void unix_error (char *command, char *filename) {
  XXCALL4(1, Yerror,
	  YPsb("%s: %s failed: %s.\n"),
	  YPsb(command),
	  YPsb(filename),
	  YPsb(strerror(errno)));
}

/* TODO - Resolution is crummy because we use single floats. */
#define GOO_EPOCH (978307200) /* January 01, 2001 00:00:00 GMT */
P YgooSsystemYPfile_mtime (P name) {
  struct stat buf;
  int res;
  INTFLO flo;
  
  res = stat((PSTR) name, &buf);
  if (res == 0) {
    flo.f = (PFLO) buf.st_mtime - GOO_EPOCH;
  } else {
    unix_error("stat", name);
    /* Not executed. */
    flo.f = 0.0;
  }
  return (P) flo.i;
}

P YgooSsystemYPfile_existsQ (P name) {
  struct stat buf;
  int res;
  res = stat((PSTR) name, &buf);
  if (res == 0)
    return YPtrue;
  else if (errno == ENOENT)
    return YPfalse;
  else
    unix_error("stat", name);
  /* Not executed. */
  return YPfalse;
}

#if defined(_MSC_VER)
#define S_ISREG(x) ((x) & _S_IFREG)
#define S_ISDIR(x) ((x) & _S_IFDIR)
#endif

P YgooSsystemYPfile_type (P name) {
  struct stat buf;
  int res;
  res = stat((PSTR) name, &buf);
  if (res == 0) {
    if (S_ISREG(buf.st_mode))
      return XXCALL1(1, Yfab_sym, YPsb("file"));
    else if (S_ISDIR(buf.st_mode))
      return XXCALL1(1, Yfab_sym, YPsb("directory"));
    else
      return XXCALL1(1, Yfab_sym, YPsb("unknown"));
  } else {
    unix_error("stat", name);
    /* Not executed. */
    return XXCALL1(1, Yfab_sym, YPsb("unknown"));
  }
}

/* mkdir is available on Linux and GNU systems.  Other systems may not
** bother to supply it!  I think you can find N different semi-portable
** implementations in the GNU tar source code.  Yes, some Unix systems
** really require you to invoke the 'mkdir' *program* to create a
** directory. */
P YgooSsystemYPcreate_directory (P name) {
  int res;
  /* Rely on umask to set privileges. */
#if defined(_MSC_VER)
  res = mkdir(name);
#else
  res = mkdir(name, S_IRWXU|S_IRWXG|S_IRWXO);
#endif
  if (res != 0)
    unix_error("mkdir", name);
  return YPfalse;
}

/* OS */

P YgooSsystemYPos_name () {
#if defined(_WIN32) || defined(WIN32) || defined(WINNT)
  return (P)"win32";
#else
#ifdef linux
  return (P)"linux";
#else
  return (P)"unix";
#endif
#endif
}

P YgooSsystemYPos_val (P name) {
  PSTR value = (PSTR)getenv((char *)name);
  if (value == NULL)
    return (P)"";
  else
    return (P)value;
}

P YgooSsystemYPos_val_setter (P value, P name) {
#if defined(_MSC_VER)
  static char buffer[1024];
  sprintf(buffer, "%s=%s", (PSTR)name, (PSTR)value);
  putenv(buffer);
  return (P)value;
#else
  setenv((PSTR)name, (PSTR)value, 1);
  return (P)value;
#endif
}

#if !defined(_MSC_VER)
#include <dlfcn.h>

typedef P (*PLD)();
extern P YgooSsystemYTgoo_rootT;
#endif

//#include "libtcc.h"

static int split_args (char *s, int i, char** a) {
  for (;;) {
    // find beginning of arg
    for (;;) {
      if (*s == NULL)   return i;
      if (!isspace(*s)) break;
      *s++ = NULL; // terminate arg
    }
    a[i++] = s;
    // find end of arg
    for (;;) {
      if (*s == NULL)   return i;
      if (isspace(*s))  break;
      s++;
    }
  }
}

P YgooSsystemYPcompile (P cfile, P sofile, P incs, P libs) {
#if defined(_MSC_VER)
  char* command = (char*)allocate(1024);
  strcpy(command, "cl /O2 /D MSVC_THREAD /D WITH_THREADS /D BUILD_DLL");
  strcat(command, " /I../c /I.");
  strcat(command, " /Fe");
  strcat(command, (char*)sofile);
  strcat(command, " ");
  strcat(command, (char*)cfile);
  strcat(command, " dllentry.c /LD /link ./gc.lib ./goovc.lib kernel32.lib");
  printf("Executing %s\n", command);
  system(command);
  return YPtrue;
#else
  char  rbuf[4096];
  char  lbuf[4096];
  char  ibuf[4096];
  int   i, j;
  int   pid;
  char *bv[] = {"cc", "-shared",  "-g", "-O", "-fPIC",  rbuf, "-o", sofile, cfile, NULL};
  char *v[100], *lptr;

  sprintf(rbuf, "-I%s/lib", YPsu(YgooSsystemYTgoo_rootT));
  // printf("INCS %s\n", incs);
  // printf("LIBS %s\n", libs);
  strcpy(lbuf, libs);
  strcpy(ibuf, incs);
  for (i = 0; bv[i] != NULL; i++)
    v[i] = bv[i];
  j = i;
  i = split_args(ibuf, i, v);
  i = split_args(lbuf, i, v);
  // for (; j < i; j++)
  //   printf("ARG[%d] = %s\n", j, v[j]);
  v[i++] = NULL;
  // printf("EXECUTING %s %s %d\n", ibuf, v[i-2], i);
  pid = fork();
  if (pid == 0) // child
    execvp("cc", v);
  else if (pid < 0)
    XXCALL1(1, Yerror, YPsb("Cannot exec compiler."));
  else {
    int status;
    // parent
    do {
      if (waitpid(pid, &status, 0) == -1) {
	if (errno != EINTR)
	  return YPfalse;
      } else
	return YPtrue;
    } while(1);
    return YPfalse;
  }

/* TCC compiler code
  TCCState *s;
  char buf[5000];
  void (*func)();
  s = tcc_new();
  printf("Got to 1\n");
  if(!s)
	  return YPfalse;
  tcc_set_output_type(s, TCC_OUTPUT_MEMORY);
  printf("Got to 2\n");
  snprintf(buf, sizeof(buf)-1, "%s/lib", YPsu(YgooSsystemYTgoo_rootT));
  tcc_add_include_path(s, buf);
  printf("Got to 3\n");
  tcc_add_file(s, cfile);
  printf("Got to 4\n");
  tcc_relocate(s);
  printf("Got to 5\n");
  func = tcc_get_symbol(s, "load_module_dl");
  if(!func)
	  return YPfalse;
  printf("Got to 6\n");
  func();
  printf("Got to 7\n");
  tcc_delete(s);
  printf("Got to 8\n");
  return YPtrue;
*/
#endif
}

#if defined(_MSC_VER)
#undef PINT
#include <windows.h>
#undef PINT
#define PINT long
#endif

P YgooSsystemYPload(P name) {
#if defined(_MSC_VER)
  HANDLE module = 0;
  printf("Loading %s\n", (char*)name);
  module = LoadLibrary(name);
  if(module == NULL)
	printf("Failed to load library %s\n", (char*)name);
  else
	{
	  FARPROC load = GetProcAddress(module, "LoadModuleDl");
	  return (P)load();
	}
  return YPfalse;
#else

  void* mod;
  PLD   load;
  P     res;

  // printf("LOADING   %s\n", name);
  mod = dlopen(name, RTLD_NOW | RTLD_GLOBAL);
  if (mod == NULL)
  {
    printf("FAILED TO LOAD %s BECAUSE %s\n", name, dlerror());
	return YPfalse;
  }
  else {
    load = (PLD)dlsym(mod, "load_module_dl");
    res = load();
    // dlclose(mod);
  }
  return res;
#endif
}

/*
P YevalSg2cYPcompile (P name) {
	return YgooSsystemYPcompile(name);
}


P YevalSg2cYPload(P name) {
	return YgooSsystemYPload(name);
}
*/

extern time_t time(time_t *t);

P YgooSsystemYPtime () {
  time_t tv;
  tv = time(NULL);
  return((P)(tv - GOO_EPOCH));
}
