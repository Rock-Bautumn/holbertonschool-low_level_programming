#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - makes a string all uppercase
 *
 * @str: the string pointer we are passed
 * Return: the uppercase string
 */

char *string_toupper(char * str)
{
/* a 97 , z = 122 */
/* A 65 , Z = 90 */
	/* a - A = 32 */
	int x = 0;
	while (*(str + x) != '\0')
	{
		if (*(str + x) >= 97 && *(str + x) <= 122)
			*(str + x) = (*(str + x) - 32);
		x++;
	}
	return (str);
}
