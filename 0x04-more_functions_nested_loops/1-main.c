#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'z';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'Z';
    printf("%c: %d\n", c, _isdigit(c));
    c = '9';
    printf("%c: %d\n", c, _isdigit(c));
    c = '-8';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
