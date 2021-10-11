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

	int x;
	char *match = s;

	x = 0;
	while (*(s + x) != '\0')
	{
		if (*(s + x) == c)
		{
			return (match);
		}
		x++;
		match++;
	}
	return (match);
}
