#include "main.h"

/**
 * _isalpha - checks if the value passed is a letter or not
 * @c: this is the character we are checking
 * Return: 1 if it is a letter, 0 if not
 */

int _isalpha(int c)
{
	/* A = 65 and Z = 90 */
	/* a = 97 and z = 122 */
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);

}
