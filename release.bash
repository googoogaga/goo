#!/usr/local/bin/bash

version=$1

mkdir proto-$1
cd proto-$1
cp -p ../README.TXT .
mkdir BIN
cd BIN
cp -p ../../C/proto.exe .
cp -p ../../C/proto .
cp -p ../../C/cygwin1.dll .
cd ..
mkdir C
cd C
cp -p ../../C/gc.lib.win32 .
cp -p ../../C/gc.a.linux .
cp -p ../../C/gc.a.win32 .
cp -p ../../C/gc.h .
cp -p ../../C/prt.c .
cp -p ../../C/prt.h .
cp -p ../../C/proto.c .
cp -p ../../C/Makefile .
cd ..
mkdir EMULATOR
cd EMULATOR
cp -p ../../EMULATOR/proto.hdp .
cp -p ../../EMULATOR/library.dylan .
cp -p ../../EMULATOR/environment.dylan .
cp -p ../../EMULATOR/syntax.dylan .
cp -p ../../EMULATOR/runtime.dylan .
cp -p ../../EMULATOR/objects.dylan .
cp -p ../../EMULATOR/boot.dylan .
cp -p ../../EMULATOR/functions.dylan .
cp -p ../../EMULATOR/gen-cache.dylan .
cp -p ../../EMULATOR/ascii.dylan .
cp -p ../../EMULATOR/read.dylan .
cp -p ../../EMULATOR/write.dylan .
cp -p ../../EMULATOR/top.dylan .
cp -p ../../EMULATOR/tests.dylan .
cp -p ../../EMULATOR/ast.dylan .
cp -p ../../EMULATOR/ast-print.dylan .
cp -p ../../EMULATOR/ast-eval.dylan .
cp -p ../../EMULATOR/ast-linearize.dylan .
cp -p ../../EMULATOR/p2c.dylan .
cp -p ../../EMULATOR/do-boot.dylan .
cd ..
mkdir SRC
cd SRC
cp -p ../../SRC/macros.proto .
cp -p ../../SRC/runtime.proto .
cp -p ../../SRC/runtime-native.proto .
cp -p ../../SRC/read.proto .
cp -p ../../SRC/write.proto .
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

cd proto-$1
tar cf ../proto-$1.tar .
cd ..
gzip proto-$1.tar
