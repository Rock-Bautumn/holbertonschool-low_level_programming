#include "main.h"
#include <stdio.h>

/**
 * _strstr - returns the number of bytes found at the beginning of s that
 * match only characters from accept
 *
 * @haystack: the string to analyze
 * @needle: the bytes we accept as valid
 *
 * Return: number of bytes in the initial segment that consist of only bytes
 * from accept
 */
char *_strstr(char *s, char *accept)
{
	int x;

	while (_strlen(s) > _strlen(accept))
	{
		for (x = 0; x < _strlen(accept) - 1; x++)
			if (s[x] == accept[x])
				printf("made it here");

		s++;
	}
	return (0);
}

/**
 * checksubstr - checks if the string we are given

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
