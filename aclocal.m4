dnl GOO_CHECK_EXE_SUFFIX()
dnl Determines the suffix attached to executables.  For an MS-DOS derived OS
dnl this is .exe, and the empty string for Unix.
AC_DEFUN(GOO_CHECK_EXE_SUFFIX,
[AC_MSG_CHECKING(name suffix of executables)
AC_CACHE_VAL(goo_cv_exe_suffix,
[goo_cv_exe_suffix=""
AC_TRY_COMPILE([],
  [;],
  [if test -f conftest.exe; then goo_cv_exe_suffix=.exe; fi])
])dnl
if test -z "$goo_cv_exe_suffix"; then
  AC_MSG_RESULT(none)
  goo_target_os="Unix"
else
  AC_MSG_RESULT($goo_cv_exe_suffix)
  goo_target_os="Win"
fi
exe_suffix="$goo_cv_exe_suffix";
AC_SUBST(exe_suffix)
AC_SUBST(goo_target_os)])

dnl Check if Boehm's conservative garbage collector available as
dnl library, or is present in subdirectory gc/
AC_DEFUN(GOO_CHECK_GC_LIB, 
[AC_MSG_CHECKING([for local copy of Boehm GC libraries])
if test -f gc/Makefile; then
  build_gc=yes
  AC_MSG_RESULT(yes)
else
  AC_MSG_RESULT(no)
  AC_CHECK_LIB(gc, GC_malloc, have_libgc=yes, have_libgc=no)
  if test "$have_libgc" = yes; then
    build_gc=no
    LIBS="-lgc $LIBS"
  else
  AC_MSG_ERROR([


  ERROR: Configure could not locate an installed libgc, nor any garbage
  collector sources in the subdirectory gc.  Please either install
  libgc on your system or download the source and untar it here.])
  fi
fi
AC_SUBST(build_gc)
])