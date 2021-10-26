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
 * string_nconcat - concatenates two strings up to n bytes. Returns a pointer
 * that is newly allocated in memory which is s1, followed by the first n
 * bytes of s2, and null terminated.
 *
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes to copy
 * Return: the address of the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len;
	unsigned int s2len;
	unsigned int dynsize = 0;
	unsigned int x = 0;
	char *newString;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	s1len = _strlen(s1);
	s2len = _strlen(s2);

	if (n >= s2len)
		dynsize = s1len + s2len;
	else
		dynsize = s1len + n;

	newString = malloc(sizeof(char) * dynsize + 1);

	if (newString == NULL)
		return (NULL);
	while (x < s1len)
	{
		*(newString + x) = *(s1 + x);
		x++;
	}
	x = 0;
	s2len = dynsize - s1len;
	while (x < s2len)
	{
		*(newString + s1len + x) = *(s2 + x);
		x++;
	}
	*(newString + dynsize + 1) = '\0';
	return (newString);
}
