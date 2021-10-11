#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: the destination of the bytes from src
 * @src: the bytes we are copying from
 * @n: number of bytes/characters we are filling to the memory
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}
    return (dest);
}
