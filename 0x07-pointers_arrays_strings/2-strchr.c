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

        while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
        }
	return (0);
}
