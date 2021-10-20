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
 * str_concat - Returns a pointer to the concatenated string of s1+s2
 * @s1: the first part of the string to copy
 * @s2: the second part of the string to concatenate
 * Return: the address of the concatenated string, NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	int x = 0;
	int s1size = 0;
	int s2size = 0;
	int size = 0;
	char *newString;

	if (s1)
		s1size  = _strlen(s1);
	if (s2)
		s2size  = _strlen(s2);
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
		*(newString + x) = *(s2 + x - s1size);
		x++;
	}
	*(newString + x) = '\0';
	return (newString);
}
