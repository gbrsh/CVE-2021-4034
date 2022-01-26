#!/bin/bash


mkdir GCONV_PATH=.
mkdir conf

gcc -o pwnlib.so lib.c -shared -fPIC
gcc -o expl expl.c

cp expl GCONV_PATH\=./conf
cp pwnlib.so conf/
cp gconv-modules conf/

./expl
