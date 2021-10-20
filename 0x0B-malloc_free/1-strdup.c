#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: the string we are counting the characters of
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: the string to copy
 * Return: the address of the copied string, NULL if failed
 */

char *_strdup(char *str)
{
	int x = 0;
	int size;
	char *newString;

	if (str == NULL)
		return (NULL);

	size  = _strlen(str);
	newString = malloc(size * sizeof(char) + 1);

	if (newString == NULL)
		return (NULL);
	if (size == 0)
	{
		return (NULL);
	}

	while (x < size)
	{
		*(newString + x) = *(str + x);
		x++;
	}
	/* *(newString + x) = '\0'; */
	return (newString);
}
