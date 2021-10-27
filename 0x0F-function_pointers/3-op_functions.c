#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds variable a and variable b
 * @a: the first number
 * @b: the second number
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtracts variable b from variable a
 * @a: the first number
 * @b: the second number
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies variable a with variable b
 * @a: the first number
 * @b: the second number
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides variable a by variable b
 * @a: the dividend
 * @b: the divisor
 * Return: the quotient of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - find the remainder from variable a divided by variable b
 * @a: the first number
 * @b: the second number
 * Return: the remainder of a / b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
