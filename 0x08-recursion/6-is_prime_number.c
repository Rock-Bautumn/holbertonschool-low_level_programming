#include "main.h"

/**
 * is_prime_number - is the number a prime number? 1 if yes, 0 if no
 *
 * @n: the number in question
 * Return: 1 if prime number, 0 if not prime number
 */

int is_prime_number(int n)
{

	if (n <= 2 || n % 2 == 0)
	{
		if (n == 2)
			return (1);
		else
			return (0);
	}

	/* now we can do the real code part, b/c we need 2 params to compare */

	return (the_actual_prime_function(n, 3));
}

/**
 * the_actual_prime_function - returns if the number is prime or not
 *
 * @n: the number in question
 * @i: the number of functions in the stack
 * Return: the natural square root of n
 */

int the_actual_prime_function(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);

	return (the_actual_prime_function(n, i + 2));
}
