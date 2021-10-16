#/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic *.c
ar -rcs liball.a *.o
