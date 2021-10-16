#!/usr/bin/env bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ar -rc liball.a *.o
