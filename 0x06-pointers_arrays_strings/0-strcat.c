#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - concatenate two strings together, adding the source to the dest
 * @dest: the destination string
 * @src: the string part we are adding to dest
 * Return: the new dest string
 */
char *_strcat(char *dest, char *src)
{

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
	}
	*dest = 0;
	return (dest);
}
