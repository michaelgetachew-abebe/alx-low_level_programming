#!/bin/bash
gcc -Wall -Werror -Wextra -std=gnu89 -c *.c
ar -rcs liball.a *.o
ranlib liball.a
