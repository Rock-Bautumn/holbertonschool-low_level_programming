#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - makes a string all uppercase
 *
 * @str: the string pointer we are passed
 * Return: the uppercase string
 */

char *cap_string(char *str)
{
/* a 97 , z = 122 */
/* A 65 , Z = 90 */
	/* a - A = 32 */
	int x = 0;

	/* we want to start with a capitalization if possible */
	int capthis = 1;
	int thischar;

	while (*(str + x) != '\0')
	{
		if (capthis == 1)
		{
			/* check if lowercase */
			if (*(str + x) >= 97 && *(str + x) <= 122)
				*(str + x) = (*(str + x) - 32);
		}
		thischar = *(str + x);
		capthis = 0;
		if ((thischar == 32) || (thischar == 44) || (thischar == 58))
			capthis = 1;
		if ((thischar == 46) || (thischar == 33) || (thischar == 63))
			capthis = 1;
		if ((thischar == 34) || (thischar == 40) || (thischar == 41))
			capthis = 1;
		if ((thischar == 123) || (thischar == 125) || (thischar == 10))
			capthis = 1;
		if (thischar == 9)
			capthis = 1;

		x++;
	}
	return (str);
}
