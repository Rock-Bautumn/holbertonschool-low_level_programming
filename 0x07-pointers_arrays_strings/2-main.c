#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "1234567leftover text here8910";
    char *f;

    char *a = "this is going to be nu11oneones, this wont print";
    char *b;


    f = _strchr(s, '7');


    b = _strchr(a, 'l');

    if (f != NULL)
    {
        printf("f not null, got: %s!\n", f);
    }
    else
	    printf("it was null!\n");
    if (b != NULL)
    {
        printf("b not null, got: %s!\n", f);
    }
    else
	    printf("it was null!\n");
    return (0);
}
