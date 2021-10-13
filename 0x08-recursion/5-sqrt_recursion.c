#include "main.h"

/**
 * _sqrt_recursion - returns the natural squared root of an integer
 *
 * @n: the number we are finding the natural square root of
 * Return: the natural square root of n
 */

int _sqrt_recursion(int n)
{
	/* don't return a complex number */
	if (n < 0)
		return (-1);
	/* now we can do the real code part, b/c we need 2 params to compare */

	return (the_actual_sqrt_function(n, 1));
}

/**
 * the_actual_sqrt_function - returns the natural square root of a number
 *
 * @n: the number we are finding the natural square root of
 * @i: the number of functions in the stack
 * Return: the natural square root of n
 */

int the_actual_sqrt_function(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (the_actual_sqrt_function(n, 1 + i));
}
