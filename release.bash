#!/usr/local/bin/bash

version=$1
os=$2
type=$3
goo=goo-$version-$os-$type

base=`pwd`
mkdir releases/$goo
cd releases/$goo

cvs co goo

mv goo/c .
mv goo/TERMS .
mv goo/Makefile.in .
mv goo/README.TXT .
mv goo/acconfig.h .
mv goo/aclocal.m4 .
mv goo/configure.in .
mv goo/doc .
mv goo/emacs .
mv goo/install-sh .
mv goo/mkinstalldirs .
mv goo/src .
cp ../../configure .

rm -rf goo
rm -rf src/demos
rm -rf src/extras
rm -rf src/gui
rm -rf src/interpreters
rm -rf src/music
rm -rf src/nest
rm -rf src/util

cd ..
tar cf $goo.tar $goo
gzip $goo.tar
