#!/usr/local/bin/bash

version=$1
os=$2
goo=goo-$version-$os

base=`pwd`
mkdir $goo
cd $goo
cp -p $base/README.TXT .
cp -p $base/TERMS .
cp -p $base/Makefile .
cp -p $base/Make.inc.$os Make.inc
mkdir bin
cd bin
# cp -p $base/c/g2c/g2c .
if [ $os = "win32" ]; then
  cp -p $base/c/cygwin1.dll .
fi
cd ..
mkdir c
cd c
# cp -p $base/c/gc.lib.win32 .
cp -p $base/c/gc.a.$os gc.a
cp -p $base/c/gc.h .
if [ $os = "linux" ]; then
  cp -p $base/c/unexelf.c .
fi
cp -p $base/c/grt.c .
cp -p $base/c/grt.h .
cp -p $base/c/dlgrt.h .
cp -p $base/c/Makefile .
cp -p $base/c/Make.inc.$os Make.inc
mkdir g2c; cd g2c
cp -p $base/c/g2c/goo.c .
cp -p $base/c/g2c/g2c-init.c .
cp -p $base/c/g2c/Makefile .
mkdir eval; cd eval
cp -p $base/c/g2c/eval/syntax.c .
cp -p $base/c/g2c/eval/ast.c .
cp -p $base/c/g2c/eval/ast-eval.c .
cp -p $base/c/g2c/eval/ast-linearize.c .
cp -p $base/c/g2c/eval/dependency.c .
cp -p $base/c/g2c/eval/g2c.c .
cp -p $base/c/g2c/eval/top.c .
cp -p $base/c/g2c/eval/main.c .
cd ..
mkdir goo; cd goo
cp -p $base/c/g2c/goo/boot.c .
cp -p $base/c/g2c/goo/runtime.c .
cp -p $base/c/g2c/goo/app.c .
cp -p $base/c/g2c/goo/macros.c .
cp -p $base/c/g2c/goo/packer.c .
cp -p $base/c/g2c/goo/cols.c .
cp -p $base/c/g2c/goo/eval.c .
cp -p $base/c/g2c/goo/mag.c .
cp -p $base/c/g2c/goo/math.c .
cp -p $base/c/g2c/goo/system.c .
cp -p $base/c/g2c/goo/types.c .
cp -p $base/c/g2c/goo/user.c .
mkdir io; cd io
cp -p $base/c/g2c/goo/io/port.c .
cp -p $base/c/g2c/goo/io/read.c .
cp -p $base/c/g2c/goo/io/write.c .
cd ..
mkdir cols; cd cols
cp -p $base/c/g2c/goo/cols/col.c .
cp -p $base/c/g2c/goo/cols/colx.c .
cp -p $base/c/g2c/goo/cols/cycle.c .
cp -p $base/c/g2c/goo/cols/flat.c .
cp -p $base/c/g2c/goo/cols/lst.c .
cp -p $base/c/g2c/goo/cols/map.c .
cp -p $base/c/g2c/goo/cols/opts.c .
cp -p $base/c/g2c/goo/cols/range.c .
cp -p $base/c/g2c/goo/cols/rep.c .
cp -p $base/c/g2c/goo/cols/seq.c .
cp -p $base/c/g2c/goo/cols/seqx.c .
cp -p $base/c/g2c/goo/cols/step.c .
cp -p $base/c/g2c/goo/cols/str.c .
cp -p $base/c/g2c/goo/cols/tab.c .
cp -p $base/c/g2c/goo/cols/tup.c .
cp -p $base/c/g2c/goo/cols/vec.c .
cp -p $base/c/g2c/goo/cols/zip.c .
cd ..
cd ..
cd ..
cd ..
mkdir src; cd src
cp -p $base/src/Makefile .
cp -p $base/src/goo.goo .
cp -p $base/src/tests.goo .
# cp -p $base/src/user-patches.goo .
# cp -p $base/src/system-patches.goo .
mkdir runtime; cd runtime
cd ..
mkdir eval; cd eval
cp -p $base/src/eval/syntax.goo .
cp -p $base/src/eval/ast.goo .
cp -p $base/src/eval/ast-eval.goo .
cp -p $base/src/eval/ast-linearize.goo .
cp -p $base/src/eval/g2c.goo .
cp -p $base/src/eval/dependency.goo .
cp -p $base/src/eval/top.goo .
cp -p $base/src/eval/main.goo .
cd ..
mkdir goo; cd goo
cp -p $base/src/goo/boot.goo .
cp -p $base/src/goo/runtime.goo .
cp -p $base/src/goo/app.goo .
cp -p $base/src/goo/macros.goo .
cp -p $base/src/goo/packer.goo .
cp -p $base/src/goo/cols.goo .
cp -p $base/src/goo/eval.goo .
cp -p $base/src/goo/mag.goo .
cp -p $base/src/goo/math.goo .
cp -p $base/src/goo/system.goo .
cp -p $base/src/goo/types.goo .
cp -p $base/src/goo/user.goo .
mkdir io; cd io
cp -p $base/src/goo/io/port.goo .
cp -p $base/src/goo/io/read.goo .
cp -p $base/src/goo/io/write.goo .
cd ..
mkdir cols; cd cols
cp -p $base/src/goo/cols/col.goo .
cp -p $base/src/goo/cols/colx.goo .
cp -p $base/src/goo/cols/cycle.goo .
cp -p $base/src/goo/cols/flat.goo .
cp -p $base/src/goo/cols/lst.goo .
cp -p $base/src/goo/cols/map.goo .
cp -p $base/src/goo/cols/opts.goo .
cp -p $base/src/goo/cols/range.goo .
cp -p $base/src/goo/cols/rep.goo .
cp -p $base/src/goo/cols/seq.goo .
cp -p $base/src/goo/cols/seqx.goo .
cp -p $base/src/goo/cols/step.goo .
cp -p $base/src/goo/cols/str.goo .
cp -p $base/src/goo/cols/tab.goo .
cp -p $base/src/goo/cols/tup.goo .
cp -p $base/src/goo/cols/vec.goo .
cp -p $base/src/goo/cols/zip.goo .
cd ..
cd ..
mkdir tests; cd tests
cp -p $base/src/tests/dependency.goo .
cp -p $base/src/tests/driver.goo .
cp -p $base/src/tests/language.goo .
cd ..
cd ..
mkdir doc
cd doc
cp -p $base/doc/goo.pdf .
cd ..
mkdir emacs
cd emacs
cp -p $base/emacs/goo.el .
cp -p $base/emacs/goo-shell.el .
cp -p $base/emacs/goo-font-lock.el .
cd ..
cd ..

tar cf $goo.tar $goo
gzip $goo.tar
