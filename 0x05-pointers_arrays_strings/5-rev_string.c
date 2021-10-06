#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 *
 * @str: the string we are printing the characters of
 * Return: void
 */

void rev_string(char *str)
{
	char *myStr = str;
	char hold;

	int rc = 0;
	int offset = 0;

	while (*myStr != '\0')
	{
		myStr++;
		rc++;
	}
	myStr--;
	while (offset < rc / 2)
	{
		hold = *(str + offset);
		*(str + offset) = *myStr;
		*myStr = hold;
		myStr--;
		offset++;
	}
}
