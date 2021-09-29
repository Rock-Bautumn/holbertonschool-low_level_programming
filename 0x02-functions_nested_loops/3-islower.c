#include "main.h"

/**
 * _islower - checks if the value passed is lowercase or not
 * @c: this is the character we are checking
 * Return: 1 if lowercase, 0 if not
 */

int _islower(int c)
{
	/* a = 97 and z = 122 */
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);

}
