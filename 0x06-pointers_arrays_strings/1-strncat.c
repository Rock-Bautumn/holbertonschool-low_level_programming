#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - concatenate two strings together, adding up to n chars from
 * the source to the dest
 * @dest: the destination string
 * @src: the string part we are adding to dest
 * @n: the number of chars we want to copy from src
 * Return: the new dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int goback = 0;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
		goback++;
	}
	while ((*src != '\0') && (i < n))
	{
		i++;
		*(dest++) = *(src++);
		goback++;
	}
	dest = dest - goback;
	return (dest);
}
