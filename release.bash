#!/usr/local/bin/bash

version=$1

mkdir proto-$1
cd proto-$1
cp -p ../README.TXT .
mkdir BIN
cd BIN
cp -p ../../C/p2c/p2c .
# cp -p ../../C/cygwin1.dll .
cd ..
mkdir C
cd C
cp -p ../../C/gc.lib.win32 .
cp -p ../../C/gc.a.linux .
cp -p ../../C/gc.a.win32 .
cp -p ../../C/gc.h .
cp -p ../../C/prt.c .
cp -p ../../C/prt.h .
cp -p ../../C/Makefile .
mkdir p2c
cd p2c
cp -p ../../../C/p2c/macros.c .
cp -p ../../../C/p2c/boot.c .
cp -p ../../../C/p2c/runtime.c .
cp -p ../../../C/p2c/read.c .
cp -p ../../../C/p2c/write.c .
cp -p ../../../C/p2c/syntax.c .
cp -p ../../../C/p2c/ast.c .
cp -p ../../../C/p2c/strings.c .
cp -p ../../../C/p2c/ast-eval.c .
cp -p ../../../C/p2c/ast-linearize.c .
cp -p ../../../C/p2c/p2c.c .
cp -p ../../../C/p2c/top.c .
cp -p ../../../C/p2c/main.c .
cp -p ../../../C/p2c/p2c-init.c .
cp -p ../../../C/p2c/Makefile .
cd ..
cd ..
mkdir SRC
cd SRC
cp -p ../../SRC/macros.proto .
cp -p ../../SRC/boot.proto .
cp -p ../../SRC/runtime.proto .
cp -p ../../SRC/read.proto .
cp -p ../../SRC/write.proto .
cp -p ../../SRC/strings.proto .
cp -p ../../SRC/syntax.proto .
cp -p ../../SRC/ast.proto .
cp -p ../../SRC/ast-eval.proto .
cp -p ../../SRC/ast-linearize.proto .
cp -p ../../SRC/p2c.proto .
cp -p ../../SRC/top.proto .
cp -p ../../SRC/main.proto .
cp -p ../../SRC/user-patches.proto .
cp -p ../../SRC/system-patches.proto .
cd ..
mkdir DOC
cd DOC
cp -p ../../DOC/DOC.TXT .
cd ..
mkdir EMACS
cd EMACS
cp -p ../../EMACS/proto.el .
cp -p ../../EMACS/proto-shell.el .
cd ../..

tar cf proto-$1.tar proto-$1
gzip proto-$1.tar
