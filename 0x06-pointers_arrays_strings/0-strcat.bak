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

	char *deststart = dest;
	char *mydest = deststart;

	while (*mydest)
	{
		mydest++;
	}
	while (*src)
	{
		*mydest = *src;
		src++;
	}
	*mydest = 0;
	return (mydest);
}
