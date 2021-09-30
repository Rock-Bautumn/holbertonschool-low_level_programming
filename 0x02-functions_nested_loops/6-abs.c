#include "main.h"

/**
 * _abs - returns absolute value
 * @n: this is the number we are checking
 * Return: the magniture or absolute value of the number
 */

int _abs(int n)
{
	if (n > 0)
	{
		n = n;
	}
	else if (n < 0)
	{
		n = n * -1;
	}
	else
	{
		n = 0;
	}
	return (n);
}
