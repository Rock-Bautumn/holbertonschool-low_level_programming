#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "joy to the world, the song is done";
    char *f = "rld";
    char *t;

    t = _strstr(s, f);
    _strstr("First, solve the problem. Then, write the code.", "");
    printf("%s\n", t);
    return (0);
}
