#!/usr/local/bin/bash

version=$1

base=`pwd`
mkdir goo-$version
cd goo-$version
cp -p $base/README.TXT .
mkdir BIN
cd BIN
cp -p $base/C/g2c/g2c .
# cp -p $base/C/cygwin1.dll .
cd ..
mkdir C
cd C
# cp -p $base/C/gc.lib.win32 .
cp -p $base/C/gc.a.linux gc.a
# cp -p $base/C/gc.a.win32 .
cp -p $base/C/gc.h .
cp -p $base/C/unexelf.c .
cp -p $base/C/grt.c .
cp -p $base/C/grt.h .
cp -p $base/C/dlgrt.h .
cp -p $base/C/Makefile .
cp -p $base/C/Make.inc .
mkdir g2c; cd g2c
cp -p $base/C/g2c/goo.c .
cp -p $base/C/g2c/g2c-init.c .
cp -p $base/C/g2c/Makefile .
mkdir x8r; cd x8r
cp -p $base/C/g2c/x8r/syntax.c .
cp -p $base/C/g2c/x8r/ast.c .
cp -p $base/C/g2c/x8r/ast-eval.c .
cp -p $base/C/g2c/x8r/ast-linearize.c .
cp -p $base/C/g2c/x8r/dependency.c .
cp -p $base/C/g2c/x8r/g2c.c .
cp -p $base/C/g2c/x8r/top.c .
cp -p $base/C/g2c/x8r/main.c .
cd ..
mkdir goo; cd goo
cp -p $base/C/g2c/goo/boot.c .
cp -p $base/C/g2c/goo/runtime.c .
cp -p $base/C/g2c/goo/app.c .
cp -p $base/C/g2c/goo/macros.c .
cp -p $base/C/g2c/goo/packer.c .
cp -p $base/C/g2c/goo/cols.c .
cp -p $base/C/g2c/goo/eval.c .
cp -p $base/C/g2c/goo/mag.c .
cp -p $base/C/g2c/goo/math.c .
cp -p $base/C/g2c/goo/system.c .
cp -p $base/C/g2c/goo/types.c .
cp -p $base/C/g2c/goo/user.c .
mkdir io; cd io
cp -p $base/C/g2c/goo/io/port.c .
cp -p $base/C/g2c/goo/io/read.c .
cp -p $base/C/g2c/goo/io/write.c .
cd ..
mkdir cols; cd cols
cp -p $base/C/g2c/goo/cols/assoc.c .
cp -p $base/C/g2c/goo/cols/buf.c .
cp -p $base/C/g2c/goo/cols/col.c .
cp -p $base/C/g2c/goo/cols/cycle.c .
cp -p $base/C/g2c/goo/cols/flat.c .
cp -p $base/C/g2c/goo/cols/list.c .
cp -p $base/C/g2c/goo/cols/map.c .
cp -p $base/C/g2c/goo/cols/opts.c .
cp -p $base/C/g2c/goo/cols/range.c .
cp -p $base/C/g2c/goo/cols/seq.c .
cp -p $base/C/g2c/goo/cols/step.c .
cp -p $base/C/g2c/goo/cols/str.c .
cp -p $base/C/g2c/goo/cols/tab.c .
cp -p $base/C/g2c/goo/cols/vec.c .
cp -p $base/C/g2c/goo/cols/zip.c .
cd ..
cd ..
cd ..
cd ..
mkdir SRC; cd SRC
cp -p $base/SRC/Makefile .
cp -p $base/SRC/goo.goo .
cp -p $base/SRC/tests.goo .
cp -p $base/SRC/user-patches.goo .
cp -p $base/SRC/system-patches.goo .
mkdir runtime; cd runtime
cd ..
mkdir x8r; cd x8r
cp -p $base/SRC/x8r/syntax.goo .
cp -p $base/SRC/x8r/ast.goo .
cp -p $base/SRC/x8r/ast-eval.goo .
cp -p $base/SRC/x8r/ast-linearize.goo .
cp -p $base/SRC/x8r/g2c.goo .
cp -p $base/SRC/x8r/dependency.goo .
cp -p $base/SRC/x8r/top.goo .
cp -p $base/SRC/x8r/main.goo .
cd ..
mkdir goo; cd goo
cp -p $base/SRC/goo/boot.goo .
cp -p $base/SRC/goo/runtime.goo .
cp -p $base/SRC/goo/app.goo .
cp -p $base/SRC/goo/macros.goo .
cp -p $base/SRC/goo/packer.goo .
cp -p $base/SRC/goo/cols.goo .
cp -p $base/SRC/goo/eval.goo .
cp -p $base/SRC/goo/mag.goo .
cp -p $base/SRC/goo/math.goo .
cp -p $base/SRC/goo/system.goo .
cp -p $base/SRC/goo/types.goo .
cp -p $base/SRC/goo/user.goo .
mkdir io; cd io
cp -p $base/SRC/goo/io/port.goo .
cp -p $base/SRC/goo/io/read.goo .
cp -p $base/SRC/goo/io/write.goo .
cd ..
mkdir cols; cd cols
cp -p $base/SRC/goo/cols/assoc.goo .
cp -p $base/SRC/goo/cols/buf.goo .
cp -p $base/SRC/goo/cols/col.goo .
cp -p $base/SRC/goo/cols/cycle.goo .
cp -p $base/SRC/goo/cols/flat.goo .
cp -p $base/SRC/goo/cols/lst.goo .
cp -p $base/SRC/goo/cols/map.goo .
cp -p $base/SRC/goo/cols/opts.goo .
cp -p $base/SRC/goo/cols/range.goo .
cp -p $base/SRC/goo/cols/seq.goo .
cp -p $base/SRC/goo/cols/step.goo .
cp -p $base/SRC/goo/cols/str.goo .
cp -p $base/SRC/goo/cols/tab.goo .
cp -p $base/SRC/goo/cols/vec.goo .
cp -p $base/SRC/goo/cols/zip.goo .
cd ..
cd ..
mkdir tests; cd tests
cp -p $base/SRC/tests/dependency.goo .
cp -p $base/SRC/tests/driver.goo .
cp -p $base/SRC/tests/language.goo .
cd ..
cd ..
mkdir DOC
cd DOC
cp -p $base/DOC/goo.pdf .
cd ..
mkdir EMACS
cd EMACS
cp -p $base/EMACS/goo.el .
cp -p $base/EMACS/goo-shell.el .
cp -p $base/EMACS/goo-font-lock.el .
cd ..
cd ..

tar cf goo-$1.tar goo-$1
gzip goo-$1.tar
