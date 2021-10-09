#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - encodes a string in rot13
 *
 * @str: the string pointer we are passed
 * Return: the uppercase string
 */

char *rot13(char *str)
{
	int x = 0;
	int cc;
	char thischar;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(str + x) != '\0')
	{
		thischar = *(str + x);
		for (cc = 0; cc < 52; cc++)
		{
			if (input[cc] == thischar)
				*(str + x) = output[cc];
		}

		x++;
	}

	return (str);
}
