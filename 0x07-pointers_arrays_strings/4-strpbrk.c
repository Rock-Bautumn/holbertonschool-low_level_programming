#include "main.h"

/**
 * _strpbrk - returns the number of bytes found at the beginning of s that
 * match only characters from accept
 *
 * @s: the string to analyze
 * @accept: the bytes we accept as valid
 *
 * Return: number of bytes in the initial segment that consist of only bytes
 * from accept
 */
char *_strpbrk(char *s, char *accept)
{
	int seekaccept;

        while (*s != '\0')
	{
		seekaccept = 0;
		while (*(accept + seekaccept) != '\0')
		{
			if (*(accept + seekaccept) == *s)
			{
				return (s);
			}
			seekaccept++;
		}
		s++;
	}
	return (0);
}
