#/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fpic -c  *.c
ar -rcs liball.a *.o
