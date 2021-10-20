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

char *_strdup(char *s1, char *s2)
{
	int x = 0;
	int s1size = 0;
	int s2size = 0;
	int size = 0;
	char *newString;

	s1size = _strlen(s1);
	s2size = _strlen(s2);
	size = s1size + s2size;

	newString = malloc(size * sizeof(char) + 1);

	if (newString == NULL)
		return (NULL);

	while (x < s1size)
	{
		*(newString + x) = *(s1 + x);
		x++;
	}
	while (x < size)
	{
		*(newString + x) = *(s2 + x);
		x++;
	}
	*(newString + x) = '\0';
	return (newString);
}
