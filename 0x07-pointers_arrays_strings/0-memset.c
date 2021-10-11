#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 *
 * @s: the destination memory start address
 * @b: the character we are filling the memory with
 * @n: number of bytes/characters we are filling to the memory
 *
 * Return: a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		*(s + x) = b;
		x++;
	}
	return (s);
}
