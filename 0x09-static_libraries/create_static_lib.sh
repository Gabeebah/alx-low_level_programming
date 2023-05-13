#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -o *.o
ar -rc liball.a *.o
ranlib liball.a
