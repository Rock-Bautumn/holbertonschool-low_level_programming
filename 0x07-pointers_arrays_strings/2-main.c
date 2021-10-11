#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    /*
      s = "boingboing";

    f = _strchr(s, 'l');
    */
    if (f != NULL)
    {
        printf("not null, got: %s\n", f);
    }
    else
	    printf("it was null!\n");
    return (0);
}
