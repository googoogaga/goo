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
mkdir runtime; cd runtime
cp -p $base/C/g2c/runtime/boot.c .
cp -p $base/C/g2c/runtime/runtime.c .
cp -p $base/C/g2c/runtime/apply.c .
cd ..
mkdir compiler; cd compiler
cp -p $base/C/g2c/compiler/syntax.c .
cp -p $base/C/g2c/compiler/ast.c .
cp -p $base/C/g2c/compiler/ast-eval.c .
cp -p $base/C/g2c/compiler/ast-linearize.c .
cp -p $base/C/g2c/compiler/dependency.c .
cp -p $base/C/g2c/compiler/g2c.c .
cp -p $base/C/g2c/compiler/top.c .
cp -p $base/C/g2c/compiler/main.c .
cd ..
mkdir goo; cd goo
cp -p $base/C/g2c/goo/macros.c .
cp -p $base/C/g2c/goo/accumulator.c .
cp -p $base/C/g2c/goo/collections.c .
cp -p $base/C/g2c/goo/eval.c .
cp -p $base/C/g2c/goo/magnitude.c .
cp -p $base/C/g2c/goo/math.c .
cp -p $base/C/g2c/goo/system.c .
cp -p $base/C/g2c/goo/types.c .
cp -p $base/C/g2c/goo/user.c .
mkdir io; cd io
cp -p $base/C/g2c/goo/io/port.c .
cp -p $base/C/g2c/goo/io/read.c .
cp -p $base/C/g2c/goo/io/write.c .
cd ..
mkdir collections; cd collections
cp -p $base/C/g2c/goo/collections/assoc.c .
cp -p $base/C/g2c/goo/collections/buffer.c .
cp -p $base/C/g2c/goo/collections/collection.c .
cp -p $base/C/g2c/goo/collections/cycle.c .
cp -p $base/C/g2c/goo/collections/flat.c .
cp -p $base/C/g2c/goo/collections/list.c .
cp -p $base/C/g2c/goo/collections/map.c .
cp -p $base/C/g2c/goo/collections/optionals.c .
cp -p $base/C/g2c/goo/collections/range.c .
cp -p $base/C/g2c/goo/collections/sequence.c .
cp -p $base/C/g2c/goo/collections/step.c .
cp -p $base/C/g2c/goo/collections/string.c .
cp -p $base/C/g2c/goo/collections/strings.c .
cp -p $base/C/g2c/goo/collections/table.c .
cp -p $base/C/g2c/goo/collections/vector.c .
cp -p $base/C/g2c/goo/collections/zip.c .
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
cp -p $base/SRC/runtime/boot.goo .
cp -p $base/SRC/runtime/runtime.goo .
cp -p $base/SRC/runtime/apply.goo .
cd ..
mkdir compiler; cd compiler
cp -p $base/SRC/compiler/syntax.goo .
cp -p $base/SRC/compiler/ast.goo .
cp -p $base/SRC/compiler/ast-eval.goo .
cp -p $base/SRC/compiler/ast-linearize.goo .
cp -p $base/SRC/compiler/g2c.goo .
cp -p $base/SRC/compiler/dependency.goo .
cp -p $base/SRC/compiler/top.goo .
cp -p $base/SRC/compiler/main.goo .
cd ..
mkdir goo; cd goo
cp -p $base/SRC/goo/macros.goo .
cp -p $base/SRC/goo/accumulator.goo .
cp -p $base/SRC/goo/collections.goo .
cp -p $base/SRC/goo/eval.goo .
cp -p $base/SRC/goo/magnitude.goo .
cp -p $base/SRC/goo/math.goo .
cp -p $base/SRC/goo/system.goo .
cp -p $base/SRC/goo/types.goo .
cp -p $base/SRC/goo/user.goo .
mkdir io; cd io
cp -p $base/SRC/goo/io/port.goo .
cp -p $base/SRC/goo/io/read.goo .
cp -p $base/SRC/goo/io/write.goo .
cd ..
mkdir collections; cd collections
cp -p $base/SRC/goo/collections/assoc.goo .
cp -p $base/SRC/goo/collections/buffer.goo .
cp -p $base/SRC/goo/collections/collection.goo .
cp -p $base/SRC/goo/collections/cycle.goo .
cp -p $base/SRC/goo/collections/flat.goo .
cp -p $base/SRC/goo/collections/list.goo .
cp -p $base/SRC/goo/collections/map.goo .
cp -p $base/SRC/goo/collections/optionals.goo .
cp -p $base/SRC/goo/collections/range.goo .
cp -p $base/SRC/goo/collections/sequence.goo .
cp -p $base/SRC/goo/collections/step.goo .
cp -p $base/SRC/goo/collections/string.goo .
cp -p $base/SRC/goo/collections/strings.goo .
cp -p $base/SRC/goo/collections/table.goo .
cp -p $base/SRC/goo/collections/vector.goo .
cp -p $base/SRC/goo/collections/zip.goo .
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
