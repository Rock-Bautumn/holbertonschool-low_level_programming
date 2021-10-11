#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int argc, int *argv[])
{

	int *intcast;
	intcast = &argv[1];
	print_number(*intcast);
	if (argc==1)
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name\n");
    if (argc >= 2)
    {
	    printf("%d", argv[1]);
        print_number(*intcast);
    }
    _putchar('\n');
    return (0);
}
