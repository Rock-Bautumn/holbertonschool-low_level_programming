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
char *_strstr(char *haystack, char *needle)
{
	int x;
	int cw;

	if (*needle == '\0')
		{
			return (haystack);
		}

	for (x = 0; haystack[x]; x++)
	{
		if (haystack[x] == needle[0])
		{
			for (cw = 0; needle[cw]; cw++)
			{
				if (haystack[x + cw] == '\0')
				{
					break;
				}
				if (needle[cw] == haystack[x + cw])
				{
					continue;
				}
				break;
			}
			if (needle[cw] == '\0')
			{
				haystack = haystack + x;
				return (haystack);
			}
		}
	}
	return (0);
}
