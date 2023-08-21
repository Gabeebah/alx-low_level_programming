#!/bin/bash
gcc -Wall -Wextra -Warror -pendantic -c -fPIC *,c
gcc -shared -o liball.so *,o
export LD_LIBRARY_PATH=.:$LD_LINRARY_PATH
