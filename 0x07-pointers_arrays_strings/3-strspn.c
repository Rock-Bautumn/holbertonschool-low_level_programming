#include "main.h"

/**
 * _strspn - returns the number of bytes found at the beginning of s that match
 * only characters from accept
 *
 * @s: the string to analyze
 * @accept: the bytes we accept as valid
 *
 * Return: number of bytes in the initial segment that consist of only bytes
 * from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned count = 0;
	int stringpos;
	int seekaccept;
	int gotmatch;

	stringpos = 0;
	while (*(s + stringpos) != '\0')
	{
		gotmatch = 0;
	        seekaccept = 0;
		while (*(accept + seekaccept) != '\0')
		{
			if (*(accept + seekaccept) == *(s + stringpos))
			{
				count++;
				gotmatch = 1;
			}
			seekaccept++;
		}
		if (gotmatch == 0)
			return (count);
		stringpos++;
	}
	return (count);
}
