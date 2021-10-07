#include "main.h"

/**
 * _strcpy - copies an array from src to dest
 *
 * @src: the source array
 * @dest: the destination array
 * Return: the destination char array
 */

char *_strcpy(char *dest, char *src)
{

	while (*src)
	{
		*(dest++) = *(src++);
	}
	*dest = '\0';

	return (dest);
}
