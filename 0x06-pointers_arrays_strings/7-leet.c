#include "holberton.h"
#include <stdio.h>
/**
 * leet - makes a string 13371F13D
 *
 * @str: the string pointer we are passed
 * Return: the uppercase string
 */

char *leet(char *str)
{
	int x = 0;
	int cc;
	char thischar;

	char la[] = "aeotl";
	char ua[] = "AEOTL";
	char lt[] = "43071";

	while (*(str + x) != '\0')
	{
		thischar = *(str + x);
		for (cc = 0; cc < 5; cc++)
		{
			if (la[cc] == thischar || ua[cc] == thischar)
				*(str + x) = lt[cc];
		}

		x++;
	}

	return (str);
}
