/* Copyright 2002, Jonathan Bachrach.  See file TERMS. */

#include <grt.h>

extern P Yfile_opening_error;

P YgooSioSportYPopen_in_file (P name) { 
  FILE* fd = fopen((PSTR)name, "r"); 
  if (fd == NULL)
    XXCALL1(1, Yfile_opening_error, YPsb((PSTR)name));
  return (P)YPlb(fd);
}

P YgooSioSportYPopen_out_file (P name) { 
  FILE* fd = fopen((PSTR)name, "w"); 
  if (fd == NULL)
    XXCALL1(1, Yfile_opening_error, YPsb((PSTR)name));
  return (P)YPlb(fd);
}

P YgooSioSportYPclose_in_port (P s) { 
  fclose((FILE*)YPlu(s)); return YPfalse; 
}

P YgooSioSportYPclose_out_port (P s) { 
  fclose((FILE*)YPlu(s)); return YPfalse; 
}

P YgooSioSportYPnewline (P s) { 
  fputc('\n', (FILE*)YPlu(s)); 
#ifdef WIN32  
  if ((FILE*)YPlu(s) == stdout) fflush(stdout);
#endif
  return YPfalse; 
}

P YgooSioSportYPforce_out (P s) { 
  fflush((FILE*)YPlu(s)); return YPfalse; 
}

P YgooSioSportYPput (P s, P x) { 
  fputc((PCHR)(PINT)x, (FILE*)YPlu(s)); 
#ifdef WIN32  
  if ((FILE*)YPlu(s) == stdout && (((PCHR)(PINT)x) == '\n')) fflush(stdout);
#endif
  return YPfalse; 
}

P YgooSioSportYPputs (P s, P x) { 
  if(x==NULL)
    fputs("NULL", (FILE*)YPlu(s));
  else
    fputs((PSTR)x, (FILE*)YPlu(s));
#ifdef WIN32  
  if ((FILE*)YPlu(s) == stdout) fflush(stdout);
#endif
  return YPfalse; 
}

P YgooSioSportYPget (P s) { 
  return (P)(PINT)fgetc((FILE*)YPlu(s)); 
}

P YgooSioSportYPpeek (P s) { 
  PCHR c = fgetc((FILE*)YPlu(s)); ungetc((int)c, (FILE*)YPlu(s)); return (P)(PINT)c; 
}

P YgooSioSportYPreadyQ (P s) { 
  int    res;
#ifdef WIN32
  fd_set rfds;
  FD_ZERO(&rfds);
  FD_SET(fileno((FILE*)YPlu(s)), &rfds);
  res = select(1, &rfds, NULL, NULL, NULL);
#else
  res = 1;
#endif
  return((P)(PINT)res);
} 

#define MAXSTRSIZ 1000
char strbuf[MAXSTRSIZ];

PSTR YgooSioSportYPgets (FILE* s) { 
  char *str;
  fgets(strbuf, MAXSTRSIZ, (FILE*)YPlu(s)); 
  str = (char*)allocate_atomic(strlen(strbuf) + 1);
  strcpy(str, strbuf);
  return str;
}

PPORT YgooSioSportYPcurrent_in_port (void) { return (PPORT)YPlb(stdin); }

PPORT YgooSioSportYPcurrent_out_port (void) { return (PPORT)YPlb(stdout); }

