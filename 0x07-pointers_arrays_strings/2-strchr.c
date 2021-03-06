#include "main.h"

/**
 * _strchr - returns a pointer to the first occurrence of character c in the
 * string s, or NULL if character is not found
 *
 * @s: the destination of the bytes from src
 * @c: the bytes we are copying from
 *
 * Return: a pointer to dest
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return ((char *)s);
		}
	} while (*s++);
	return (0);
}
