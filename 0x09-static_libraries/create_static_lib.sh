#/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic-c  *.c
ar -rcs liball.a *.o
