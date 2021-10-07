#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies an array from src to dest
 *
 * @src: the source array
 * @dest: the destination array
 * Return: the destination char array
 */

char *_strcpy(char *dest, char *src)
{

	int goback = 0;

	while (*src != '\0')
	{
		*(dest++) = *(src++);
		goback++;
	}
	while (goback > 0)
	{
		goback--;
		dest--;
	}
	return (dest);
}
